#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x93205D0)
#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x9321C30)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AndroidTVUnityProfile_TypeDefinitionIndex = 37242;

	class AndroidTVUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
