#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1557F3A0)
#define INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x155808F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MadCatzCTRLRAndroidUnityProfile_TypeDefinitionIndex = 30678;

	class MadCatzCTRLRAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
