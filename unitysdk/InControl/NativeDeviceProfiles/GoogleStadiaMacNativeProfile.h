#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15491D90)
#define INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15493480)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int GoogleStadiaMacNativeProfile_TypeDefinitionIndex = 30967;

	class GoogleStadiaMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
