#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_226C8BDD578D6DCB;
class Class_2_9DD8A46984F1AFFD;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_226C8BDD578D6DCB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10679940)
#define CLASS_1_226C8BDD578D6DCB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10679980)
#define CLASS_1_226C8BDD578D6DCB___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__8_0_OFFSET UNITYSDK_OFFSET(0x10679990)
#define CLASS_1_226C8BDD578D6DCB___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__8_1_OFFSET UNITYSDK_OFFSET(0x106799C0)
#define CLASS_1_226C8BDD578D6DCB___C___LISTENLEVELVAR_B__17_0_OFFSET UNITYSDK_OFFSET(0x106799F0)

inline static constexpr unsigned int Class_1_226C8BDD578D6DCB___c_TypeDefinitionIndex = 62788;

class Class_1_226C8BDD578D6DCB___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_0()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB___c_TypeDefinitionIndex)->GetStaticField(0x1DA60);
	}
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB*, ::System::Int32, ::System::String*>** StaticGet___9__17_0()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB___c_TypeDefinitionIndex)->GetStaticField(0x1DA68);
	}
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_1()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB___c_TypeDefinitionIndex)->GetStaticField(0x1DA70);
	}
	static ::Class_1_226C8BDD578D6DCB___c** StaticGet___9()
	{
		return (::Class_1_226C8BDD578D6DCB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB___c_TypeDefinitionIndex)->GetStaticField(0x1DA78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeployGravityFieldRingTrigger_b__8_0(::Class_1_226C8BDD578D6DCB* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__8_0_OFFSET))(this, self, ent, other);
	}

	::System::Void __DeployGravityFieldRingTrigger_b__8_1(::Class_1_226C8BDD578D6DCB* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__8_1_OFFSET))(this, self, ent, other);
	}

	::System::Void __ListenLevelVar_b__17_0(::Class_1_226C8BDD578D6DCB* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB___C___LISTENLEVELVAR_B__17_0_OFFSET))(this, self, entID, varName);
	}
};
