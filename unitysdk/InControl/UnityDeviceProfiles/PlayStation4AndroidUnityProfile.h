#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xA6D7B10)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D8E50)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4AndroidUnityProfile_TypeDefinitionIndex = 38018;

	class PlayStation4AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
