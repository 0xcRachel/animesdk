#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xA29C810)
#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA29C780)
#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA29C7D0)
#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA29C740)
#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA29C6E0)
#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA29C850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCoolDownChange_TypeDefinitionIndex = 44415;

	class AbilityCoolDownChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Int32 _ChangeValue; // 0x18
		::System::Int32 _SkillIndex; // 0x1C
		::System::UInt32 _EntityRuntimeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCoolDownChange* Init(::System::UInt32 EntityRuntimeID, ::System::Int32 SkillIndex, ::System::Int32 ChangeValue)
		{
			return ((::RPG::GameCore::AbilityCoolDownChange*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_INIT_OFFSET))(this, EntityRuntimeID, SkillIndex, ChangeValue);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Int32 GetSkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETSKILLINDEX_OFFSET))(this);
		}

		::System::Int32 GetChangeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}
	};
}
