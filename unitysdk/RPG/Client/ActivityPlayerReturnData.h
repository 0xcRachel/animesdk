#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlayerReturnConfigRow; }
namespace RPG::GameCore { class PlayerReturnLoginRewardRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x8BA2E10)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETLOGINREWARDROWS_OFFSET UNITYSDK_OFFSET(0x8BA29E0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETMULTIDROPIDLIST_OFFSET UNITYSDK_OFFSET(0x8BA2EA0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTID_OFFSET UNITYSDK_OFFSET(0x8BA2C00)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTITEMID_OFFSET UNITYSDK_OFFSET(0x8BA2D90)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTREWARDID_OFFSET UNITYSDK_OFFSET(0x8BA2D10)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINT_OFFSET UNITYSDK_OFFSET(0x8BA2C90)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETSORTEDSIGNREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x8BA3950)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABQUESTGROUP_OFFSET UNITYSDK_OFFSET(0x8BA2B60)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABUNLOCKDAY_OFFSET UNITYSDK_OFFSET(0x8BA2BB0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTOTALDOUBLETIME_OFFSET UNITYSDK_OFFSET(0x8BA2990)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_ISOLDVERSIONPLAYERRETURNDATA_OFFSET UNITYSDK_OFFSET(0x8BA39F0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x8BA3990)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIONNAIRELINK_OFFSET UNITYSDK_OFFSET(0x8BA39D0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_VERSIONHOTPOINTLINK_OFFSET UNITYSDK_OFFSET(0x8BA39B0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASAVAILABLEMULTIDROP_OFFSET UNITYSDK_OFFSET(0x8BA32F0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASPOINTREWARDTOGET_OFFSET UNITYSDK_OFFSET(0x8BA3180)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASQUESTREWARDTOGET_OFFSET UNITYSDK_OFFSET(0x8BA2FD0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLMULTIDROPFINISH_OFFSET UNITYSDK_OFFSET(0x8BA37A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLPOINTREWARDGOT_OFFSET UNITYSDK_OFFSET(0x8BA3650)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLQUESTREWARDGOT_OFFSET UNITYSDK_OFFSET(0x8BA34A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x8BA39A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIONNAIRELINK_OFFSET UNITYSDK_OFFSET(0x8BA39E0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_VERSIONHOTPOINTLINK_OFFSET UNITYSDK_OFFSET(0x8BA39C0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8BA1B70)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTGROUPS_OFFSET UNITYSDK_OFFSET(0x8BA20A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTIONNAIRELINK_OFFSET UNITYSDK_OFFSET(0x8BA1F20)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTKEYPOINTSANDREWARDS_OFFSET UNITYSDK_OFFSET(0x8BA22F0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETVERSIONHOTPOINTLINK_OFFSET UNITYSDK_OFFSET(0x8BA1DE0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__INITSORTEDSIGNREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x8BA2490)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnData_TypeDefinitionIndex = 49085;

	class ActivityPlayerReturnData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _QuestKeyPointRewardDict; // 0x10
		::System::String* _QuestionnaireLink_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestIDList_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _QuestKeyPointItemDict; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* MultiDropIDList; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _SortedTotalSignRewardItemList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _QuestKeyPointDict; // 0x40
		::System::String* _VersionHotPointLink_k__BackingField; // 0x48
		::RPG::GameCore::PlayerReturnConfigRow* _PlayerReturnConfigRow; // 0x50

		::System::Void _ctor(::System::UInt32 playerReturnID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__CTOR_OFFSET))(this, playerReturnID);
		}

		::System::UInt32 GetTotalDoubleTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTOTALDOUBLETIME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::PlayerReturnLoginRewardRow*>* GetLoginRewardRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::PlayerReturnLoginRewardRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETLOGINREWARDROWS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTabQuestGroup(::System::Int32 tabIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABQUESTGROUP_OFFSET))(this, tabIndex);
		}

		::System::UInt32 GetTabUnlockDay(::System::Int32 tabIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABUNLOCKDAY_OFFSET))(this, tabIndex);
		}

		::System::UInt32 GetQuestKeyPointID(::System::UInt32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTID_OFFSET))(this, index);
		}

		::System::UInt32 GetQuestKeyPoint(::System::UInt32 pointID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINT_OFFSET))(this, pointID);
		}

		::System::UInt32 GetQuestKeyPointRewardID(::System::UInt32 pointID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTREWARDID_OFFSET))(this, pointID);
		}

		::System::UInt32 GetQuestKeyPointItemID(::System::UInt32 pointID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTITEMID_OFFSET))(this, pointID);
		}

		::System::String* GetConstValue(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETCONSTVALUE_OFFSET))(this, key);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMultiDropIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETMULTIDROPIDLIST_OFFSET))(this);
		}

		::System::Boolean HasQuestRewardToGet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASQUESTREWARDTOGET_OFFSET))(this);
		}

		::System::Boolean HasPointRewardToGet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASPOINTREWARDTOGET_OFFSET))(this);
		}

		::System::Boolean HasAvailableMultiDrop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASAVAILABLEMULTIDROP_OFFSET))(this);
		}

		::System::Boolean IsAllQuestRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLQUESTREWARDGOT_OFFSET))(this);
		}

		::System::Boolean IsAllPointRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLPOINTREWARDGOT_OFFSET))(this);
		}

		::System::Boolean IsAllMultiDropFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLMULTIDROPFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSortedSignRewardItemList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETSORTEDSIGNREWARDITEMLIST_OFFSET))(this);
		}

		::System::Void _GetVersionHotPointLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETVERSIONHOTPOINTLINK_OFFSET))(this);
		}

		::System::Void _GetQuestionnaireLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTIONNAIRELINK_OFFSET))(this);
		}

		::System::Void _GetQuestGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTGROUPS_OFFSET))(this);
		}

		::System::Void _GetQuestKeyPointsAndRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTKEYPOINTSANDREWARDS_OFFSET))(this);
		}

		::System::Void _InitSortedSignRewardItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__INITSORTEDSIGNREWARDITEMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_QuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIDLIST_OFFSET))(this);
		}

		::System::Void set_QuestIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIDLIST_OFFSET))(this, value);
		}

		::System::String* get_VersionHotPointLink()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_VERSIONHOTPOINTLINK_OFFSET))(this);
		}

		::System::Void set_VersionHotPointLink(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_VERSIONHOTPOINTLINK_OFFSET))(this, value);
		}

		::System::String* get_QuestionnaireLink()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIONNAIRELINK_OFFSET))(this);
		}

		::System::Void set_QuestionnaireLink(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIONNAIRELINK_OFFSET))(this, value);
		}

		::System::Boolean get_IsOldVersionPlayerReturnData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_ISOLDVERSIONPLAYERRETURNDATA_OFFSET))(this);
		}
	};
}
