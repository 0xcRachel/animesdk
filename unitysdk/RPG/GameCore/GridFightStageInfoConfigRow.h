#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B8C510)
#define RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B8CBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageInfoConfigRow_TypeDefinitionIndex = 11055;

	class GridFightStageInfoConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ThresholdBonusList; // 0x10
		::Il2CppArray<::System::UInt32>* CardStolenList; // 0x18
		::Il2CppArray<::System::UInt32>* VictoryBonusList; // 0x20
		::System::UInt32 MinionProgressValue; // 0x28
		::System::UInt32 WaveIndex; // 0x2C
		::RPG::GameCore::FixPoint TotalTurn; // 0x30
		::RPG::GameCore::FixPoint AvatarReviveDelayLose; // 0x38
		::System::UInt32 BossProgressValue; // 0x40
		::System::UInt32 EliteProgressValue; // 0x44
		::RPG::Client::TextID StageDescription; // 0x48
		::System::UInt32 StageRuleID; // 0x58
		::System::UInt32 MinionGlobalHPLose; // 0x5C
		::System::UInt32 ThresholdFailGlobalHPLose; // 0x60
		::System::UInt32 ThresholdPassBasicGlobalHPLose; // 0x64
		::System::UInt32 EliteGlobalHPLose; // 0x68
		::RPG::GameCore::FixPoint ThresholdPosition; // 0x70
		::System::UInt32 StageID; // 0x78
		::System::UInt32 BossGlobalHPLose; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightStageInfoConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightStageInfoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
