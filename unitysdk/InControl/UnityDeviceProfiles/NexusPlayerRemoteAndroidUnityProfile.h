#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERREMOTEANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x93A3860)
#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERREMOTEANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x93A3F90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NexusPlayerRemoteAndroidUnityProfile_TypeDefinitionIndex = 37282;

	class NexusPlayerRemoteAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERREMOTEANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERREMOTEANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
