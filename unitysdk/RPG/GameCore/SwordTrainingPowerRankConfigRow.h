#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FBF550)
#define RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FBF900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPowerRankConfigRow_TypeDefinitionIndex = 11293;

	class SwordTrainingPowerRankConfigRow : public ::System::Object
	{
	public:
		::System::String* RankIcon; // 0x10
		::System::UInt32 RankID; // 0x18
		::System::UInt32 RankGroupID; // 0x1C
		::RPG::Client::TextID RankGroupName; // 0x20
		::RPG::Client::TextID RankSubName; // 0x30
		::RPG::Client::TextID RankProgressName; // 0x40
		::System::UInt32 UnlockID; // 0x50
		::System::UInt32 PowerRequire; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingPowerRankConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingPowerRankConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPOWERRANKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
