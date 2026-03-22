#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3FF63E3B49DB868D_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x11202FF0)
#define CLASS_1_3FF63E3B49DB868D_METHOD_1_2B9B111B4402E23A_OFFSET UNITYSDK_OFFSET(0x11202A70)
#define CLASS_1_3FF63E3B49DB868D_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11203030)
#define CLASS_1_3FF63E3B49DB868D_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11202F30)
#define CLASS_1_3FF63E3B49DB868D_METHOD_1_E34E0CE2E527F293_OFFSET UNITYSDK_OFFSET(0x11202FB0)
#define CLASS_1_3FF63E3B49DB868D__CTOR_OFFSET UNITYSDK_OFFSET(0x112030E0)

inline static constexpr unsigned int Class_1_3FF63E3B49DB868D_TypeDefinitionIndex = 57639;

class Class_1_3FF63E3B49DB868D : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_2; // 0x10
	::Il2CppArray<::System::String*>* Field_1_4; // 0x18
	::UnityEngine::Transform* Field_1_0; // 0x20
	::UnityEngine::Animation* Field_1_3; // 0x28
	::UnityEngine::GameObject* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2B9B111B4402E23A(::UnityEngine::Transform* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D_METHOD_1_2B9B111B4402E23A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedModifierInstance* Method_1_E34E0CE2E527F293()
	{
		return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D_METHOD_1_E34E0CE2E527F293_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
