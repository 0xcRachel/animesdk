#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SummonUnitUniqueGroup.h"
#include "unitysdk/RPG/GameCore/SummonerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D85520)
#define RPG_GAMECORE_SUMMONUNITDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D85930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitDataRow_TypeDefinitionIndex = 14402;

	class SummonUnitDataRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::Boolean IsClient; // 0x18
		::System::Boolean IsTeamSummon; // 0x19
		::System::Boolean DestroyOnEnterBattle; // 0x1A
		::System::Boolean RemoveMazeBuffOnDestroy; // 0x1B
		::RPG::Client::TextID DefaultName; // 0x20
		::System::UInt32 ID; // 0x30
		::RPG::GameCore::SummonUnitUniqueGroup UniqueGroup; // 0x34
		::System::UInt32 MaxSummonCount; // 0x38
		::RPG::GameCore::SummonerType SummonerType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SummonUnitDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
