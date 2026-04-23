#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/GameCore/AirlockEvent.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6913162F9B84888B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2C5940)
#define CLASS_2_6913162F9B84888B_DOONENTER_OFFSET UNITYSDK_OFFSET(0xC2C59A0)
#define CLASS_2_6913162F9B84888B_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xC2C5C20)
#define CLASS_2_6913162F9B84888B_METHOD_2_6287030D53179AEE_OFFSET UNITYSDK_OFFSET(0xC2C5A90)
#define CLASS_2_6913162F9B84888B__CTOR_OFFSET UNITYSDK_OFFSET(0xC2C58C0)
#define CLASS_2_6913162F9B84888B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2C5D40)
#define CLASS_2_6913162F9B84888B___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xC2C5D50)
#define CLASS_2_6913162F9B84888B___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xC2C5D60)

inline static constexpr unsigned int Class_2_6913162F9B84888B_TypeDefinitionIndex = 53000;

class Class_2_6913162F9B84888B : public ::Class_1_59305B446B42427E
{
public:
	::UnityEngine::Transform* Field_2_3; // 0x98
	::UnityEngine::Transform* Field_2_2; // 0xA0
	::System::Action_2<::System::Int32, ::RPG::GameCore::AirlockEvent>* Field_2_0; // 0xA8
	::System::Int32 Field_2_1; // 0xB0
	::System::Boolean Field_2_4; // 0xB4

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4, ::System::Action_2<::System::Int32, ::RPG::GameCore::AirlockEvent>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Action_2<::System::Int32, ::RPG::GameCore::AirlockEvent>*))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6287030D53179AEE(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B_METHOD_2_6287030D53179AEE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
