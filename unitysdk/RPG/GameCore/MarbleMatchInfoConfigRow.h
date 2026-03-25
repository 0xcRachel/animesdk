#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarblePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173A5F20)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173A6870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchInfoConfigRow_TypeDefinitionIndex = 10892;

	class MarbleMatchInfoConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BanSealList; // 0x10
		::Il2CppArray<::System::UInt32>* BNpcIds; // 0x18
		::Il2CppArray<::System::UInt32>* ANpcIds; // 0x20
		::System::UInt32 FirstType; // 0x28
		::System::UInt32 LevelID; // 0x2C
		::System::UInt32 ID; // 0x30
		::System::UInt32 PlayerID; // 0x34
		::System::UInt32 AIRank; // 0x38
		::System::UInt32 CanGoMatchSubMission; // 0x3C
		::System::UInt32 PerformanceID; // 0x40
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 Reward; // 0x58
		::System::UInt32 Round; // 0x5C
		::System::UInt32 CustomID; // 0x60
		::RPG::GameCore::MarblePhaseType PhaseID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleMatchInfoConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMatchInfoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
