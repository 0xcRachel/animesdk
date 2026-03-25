#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8_4;
class Class_1_07CAE938A083FFA0;
class Class_1_08B5ACC5F83BB932;
class Class_1_2B2C39A45CFC5540;
class Class_1_7AB88D713F5121B3_34;
class Class_1_7AB88D713F5121B3_35;
class Class_1_7AB88D713F5121B3_36;
class Class_1_82B09E39D0F93215;
class Class_1_8330F797C50754E5;
class Class_1_A6B0B39A319DDDE2;
class Class_1_B1FF62FAE312BC49;
class Class_1_B66FD2332404CEBB;
namespace RPG::GameCore { class BattleRogueData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class MazeBuffData; }

#define RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xA423AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneMonsterBattleServerCheckResult_TypeDefinitionIndex = 48717;

	class SceneMonsterBattleServerCheckResult : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* avatarlist; // 0x10
		::Il2CppArray<::Class_1_7AB88D713F5121B3_34*>* battleTargetList; // 0x18
		::Class_1_08B5ACC5F83BB932* battleSwordTrainingData; // 0x20
		::Class_1_A6B0B39A319DDDE2* BattleInfo; // 0x28
		::Class_1_B66FD2332404CEBB* battleEvolveBuildData; // 0x30
		::Il2CppArray<::Class_1_7AB88D713F5121B3_34*>* battleScoreList; // 0x38
		::Il2CppArray<::Class_1_07A210D994F284D8_4*>* battleAchievementList; // 0x40
		::Il2CppArray<::Class_1_7AB88D713F5121B3_35*>* battleRaidTargetList; // 0x48
		::Class_1_B1FF62FAE312BC49* AetherDivideBattleInfo; // 0x50
		::Il2CppArray<::Class_1_2B2C39A45CFC5540*>* monsterWaves; // 0x58
		::Class_1_82B09E39D0F93215* battleGridFightData; // 0x60
		::Il2CppArray<::Class_1_07CAE938A083FFA0*>* monsterRewardList; // 0x68
		::Class_1_8330F797C50754E5* battleFateData; // 0x70
		::Il2CppArray<::Class_1_7AB88D713F5121B3_36*>* battleRogueGoalList; // 0x78
		::RPG::GameCore::BattleRogueData* battleRogueData; // 0x80
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* bufflist; // 0x88
		::System::UInt32 battleID; // 0x90
		::System::UInt32 worldLevel; // 0x94
		::RPG::GameCore::RogueMode battleRogueMode; // 0x98
		::System::UInt32 monsterMaxWaveOverride; // 0x9C
		::System::Boolean encryptResult; // 0xA0
		::System::UInt32 battleActionEventId; // 0xA4
		::System::UInt32 stageID; // 0xA8
		::System::UInt32 roundsLimit; // 0xAC
		::System::UInt32 seed; // 0xB0
		::System::UInt32 retcode; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT__CTOR_OFFSET))(this);
		}
	};
}
