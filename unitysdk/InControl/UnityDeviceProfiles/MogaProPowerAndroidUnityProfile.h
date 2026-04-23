#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x9391F50)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x9393540)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProPowerAndroidUnityProfile_TypeDefinitionIndex = 37276;

	class MogaProPowerAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
