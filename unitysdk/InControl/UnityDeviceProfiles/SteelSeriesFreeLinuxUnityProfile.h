#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREELINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155D9E70)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREELINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x155DB180)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SteelSeriesFreeLinuxUnityProfile_TypeDefinitionIndex = 30715;

	class SteelSeriesFreeLinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREELINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREELINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
