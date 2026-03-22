#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15537CF0)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15538840)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSNES30AndroidUnityProfile_TypeDefinitionIndex = 30662;

	class EightBitdoSNES30AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
