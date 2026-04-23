#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROLINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x938F1B0)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROLINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x9390740)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProLinuxUnityProfile_TypeDefinitionIndex = 37305;

	class MogaProLinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROLINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROLINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
