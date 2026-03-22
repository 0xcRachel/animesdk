#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_14;
class Class_1_FA34F6BE161ACBE6_5;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildManager; }
namespace RPG::Client::TrainParty { class TrainPartyCardAnimInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingCategoryInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingData; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingPassengerCardInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingRankInfo; }
namespace RPG::Client::TrainParty { class TrainPartySkillAnimInfo; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_ADDNEWCARDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA0E8C20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_CHECKISUSEDBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA0EC1B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETPLAYCARDBRIEFINFOLIST_OFFSET UNITYSDK_OFFSET(0xA0EC340)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETPLAYSKILLBRIEFINFOLIST_OFFSET UNITYSDK_OFFSET(0xA0EC380)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xA0EC3C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETUNLOCKSTEPIDLIST_OFFSET UNITYSDK_OFFSET(0xA0EC400)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETUSEDPASSENGERCARDLIST_OFFSET UNITYSDK_OFFSET(0xA0EC300)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_BUILDMGR_OFFSET UNITYSDK_OFFSET(0xA0EC540)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_FINALBUILDCOINTCNT_OFFSET UNITYSDK_OFFSET(0xA0EC600)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_GOTBUILDCOINCNT_OFFSET UNITYSDK_OFFSET(0xA0EC570)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_MATCHCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0xA0EC520)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_OLDSCORE_OFFSET UNITYSDK_OFFSET(0xA0EC500)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_ORIGINBUILDCOINCNT_OFFSET UNITYSDK_OFFSET(0xA0EC590)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xA0EC640)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xA0EC4E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_ISNEWCARD_OFFSET UNITYSDK_OFFSET(0xA0EC480)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SETUSEDPASSENGERCARDINFOS_OFFSET UNITYSDK_OFFSET(0xA0E9AD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_GOTBUILDCOINCNT_OFFSET UNITYSDK_OFFSET(0xA0EC580)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_MATCHCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0xA0EC530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_OLDSCORE_OFFSET UNITYSDK_OFFSET(0xA0EC510)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xA0EC4F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA0E8830)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E9A00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO__REFRESHSETTLEINFO_OFFSET UNITYSDK_OFFSET(0xA0EC120)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingResultInfo_TypeDefinitionIndex = 59369;

	class TrainPartyMeetingResultInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NewCardUniqueIDList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* _PlaySkillAnimList; // 0x18
		::System::Collections::Generic::IList_1<::System::UInt32>* _UnlockStepIDList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItemDataList; // 0x28
		::RPG::Client::TrainParty::TrainPartyMeetingData* _Owner; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* _UsedPassengerCardList; // 0x38
		::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo* _MatchCategoryInfo_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardAnimInfo*>* _PlayCardAnimList; // 0x48
		::System::UInt32 _GotBuildCoinCnt_k__BackingField; // 0x50
		::System::UInt32 _Score_k__BackingField; // 0x54
		::System::UInt32 _OldScore_k__BackingField; // 0x58

		::System::Void _ctor(::RPG::Client::TrainParty::TrainPartyMeetingData* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO__CTOR_OFFSET))(this, owner);
		}

		::System::Void Sync(::Class_1_C9DFE5EE7107C629_14* resultInfo, ::System::UInt32 oldScore)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_14*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SYNC_OFFSET))(this, resultInfo, oldScore);
		}

		::System::Void SetUsedPassengerCardInfos(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* cardInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SETUSEDPASSENGERCARDINFOS_OFFSET))(this, cardInfoList);
		}

		::System::Void AddNewCardUniqueID(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_ADDNEWCARDUNIQUEID_OFFSET))(this, id);
		}

		::System::Boolean CheckIsUsedByUniqueID(::System::UInt32 uniqueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_CHECKISUSEDBYUNIQUEID_OFFSET))(this, uniqueID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* GetUsedPassengerCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETUSEDPASSENGERCARDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardAnimInfo*>* GetPlayCardBriefInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardAnimInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETPLAYCARDBRIEFINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* GetPlaySkillBriefInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETPLAYSKILLBRIEFINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETREWARDITEMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* GetUnlockStepIDList()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETUNLOCKSTEPIDLIST_OFFSET))(this);
		}

		::System::Boolean IsNewCard(::System::UInt32 uniqueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_ISNEWCARD_OFFSET))(this, uniqueID);
		}

		::System::Void _RefreshSettleInfo(::Class_1_FA34F6BE161ACBE6_5* settleResult)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA34F6BE161ACBE6_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO__REFRESHSETTLEINFO_OFFSET))(this, settleResult);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_SCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_OldScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_OLDSCORE_OFFSET))(this);
		}

		::System::Void set_OldScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_OLDSCORE_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo* get_MatchCategoryInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_MATCHCATEGORYINFO_OFFSET))(this);
		}

		::System::Void set_MatchCategoryInfo(::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_MATCHCATEGORYINFO_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyBuildManager* get_BuildMgr()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_BUILDMGR_OFFSET))(this);
		}

		::System::UInt32 get_GotBuildCoinCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_GOTBUILDCOINCNT_OFFSET))(this);
		}

		::System::Void set_GotBuildCoinCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_GOTBUILDCOINCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_OriginBuildCoinCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_ORIGINBUILDCOINCNT_OFFSET))(this);
		}

		::System::UInt32 get_FinalBuildCointCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_FINALBUILDCOINTCNT_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* get_RankInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_RANKINFO_OFFSET))(this);
		}
	};
}
