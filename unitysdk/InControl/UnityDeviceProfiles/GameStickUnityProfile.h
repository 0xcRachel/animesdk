#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x9353DC0)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x9355170)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameStickUnityProfile_TypeDefinitionIndex = 37342;

	class GameStickUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
