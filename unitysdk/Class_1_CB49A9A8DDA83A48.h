#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/GateLinkInfoState.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_1_CB49A9A8DDA83A48__CTOR_OFFSET UNITYSDK_OFFSET(0x860E140)

inline static constexpr unsigned int Class_1_CB49A9A8DDA83A48_TypeDefinitionIndex = 62165;

class Class_1_CB49A9A8DDA83A48 : public ::System::Object
{
public:
	::UnityEngine::Material* Field_1_6; // 0x10
	::RPG::Client::OpenWorld::StreamingItemData* Field_1_2; // 0x18
	::UnityEngine::GameObject* Field_1_7; // 0x20
	::UnityEngine::Animator* Field_1_3; // 0x28
	::BansheeGz::BGSpline::Components::BGCcMath* Field_1_0; // 0x30
	::RPG::Client::Prop::GateLinkInfoState Field_1_4; // 0x38
	::RPG::Client::Prop::GateLinkInfoState Field_1_5; // 0x3C
	::System::Boolean Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB49A9A8DDA83A48__CTOR_OFFSET))(this);
	}
};
