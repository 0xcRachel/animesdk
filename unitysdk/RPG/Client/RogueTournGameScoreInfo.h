#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4EB9793B7AA33EF3;
namespace RPG::Client { class RogueTournGameScoreInfoItem; }

#define RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_DIVISIONINFO_OFFSET UNITYSDK_OFFSET(0x9E740F0)
#define RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_ISALLEMPTY_OFFSET UNITYSDK_OFFSET(0x9E74100)
#define RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_ISTALENTCOINEMPTY_OFFSET UNITYSDK_OFFSET(0x9E74230)
#define RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_ROGUESCORE_OFFSET UNITYSDK_OFFSET(0x9E740C0)
#define RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0x9E740D0)
#define RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_TITANTALENTCOIN_OFFSET UNITYSDK_OFFSET(0x9E740E0)
#define RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_TOURNEXP_OFFSET UNITYSDK_OFFSET(0x9E740B0)
#define RPG_CLIENT_ROGUETOURNGAMESCOREINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9E722A0)
#define RPG_CLIENT_ROGUETOURNGAMESCOREINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E70320)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameScoreInfo_TypeDefinitionIndex = 53743;

	class RogueTournGameScoreInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournGameScoreInfoItem* _DivisionInfo_k__BackingField; // 0x10
		::RPG::Client::RogueTournGameScoreInfoItem* _TalentCoin_k__BackingField; // 0x18
		::RPG::Client::RogueTournGameScoreInfoItem* _RogueScore_k__BackingField; // 0x20
		::RPG::Client::RogueTournGameScoreInfoItem* _TitanTalentCoin_k__BackingField; // 0x28
		::RPG::Client::RogueTournGameScoreInfoItem* _TournExp_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCOREINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_4EB9793B7AA33EF3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4EB9793B7AA33EF3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCOREINFO_SYNC_OFFSET))(this, proto);
		}

		::RPG::Client::RogueTournGameScoreInfoItem* get_TournExp()
		{
			return ((::RPG::Client::RogueTournGameScoreInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_TOURNEXP_OFFSET))(this);
		}

		::RPG::Client::RogueTournGameScoreInfoItem* get_RogueScore()
		{
			return ((::RPG::Client::RogueTournGameScoreInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_ROGUESCORE_OFFSET))(this);
		}

		::RPG::Client::RogueTournGameScoreInfoItem* get_TalentCoin()
		{
			return ((::RPG::Client::RogueTournGameScoreInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_TALENTCOIN_OFFSET))(this);
		}

		::RPG::Client::RogueTournGameScoreInfoItem* get_TitanTalentCoin()
		{
			return ((::RPG::Client::RogueTournGameScoreInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_TITANTALENTCOIN_OFFSET))(this);
		}

		::RPG::Client::RogueTournGameScoreInfoItem* get_DivisionInfo()
		{
			return ((::RPG::Client::RogueTournGameScoreInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_DIVISIONINFO_OFFSET))(this);
		}

		::System::Boolean get_IsAllEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_ISALLEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsTalentCoinEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCOREINFO_GET_ISTALENTCOINEMPTY_OFFSET))(this);
		}
	};
}
