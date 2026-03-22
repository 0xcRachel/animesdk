#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_467DE2317FB82D3D;
class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_2_467DE2317FB82D3D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105F3360)
#define CLASS_2_467DE2317FB82D3D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105F3390)
#define CLASS_2_467DE2317FB82D3D___C___CREATEONTRIGGERENTERCALLBACK_B__6_0_OFFSET UNITYSDK_OFFSET(0x105F33A0)
#define CLASS_2_467DE2317FB82D3D___C___CREATEONTRIGGEREXITCALLBACK_B__7_0_OFFSET UNITYSDK_OFFSET(0x105F33D0)
#define CLASS_2_467DE2317FB82D3D___C___CREATETARGETENTITYFILTER_B__8_0_OFFSET UNITYSDK_OFFSET(0x105F3400)

inline static constexpr unsigned int Class_2_467DE2317FB82D3D___c_TypeDefinitionIndex = 60785;

class Class_2_467DE2317FB82D3D___c : public ::System::Object
{
public:
	static ::System::Func_4<::Class_2_467DE2317FB82D3D*, ::System::ValueTuple_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerTargetType>, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Func_4<::Class_2_467DE2317FB82D3D*, ::System::ValueTuple_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerTargetType>, ::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_467DE2317FB82D3D___c_TypeDefinitionIndex)->GetStaticField(0x46030);
	}
	static ::System::Action_3<::Class_2_467DE2317FB82D3D*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__6_0()
	{
		return (::System::Action_3<::Class_2_467DE2317FB82D3D*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_467DE2317FB82D3D___c_TypeDefinitionIndex)->GetStaticField(0x46038);
	}
	static ::Class_2_467DE2317FB82D3D___c** StaticGet___9()
	{
		return (::Class_2_467DE2317FB82D3D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_467DE2317FB82D3D___c_TypeDefinitionIndex)->GetStaticField(0x46040);
	}
	static ::System::Action_3<::Class_2_467DE2317FB82D3D*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__7_0()
	{
		return (::System::Action_3<::Class_2_467DE2317FB82D3D*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_467DE2317FB82D3D___c_TypeDefinitionIndex)->GetStaticField(0x46048);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_467DE2317FB82D3D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_467DE2317FB82D3D___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateOnTriggerEnterCallback_b__6_0(::Class_2_467DE2317FB82D3D* self, ::Class_2_9DD8A46984F1AFFD* emitter, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_467DE2317FB82D3D*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_467DE2317FB82D3D___C___CREATEONTRIGGERENTERCALLBACK_B__6_0_OFFSET))(this, self, emitter, other);
	}

	::System::Void __CreateOnTriggerExitCallback_b__7_0(::Class_2_467DE2317FB82D3D* self, ::Class_2_9DD8A46984F1AFFD* emitter, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_467DE2317FB82D3D*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_467DE2317FB82D3D___C___CREATEONTRIGGEREXITCALLBACK_B__7_0_OFFSET))(this, self, emitter, other);
	}

	::System::Boolean __CreateTargetEntityFilter_b__8_0(::Class_2_467DE2317FB82D3D* self, ::System::ValueTuple_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerTargetType> ctx, ::UnityEngine::Collider* collider)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_467DE2317FB82D3D*, ::System::ValueTuple_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerTargetType>, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_467DE2317FB82D3D___C___CREATETARGETENTITYFILTER_B__8_0_OFFSET))(this, self, ctx, collider);
	}
};
