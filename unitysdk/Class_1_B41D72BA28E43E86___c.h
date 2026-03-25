#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B41D72BA28E43E86;
class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_B41D72BA28E43E86___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8B0D50)
#define CLASS_1_B41D72BA28E43E86___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B0D80)
#define CLASS_1_B41D72BA28E43E86___C___CREATECAMERATRIGGER_B__25_0_OFFSET UNITYSDK_OFFSET(0xB8B0D90)
#define CLASS_1_B41D72BA28E43E86___C___CREATECAMERATRIGGER_B__25_1_OFFSET UNITYSDK_OFFSET(0xB8B0DB0)

inline static constexpr unsigned int Class_1_B41D72BA28E43E86___c_TypeDefinitionIndex = 62607;

class Class_1_B41D72BA28E43E86___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_B41D72BA28E43E86*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__25_0()
	{
		return (::System::Action_3<::Class_1_B41D72BA28E43E86*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B41D72BA28E43E86___c_TypeDefinitionIndex)->GetStaticField(0x3BF80);
	}
	static ::System::Action_3<::Class_1_B41D72BA28E43E86*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__25_1()
	{
		return (::System::Action_3<::Class_1_B41D72BA28E43E86*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B41D72BA28E43E86___c_TypeDefinitionIndex)->GetStaticField(0x3BF88);
	}
	static ::Class_1_B41D72BA28E43E86___c** StaticGet___9()
	{
		return (::Class_1_B41D72BA28E43E86___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B41D72BA28E43E86___c_TypeDefinitionIndex)->GetStaticField(0x3BF90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B41D72BA28E43E86___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B41D72BA28E43E86___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateCameraTrigger_b__25_0(::Class_1_B41D72BA28E43E86* self, ::Class_2_9DD8A46984F1AFFD* triggerEnt, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B41D72BA28E43E86*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_B41D72BA28E43E86___C___CREATECAMERATRIGGER_B__25_0_OFFSET))(this, self, triggerEnt, other);
	}

	::System::Void __CreateCameraTrigger_b__25_1(::Class_1_B41D72BA28E43E86* self, ::Class_2_9DD8A46984F1AFFD* triggerEnt, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B41D72BA28E43E86*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_B41D72BA28E43E86___C___CREATECAMERATRIGGER_B__25_1_OFFSET))(this, self, triggerEnt, other);
	}
};
