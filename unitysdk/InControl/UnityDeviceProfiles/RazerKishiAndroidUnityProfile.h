#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155CCD50)
#define INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x155CE450)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int RazerKishiAndroidUnityProfile_TypeDefinitionIndex = 30694;

	class RazerKishiAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
