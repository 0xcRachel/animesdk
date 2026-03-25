#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/ControlTimelineEntityEvent.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0xA84CDE0)
#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA84CE80)
#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA84CE30)
#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA84CD70)
#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA84CED0)
#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA84CEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureControlTimelineEntityEvent_TypeDefinitionIndex = 45546;

	class AdventureControlTimelineEntityEvent : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::String* StateName; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20
		::RPG::GameCore::ControlTimelineEntityEvent ControlEventType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureControlTimelineEntityEvent* Init(::RPG::GameCore::GameEntity* target, ::RPG::GameCore::ControlTimelineEntityEvent entityEventType, ::System::String* newStateName)
		{
			return ((::RPG::GameCore::AdventureControlTimelineEntityEvent*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ControlTimelineEntityEvent, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_INIT_OFFSET))(this, target, entityEventType, newStateName);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
