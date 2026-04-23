#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseEventActionSystem_1.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace UnityEngine { class Collider; }

#define CLASS_2_667CD5D0F948A1A3_DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0xF11F200)
#define CLASS_2_667CD5D0F948A1A3_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF11E100)
#define CLASS_2_667CD5D0F948A1A3_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF11F1A0)
#define CLASS_2_667CD5D0F948A1A3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF11DF80)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_1_OFFSET UNITYSDK_OFFSET(0xF120A50)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_OFFSET UNITYSDK_OFFSET(0xF11FD50)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_2C1C2A8E63DB0F10_OFFSET UNITYSDK_OFFSET(0xF11E330)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_804997BCC0F4E1CC_OFFSET UNITYSDK_OFFSET(0xF11F9D0)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_A7FF6AA8FA2F7FEB_OFFSET UNITYSDK_OFFSET(0xF11DD80)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_B68BB63C6CEE57D3_OFFSET UNITYSDK_OFFSET(0xF11EE80)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_1_OFFSET UNITYSDK_OFFSET(0xF11F8B0)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_OFFSET UNITYSDK_OFFSET(0xF11F790)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C90E1F90D339319B_OFFSET UNITYSDK_OFFSET(0xF11FF50)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_CA2591FD8BD71D0D_OFFSET UNITYSDK_OFFSET(0xF11EDA0)
#define CLASS_2_667CD5D0F948A1A3_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xF11EA30)
#define CLASS_2_667CD5D0F948A1A3__ADDEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0xF11F260)
#define CLASS_2_667CD5D0F948A1A3__CTOR_OFFSET UNITYSDK_OFFSET(0xF11D730)
#define CLASS_2_667CD5D0F948A1A3__REMOVEEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0xF11FBE0)
#define CLASS_2_667CD5D0F948A1A3__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xF11EBF0)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF120C60)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF120C50)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xF120C70)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xF120C80)

inline static constexpr unsigned int Class_2_667CD5D0F948A1A3_TypeDefinitionIndex = 70798;

class Class_2_667CD5D0F948A1A3 : public ::RPG::Client::LittleGame::FiveDim::BaseEventActionSystem_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x50
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_2_2; // 0x58
	::Class_1_24C2E7EF22229C6A* Field_2_0; // 0x60

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_TEARDOWN_OFFSET))(this);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_2_A7FF6AA8FA2F7FEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_A7FF6AA8FA2F7FEB_OFFSET))(this);
	}

	::System::Void Method_2_CA2591FD8BD71D0D(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_CA2591FD8BD71D0D_OFFSET))(this, a1, a2);
	}

	::Class_2_9DD8A46984F1AFFD* GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::System::Void DestroyEntity(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_DESTROYENTITY_OFFSET))(this, a1);
	}

	::System::Void _AddEventEmitter(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__ADDEVENTEMITTER_OFFSET))(this, a1);
	}

	::System::Void _RemoveEventEmitter(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__REMOVEEVENTEMITTER_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C1C2A8E63DB0F10(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_2C1C2A8E63DB0F10_OFFSET))(this, a1);
	}

	::System::Void Method_2_B68BB63C6CEE57D3(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_B68BB63C6CEE57D3_OFFSET))(this, a1);
	}

	::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> Method_2_C7DC8D1E27773822(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
	{
		return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_OFFSET))(this, a1, a2);
	}

	::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> Method_2_C7DC8D1E27773822_1(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
	{
		return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_1_OFFSET))(this, a1, a2);
	}

	::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> Method_2_804997BCC0F4E1CC(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerTargetType a2)
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean>(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_804997BCC0F4E1CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_04BCA3530BFAFEC8(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_04BCA3530BFAFEC8_1(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_C90E1F90D339319B(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2, ::RPG::GameCore::FiveDimTriggerTargetType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C90E1F90D339319B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_INITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_EXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_TEARDOWN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}
};
