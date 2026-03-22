#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1549FB30)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x154A10E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF710ModeDMacNativeProfile_TypeDefinitionIndex = 30970;

	class LogitechF710ModeDMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
