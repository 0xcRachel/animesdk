#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_300255A4917C4300.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9DD5E54BCC89B193;
class Class_2_9DD8A46984F1AFFD;
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }

#define CLASS_2_9DD5E54BCC89B193___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x89BF800)
#define CLASS_2_9DD5E54BCC89B193___C__CTOR_OFFSET UNITYSDK_OFFSET(0x89BF830)
#define CLASS_2_9DD5E54BCC89B193___C___CREATEINTERACTTRIGGER_B__6_0_OFFSET UNITYSDK_OFFSET(0x89BF840)
#define CLASS_2_9DD5E54BCC89B193___C___CREATEPROPMOVETRIGGER_B__8_0_OFFSET UNITYSDK_OFFSET(0x89BF860)
#define CLASS_2_9DD5E54BCC89B193___C___CREATEPROPMOVETRIGGER_B__8_1_OFFSET UNITYSDK_OFFSET(0x89BF8B0)
#define CLASS_2_9DD5E54BCC89B193___C___FIREARROWINTERACTEFFECTDELAYED_B__18_0_OFFSET UNITYSDK_OFFSET(0x89BF900)

inline static constexpr unsigned int Class_2_9DD5E54BCC89B193___c_TypeDefinitionIndex = 60804;

class Class_2_9DD5E54BCC89B193___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_2_9DD5E54BCC89B193*, ::Class_2_9DD8A46984F1AFFD*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_2_9DD5E54BCC89B193*, ::Class_2_9DD8A46984F1AFFD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9DD5E54BCC89B193___c_TypeDefinitionIndex)->GetStaticField(0x47140);
	}
	static ::Class_2_9DD5E54BCC89B193___c** StaticGet___9()
	{
		return (::Class_2_9DD5E54BCC89B193___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9DD5E54BCC89B193___c_TypeDefinitionIndex)->GetStaticField(0x47148);
	}
	static ::System::Action_3<::Class_2_9DD5E54BCC89B193*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_0()
	{
		return (::System::Action_3<::Class_2_9DD5E54BCC89B193*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9DD5E54BCC89B193___c_TypeDefinitionIndex)->GetStaticField(0x47150);
	}
	static ::System::Action_3<::Class_2_9DD5E54BCC89B193*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_1()
	{
		return (::System::Action_3<::Class_2_9DD5E54BCC89B193*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9DD5E54BCC89B193___c_TypeDefinitionIndex)->GetStaticField(0x47158);
	}
	static ::System::Action_4<::Class_2_9DD5E54BCC89B193*, ::UnityEngine::Vector3, ::Entitas::IEntity*, ::Struct_2_300255A4917C4300>** StaticGet___9__18_0()
	{
		return (::System::Action_4<::Class_2_9DD5E54BCC89B193*, ::UnityEngine::Vector3, ::Entitas::IEntity*, ::Struct_2_300255A4917C4300>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9DD5E54BCC89B193___c_TypeDefinitionIndex)->GetStaticField(0x47160);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9DD5E54BCC89B193___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DD5E54BCC89B193___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateInteractTrigger_b__6_0(::Class_2_9DD5E54BCC89B193* self, ::Class_2_9DD8A46984F1AFFD* ent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD5E54BCC89B193*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_9DD5E54BCC89B193___C___CREATEINTERACTTRIGGER_B__6_0_OFFSET))(this, self, ent);
	}

	::System::Void __CreatePropMoveTrigger_b__8_0(::Class_2_9DD5E54BCC89B193* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* col)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD5E54BCC89B193*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_9DD5E54BCC89B193___C___CREATEPROPMOVETRIGGER_B__8_0_OFFSET))(this, self, ent, col);
	}

	::System::Void __CreatePropMoveTrigger_b__8_1(::Class_2_9DD5E54BCC89B193* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* col)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD5E54BCC89B193*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_9DD5E54BCC89B193___C___CREATEPROPMOVETRIGGER_B__8_1_OFFSET))(this, self, ent, col);
	}

	::System::Void __FireArrowInteractEffectDelayed_b__18_0(::Class_2_9DD5E54BCC89B193* self, ::UnityEngine::Vector3 pos, ::Entitas::IEntity* ent, ::Struct_2_300255A4917C4300 param)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD5E54BCC89B193*, ::UnityEngine::Vector3, ::Entitas::IEntity*, ::Struct_2_300255A4917C4300))((::PBYTE)hIl2Cpp + CLASS_2_9DD5E54BCC89B193___C___FIREARROWINTERACTEFFECTDELAYED_B__18_0_OFFSET))(this, self, pos, ent, param);
	}
};
