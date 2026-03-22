#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2RankData; }

#define RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_CREATE_OFFSET UNITYSDK_OFFSET(0x9676040)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_GET_LASTRANKDATA_OFFSET UNITYSDK_OFFSET(0x9676670)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_GET_LASTSCORE_OFFSET UNITYSDK_OFFSET(0x9676400)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_GET_RANKDATA_OFFSET UNITYSDK_OFFSET(0x9676420)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x96763E0)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_SET_LASTSCORE_OFFSET UNITYSDK_OFFSET(0x9676410)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x96763F0)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_SYNCSCORE_OFFSET UNITYSDK_OFFSET(0x9676750)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER__CTOR_OFFSET UNITYSDK_OFFSET(0x9676740)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeRoyalePlayerPvpCareer_TypeDefinitionIndex = 52548;

	class MatchThreeRoyalePlayerPvpCareer : public ::System::Object
	{
	public:
		::System::UInt32 _Score_k__BackingField; // 0x10
		::System::UInt32 _LastScore_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_SET_SCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_LastScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_GET_LASTSCORE_OFFSET))(this);
		}

		::System::Void set_LastScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_SET_LASTSCORE_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2RankData* get_RankData()
		{
			return ((::RPG::Client::MatchThreeV2RankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_GET_RANKDATA_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2RankData* get_LastRankData()
		{
			return ((::RPG::Client::MatchThreeV2RankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_GET_LASTRANKDATA_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeRoyalePlayerPvpCareer* Create()
		{
			return ((::RPG::Client::MatchThreeRoyalePlayerPvpCareer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_CREATE_OFFSET))();
		}

		::System::Void SyncScore(::System::UInt32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERPVPCAREER_SYNCSCORE_OFFSET))(this, score);
		}
	};
}
