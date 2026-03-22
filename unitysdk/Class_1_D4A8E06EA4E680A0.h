#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/RPG/Client/CameraResultData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class VCameraNoiseChange; }

#define CLASS_1_D4A8E06EA4E680A0_CLEAR_OFFSET UNITYSDK_OFFSET(0x10CCC460)
#define CLASS_1_D4A8E06EA4E680A0__CTOR_OFFSET UNITYSDK_OFFSET(0x10CCC4F0)

inline static constexpr unsigned int Class_1_D4A8E06EA4E680A0_TypeDefinitionIndex = 55267;

class Class_1_D4A8E06EA4E680A0 : public ::System::Object
{
public:
	::RPG::GameCore::VCameraNoiseChange* Field_1_3; // 0x10
	::System::Nullable_1<::RPG::Client::CameraResultData> Field_1_0; // 0x18
	::Cinemachine::CinemachineBlendDefinition Field_1_1; // 0xB0
	::System::Single Field_1_6; // 0xC0
	::System::Single Field_1_5; // 0xC4
	::Cinemachine::CinemachineVirtualCameraBase_BlendHint Field_1_2; // 0xC8
	::System::Single Field_1_4; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4A8E06EA4E680A0__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4A8E06EA4E680A0_CLEAR_OFFSET))(this);
	}
};
