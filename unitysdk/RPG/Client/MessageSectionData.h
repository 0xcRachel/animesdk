#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_28.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageItemData; }
namespace RPG::GameCore { class MessageSectionRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGESECTIONDATA_CLEARSTATUS_OFFSET UNITYSDK_OFFSET(0x1473ADF0)
#define RPG_CLIENT_MESSAGESECTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x14732570)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_CANFINISH_OFFSET UNITYSDK_OFFSET(0x14733790)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_CONTACTID_OFFSET UNITYSDK_OFFSET(0x1473FE40)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_FIRSTITEM_OFFSET UNITYSDK_OFFSET(0x14737850)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1473FE60)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_HASUPDATED_OFFSET UNITYSDK_OFFSET(0x1473F760)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_HISTORYITEMS_OFFSET UNITYSDK_OFFSET(0x1473FC10)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x14737510)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_INPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1473FBF0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x14736580)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISFROZEN_OFFSET UNITYSDK_OFFSET(0x1473FE10)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1473A680)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINCONTACT_OFFSET UNITYSDK_OFFSET(0x147341E0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINHISTORY_OFFSET UNITYSDK_OFFSET(0x14732DF0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMCHOOSE_OFFSET UNITYSDK_OFFSET(0x14733090)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMFINISH_OFFSET UNITYSDK_OFFSET(0x1473A7D0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEM_OFFSET UNITYSDK_OFFSET(0x1473FC30)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_LATESTITEM_OFFSET UNITYSDK_OFFSET(0x147333A0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_LINKMISSIONID_OFFSET UNITYSDK_OFFSET(0x147344D0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_PREVIEW_OFFSET UNITYSDK_OFFSET(0x1473FE80)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1473FE20)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWBATTLE_OFFSET UNITYSDK_OFFSET(0x14733D90)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x147334D0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1473FBD0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_WAITINGITEMIDS_OFFSET UNITYSDK_OFFSET(0x1473FCD0)
#define RPG_CLIENT_MESSAGESECTIONDATA_SETLASTFINISHEDITEM_OFFSET UNITYSDK_OFFSET(0x1473A530)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_CONTACTID_OFFSET UNITYSDK_OFFSET(0x1473FE50)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1473FE70)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_HISTORYITEMS_OFFSET UNITYSDK_OFFSET(0x1473FC20)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_INPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1473FC00)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1473FE30)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1473FBE0)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATEHISTORY_OFFSET UNITYSDK_OFFSET(0x1473A9D0)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1473A6A0)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x14732A60)
#define RPG_CLIENT_MESSAGESECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1473F580)
#define RPG_CLIENT_MESSAGESECTIONDATA__RECORDITEM_OFFSET UNITYSDK_OFFSET(0x1473FB30)
#define RPG_CLIENT_MESSAGESECTIONDATA__SHOULDRECORDITEM_OFFSET UNITYSDK_OFFSET(0x1473FA80)
#define RPG_CLIENT_MESSAGESECTIONDATA__TRYFINISHLASTITEM_OFFSET UNITYSDK_OFFSET(0x1473F5C0)
#define RPG_CLIENT_MESSAGESECTIONDATA__TRYRECORDITEM_OFFSET UNITYSDK_OFFSET(0x1473F7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageSectionData_TypeDefinitionIndex = 60842;

	class MessageSectionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* _HistoryItems_k__BackingField; // 0x10
		::RPG::GameCore::MessageSectionRow* _Row_k__BackingField; // 0x18
		::Enum_3_DB663931210BBC27_28 _Status_k__BackingField; // 0x20
		::System::UInt32 _ContactID_k__BackingField; // 0x24
		::System::UInt32 _LastFinishedItemID; // 0x28
		::System::Boolean _InPerformance_k__BackingField; // 0x2C
		::System::UInt32 _GroupID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MessageSectionData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_CREATE_OFFSET))(id);
		}

		::System::UInt32 UpdateHistory(::System::Collections::Generic::List_1<::System::UInt32>* doneItemIDs)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATEHISTORY_OFFSET))(this, doneItemIDs);
		}

		::System::Void SetLastFinishedItem(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SETLASTFINISHEDITEM_OFFSET))(this, itemID);
		}

		::System::Boolean UpdateStatus(::Enum_3_DB663931210BBC27_28 status)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_DB663931210BBC27_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATESTATUS_OFFSET))(this, status);
		}

		::System::Void ClearStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_CLEARSTATUS_OFFSET))(this);
		}

		::System::Boolean UpdatePerformance(::System::Boolean shouldInPerformance)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATEPERFORMANCE_OFFSET))(this, shouldInPerformance);
		}

		::System::Void _TryFinishLastItem(::System::Collections::Generic::List_1<::System::UInt32>* doneItemIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__TRYFINISHLASTITEM_OFFSET))(this, doneItemIDs);
		}

		::System::Boolean _TryRecordItem(::Il2CppArray<::System::UInt32>* itemIDs, ::System::Collections::Generic::List_1<::System::UInt32>* doneItemIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__TRYRECORDITEM_OFFSET))(this, itemIDs, doneItemIDs);
		}

		::System::Boolean _ShouldRecordItem(::System::UInt32 itemID, ::System::Collections::Generic::List_1<::System::UInt32>* doneItemIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__SHOULDRECORDITEM_OFFSET))(this, itemID, doneItemIDs);
		}

		::System::Void _RecordItem(::System::UInt32 itemID, ::System::Boolean isFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__RECORDITEM_OFFSET))(this, itemID, isFinished);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ID_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_28 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_28 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_InPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_INPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_InPerformance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_INPERFORMANCE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISPERFORMANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* get_HistoryItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_HISTORYITEMS_OFFSET))(this);
		}

		::System::Void set_HistoryItems(::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_HISTORYITEMS_OFFSET))(this, value);
		}

		::RPG::Client::MessageItemData* get_FirstItem()
		{
			return ((::RPG::Client::MessageItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_FIRSTITEM_OFFSET))(this);
		}

		::RPG::Client::MessageItemData* get_LatestItem()
		{
			return ((::RPG::Client::MessageItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_LATESTITEM_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEM_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingItemChoose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMCHOOSE_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingItemFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMFINISH_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsVisibleInHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINHISTORY_OFFSET))(this);
		}

		::System::Boolean get_IsVisibleInContact()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINCONTACT_OFFSET))(this);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISEND_OFFSET))(this);
		}

		::System::Boolean get_ShowBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWBATTLE_OFFSET))(this);
		}

		::System::Boolean get_IsFrozen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISFROZEN_OFFSET))(this);
		}

		::System::Boolean get_CanFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_CANFINISH_OFFSET))(this);
		}

		::System::Boolean get_HasUpdated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_HASUPDATED_OFFSET))(this);
		}

		::RPG::GameCore::MessageSectionRow* get_Row()
		{
			return ((::RPG::GameCore::MessageSectionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MessageSectionRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageSectionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::UInt32 get_ContactID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_CONTACTID_OFFSET))(this);
		}

		::System::Void set_ContactID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_CONTACTID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_GROUPID_OFFSET))(this, value);
		}

		::System::String* get_Preview()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_PREVIEW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_WaitingItemIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_WAITINGITEMIDS_OFFSET))(this);
		}

		::System::UInt32 get_LinkMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_LINKMISSIONID_OFFSET))(this);
		}
	};
}
