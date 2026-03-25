#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C06B50)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C08050)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneWindowsNativeProfile_TypeDefinitionIndex = 31916;

	class XboxOneWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
