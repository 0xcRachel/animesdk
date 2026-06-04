#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AC82450)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC82F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDivisionStageRow_TypeDefinitionIndex = 12963;

	class GridFightDivisionStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AffixChooseNumList; // 0x10
		::Il2CppArray<::System::UInt32>* EnvironmentBuffList; // 0x18
		::Il2CppArray<::System::String*>* UniqueEnvironmentDescList; // 0x20
		::Il2CppArray<::System::String*>* EnvironmentDescList; // 0x28
		::System::String* JsonPath; // 0x30
		::System::UInt32 ScoreRule; // 0x38
		::System::UInt32 WeeklyScoreModify; // 0x3C
		::RPG::Client::TextID EnvironmentDesc; // 0x40
		::System::UInt32 DivisionID; // 0x50
		::System::UInt32 OCScoreRule; // 0x54
		::RPG::GameCore::FixPoint LevelBaseAttackMultiRatio; // 0x58
		::System::UInt32 SeasonID; // 0x60
		::System::UInt32 ExpModify; // 0x64
		::RPG::GameCore::FixPoint LevelBaseHPMultiRatio; // 0x68
		::System::UInt32 EnemyDifficultyLevel; // 0x70
		::System::UInt32 BinaryNodeDiffAddRule; // 0x74
		::System::UInt32 EnemyHardLevel; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDivisionStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDivisionStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
