#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeRarityType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreFinishType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEV2PVPSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C3E450)
#define RPG_GAMECORE_MATCHTHREEV2PVPSCOREROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3E9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2PVPScoreRow_TypeDefinitionIndex = 11394;

	class MatchThreeV2PVPScoreRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* FixedScoreMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* ParamMap; // 0x18
		::Il2CppArray<::RPG::GameCore::MultiPlayerGameMode>* GameModeList; // 0x20
		::RPG::Client::TextID Desc; // 0x28
		::System::UInt32 ScoreID; // 0x38
		::System::Int32 Param; // 0x3C
		::System::UInt32 ActivityID; // 0x40
		::RPG::GameCore::MatchThreeRarityType Rarity; // 0x44
		::RPG::GameCore::MatchThreeScoreType Type; // 0x48
		::RPG::GameCore::MatchThreeScoreFinishType FinishType; // 0x4C
		::RPG::Client::TextID Title; // 0x50
		::RPG::Client::TextID Title2; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2PVPSCOREROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeV2PVPScoreRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2PVPScoreRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2PVPSCOREROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
