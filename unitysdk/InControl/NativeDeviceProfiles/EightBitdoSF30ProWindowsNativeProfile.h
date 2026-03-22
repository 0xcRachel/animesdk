#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSF30PROWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x154893D0)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSF30PROWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1548A820)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSF30ProWindowsNativeProfile_TypeDefinitionIndex = 31008;

	class EightBitdoSF30ProWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSF30PROWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSF30PROWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
