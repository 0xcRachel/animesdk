#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlSource.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDevice.h"
#include "unitysdk/InControl/InputDeviceInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class InputDeviceProfile; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define INCONTROL_NATIVEINPUTDEVICE_FLOATTOBYTE_OFFSET UNITYSDK_OFFSET(0x154F6760)
#define INCONTROL_NATIVEINPUTDEVICE_GETAPPLEGLYPHNAMEFORCONTROL_OFFSET UNITYSDK_OFFSET(0x154F6810)
#define INCONTROL_NATIVEINPUTDEVICE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x154F4F10)
#define INCONTROL_NATIVEINPUTDEVICE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x154F4F30)
#define INCONTROL_NATIVEINPUTDEVICE_GET_ISKNOWN_OFFSET UNITYSDK_OFFSET(0x154F5730)
#define INCONTROL_NATIVEINPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET UNITYSDK_OFFSET(0x154F6B30)
#define INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET UNITYSDK_OFFSET(0x154F6B60)
#define INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET UNITYSDK_OFFSET(0x154F6B50)
#define INCONTROL_NATIVEINPUTDEVICE_GET_PROFILENAME_OFFSET UNITYSDK_OFFSET(0x154F6AB0)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMELOCATION_OFFSET UNITYSDK_OFFSET(0x154F6A30)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMEPRODUCTID_OFFSET UNITYSDK_OFFSET(0x154F6A10)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMESERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x154F6A70)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMEVENDORID_OFFSET UNITYSDK_OFFSET(0x154F6A00)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMEVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x154F6A20)
#define INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x154F57A0)
#define INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x154F5030)
#define INCONTROL_NATIVEINPUTDEVICE_READRAWANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x154F6710)
#define INCONTROL_NATIVEINPUTDEVICE_READRAWBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x154F66C0)
#define INCONTROL_NATIVEINPUTDEVICE_SENDSTATUSUPDATES_OFFSET UNITYSDK_OFFSET(0x154F5EE0)
#define INCONTROL_NATIVEINPUTDEVICE_SETLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x154F67D0)
#define INCONTROL_NATIVEINPUTDEVICE_SETLIGHTFLASH_OFFSET UNITYSDK_OFFSET(0x154F67F0)
#define INCONTROL_NATIVEINPUTDEVICE_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x154F4F20)
#define INCONTROL_NATIVEINPUTDEVICE_SET_INFO_OFFSET UNITYSDK_OFFSET(0x154F4F60)
#define INCONTROL_NATIVEINPUTDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x154F57E0)
#define INCONTROL_NATIVEINPUTDEVICE_VIBRATETRIGGERS_OFFSET UNITYSDK_OFFSET(0x154F67B0)
#define INCONTROL_NATIVEINPUTDEVICE_VIBRATE_OFFSET UNITYSDK_OFFSET(0x154F6790)
#define INCONTROL_NATIVEINPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x154F4F90)

namespace InControl
{
	inline static constexpr unsigned int NativeInputDevice_TypeDefinitionIndex = 30575;

