#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x17019C50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GETRANKUPPROGRESS_OFFSET UNITYSDK_OFFSET(0x17019DC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_BIGRANKICON_OFFSET UNITYSDK_OFFSET(0x17019EF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x17019F20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x17019E40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ISRANKMAX_OFFSET UNITYSDK_OFFSET(0x17019F10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x17019BD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MINSCORE_OFFSET UNITYSDK_OFFSET(0x17019D50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17019E80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANKICON_OFFSET UNITYSDK_OFFSET(0x17019EB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x17019E60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_SMALLRANKICON_OFFSET UNITYSDK_OFFSET(0x17019ED0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_INIT_OFFSET UNITYSDK_OFFSET(0x170134E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_REFRESHSCORE_OFFSET UNITYSDK_OFFSET(0x17019CC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_SET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x17019F30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x170134D0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPRankInfo_TypeDefinitionIndex = 68964;

	class MarblePVPRankInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::MarblePVPRankConfigRow* _NextRankConfg; // 0x10
		::RPG::GameCore::MarblePVPRankConfigRow* _CurRankConfig; // 0x18
		::RPG::GameCore::MultiPlayerGameMode _GameMode; // 0x20
		::System::UInt32 _CurScore_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::GameCore::MultiPlayerGameMode gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO__CTOR_OFFSET))(this, gameMode);
		}

		::System::Void Init(::System::UInt32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_INIT_OFFSET))(this, score);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPRankInfo* Create(::RPG::GameCore::MultiPlayerGameMode gameMode, ::System::UInt32 score)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPRankInfo*(*)(::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_CREATE_OFFSET))(gameMode, score);
		}

		::System::Void RefreshScore(::System::UInt32 newScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_REFRESHSCORE_OFFSET))(this, newScore);
		}

		::System::Single GetRankUpProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GETRANKUPPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANK_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_NAME_OFFSET))(this);
		}

		::System::String* get_RankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANKICON_OFFSET))(this);
		}

		::System::String* get_SmallRankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_SMALLRANKICON_OFFSET))(this);
		}

		::System::String* get_BigRankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_BIGRANKICON_OFFSET))(this);
		}

		::System::UInt32 get_MinScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MINSCORE_OFFSET))(this);
		}

		::System::UInt32 get_MaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MAXSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsRankMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ISRANKMAX_OFFSET))(this);
		}

		::System::UInt32 get_CurScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_CURSCORE_OFFSET))(this);
		}

		::System::Void set_CurScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_SET_CURSCORE_OFFSET))(this, value);
		}
	};
}
