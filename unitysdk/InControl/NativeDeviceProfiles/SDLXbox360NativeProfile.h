#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLXBOX360NATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BED920)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLXBOX360NATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BEF0B0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLXbox360NativeProfile_TypeDefinitionIndex = 31874;

	class SDLXbox360NativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLXBOX360NATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLXBOX360NATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
