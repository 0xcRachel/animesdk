#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8_4;
class Class_1_08B5ACC5F83BB932;
class Class_1_3F916053B9BB8D97;
class Class_1_60D44DC008A2AE94;
class Class_1_7AB88D713F5121B3_43;
class Class_1_7AB88D713F5121B3_44;
class Class_1_7AB88D713F5121B3_45;
class Class_1_82B09E39D0F93215;
class Class_1_B66FD2332404CEBB;
class Class_1_E14A0A1A8B1F847C_1;
class Class_1_E5506B2509E2F0C8;
class Class_1_E591DF54310AABF5;
namespace RPG::GameCore { class BattleRogueData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class MazeBuffData; }

#define RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D58F0)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneMonsterBattleServerCheckResult_TypeDefinitionIndex = 56217;

	class SceneMonsterBattleServerCheckResult : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_7AB88D713F5121B3_44*>* battleRogueGoalList; // 0x10
		::Il2CppArray<::Class_1_07A210D994F284D8_4*>* battleAchievementList; // 0x18
		::Class_1_82B09E39D0F93215* battleGridFightData; // 0x20
		::Il2CppArray<::Class_1_60D44DC008A2AE94*>* monsterRewardList; // 0x28
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* bufflist; // 0x30
		::Class_1_E5506B2509E2F0C8* battleFateData; // 0x38
		::Class_1_E14A0A1A8B1F847C_1* AetherDivideBattleInfo; // 0x40
		::Class_1_08B5ACC5F83BB932* battleSwordTrainingData; // 0x48
		::Class_1_B66FD2332404CEBB* battleEvolveBuildData; // 0x50
		::Il2CppArray<::Class_1_3F916053B9BB8D97*>* monsterWaves; // 0x58
		::Il2CppArray<::Class_1_7AB88D713F5121B3_43*>* battleTargetList; // 0x60
		::Il2CppArray<::Class_1_7AB88D713F5121B3_43*>* battleScoreList; // 0x68
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* avatarlist; // 0x70
		::Class_1_E591DF54310AABF5* BattleInfo; // 0x78
		::Il2CppArray<::Class_1_7AB88D713F5121B3_45*>* battleRaidTargetList; // 0x80
		::RPG::GameCore::BattleRogueData* battleRogueData; // 0x88
		::System::UInt32 monsterMaxWaveOverride; // 0x90
		::System::UInt32 battleActionEventId; // 0x94
		::System::UInt32 seed; // 0x98
		::System::UInt32 retcode; // 0x9C
		::System::UInt32 stageID; // 0xA0
		::System::UInt32 roundsLimit; // 0xA4
		::System::Boolean encryptResult; // 0xA8
		::System::UInt32 battleID; // 0xAC
		::RPG::GameCore::RogueMode battleRogueMode; // 0xB0
		::System::UInt32 worldLevel; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT__CTOR_OFFSET))(this);
		}
	};
}
