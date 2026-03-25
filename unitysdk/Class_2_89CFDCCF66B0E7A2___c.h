#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_89CFDCCF66B0E7A2;
class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Collider; }

#define CLASS_2_89CFDCCF66B0E7A2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10643CF0)
#define CLASS_2_89CFDCCF66B0E7A2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10643D20)
#define CLASS_2_89CFDCCF66B0E7A2___C__GET__TRIGGERFILTER_B__8_0_OFFSET UNITYSDK_OFFSET(0x10643D80)
#define CLASS_2_89CFDCCF66B0E7A2___C___CREATETRIGGER_B__6_0_OFFSET UNITYSDK_OFFSET(0x10643D30)
#define CLASS_2_89CFDCCF66B0E7A2___C___CREATETRIGGER_B__6_1_OFFSET UNITYSDK_OFFSET(0x10643D60)

inline static constexpr unsigned int Class_2_89CFDCCF66B0E7A2___c_TypeDefinitionIndex = 62819;

class Class_2_89CFDCCF66B0E7A2___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_2_89CFDCCF66B0E7A2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__6_0()
	{
		return (::System::Action_3<::Class_2_89CFDCCF66B0E7A2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_89CFDCCF66B0E7A2___c_TypeDefinitionIndex)->GetStaticField(0x16EF0);
	}
	static ::Class_2_89CFDCCF66B0E7A2___c** StaticGet___9()
	{
		return (::Class_2_89CFDCCF66B0E7A2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_89CFDCCF66B0E7A2___c_TypeDefinitionIndex)->GetStaticField(0x16EF8);
	}
	static ::System::Func_3<::Class_2_89CFDCCF66B0E7A2*, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Func_3<::Class_2_89CFDCCF66B0E7A2*, ::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_89CFDCCF66B0E7A2___c_TypeDefinitionIndex)->GetStaticField(0x16F00);
	}
	static ::System::Action_3<::Class_2_89CFDCCF66B0E7A2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__6_1()
	{
		return (::System::Action_3<::Class_2_89CFDCCF66B0E7A2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_89CFDCCF66B0E7A2___c_TypeDefinitionIndex)->GetStaticField(0x16F08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTrigger_b__6_0(::Class_2_89CFDCCF66B0E7A2* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* collider)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_89CFDCCF66B0E7A2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2___C___CREATETRIGGER_B__6_0_OFFSET))(this, self, ent, collider);
	}

	::System::Void __CreateTrigger_b__6_1(::Class_2_89CFDCCF66B0E7A2* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_89CFDCCF66B0E7A2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2___C___CREATETRIGGER_B__6_1_OFFSET))(this, self, ent, _);
	}

	::System::Boolean _get__TriggerFilter_b__8_0(::Class_2_89CFDCCF66B0E7A2* self, ::UnityEngine::Collider* collider)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_89CFDCCF66B0E7A2*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2___C__GET__TRIGGERFILTER_B__8_0_OFFSET))(this, self, collider);
	}
};
