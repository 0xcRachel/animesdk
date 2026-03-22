#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155F8D60)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x155FA240)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneMacSafariUnityProfile_TypeDefinitionIndex = 30763;

	class XboxOneMacSafariUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
