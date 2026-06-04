#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4STEAMLINKMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xA6DEC80)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4STEAMLINKMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6DFFB0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4SteamLinkMacUnityProfile_TypeDefinitionIndex = 38061;

	class PlayStation4SteamLinkMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4STEAMLINKMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4STEAMLINKMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
