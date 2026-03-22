#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155510A0)
#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15552790)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GoogleStadiaMacUnityProfile_TypeDefinitionIndex = 30723;

	class GoogleStadiaMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
