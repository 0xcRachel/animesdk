#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x13BC3660)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x13BC4A00)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxWirelessMacNativeProfile_TypeDefinitionIndex = 37581;

	class XboxWirelessMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
