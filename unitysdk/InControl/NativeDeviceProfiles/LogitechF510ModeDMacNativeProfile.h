#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEDMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1549B960)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEDMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1549CF10)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF510ModeDMacNativeProfile_TypeDefinitionIndex = 30969;

	class LogitechF510ModeDMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEDMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEDMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
