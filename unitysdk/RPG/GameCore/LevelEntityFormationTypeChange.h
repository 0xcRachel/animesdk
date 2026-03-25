#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA994530)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA9944E0)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_FORMATIONTYPE_OFFSET UNITYSDK_OFFSET(0xA994590)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_ISTEAMCHARACTER_OFFSET UNITYSDK_OFFSET(0xA9945A0)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xA994580)
#define RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9944D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityFormationTypeChange_TypeDefinitionIndex = 45692;

	class LevelEntityFormationTypeChange : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Entity; // 0x10
		::RPG::GameCore::CharacterFormationType _FormationType; // 0x18
		::System::Boolean _IsTeamCharacter; // 0x1C

		::System::Void _ctor(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::CharacterFormationType formationType, ::System::Boolean isTeamCharacter)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterFormationType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE__CTOR_OFFSET))(this, pEntity, formationType, isTeamCharacter);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_SOURCEENTITY_OFFSET))(this);
		}

		::RPG::GameCore::CharacterFormationType get_FormationType()
		{
			return ((::RPG::GameCore::CharacterFormationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_FORMATIONTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsTeamCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYFORMATIONTYPECHANGE_GET_ISTEAMCHARACTER_OFFSET))(this);
		}
	};
}
