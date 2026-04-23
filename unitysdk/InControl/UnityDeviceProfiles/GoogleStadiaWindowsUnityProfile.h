#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x935CB20)
#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x935E1E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GoogleStadiaWindowsUnityProfile_TypeDefinitionIndex = 37373;

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
