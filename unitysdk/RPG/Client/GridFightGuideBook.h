#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGuideChapter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GETGUIDECHAPTERBYID_OFFSET UNITYSDK_OFFSET(0x939FB30)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ALLCHAPTERQUESTIDS_OFFSET UNITYSDK_OFFSET(0x939F6B0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_COMPLETEDCHAPTERCNT_OFFSET UNITYSDK_OFFSET(0x939E610)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_CURCHAPTERID_OFFSET UNITYSDK_OFFSET(0x939EC20)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_CURCHAPTER_OFFSET UNITYSDK_OFFSET(0x939F2C0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_FIRSTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x939F410)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_FIRSTCHAPTER_OFFSET UNITYSDK_OFFSET(0x939F440)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ISALLCHAPTERGOT_OFFSET UNITYSDK_OFFSET(0x939F580)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x939E5B0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_LASTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x939F4F0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_TOTALCHAPTERCNT_OFFSET UNITYSDK_OFFSET(0x939E740)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASANYCHAPTERCANGETREWARD_OFFSET UNITYSDK_OFFSET(0x939F220)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASCHAPTERCANGETREWARDAFTER_OFFSET UNITYSDK_OFFSET(0x939F050)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASCHAPTERCANGETREWARDBEFORE_OFFSET UNITYSDK_OFFSET(0x939ECF0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASUNLOCKQUESTINUNLOCKCHAPTER_OFFSET UNITYSDK_OFFSET(0x939E790)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_SYNC_OFFSET UNITYSDK_OFFSET(0x939F990)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x939FBC0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK__GET_FIRSTCHAPTER_B__21_0_OFFSET UNITYSDK_OFFSET(0x939FC40)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK__HASANYCHAPTERCANGETREWARD_B__5_0_OFFSET UNITYSDK_OFFSET(0x939FBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGuideBook_TypeDefinitionIndex = 51549;

	class GridFightGuideBook : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>* _Chapters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean HasUnlockQuestInUnlockChapter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASUNLOCKQUESTINUNLOCKCHAPTER_OFFSET))(this);
		}

		::System::Boolean HasChapterCanGetRewardBefore(::System::UInt32 chapterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASCHAPTERCANGETREWARDBEFORE_OFFSET))(this, chapterID);
		}

		::System::Boolean HasChapterCanGetRewardAfter(::System::UInt32 chapterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASCHAPTERCANGETREWARDAFTER_OFFSET))(this, chapterID);
		}

		::System::Boolean HasAnyChapterCanGetReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASANYCHAPTERCANGETREWARD_OFFSET))(this);
		}

		::System::Int32 get_CurChapterID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_CURCHAPTERID_OFFSET))(this);
		}

		::System::Int32 get_FirstChapterID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_FIRSTCHAPTERID_OFFSET))(this);
		}

		::System::Int32 get_LastChapterID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_LASTCHAPTERID_OFFSET))(this);
		}

		::System::Int32 get_CompletedChapterCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_COMPLETEDCHAPTERCNT_OFFSET))(this);
		}

		::System::Boolean get_IsAllChapterGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ISALLCHAPTERGOT_OFFSET))(this);
		}

		::System::Int32 get_TotalChapterCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_TOTALCHAPTERCNT_OFFSET))(this);
		}

		::RPG::Client::GridFightGuideChapter* get_CurChapter()
		{
			return ((::RPG::Client::GridFightGuideChapter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_CURCHAPTER_OFFSET))(this);
		}

		::RPG::Client::GridFightGuideChapter* get_FirstChapter()
		{
			return ((::RPG::Client::GridFightGuideChapter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_FIRSTCHAPTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AllChapterQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ALLCHAPTERQUESTIDS_OFFSET))(this);
		}

		::System::Void Sync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_SYNC_OFFSET))(this);
		}

		::RPG::Client::GridFightGuideChapter* GetGuideChapterByID(::System::Int32 id)
		{
			return ((::RPG::Client::GridFightGuideChapter*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GETGUIDECHAPTERBYID_OFFSET))(this, id);
		}

		::System::Boolean _HasAnyChapterCanGetReward_b__5_0(::RPG::Client::GridFightGuideChapter* chapter)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGuideChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK__HASANYCHAPTERCANGETREWARD_B__5_0_OFFSET))(this, chapter);
		}

		::System::Boolean _get_FirstChapter_b__21_0(::RPG::Client::GridFightGuideChapter* chapter)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGuideChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK__GET_FIRSTCHAPTER_B__21_0_OFFSET))(this, chapter);
		}
	};
}
