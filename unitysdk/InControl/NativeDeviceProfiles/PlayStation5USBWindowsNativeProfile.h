#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x154BB880)
#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x154BCF80)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PlayStation5USBWindowsNativeProfile_TypeDefinitionIndex = 31028;

	class PlayStation5USBWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
