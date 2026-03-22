#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_SAMSUNGGP20ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155D4520)
#define INCONTROL_UNITYDEVICEPROFILES_SAMSUNGGP20ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x155D5810)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SamsungGP20AndroidUnityProfile_TypeDefinitionIndex = 30696;

	class SamsungGP20AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SAMSUNGGP20ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SAMSUNGGP20ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
