#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleFailureTipType.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEFAILURETIPSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187AAC80)
#define RPG_GAMECORE_BATTLEFAILURETIPSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187AB2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleFailureTipsConfigRow_TypeDefinitionIndex = 12159;

	class BattleFailureTipsConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WorldList; // 0x10
		::Il2CppArray<::System::UInt32>* MainMissionUnfinishForce; // 0x18
		::Il2CppArray<::System::UInt32>* PlayerLevel; // 0x20
		::Il2CppArray<::System::String*>* CustomStringList; // 0x28
		::Il2CppArray<::System::UInt32>* MainMissionFinishForce; // 0x30
		::Il2CppArray<::System::UInt32>* MonsterTemplateIDList; // 0x38
		::Il2CppArray<::System::UInt32>* MazebuffIDList; // 0x40
		::Il2CppArray<::System::UInt32>* StageIDForce; // 0x48
		::Il2CppArray<::RPG::GameCore::StageType>* StageTypeForce; // 0x50
		::Il2CppArray<::System::UInt32>* MainMissionTakenForce; // 0x58
		::Il2CppArray<::RPG::GameCore::GameModeType>* GameModeList; // 0x60
		::System::UInt32 Priority; // 0x68
		::RPG::GameCore::BattleFailureTipType Type; // 0x6C
		::RPG::Client::TextID TipContent; // 0x70
		::System::UInt32 BattleFailureTipID; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFAILURETIPSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleFailureTipsConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleFailureTipsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFAILURETIPSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
