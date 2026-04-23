#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournGameDivisionSettleResult; }
namespace RPG::Client { class IRogueTournGameScoreSettleResult; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_GET_DIVISION_OFFSET UNITYSDK_OFFSET(0x1757DCF0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_GET_ROGUESCORE_OFFSET UNITYSDK_OFFSET(0x1757DC70)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_GET_SEASONTALENTCOIN_OFFSET UNITYSDK_OFFSET(0x1757DCD0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_GET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0x1757DCB0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_GET_TOURNEXP_OFFSET UNITYSDK_OFFSET(0x1757DC90)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_ISALLSCORESEMPTY_OFFSET UNITYSDK_OFFSET(0x1757DD10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_ISALLTALENTCOINSEMPTY_OFFSET UNITYSDK_OFFSET(0x1757DDA0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_SET_DIVISION_OFFSET UNITYSDK_OFFSET(0x1757DD00)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_SET_ROGUESCORE_OFFSET UNITYSDK_OFFSET(0x1757DC80)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_SET_SEASONTALENTCOIN_OFFSET UNITYSDK_OFFSET(0x1757DCE0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_SET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0x1757DCC0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_SET_TOURNEXP_OFFSET UNITYSDK_OFFSET(0x1757DCA0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1757DC60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameSettleResultComposition_TypeDefinitionIndex = 62540;

	class RogueTournPersonaGameSettleResultComposition : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournGameScoreSettleResult* _TournExp_k__BackingField; // 0x10
		::RPG::Client::IRogueTournGameScoreSettleResult* _SeasonTalentCoin_k__BackingField; // 0x18
		::RPG::Client::IRogueTournGameDivisionSettleResult* _Division_k__BackingField; // 0x20
		::RPG::Client::IRogueTournGameScoreSettleResult* _RogueScore_k__BackingField; // 0x28
		::RPG::Client::IRogueTournGameScoreSettleResult* _TalentCoin_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION__CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_RogueScore()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_GET_ROGUESCORE_OFFSET))(this);
		}

		::System::Void set_RogueScore(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_SET_ROGUESCORE_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_TournExp()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_GET_TOURNEXP_OFFSET))(this);
		}

		::System::Void set_TournExp(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_SET_TOURNEXP_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_TalentCoin()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_GET_TALENTCOIN_OFFSET))(this);
		}

		::System::Void set_TalentCoin(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_SET_TALENTCOIN_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameScoreSettleResult* get_SeasonTalentCoin()
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_GET_SEASONTALENTCOIN_OFFSET))(this);
		}

		::System::Void set_SeasonTalentCoin(::RPG::Client::IRogueTournGameScoreSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameScoreSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_SET_SEASONTALENTCOIN_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournGameDivisionSettleResult* get_Division()
		{
			return ((::RPG::Client::IRogueTournGameDivisionSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_GET_DIVISION_OFFSET))(this);
		}

		::System::Void set_Division(::RPG::Client::IRogueTournGameDivisionSettleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGameDivisionSettleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_SET_DIVISION_OFFSET))(this, value);
		}

		::System::Boolean IsAllScoresEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_ISALLSCORESEMPTY_OFFSET))(this);
		}

		::System::Boolean IsAllTalentCoinsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESETTLERESULTCOMPOSITION_ISALLTALENTCOINSEMPTY_OFFSET))(this);
		}
	};
}
