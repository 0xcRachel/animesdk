#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_NINTENDOSWITCHPROMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x13B7B0C0)
#define INCONTROL_NATIVEDEVICEPROFILES_NINTENDOSWITCHPROMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x13B7C6F0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int NintendoSwitchProMacNativeProfile_TypeDefinitionIndex = 37566;

	class NintendoSwitchProMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_NINTENDOSWITCHPROMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_NINTENDOSWITCHPROMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
