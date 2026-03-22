#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_226C8BDD578D6DCB_2;
class Class_2_9DD8A46984F1AFFD;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_226C8BDD578D6DCB_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDC0D70)
#define CLASS_1_226C8BDD578D6DCB_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC0DA0)
#define CLASS_1_226C8BDD578D6DCB_2___C___DEPLOYSPIKETRAPTRIGGER_B__8_0_OFFSET UNITYSDK_OFFSET(0xFDC0DB0)
#define CLASS_1_226C8BDD578D6DCB_2___C___DEPLOYSPIKETRAPTRIGGER_B__8_1_OFFSET UNITYSDK_OFFSET(0xFDC0DE0)
#define CLASS_1_226C8BDD578D6DCB_2___C___LISTENLEVELVAR_B__21_0_OFFSET UNITYSDK_OFFSET(0xFDC0EC0)

inline static constexpr unsigned int Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex = 60827;

class Class_1_226C8BDD578D6DCB_2___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_0()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex)->GetStaticField(0x9C10);
	}
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_1()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex)->GetStaticField(0x9C18);
	}
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::System::Int32, ::System::String*>** StaticGet___9__21_0()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex)->GetStaticField(0x9C20);
	}
	static ::Class_1_226C8BDD578D6DCB_2___c** StaticGet___9()
	{
		return (::Class_1_226C8BDD578D6DCB_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex)->GetStaticField(0x9C28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeploySpikeTrapTrigger_b__8_0(::Class_1_226C8BDD578D6DCB_2* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C___DEPLOYSPIKETRAPTRIGGER_B__8_0_OFFSET))(this, self, ent, other);
	}

	::System::Void __DeploySpikeTrapTrigger_b__8_1(::Class_1_226C8BDD578D6DCB_2* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C___DEPLOYSPIKETRAPTRIGGER_B__8_1_OFFSET))(this, self, ent, other);
	}

	::System::Void __ListenLevelVar_b__21_0(::Class_1_226C8BDD578D6DCB_2* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB_2*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C___LISTENLEVELVAR_B__21_0_OFFSET))(this, self, entID, varName);
	}
};
