#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2LINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xA6CC6B0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2LINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6CD980)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation2LinuxUnityProfile_TypeDefinitionIndex = 38039;

	class PlayStation2LinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2LINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2LINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
