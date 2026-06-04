#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xA6EDF50)
#define INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6EF2E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int RazerServalMacUnityProfile_TypeDefinitionIndex = 38063;

	class RazerServalMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
