#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACSAFARIUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x93F6840)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACSAFARIUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x93F7DF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360MacSafariUnityProfile_TypeDefinitionIndex = 37355;

	class Xbox360MacSafariUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACSAFARIUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACSAFARIUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
