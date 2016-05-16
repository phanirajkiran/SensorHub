//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace allseen { namespace Introspectable {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IIntrospectableService. Instead, IntrospectableServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class IntrospectableServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IIntrospectableService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<IntrospectableServiceEventAdapter^, IntrospectableGetDescriptionLanguagesCalledEventArgs^>^ GetDescriptionLanguagesCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<IntrospectableServiceEventAdapter^, IntrospectableGetDescriptionLanguagesCalledEventArgs^>^ handler) 
        { 
            return _GetDescriptionLanguagesCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<IntrospectableServiceEventAdapter^>(sender), safe_cast<IntrospectableGetDescriptionLanguagesCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetDescriptionLanguagesCalled -= token; 
        } 
    internal: 
        void raise(IntrospectableServiceEventAdapter^ sender, IntrospectableGetDescriptionLanguagesCalledEventArgs^ args) 
        { 
            _GetDescriptionLanguagesCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<IntrospectableServiceEventAdapter^, IntrospectableIntrospectWithDescriptionCalledEventArgs^>^ IntrospectWithDescriptionCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<IntrospectableServiceEventAdapter^, IntrospectableIntrospectWithDescriptionCalledEventArgs^>^ handler) 
        { 
            return _IntrospectWithDescriptionCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<IntrospectableServiceEventAdapter^>(sender), safe_cast<IntrospectableIntrospectWithDescriptionCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _IntrospectWithDescriptionCalled -= token; 
        } 
    internal: 
        void raise(IntrospectableServiceEventAdapter^ sender, IntrospectableIntrospectWithDescriptionCalledEventArgs^ args) 
        { 
            _IntrospectWithDescriptionCalled(sender, args);
        } 
    }

    // Property Read Events
    // Property Write Events
    // IIntrospectableService Implementation
    virtual Windows::Foundation::IAsyncOperation<IntrospectableGetDescriptionLanguagesResult^>^ GetDescriptionLanguagesAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<IntrospectableIntrospectWithDescriptionResult^>^ IntrospectWithDescriptionAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberLanguageTag);



private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetDescriptionLanguagesCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _IntrospectWithDescriptionCalled;
};

} } } 