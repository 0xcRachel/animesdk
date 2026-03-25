#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9AD533802611FEF0;
class Class_2_9DD8A46984F1AFFD;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_9AD533802611FEF0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105C07B0)
#define CLASS_1_9AD533802611FEF0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105C07E0)
#define CLASS_1_9AD533802611FEF0___C___DEPLOYSPIKETRAPTRIGGER_B__9_0_OFFSET UNITYSDK_OFFSET(0x105C07F0)
#define CLASS_1_9AD533802611FEF0___C___DEPLOYSPIKETRAPTRIGGER_B__9_1_OFFSET UNITYSDK_OFFSET(0x105C0820)
#define CLASS_1_9AD533802611FEF0___C___LISTENLEVELVAR_B__23_0_OFFSET UNITYSDK_OFFSET(0x105C0850)

inline static constexpr unsigned int Class_1_9AD533802611FEF0___c_TypeDefinitionIndex = 62825;

class Class_1_9AD533802611FEF0___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_9AD533802611FEF0*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__9_0()
	{
		return (::System::Action_3<::Class_1_9AD533802611FEF0*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AD533802611FEF0___c_TypeDefinitionIndex)->GetStaticField(0x22570);
	}
	static ::System::Action_3<::Class_1_9AD533802611FEF0*, ::System::Int32, ::System::String*>** StaticGet___9__23_0()
	{
		return (::System::Action_3<::Class_1_9AD533802611FEF0*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AD533802611FEF0___c_TypeDefinitionIndex)->GetStaticField(0x22578);
	}
	static ::Class_1_9AD533802611FEF0___c** StaticGet___9()
	{
		return (::Class_1_9AD533802611FEF0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AD533802611FEF0___c_TypeDefinitionIndex)->GetStaticField(0x22580);
	}
	static ::System::Action_3<::Class_1_9AD533802611FEF0*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__9_1()
	{
		return (::System::Action_3<::Class_1_9AD533802611FEF0*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AD533802611FEF0___c_TypeDefinitionIndex)->GetStaticField(0x22588);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD533802611FEF0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD533802611FEF0___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeploySpikeTrapTrigger_b__9_0(::Class_1_9AD533802611FEF0* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD533802611FEF0*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_9AD533802611FEF0___C___DEPLOYSPIKETRAPTRIGGER_B__9_0_OFFSET))(this, self, ent, other);
	}

	::System::Void __DeploySpikeTrapTrigger_b__9_1(::Class_1_9AD533802611FEF0* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD533802611FEF0*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_9AD533802611FEF0___C___DEPLOYSPIKETRAPTRIGGER_B__9_1_OFFSET))(this, self, ent, other);
	}

	::System::Void __ListenLevelVar_b__23_0(::Class_1_9AD533802611FEF0* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD533802611FEF0*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9AD533802611FEF0___C___LISTENLEVELVAR_B__23_0_OFFSET))(this, self, entID, varName);
	}
};
