#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_QANBAFIGHTSTICKPLUSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x129DDEB0)
#define INCONTROL_NATIVEDEVICEPROFILES_QANBAFIGHTSTICKPLUSMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x129DDF30)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int QanbaFightStickPlusMacNativeProfile_TypeDefinitionIndex = 38255;

	class QanbaFightStickPlusMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_QANBAFIGHTSTICKPLUSMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_QANBAFIGHTSTICKPLUSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
