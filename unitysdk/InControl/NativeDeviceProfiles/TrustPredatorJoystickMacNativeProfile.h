#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_TRUSTPREDATORJOYSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BF7E80)
#define INCONTROL_NATIVEDEVICEPROFILES_TRUSTPREDATORJOYSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF7F10)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int TrustPredatorJoystickMacNativeProfile_TypeDefinitionIndex = 31827;

	class TrustPredatorJoystickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_TRUSTPREDATORJOYSTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_TRUSTPREDATORJOYSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
