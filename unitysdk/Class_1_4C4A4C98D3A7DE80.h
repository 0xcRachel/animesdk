#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class Action; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_1_4C4A4C98D3A7DE80_CLEAR_OFFSET UNITYSDK_OFFSET(0x10C57A80)
#define CLASS_1_4C4A4C98D3A7DE80__CTOR_OFFSET UNITYSDK_OFFSET(0x10C57AE0)

inline static constexpr unsigned int Class_1_4C4A4C98D3A7DE80_TypeDefinitionIndex = 58034;

class Class_1_4C4A4C98D3A7DE80 : public ::System::Object
{
public:
	::RPG::Client::UIValueChangeAnimation* Field_1_3; // 0x10
	::UnityEngine::UI::RawImage* Field_1_4; // 0x18
	::UnityEngine::Texture* Field_1_5; // 0x20
	::System::Action* Field_1_6; // 0x28
	::RPG::GameCore::FrameCaptureFadeoutType Field_1_0; // 0x30
	::System::Single Field_1_2; // 0x34
	::System::Single Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C4A4C98D3A7DE80__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C4A4C98D3A7DE80_CLEAR_OFFSET))(this);
	}
};
