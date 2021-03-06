//
// Copyright (c) 2015, Microsoft Corporation
// 
// Permission to use, copy, modify, and/or distribute this software for any 
// purpose with or without fee is hereby granted, provided that the above 
// copyright notice and this permission notice appear in all copies.
// 
// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES 
// WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF 
// MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
// SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
// WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN 
// ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
// IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//

#include "pch.h"

#include <sstream>

#include "AllJoynProperty.h"
#include "PropertyInterface.h"
#include "AllJoynHelper.h"

using namespace BridgeRT;
using namespace std;
using namespace Windows::Foundation;

AllJoynProperty::AllJoynProperty() 
    : m_parent(nullptr),
    m_originalName(nullptr),
    m_dsbType(Platform::TypeCode::Empty),
    m_dsbSubType(PropertyType::Empty)
{
}

AllJoynProperty::~AllJoynProperty()
{
}

QStatus AllJoynProperty::Create(IAdapterValue ^adapterValue, PropertyInterface *parent)
{
    QStatus status = ER_OK;

    // sanity check
    if (nullptr == adapterValue)
    {
        status = ER_BAD_ARG_1;
        goto leave;
    }
    if (nullptr == parent)
    {
        status = ER_BAD_ARG_2;
        goto leave;
    }

    m_parent = parent;
    m_originalName = adapterValue->Name;
    
    m_dsbType = Platform::Type::GetTypeCode(adapterValue->Data->GetType());

    status = SetName(m_originalName);
    if (ER_OK != status)
    {
        goto leave;
    }

    m_signature.clear();

    {
        //check  if the dsbValue is of type IPropertyValue
        auto propertyValue = dynamic_cast<IPropertyValue^>(adapterValue->Data);
        if (nullptr == propertyValue)
        {
            status = ER_BAD_ARG_1;
            goto leave;
        }

        m_dsbSubType = propertyValue->Type;
        status = AllJoynHelper::GetSignature(propertyValue->Type, m_signature);
        if (ER_OK != status)
        {
            goto leave;
        }
    }

leave:
    if (ER_OK != status)
    {
        m_parent = nullptr;
        m_signature.clear();
        m_exposedName.clear();
        m_originalName = nullptr;
        m_dsbType = Platform::TypeCode::Empty;
        m_dsbSubType = PropertyType::Empty;
    }

    return status;
}

QStatus AllJoynProperty::SetName(Platform::String ^name)
{
    QStatus status = ER_OK;

    m_exposedName.clear();

    if (name->IsEmpty())
    {
        status = ER_INVALID_DATA;
        goto leave;
    }

    AllJoynHelper::BuildPropertyOrMethodOrSignalName(name, m_exposedName);
    if (!m_parent->IsAJPropertyNameUnique(m_exposedName))
    {
        // append unique id
        std::ostringstream tempString;
        m_exposedName += '_';
        tempString << m_parent->GetIndexForAJProperty();
        m_exposedName += tempString.str();
    }

leave:
    return status;
}

bool AllJoynProperty::IsSameType(IAdapterValue ^ adapterValue)
{
    bool retval = false;

    if (adapterValue->Data != nullptr &&
        m_originalName == adapterValue->Name &&
        m_dsbType == Platform::Type::GetTypeCode(adapterValue->Data->GetType()))
    {
        retval = true;
        
        auto propertyValue = dynamic_cast<IPropertyValue^>(adapterValue->Data);
        if (propertyValue != nullptr && propertyValue->Type != m_dsbSubType)
        {
            retval = false;
        }
    }

    return retval;
}
