#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2RankData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MATCHTHREEV2RANKINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0x1758A070)
#define RPG_CLIENT_MATCHTHREEV2RANKINFOS_GETRANKDATAARRAY_OFFSET UNITYSDK_OFFSET(0x1758ACE0)
#define RPG_CLIENT_MATCHTHREEV2RANKINFOS_GETRANKDATABYID_OFFSET UNITYSDK_OFFSET(0x1758ABD0)
#define RPG_CLIENT_MATCHTHREEV2RANKINFOS_GETRANKDATABYSCORE_OFFSET UNITYSDK_OFFSET(0x17584E70)
#define RPG_CLIENT_MATCHTHREEV2RANKINFOS_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x17589EF0)
#define RPG_CLIENT_MATCHTHREEV2RANKINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1758A130)
#define RPG_CLIENT_MATCHTHREEV2RANKINFOS__INIT_OFFSET UNITYSDK_OFFSET(0x1758A1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2RankInfos_TypeDefinitionIndex = 60786;

	class MatchThreeV2RankInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultiPlayerGameMode, ::Il2CppArray<::RPG::Client::MatchThreeV2RankData*>*>* _DataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS__CTOR_OFFSET))(this);
		}

		::System::UInt32 MaxScore(::RPG::GameCore::MultiPlayerGameMode gameMode)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS_MAXSCORE_OFFSET))(this, gameMode);
		}

		static ::RPG::Client::MatchThreeV2RankInfos* Create()
		{
			return ((::RPG::Client::MatchThreeV2RankInfos*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS_CREATE_OFFSET))();
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS__INIT_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2RankData* GetRankDataByScore(::System::UInt32 score, ::RPG::GameCore::MultiPlayerGameMode gameMode)
		{
			return ((::RPG::Client::MatchThreeV2RankData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::MultiPlayerGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS_GETRANKDATABYSCORE_OFFSET))(this, score, gameMode);
		}

		::RPG::Client::MatchThreeV2RankData* GetRankDataByID(::System::UInt32 id, ::RPG::GameCore::MultiPlayerGameMode gameMode)
		{
			return ((::RPG::Client::MatchThreeV2RankData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::MultiPlayerGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS_GETRANKDATABYID_OFFSET))(this, id, gameMode);
		}

		::Il2CppArray<::RPG::Client::MatchThreeV2RankData*>* GetRankDataArray(::RPG::GameCore::MultiPlayerGameMode gameMode)
		{
			return ((::Il2CppArray<::RPG::Client::MatchThreeV2RankData*>*(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS_GETRANKDATAARRAY_OFFSET))(this, gameMode);
		}
	};
}
