#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FE0E2D997BE9D0C;
class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_7FE0E2D997BE9D0C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEBB810)
#define CLASS_1_7FE0E2D997BE9D0C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDEBB840)
#define CLASS_1_7FE0E2D997BE9D0C___C___INITONESIDEPASSPROP_B__5_0_OFFSET UNITYSDK_OFFSET(0xDEBB850)
#define CLASS_1_7FE0E2D997BE9D0C___C___INITONESIDEPASSPROP_B__5_1_OFFSET UNITYSDK_OFFSET(0xDEBB880)

inline static constexpr unsigned int Class_1_7FE0E2D997BE9D0C___c_TypeDefinitionIndex = 70842;

class Class_1_7FE0E2D997BE9D0C___c : public ::System::Object
{
public:
	static ::Class_1_7FE0E2D997BE9D0C___c** StaticGet___9()
	{
		return (::Class_1_7FE0E2D997BE9D0C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FE0E2D997BE9D0C___c_TypeDefinitionIndex)->GetStaticField(0x6AFC0);
	}
	static ::System::Action_3<::Class_1_7FE0E2D997BE9D0C*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__5_0()
	{
		return (::System::Action_3<::Class_1_7FE0E2D997BE9D0C*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FE0E2D997BE9D0C___c_TypeDefinitionIndex)->GetStaticField(0x6AFC8);
	}
	static ::System::Action_3<::Class_1_7FE0E2D997BE9D0C*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__5_1()
	{
		return (::System::Action_3<::Class_1_7FE0E2D997BE9D0C*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FE0E2D997BE9D0C___c_TypeDefinitionIndex)->GetStaticField(0x6AFD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FE0E2D997BE9D0C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FE0E2D997BE9D0C___C__CTOR_OFFSET))(this);
	}

	::System::Void __InitOneSidePassProp_b__5_0(::Class_1_7FE0E2D997BE9D0C* self, ::Class_2_9DD8A46984F1AFFD* prop, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FE0E2D997BE9D0C*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_7FE0E2D997BE9D0C___C___INITONESIDEPASSPROP_B__5_0_OFFSET))(this, self, prop, other);
	}

	::System::Void __InitOneSidePassProp_b__5_1(::Class_1_7FE0E2D997BE9D0C* self, ::Class_2_9DD8A46984F1AFFD* prop, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FE0E2D997BE9D0C*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_7FE0E2D997BE9D0C___C___INITONESIDEPASSPROP_B__5_1_OFFSET))(this, self, prop, other);
	}
};
