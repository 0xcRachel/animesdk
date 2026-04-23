#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF2A1AD0)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF2A1B20)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0xF2A1B90)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_PREVTURNSTATE_OFFSET UNITYSDK_OFFSET(0xF2A1B70)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xF2A1A70)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0xF2A1BA0)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_PREVTURNSTATE_OFFSET UNITYSDK_OFFSET(0xF2A1B80)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xF2A1BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBeforeTurnStateChange_TypeDefinitionIndex = 52244;

	class LevelBeforeTurnStateChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::TurnState _CurrentTurnState_k__BackingField; // 0x18
		::RPG::GameCore::TurnState _PrevTurnState_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBeforeTurnStateChange* Init(::RPG::GameCore::TurnState ePrevTurnState, ::RPG::GameCore::TurnState eCurrentTurnState)
		{
			return ((::RPG::GameCore::LevelBeforeTurnStateChange*(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_INIT_OFFSET))(this, ePrevTurnState, eCurrentTurnState);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::TurnState get_PrevTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_PREVTURNSTATE_OFFSET))(this);
		}

		::System::Void set_PrevTurnState(::RPG::GameCore::TurnState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_PREVTURNSTATE_OFFSET))(this, value);
		}

		::RPG::GameCore::TurnState get_CurrentTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_CURRENTTURNSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_CURRENTTURNSTATE_OFFSET))(this, value);
		}
	};
}
