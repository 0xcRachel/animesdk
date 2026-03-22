#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreeV2PVPRankRow; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEV2RANKDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9692060)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9691FB0)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9691C50)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_LARGEICONPATH_OFFSET UNITYSDK_OFFSET(0x9691DC0)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MAXSCOREEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x9691E90)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MAXSCOREINCLUSIVE_OFFSET UNITYSDK_OFFSET(0x9691F30)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MEDIUMICONPATH_OFFSET UNITYSDK_OFFSET(0x9691D50)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MINSCORE_OFFSET UNITYSDK_OFFSET(0x9691E30)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x967AC50)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x9691CE0)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9691C60)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9691BF0)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_SETUPNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x9692010)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9691FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2RankData_TypeDefinitionIndex = 52505;

	class MatchThreeV2RankData : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeV2RankData* _PrevRankData; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 rankID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA__CTOR_OFFSET))(this, rankID);
		}

		::RPG::GameCore::MatchThreeV2PVPRankRow* get__Row()
		{
			return ((::RPG::GameCore::MatchThreeV2PVPRankRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_RANK_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_MediumIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MEDIUMICONPATH_OFFSET))(this);
		}

		::System::String* get_LargeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_LARGEICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_MinScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MINSCORE_OFFSET))(this);
		}

		::System::UInt32 get_MaxScoreInclusive()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MAXSCOREINCLUSIVE_OFFSET))(this);
		}

		::System::UInt32 get_MaxScoreExclusive()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MAXSCOREEXCLUSIVE_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2RankData* Create(::RPG::GameCore::MatchThreeV2PVPRankRow* row)
		{
			return ((::RPG::Client::MatchThreeV2RankData*(*)(::RPG::GameCore::MatchThreeV2PVPRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_CREATE_OFFSET))(row);
		}

		::System::Void SetupNeighbors(::RPG::Client::MatchThreeV2RankData* prevRankData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2RankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_SETUPNEIGHBORS_OFFSET))(this, prevRankData);
		}

		::System::Int32 CompareTo(::RPG::Client::MatchThreeV2RankData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeV2RankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_COMPARETO_OFFSET))(this, other);
		}
	};
}