	class NativeInputDevice : public ::InControl::InputDevice
	{
	public:
		// static const ::System::Int32 maxUnknownButtons = 0x14; // 0x0
		// static const ::System::Int32 maxUnknownAnalogs = 0x14; // 0x0
		// static const ::System::String* defaultGlyphName; // 0x0
		::Il2CppArray<::System::Int16>* buttons; // 0x198
		::Il2CppArray<::System::Int16>* analogs; // 0x1A0
		::System::Text::StringBuilder* glyphName; // 0x1A8
		::InControl::InputDeviceProfile* profile; // 0x1B0
		::Il2CppArray<::InControl::InputControlSource>* controlSourceByTarget; // 0x1B8
		::InControl::InputDeviceInfo _Info_k__BackingField; // 0x1C0
		::System::Single lastTimeLightColorWasSent; // 0x1F0
		::System::Single lastTimeVibrateWasSent; // 0x1F4
		::System::Single lastTimeLightFlashWasSent; // 0x1F8
		::System::Boolean sendVibrate; // 0x1FC
		::System::Boolean sendVibrateTriggers; // 0x1FD
		::System::Boolean sendLightColor; // 0x1FE
		::System::Boolean sendLightFlash; // 0x1FF
		::System::Int32 numUnknownAnalogs; // 0x200
		::UnityEngine::Vector3 lightColorToSend; // 0x204
		::UnityEngine::Vector2 vibrateTriggersToSend; // 0x210
		::System::UInt32 _Handle_k__BackingField; // 0x218
		::UnityEngine::Vector2 lightFlashToSend; // 0x21C
		::System::Single lastTimeVibrateTriggersWasSent; // 0x224
		::System::Int32 numUnknownButtons; // 0x228
		::System::Int32 skipUpdateFrames; // 0x22C
		::UnityEngine::Vector2 vibrateToSend; // 0x230

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Handle()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SET_HANDLE_OFFSET))(this, value);
		}

		::InControl::InputDeviceInfo get_Info()
		{
			return ((::InControl::InputDeviceInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_INFO_OFFSET))(this);
		}

		::System::Void set_Info(::InControl::InputDeviceInfo value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SET_INFO_OFFSET))(this, value);
		}

		::System::Void Initialize(::System::UInt32 deviceHandle, ::InControl::InputDeviceInfo deviceInfo, ::InControl::InputDeviceProfile* deviceProfile)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::InControl::InputDeviceInfo, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_OFFSET))(this, deviceHandle, deviceInfo, deviceProfile);
		}

		::System::Void Initialize_1(::System::UInt32 deviceHandle, ::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_1_OFFSET))(this, deviceHandle, deviceInfo);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Boolean ReadRawButtonState(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_READRAWBUTTONSTATE_OFFSET))(this, index);
		}

		::System::Single ReadRawAnalogValue(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_READRAWANALOGVALUE_OFFSET))(this, index);
		}

		static ::System::Byte FloatToByte(::System::Single value)
		{
			return ((::System::Byte(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_FLOATTOBYTE_OFFSET))(value);
		}

		::System::Void Vibrate(::System::Single leftMotor, ::System::Single rightMotor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_VIBRATE_OFFSET))(this, leftMotor, rightMotor);
		}

		::System::Void VibrateTriggers(::System::Single leftTrigger, ::System::Single rightTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_VIBRATETRIGGERS_OFFSET))(this, leftTrigger, rightTrigger);
		}

		::System::Void SetLightColor(::System::Single red, ::System::Single green, ::System::Single blue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SETLIGHTCOLOR_OFFSET))(this, red, green, blue);
		}

		::System::Void SetLightFlash(::System::Single flashOnDuration, ::System::Single flashOffDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SETLIGHTFLASH_OFFSET))(this, flashOnDuration, flashOffDuration);
		}

		::System::Void SendStatusUpdates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SENDSTATUSUPDATES_OFFSET))(this);
		}

		::System::String* GetAppleGlyphNameForControl(::InControl::InputControlType controlType)
		{
			return ((::System::String*(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GETAPPLEGLYPHNAMEFORCONTROL_OFFSET))(this, controlType);
		}

		::System::Boolean HasSameVendorID(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMEVENDORID_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameProductID(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMEPRODUCTID_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameVersionNumber(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMEVERSIONNUMBER_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameLocation(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMELOCATION_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameSerialNumber(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMESERIALNUMBER_OFFSET))(this, deviceInfo);
		}

		::System::String* get_ProfileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_PROFILENAME_OFFSET))(this);
		}

		::System::Boolean get_IsSupportedOnThisPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET))(this);
		}

		::System::Boolean get_IsKnown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_ISKNOWN_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownButtons()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownAnalogs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET))(this);
		}
	};
}
