#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICESCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x83BE690)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int GetAudioInputDevicesCountOptions_TypeDefinitionIndex = 34687;

	class GetAudioInputDevicesCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICESCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
