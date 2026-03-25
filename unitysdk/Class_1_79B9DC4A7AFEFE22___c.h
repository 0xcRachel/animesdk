#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79B9DC4A7AFEFE22;
class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_79B9DC4A7AFEFE22___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1A4EC0)
#define CLASS_1_79B9DC4A7AFEFE22___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA1A4F00)
#define CLASS_1_79B9DC4A7AFEFE22___C___DEPLOYLIGHTNINGTRIGGERS_B__10_0_OFFSET UNITYSDK_OFFSET(0xA1A4F10)
#define CLASS_1_79B9DC4A7AFEFE22___C___DEPLOYLIGHTNINGTRIGGERS_B__10_1_OFFSET UNITYSDK_OFFSET(0xA1A4F40)

inline static constexpr unsigned int Class_1_79B9DC4A7AFEFE22___c_TypeDefinitionIndex = 62802;

class Class_1_79B9DC4A7AFEFE22___c : public ::System::Object
{
public:
	static ::Class_1_79B9DC4A7AFEFE22___c** StaticGet___9()
	{
		return (::Class_1_79B9DC4A7AFEFE22___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79B9DC4A7AFEFE22___c_TypeDefinitionIndex)->GetStaticField(0x16DD0);
	}
	static ::System::Action_3<::Class_1_79B9DC4A7AFEFE22*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__10_0()
	{
		return (::System::Action_3<::Class_1_79B9DC4A7AFEFE22*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79B9DC4A7AFEFE22___c_TypeDefinitionIndex)->GetStaticField(0x16DD8);
	}
	static ::System::Action_3<::Class_1_79B9DC4A7AFEFE22*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__10_1()
	{
		return (::System::Action_3<::Class_1_79B9DC4A7AFEFE22*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79B9DC4A7AFEFE22___c_TypeDefinitionIndex)->GetStaticField(0x16DE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_79B9DC4A7AFEFE22___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79B9DC4A7AFEFE22___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeployLightningTriggers_b__10_0(::Class_1_79B9DC4A7AFEFE22* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79B9DC4A7AFEFE22*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_79B9DC4A7AFEFE22___C___DEPLOYLIGHTNINGTRIGGERS_B__10_0_OFFSET))(this, self, ent, other);
	}

	::System::Void __DeployLightningTriggers_b__10_1(::Class_1_79B9DC4A7AFEFE22* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79B9DC4A7AFEFE22*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_79B9DC4A7AFEFE22___C___DEPLOYLIGHTNINGTRIGGERS_B__10_1_OFFSET))(this, self, ent, other);
	}
};
