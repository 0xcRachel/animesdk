#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACFIREFOXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155F7470)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACFIREFOXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x155F8C70)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneMacFirefoxUnityProfile_TypeDefinitionIndex = 30762;

	class XboxOneMacFirefoxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACFIREFOXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACFIREFOXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
