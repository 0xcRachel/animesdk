#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONESMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x12A00EF0)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONESMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x12A02220)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneSMacNativeProfile_TypeDefinitionIndex = 38311;

	class XboxOneSMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONESMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONESMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
