#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155796D0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1557ACE0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechModeDAmazonUnityProfile_TypeDefinitionIndex = 30637;

	class LogitechModeDAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
