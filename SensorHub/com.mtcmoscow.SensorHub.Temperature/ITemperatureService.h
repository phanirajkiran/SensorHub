//-----------------------------------------------------------------------------
// <auto-generated>
//   This code was generated by a tool.
//
//   Changes to this file may cause incorrect behavior and will be lost if
//   the code is regenerated.
//
//   For more information, see: http://go.microsoft.com/fwlink/?LinkID=623246
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace mtcmoscow { namespace SensorHub { namespace Temperature {

public interface class ITemperatureService
{
public:
    // Implement this function to handle requests for the value of the Celsius property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<TemperatureGetCelsiusResult^>^ GetCelsiusAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the Celsius property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<TemperatureSetCelsiusResult^>^ SetCelsiusAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, double value);

    // Implement this function to handle requests for the value of the Fahrenheits property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<TemperatureGetFahrenheitsResult^>^ GetFahrenheitsAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the Fahrenheits property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<TemperatureSetFahrenheitsResult^>^ SetFahrenheitsAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, double value);

};

} } } } 
