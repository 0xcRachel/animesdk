#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x14704540)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhaseInitParams_TypeDefinitionIndex = 56235;

	class BattleGamePhaseInitParams : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleLineupData* LineupData; // 0x10
		::System::Object* ExtraData; // 0x18
		::RPG::GameCore::BattleAreaReferenceInfo* BattleAreaInfo; // 0x20
		::System::String* BattleSceneName; // 0x28
		::RPG::Client::Map* ADVMap; // 0x30
		::System::Boolean IsClientBattle; // 0x38
		::System::Boolean Simulate; // 0x39
		::System::Boolean IsFromRestart; // 0x3A
		::System::Boolean EncryptTime; // 0x3B
		::System::Boolean AutoBattleAtStart; // 0x3C
		::System::Boolean TriggerBattleFromDevPage; // 0x3D
		::System::UInt32 FloorID; // 0x40
		::System::Boolean DirectKillBattle; // 0x44
		::System::Boolean IsForceLoadScene; // 0x45
		::System::Boolean IsShowBattleUI; // 0x46
		::System::UInt32 RoundsLimit; // 0x48
		::System::UInt32 PlanID; // 0x4C
		::System::Int32 LogicRandomSeed; // 0x50
		::RPG::Client::GamePhaseType FromPhaseType; // 0x54
		::UnityEngine::Vector3 CoordinatePos; // 0x58
		::System::UInt32 BattleID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
