#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15553FD0)
#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15555690)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GoogleStadiaWindowsUnityProfile_TypeDefinitionIndex = 30778;

	class GoogleStadiaWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
