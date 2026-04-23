#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C1A39B66B5B90981;
class Class_2_9DD8A46984F1AFFD;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_C1A39B66B5B90981___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFCAAE10)
#define CLASS_1_C1A39B66B5B90981___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFCAAE40)
#define CLASS_1_C1A39B66B5B90981___C___DEPLOYSPIKETRAPTRIGGER_B__9_0_OFFSET UNITYSDK_OFFSET(0xFCAAE50)
#define CLASS_1_C1A39B66B5B90981___C___DEPLOYSPIKETRAPTRIGGER_B__9_1_OFFSET UNITYSDK_OFFSET(0xFCAAE80)
#define CLASS_1_C1A39B66B5B90981___C___LISTENLEVELVAR_B__23_0_OFFSET UNITYSDK_OFFSET(0xFCAAF60)

inline static constexpr unsigned int Class_1_C1A39B66B5B90981___c_TypeDefinitionIndex = 70861;

class Class_1_C1A39B66B5B90981___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_C1A39B66B5B90981*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__9_0()
	{
		return (::System::Action_3<::Class_1_C1A39B66B5B90981*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1A39B66B5B90981___c_TypeDefinitionIndex)->GetStaticField(0x69C30);
	}
	static ::Class_1_C1A39B66B5B90981___c** StaticGet___9()
	{
		return (::Class_1_C1A39B66B5B90981___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1A39B66B5B90981___c_TypeDefinitionIndex)->GetStaticField(0x69C38);
	}
	static ::System::Action_3<::Class_1_C1A39B66B5B90981*, ::System::Int32, ::System::String*>** StaticGet___9__23_0()
	{
		return (::System::Action_3<::Class_1_C1A39B66B5B90981*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1A39B66B5B90981___c_TypeDefinitionIndex)->GetStaticField(0x69C40);
	}
	static ::System::Action_3<::Class_1_C1A39B66B5B90981*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__9_1()
	{
		return (::System::Action_3<::Class_1_C1A39B66B5B90981*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1A39B66B5B90981___c_TypeDefinitionIndex)->GetStaticField(0x69C48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1A39B66B5B90981___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A39B66B5B90981___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeploySpikeTrapTrigger_b__9_0(::Class_1_C1A39B66B5B90981* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1A39B66B5B90981*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_C1A39B66B5B90981___C___DEPLOYSPIKETRAPTRIGGER_B__9_0_OFFSET))(this, self, ent, other);
	}

	::System::Void __DeploySpikeTrapTrigger_b__9_1(::Class_1_C1A39B66B5B90981* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1A39B66B5B90981*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_C1A39B66B5B90981___C___DEPLOYSPIKETRAPTRIGGER_B__9_1_OFFSET))(this, self, ent, other);
	}

	::System::Void __ListenLevelVar_b__23_0(::Class_1_C1A39B66B5B90981* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1A39B66B5B90981*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C1A39B66B5B90981___C___LISTENLEVELVAR_B__23_0_OFFSET))(this, self, entID, varName);
	}
};
