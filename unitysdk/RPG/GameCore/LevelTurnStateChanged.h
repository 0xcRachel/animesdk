#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

#define RPG_GAMECORE_LEVELTURNSTATECHANGED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1920C080)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1920C0D0)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1920C140)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_ISUSESKILLONEMORE_OFFSET UNITYSDK_OFFSET(0x1920C160)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_PREVTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1920C120)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_INIT_OFFSET UNITYSDK_OFFSET(0x1920C020)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1920C150)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_ISUSESKILLONEMORE_OFFSET UNITYSDK_OFFSET(0x1920C170)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_PREVTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1920C130)
#define RPG_GAMECORE_LEVELTURNSTATECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1920C180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnStateChanged_TypeDefinitionIndex = 52245;

	class LevelTurnStateChanged : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Boolean _IsUseSkillOneMore_k__BackingField; // 0x18
		::RPG::GameCore::TurnState _CurrentTurnState_k__BackingField; // 0x1C
		::RPG::GameCore::TurnState _PrevTurnState_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnStateChanged* Init(::RPG::GameCore::TurnState ePrevTurnState, ::RPG::GameCore::TurnState eCurrentTurnState, ::System::Boolean isUseSkillOneMore)
		{
			return ((::RPG::GameCore::LevelTurnStateChanged*(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_INIT_OFFSET))(this, ePrevTurnState, eCurrentTurnState, isUseSkillOneMore);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::TurnState get_PrevTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_PREVTURNSTATE_OFFSET))(this);
		}

		::System::Void set_PrevTurnState(::RPG::GameCore::TurnState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_PREVTURNSTATE_OFFSET))(this, value);
		}

		::RPG::GameCore::TurnState get_CurrentTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_CURRENTTURNSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_CURRENTTURNSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsUseSkillOneMore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_GET_ISUSESKILLONEMORE_OFFSET))(this);
		}

		::System::Void set_IsUseSkillOneMore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNSTATECHANGED_SET_ISUSESKILLONEMORE_OFFSET))(this, value);
		}
	};
}
