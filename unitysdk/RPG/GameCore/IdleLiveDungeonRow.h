#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEDUNGEONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A88870)
#define RPG_GAMECORE_IDLELIVEDUNGEONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A88EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveDungeonRow_TypeDefinitionIndex = 11177;

	class IdleLiveDungeonRow : public ::System::Object
	{
	public:
		::System::String* BGMState; // 0x10
		::System::String* MonsterFigure; // 0x18
		::Il2CppArray<::RPG::GameCore::ILBattleAvatarTag>* RecommondTagList; // 0x20
		::System::String* BossFigurePath; // 0x28
		::System::String* BossIconPath; // 0x30
		::RPG::Client::TextID Desc; // 0x38
		::System::UInt32 ID; // 0x48
		::System::UInt32 UnlockChapterIndex; // 0x4C
		::System::UInt32 StageID; // 0x50
		::System::UInt32 ChatPhase; // 0x54
		::System::UInt32 RewardID; // 0x58
		::System::UInt32 IncomeHpProgress; // 0x5C
		::System::UInt32 TicketPerHourIncrease; // 0x60
		::RPG::Client::TextID Name; // 0x68
		::System::UInt32 CrystalPerHourIncrease; // 0x78
		::System::UInt32 MaxHpProgress; // 0x7C
		::System::UInt32 BattleTime; // 0x80
		::System::UInt32 ChestPerHourIncrease; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEDUNGEONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveDungeonRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveDungeonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEDUNGEONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
