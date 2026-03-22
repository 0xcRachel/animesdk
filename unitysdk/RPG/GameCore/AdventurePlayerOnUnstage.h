#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA31C050)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETONSTAGEENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA31C0E0)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA31C0A0)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xA31C120)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GET_ONSTAGEENTITYID_OFFSET UNITYSDK_OFFSET(0xA31C140)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0xA31BFF0)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xA31C130)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_SET_ONSTAGEENTITYID_OFFSET UNITYSDK_OFFSET(0xA31C150)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA31C160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerOnUnstage_TypeDefinitionIndex = 44444;

	class AdventurePlayerOnUnstage : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 _EntityID_k__BackingField; // 0x18
		::System::UInt32 _OnStageEntityID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePlayerOnUnstage* Init(::System::UInt32 eid, ::System::UInt32 nextEntityID)
		{
			return ((::RPG::GameCore::AdventurePlayerOnUnstage*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_INIT_OFFSET))(this, eid, nextEntityID);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 GetOnStageEntityRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETONSTAGEENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_SET_ENTITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_OnStageEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GET_ONSTAGEENTITYID_OFFSET))(this);
		}

		::System::Void set_OnStageEntityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_SET_ONSTAGEENTITYID_OFFSET))(this, value);
		}
	};
}
