#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/System/Object.h"

class Class_1_BB3B9C6F3C34D789;
class Class_1_F381659723E3F143_1;
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPLAYERCAREERDATA_ADD_ONMATCHPLAYDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x98D3F80)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEARMATCHPLAYDATAUPDATEDLISTENER_OFFSET UNITYSDK_OFFSET(0x98D4ED0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x98D4E40)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_FRIENDRANKINGINFOPROMISED_OFFSET UNITYSDK_OFFSET(0x98D4040)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSELFRANKINGINFO_OFFSET UNITYSDK_OFFSET(0x98D4F20)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSORTEDFRIENDRANKINGINFOLIST_OFFSET UNITYSDK_OFFSET(0x98D4F60)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GET__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x98D4230)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_MATCHPLAYDATAREFRESHED_OFFSET UNITYSDK_OFFSET(0x98D4470)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_REMOVE_ONMATCHPLAYDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x98D3FE0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEFRIENDRANKINGLIST_OFFSET UNITYSDK_OFFSET(0x98D46B0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEMATCHPLAYDATA_OFFSET UNITYSDK_OFFSET(0x98D4600)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATESELFRANKINGINFO_OFFSET UNITYSDK_OFFSET(0x98D4C90)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98D3F40)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__ENSURESORTED_OFFSET UNITYSDK_OFFSET(0x98D4C30)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__ONGETFRIENDRANKINGINFORSP_OFFSET UNITYSDK_OFFSET(0x98D51F0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETFRIENDRANKINGINFOREQ_OFFSET UNITYSDK_OFFSET(0x98D4350)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETMATCHPLAYDATAREQ_OFFSET UNITYSDK_OFFSET(0x98D44F0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SORTANDSETRANKS_OFFSET UNITYSDK_OFFSET(0x98D5020)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerCareerData_TypeDefinitionIndex = 52790;

	class MultiplayerCareerData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _RANK_REQUEST_INTERVAL = 0x3C; // 0x0
		::System::Action_1<::RPG::Client::MatchPlayRecord*>* OnMatchPlayDataUpdated; // 0x10
		::RPG::Client::FriendRankingInfo* _SelfRankingInfo; // 0x18
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>* _FriendRankingInfoPromise; // 0x20
		::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>* _MatchPlayDataPromise; // 0x28
		::RPG::Client::MatchPlayRecord* _MatchPlayData; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* _RankInfoList; // 0x38
		::Enum_3_F80BFD5B986D5503_4 _GameMode; // 0x40
		::System::Boolean _needsSort; // 0x44
		::System::UInt32 _RankRspTimeStamp; // 0x48

		::System::Void _ctor(::Enum_3_F80BFD5B986D5503_4 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__CTOR_OFFSET))(this, gameMode);
		}

		::System::Void add_OnMatchPlayDataUpdated(::System::Action_1<::RPG::Client::MatchPlayRecord*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MatchPlayRecord*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_ADD_ONMATCHPLAYDATAUPDATED_OFFSET))(this, value);
		}

		::System::Void remove_OnMatchPlayDataUpdated(::System::Action_1<::RPG::Client::MatchPlayRecord*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MatchPlayRecord*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_REMOVE_ONMATCHPLAYDATAUPDATED_OFFSET))(this, value);
		}

		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>* FriendRankingInfoPromised()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_FRIENDRANKINGINFOPROMISED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>* MatchPlayDataRefreshed()
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_MATCHPLAYDATAREFRESHED_OFFSET))(this);
		}

		::System::Void UpdateMatchPlayData(::Class_1_BB3B9C6F3C34D789* matchPlayData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB3B9C6F3C34D789*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEMATCHPLAYDATA_OFFSET))(this, matchPlayData);
		}

		::System::Void UpdateFriendRankingList(::System::Collections::Generic::IEnumerable_1<::Class_1_F381659723E3F143_1*>* rankingList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F381659723E3F143_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEFRIENDRANKINGLIST_OFFSET))(this, rankingList);
		}

		::System::Void UpdateSelfRankingInfo(::Class_1_F381659723E3F143_1* rankingInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F381659723E3F143_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATESELFRANKINGINFO_OFFSET))(this, rankingInfo);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEAR_OFFSET))(this);
		}

		::System::Void ClearMatchPlayDataUpdatedListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEARMATCHPLAYDATAUPDATEDLISTENER_OFFSET))(this);
		}

		::RPG::Client::FriendRankingInfo* GetSelfRankingInfo()
		{
			return ((::RPG::Client::FriendRankingInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSELFRANKINGINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* GetSortedFriendRankingInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSORTEDFRIENDRANKINGINFOLIST_OFFSET))(this);
		}

		::System::Void _SendGetFriendRankingInfoReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETFRIENDRANKINGINFOREQ_OFFSET))(this);
		}

		::System::Void _SendGetMatchPlayDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETMATCHPLAYDATAREQ_OFFSET))(this);
		}

		::System::Void _EnsureSorted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__ENSURESORTED_OFFSET))(this);
		}

		::System::Void _SortAndSetRanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__SORTANDSETRANKS_OFFSET))(this);
		}

		::System::Void _OnGetFriendRankingInfoRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__ONGETFRIENDRANKINGINFORSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean get__IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_GET__ISEXPIRED_OFFSET))(this);
		}
	};
}
