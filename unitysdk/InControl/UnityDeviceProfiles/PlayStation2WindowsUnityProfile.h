#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x93B28A0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x93B3EA0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation2WindowsUnityProfile_TypeDefinitionIndex = 37392;

	class PlayStation2WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
