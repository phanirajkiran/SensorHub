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

namespace org { namespace alljoyn { namespace Icon {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IIconService. Instead, IconServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class IconServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IIconService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<IconServiceEventAdapter^, IconGetUrlCalledEventArgs^>^ GetUrlCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<IconServiceEventAdapter^, IconGetUrlCalledEventArgs^>^ handler) 
        { 
            return _GetUrlCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<IconServiceEventAdapter^>(sender), safe_cast<IconGetUrlCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetUrlCalled -= token; 
        } 
    internal: 
        void raise(IconServiceEventAdapter^ sender, IconGetUrlCalledEventArgs^ args) 
        { 
            _GetUrlCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<IconServiceEventAdapter^, IconGetContentCalledEventArgs^>^ GetContentCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<IconServiceEventAdapter^, IconGetContentCalledEventArgs^>^ handler) 
        { 
            return _GetContentCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<IconServiceEventAdapter^>(sender), safe_cast<IconGetContentCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetContentCalled -= token; 
        } 
    internal: 
        void raise(IconServiceEventAdapter^ sender, IconGetContentCalledEventArgs^ args) 
        { 
            _GetContentCalled(sender, args);
        } 
    }

    // Property Read Events
    event Windows::Foundation::TypedEventHandler<IconServiceEventAdapter^, IconGetVersionRequestedEventArgs^>^ GetVersionRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<IconServiceEventAdapter^, IconGetVersionRequestedEventArgs^>^ handler) 
        { 
            return _GetVersionRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<IconServiceEventAdapter^>(sender), safe_cast<IconGetVersionRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetVersionRequested -= token; 
        } 
    internal: 
        void raise(IconServiceEventAdapter^ sender, IconGetVersionRequestedEventArgs^ args) 
        { 
            _GetVersionRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<IconServiceEventAdapter^, IconGetMimeTypeRequestedEventArgs^>^ GetMimeTypeRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<IconServiceEventAdapter^, IconGetMimeTypeRequestedEventArgs^>^ handler) 
        { 
            return _GetMimeTypeRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<IconServiceEventAdapter^>(sender), safe_cast<IconGetMimeTypeRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetMimeTypeRequested -= token; 
        } 
    internal: 
        void raise(IconServiceEventAdapter^ sender, IconGetMimeTypeRequestedEventArgs^ args) 
        { 
            _GetMimeTypeRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<IconServiceEventAdapter^, IconGetSizeRequestedEventArgs^>^ GetSizeRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<IconServiceEventAdapter^, IconGetSizeRequestedEventArgs^>^ handler) 
        { 
            return _GetSizeRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<IconServiceEventAdapter^>(sender), safe_cast<IconGetSizeRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetSizeRequested -= token; 
        } 
    internal: 
        void raise(IconServiceEventAdapter^ sender, IconGetSizeRequestedEventArgs^ args) 
        { 
            _GetSizeRequested(sender, args);
        } 
    }

    // Property Write Events
    // IIconService Implementation
    virtual Windows::Foundation::IAsyncOperation<IconGetUrlResult^>^ GetUrlAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<IconGetContentResult^>^ GetContentAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    virtual Windows::Foundation::IAsyncOperation<IconGetVersionResult^>^ GetVersionAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<IconGetMimeTypeResult^>^ GetMimeTypeAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<IconGetSizeResult^>^ GetSizeAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);


private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetUrlCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetContentCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetVersionRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetMimeTypeRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetSizeRequested;
};

} } } 