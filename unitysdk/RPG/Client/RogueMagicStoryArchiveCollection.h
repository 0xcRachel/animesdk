#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicStoryCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_103;
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class RogueMagicStoryArchiveDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_COUNTNOTHIDESTORIES_OFFSET UNITYSDK_OFFSET(0x172D0180)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172C2AB0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETAVAILABLESTORYITEMLIST_OFFSET UNITYSDK_OFFSET(0x172CFDE0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETREWARDQUESTDATALIST_OFFSET UNITYSDK_OFFSET(0x172CF950)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETSTORYITEMLISTBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x172CF6F0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETSTORYITEM_OFFSET UNITYSDK_OFFSET(0x172CF600)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_FINALREWARDQUESTDATA_OFFSET UNITYSDK_OFFSET(0x172D00E0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_FINISHSTORYIDLIST_OFFSET UNITYSDK_OFFSET(0x172D0340)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_STORYARCHIVEDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x172D0320)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_HAVEREWARDTAKE_OFFSET UNITYSDK_OFFSET(0x172B5AC0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_INIT_OFFSET UNITYSDK_OFFSET(0x172C2150)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SET_FINISHSTORYIDLIST_OFFSET UNITYSDK_OFFSET(0x172D0350)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SET_STORYARCHIVEDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x172D0330)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SYNCALL_OFFSET UNITYSDK_OFFSET(0x172C5DA0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x172C7FB0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x172C1C50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicStoryArchiveCollection_TypeDefinitionIndex = 62137;

	class RogueMagicStoryArchiveCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>* _StoryArchiveDataItemList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestIDList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishStoryIDList_k__BackingField; // 0x20
		::System::UInt32 _FinalRewardQuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Class_1_075C34D03AFA1215_103* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_103*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SYNCALL_OFFSET))(this, proto);
		}

		::System::Void SyncUpdate(::System::UInt32 unlockStoryID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SYNCUPDATE_OFFSET))(this, unlockStoryID);
		}

		::RPG::Client::RogueMagicStoryArchiveDataItem* GetStoryItem(::System::UInt32 id)
		{
			return ((::RPG::Client::RogueMagicStoryArchiveDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETSTORYITEM_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>* GetStoryItemListByCategory(::RPG::GameCore::RogueMagicStoryCategory category)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueMagicStoryCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETSTORYITEMLISTBYCATEGORY_OFFSET))(this, category);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetRewardQuestDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETREWARDQUESTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>* GetAvailableStoryItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETAVAILABLESTORYITEMLIST_OFFSET))(this);
		}

		::System::Boolean HaveRewardTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_HAVEREWARDTAKE_OFFSET))(this);
		}

		::System::UInt32 CountNotHideStories()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_COUNTNOTHIDESTORIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>* get_StoryArchiveDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_STORYARCHIVEDATAITEMLIST_OFFSET))(this);
		}

		::System::Void set_StoryArchiveDataItemList(::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SET_STORYARCHIVEDATAITEMLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishStoryIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_FINISHSTORYIDLIST_OFFSET))(this);
		}

		::System::Void set_FinishStoryIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SET_FINISHSTORYIDLIST_OFFSET))(this, value);
		}

		::RPG::Client::QuestData* get_FinalRewardQuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_FINALREWARDQUESTDATA_OFFSET))(this);
		}
	};
}
