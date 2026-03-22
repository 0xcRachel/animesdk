#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4STEAMLINKMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155BE0D0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4STEAMLINKMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x155BF7C0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4SteamLinkMacUnityProfile_TypeDefinitionIndex = 30734;

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
