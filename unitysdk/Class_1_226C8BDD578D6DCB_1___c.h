#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_226C8BDD578D6DCB_1;
class Class_2_9DD8A46984F1AFFD;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_226C8BDD578D6DCB_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11773FA0)
#define CLASS_1_226C8BDD578D6DCB_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11773FE0)
#define CLASS_1_226C8BDD578D6DCB_1___C___DEPLOYGRAVITYSWITCHLINETRIGGER_B__8_0_OFFSET UNITYSDK_OFFSET(0x11773FF0)
#define CLASS_1_226C8BDD578D6DCB_1___C___DEPLOYGRAVITYSWITCHLINETRIGGER_B__8_1_OFFSET UNITYSDK_OFFSET(0x11774020)
#define CLASS_1_226C8BDD578D6DCB_1___C___LISTENLEVELVAR_B__20_0_OFFSET UNITYSDK_OFFSET(0x11774050)

inline static constexpr unsigned int Class_1_226C8BDD578D6DCB_1___c_TypeDefinitionIndex = 62791;

class Class_1_226C8BDD578D6DCB_1___c : public ::System::Object
{
public:
	static ::Class_1_226C8BDD578D6DCB_1___c** StaticGet___9()
	{
		return (::Class_1_226C8BDD578D6DCB_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_1___c_TypeDefinitionIndex)->GetStaticField(0x384A0);
	}
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB_1*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_0()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB_1*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_1___c_TypeDefinitionIndex)->GetStaticField(0x384A8);
	}
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB_1*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_1()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB_1*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_1___c_TypeDefinitionIndex)->GetStaticField(0x384B0);
	}
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB_1*, ::System::Int32, ::System::String*>** StaticGet___9__20_0()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB_1*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_1___c_TypeDefinitionIndex)->GetStaticField(0x384B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_1___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeployGravitySwitchLineTrigger_b__8_0(::Class_1_226C8BDD578D6DCB_1* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB_1*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_1___C___DEPLOYGRAVITYSWITCHLINETRIGGER_B__8_0_OFFSET))(this, self, ent, other);
	}

	::System::Void __DeployGravitySwitchLineTrigger_b__8_1(::Class_1_226C8BDD578D6DCB_1* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB_1*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_1___C___DEPLOYGRAVITYSWITCHLINETRIGGER_B__8_1_OFFSET))(this, self, ent, other);
	}

	::System::Void __ListenLevelVar_b__20_0(::Class_1_226C8BDD578D6DCB_1* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB_1*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_1___C___LISTENLEVELVAR_B__20_0_OFFSET))(this, self, entID, varName);
	}
};
