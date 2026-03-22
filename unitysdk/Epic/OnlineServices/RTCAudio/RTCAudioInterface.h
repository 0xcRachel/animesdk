#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioBeforeRenderOptions; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioBeforeSendOptions; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioDevicesChangedOptions; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioInputStateOptions; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioOutputStateOptions; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyParticipantUpdatedOptions; }
namespace Epic::OnlineServices::RTCAudio { class AudioInputDeviceInfo; }
namespace Epic::OnlineServices::RTCAudio { class AudioOutputDeviceInfo; }
namespace Epic::OnlineServices::RTCAudio { class GetAudioInputDeviceByIndexOptions; }
namespace Epic::OnlineServices::RTCAudio { class GetAudioInputDevicesCountOptions; }
namespace Epic::OnlineServices::RTCAudio { class GetAudioOutputDeviceByIndexOptions; }
namespace Epic::OnlineServices::RTCAudio { class GetAudioOutputDevicesCountOptions; }
namespace Epic::OnlineServices::RTCAudio { class OnAudioBeforeRenderCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnAudioBeforeSendCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnAudioDevicesChangedCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnAudioInputStateCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnAudioOutputStateCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnParticipantUpdatedCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnUpdateReceivingCallback; }
namespace Epic::OnlineServices::RTCAudio { class OnUpdateSendingCallback; }
namespace Epic::OnlineServices::RTCAudio { class RegisterPlatformAudioUserOptions; }
namespace Epic::OnlineServices::RTCAudio { class SendAudioOptions; }
namespace Epic::OnlineServices::RTCAudio { class SetAudioInputSettingsOptions; }
namespace Epic::OnlineServices::RTCAudio { class SetAudioOutputSettingsOptions; }
namespace Epic::OnlineServices::RTCAudio { class UnregisterPlatformAudioUserOptions; }
namespace Epic::OnlineServices::RTCAudio { class UpdateReceivingOptions; }
namespace Epic::OnlineServices::RTCAudio { class UpdateSendingOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x83C5AC0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOBEFORESEND_OFFSET UNITYSDK_OFFSET(0x83C5CA0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIODEVICESCHANGED_OFFSET UNITYSDK_OFFSET(0x83C5E80)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x83C6100)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOOUTPUTSTATE_OFFSET UNITYSDK_OFFSET(0x83C62E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYPARTICIPANTUPDATED_OFFSET UNITYSDK_OFFSET(0x83C64C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOINPUTDEVICEBYINDEX_OFFSET UNITYSDK_OFFSET(0x83C66A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOINPUTDEVICESCOUNT_OFFSET UNITYSDK_OFFSET(0x83C6800)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOOUTPUTDEVICEBYINDEX_OFFSET UNITYSDK_OFFSET(0x83C6A20)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOOUTPUTDEVICESCOUNT_OFFSET UNITYSDK_OFFSET(0x83C6B80)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOBEFORERENDERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C5620)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOBEFORESENDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C56B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIODEVICESCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C5740)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOINPUTSTATECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C57D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOOUTPUTSTATECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C5860)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONPARTICIPANTUPDATEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C58F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONUPDATERECEIVINGCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C5980)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONUPDATESENDINGCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83C5A10)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REGISTERPLATFORMAUDIOUSER_OFFSET UNITYSDK_OFFSET(0x83C6DA0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x83C6FA0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOBEFORESEND_OFFSET UNITYSDK_OFFSET(0x83C7080)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIODEVICESCHANGED_OFFSET UNITYSDK_OFFSET(0x83C7160)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x83C7240)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOOUTPUTSTATE_OFFSET UNITYSDK_OFFSET(0x83C7320)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYPARTICIPANTUPDATED_OFFSET UNITYSDK_OFFSET(0x83C7400)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SENDAUDIO_OFFSET UNITYSDK_OFFSET(0x83C74E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SETAUDIOINPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0x83C7640)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SETAUDIOOUTPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0x83C77A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UNREGISTERPLATFORMAUDIOUSER_OFFSET UNITYSDK_OFFSET(0x83C7900)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UPDATERECEIVING_OFFSET UNITYSDK_OFFSET(0x83C7B00)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UPDATESENDING_OFFSET UNITYSDK_OFFSET(0x83C7CC0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x83C5AB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x83C5AA0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int RTCAudioInterface_TypeDefinitionIndex = 34712;

	class RTCAudioInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddnotifyaudiobeforerenderApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyaudiobeforesendApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyaudiodeviceschangedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyaudioinputstateApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyaudiooutputstateApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyparticipantupdatedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AudiobufferApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AudioinputdeviceinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AudiooutputdeviceinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetaudioinputdevicebyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetaudioinputdevicescountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetaudiooutputdevicebyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetaudiooutputdevicescountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 RegisterplatformaudiouserApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SendaudioApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetaudioinputsettingsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetaudiooutputsettingsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UnregisterplatformaudiouserApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UpdatereceivingApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UpdatesendingApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::UInt64 AddNotifyAudioBeforeRender(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallback* completionDelegate)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOBEFORERENDER_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::UInt64 AddNotifyAudioBeforeSend(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallback* completionDelegate)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOBEFORESEND_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::UInt64 AddNotifyAudioDevicesChanged(::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallback* completionDelegate)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIODEVICESCHANGED_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::UInt64 AddNotifyAudioInputState(::Epic::OnlineServices::RTCAudio::AddNotifyAudioInputStateOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallback* completionDelegate)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioInputStateOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOINPUTSTATE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::UInt64 AddNotifyAudioOutputState(::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallback* completionDelegate)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYAUDIOOUTPUTSTATE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::UInt64 AddNotifyParticipantUpdated(::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallback* completionDelegate)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ADDNOTIFYPARTICIPANTUPDATED_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo* GetAudioInputDeviceByIndex(::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions* options)
		{
			return ((::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOINPUTDEVICEBYINDEX_OFFSET))(this, options);
		}

		::System::UInt32 GetAudioInputDevicesCount(::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOINPUTDEVICESCOUNT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo* GetAudioOutputDeviceByIndex(::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions* options)
		{
			return ((::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOOUTPUTDEVICEBYINDEX_OFFSET))(this, options);
		}

		::System::UInt32 GetAudioOutputDevicesCount(::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_GETAUDIOOUTPUTDEVICESCOUNT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result RegisterPlatformAudioUser(::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REGISTERPLATFORMAUDIOUSER_OFFSET))(this, options);
		}

		::System::Void RemoveNotifyAudioBeforeRender(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOBEFORERENDER_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyAudioBeforeSend(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOBEFORESEND_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyAudioDevicesChanged(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIODEVICESCHANGED_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyAudioInputState(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOINPUTSTATE_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyAudioOutputState(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYAUDIOOUTPUTSTATE_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyParticipantUpdated(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_REMOVENOTIFYPARTICIPANTUPDATED_OFFSET))(this, notificationId);
		}

		::Epic::OnlineServices::Result SendAudio(::Epic::OnlineServices::RTCAudio::SendAudioOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::SendAudioOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SENDAUDIO_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetAudioInputSettings(::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SETAUDIOINPUTSETTINGS_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetAudioOutputSettings(::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_SETAUDIOOUTPUTSETTINGS_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result UnregisterPlatformAudioUser(::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UNREGISTERPLATFORMAUDIOUSER_OFFSET))(this, options);
		}

		::System::Void UpdateReceiving(::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UPDATERECEIVING_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void UpdateSending(::Epic::OnlineServices::RTCAudio::UpdateSendingOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateSendingOptions*, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_UPDATESENDING_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnAudioBeforeRenderCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOBEFORERENDERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnAudioBeforeSendCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOBEFORESENDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnAudioDevicesChangedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIODEVICESCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnAudioInputStateCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOINPUTSTATECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnAudioOutputStateCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONAUDIOOUTPUTSTATECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnParticipantUpdatedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONPARTICIPANTUPDATEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnUpdateReceivingCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONUPDATERECEIVINGCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnUpdateSendingCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_RTCAUDIOINTERFACE_ONUPDATESENDINGCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
