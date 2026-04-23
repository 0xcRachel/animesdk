#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8_4;
class Class_1_08B5ACC5F83BB932;
class Class_1_14E02E1F6D70E487_1;
class Class_1_2B2C39A45CFC5540;
class Class_1_7AB88D713F5121B3_43;
class Class_1_7AB88D713F5121B3_44;
class Class_1_7AB88D713F5121B3_45;
class Class_1_82B09E39D0F93215;
class Class_1_8330F797C50754E5;
class Class_1_B241F72EA9D7627A;
class Class_1_B66FD2332404CEBB;
class Class_1_E14A0A1A8B1F847C_1;
namespace RPG::GameCore { class BattleRogueData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class MazeBuffData; }

#define RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x15BCECE0)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneMonsterBattleServerCheckResult_TypeDefinitionIndex = 55466;

	class SceneMonsterBattleServerCheckResult : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_B241F72EA9D7627A*>* monsterRewardList; // 0x10
		::RPG::GameCore::BattleRogueData* battleRogueData; // 0x18
		::Il2CppArray<::Class_1_07A210D994F284D8_4*>* battleAchievementList; // 0x20
		::Class_1_82B09E39D0F93215* battleGridFightData; // 0x28
		::Il2CppArray<::Class_1_7AB88D713F5121B3_44*>* battleRaidTargetList; // 0x30
		::Class_1_E14A0A1A8B1F847C_1* AetherDivideBattleInfo; // 0x38
		::Class_1_08B5ACC5F83BB932* battleSwordTrainingData; // 0x40
		::Il2CppArray<::Class_1_7AB88D713F5121B3_43*>* battleScoreList; // 0x48
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* avatarlist; // 0x50
		::Il2CppArray<::Class_1_2B2C39A45CFC5540*>* monsterWaves; // 0x58
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* bufflist; // 0x60
		::Class_1_8330F797C50754E5* battleFateData; // 0x68
		::Class_1_B66FD2332404CEBB* battleEvolveBuildData; // 0x70
		::Class_1_14E02E1F6D70E487_1* BattleInfo; // 0x78
		::Il2CppArray<::Class_1_7AB88D713F5121B3_45*>* battleRogueGoalList; // 0x80
		::Il2CppArray<::Class_1_7AB88D713F5121B3_43*>* battleTargetList; // 0x88
		::System::UInt32 battleID; // 0x90
		::System::UInt32 monsterMaxWaveOverride; // 0x94
		::System::UInt32 battleActionEventId; // 0x98
		::System::UInt32 worldLevel; // 0x9C
		::System::UInt32 seed; // 0xA0
		::RPG::GameCore::RogueMode battleRogueMode; // 0xA4
		::System::UInt32 roundsLimit; // 0xA8
		::System::Boolean encryptResult; // 0xAC
		::System::UInt32 stageID; // 0xB0
		::System::UInt32 retcode; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT__CTOR_OFFSET))(this);
		}
	};
}
