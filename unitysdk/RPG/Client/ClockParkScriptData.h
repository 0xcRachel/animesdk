#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkScriptType.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_20;
namespace RPG::GameCore { class ClockParkScriptConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8FAA9A0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GETCHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x8FAADA0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GETREACHEDENDCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0x8FAABA0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_CHAPTERLIST_OFFSET UNITYSDK_OFFSET(0x8FAB510)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_HASSCRIPTCHARACTERISTIC_OFFSET UNITYSDK_OFFSET(0x8FAB210)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_HASSCRIPTGAMEPLAYDESC_OFFSET UNITYSDK_OFFSET(0x8FAB380)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8FAB0F0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0x8FAB300)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x8FAB170)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8FAB110)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_MAXCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0x8FAB550)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_REACHEDCHAPTERLIST_OFFSET UNITYSDK_OFFSET(0x8FAB4F0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x8FAAE60)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_SCRIPTTYPE_OFFSET UNITYSDK_OFFSET(0x8FAB470)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_TOTALENDCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0x8FAB530)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISCHAPTERENDREACHED_OFFSET UNITYSDK_OFFSET(0x8FAAD40)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISREACHEDFALSEENDING_OFFSET UNITYSDK_OFFSET(0x8FAAC70)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISREACHEDTRUEENDING_OFFSET UNITYSDK_OFFSET(0x8FA6990)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_CHAPTERLIST_OFFSET UNITYSDK_OFFSET(0x8FAB520)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x8FAB100)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_MAXCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0x8FAB560)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_REACHEDCHAPTERLIST_OFFSET UNITYSDK_OFFSET(0x8FAB500)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_TOTALENDCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0x8FAB540)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x8FAAAA0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8FAA830)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA__GETCHAPTERDEPTH_OFFSET UNITYSDK_OFFSET(0x8FAAED0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA__GETENDCHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0x8FAAFC0)
#define RPG_CLIENT_CLOCKPARKSCRIPTDATA__INITCHAPTERSDATA_OFFSET UNITYSDK_OFFSET(0x8FAA8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkScriptData_TypeDefinitionIndex = 48730;

	class ClockParkScriptData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ChapterList_k__BackingField; // 0x10
		::RPG::GameCore::ClockParkScriptConfigRow* _Row; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ReachedChapterList_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Int32 _TotalEndChapterCount_k__BackingField; // 0x2C
		::System::Int32 _MaxChapterCount_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::ClockParkScriptData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ClockParkScriptData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_CREATE_OFFSET))(id);
		}

		::System::Void Sync(::Class_1_735612C94F558EAE_20* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Int32 GetReachedEndChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GETREACHEDENDCHAPTERCOUNT_OFFSET))(this);
		}

		::System::Boolean IsReachedTrueEnding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISREACHEDTRUEENDING_OFFSET))(this);
		}

		::System::Boolean IsReachedFalseEnding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISREACHEDFALSEENDING_OFFSET))(this);
		}

		::System::Boolean IsChapterEndReached(::System::UInt32 chapterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_ISCHAPTERENDREACHED_OFFSET))(this, chapterID);
		}

		::System::Int32 GetChapterIndex(::System::UInt32 chapterID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GETCHAPTERINDEX_OFFSET))(this, chapterID);
		}

		::System::Void _InitChaptersData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA__INITCHAPTERSDATA_OFFSET))(this);
		}

		::System::Int32 _GetEndChapterCount(::System::UInt32 chapterID, ::System::Int32 chapterCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA__GETENDCHAPTERCOUNT_OFFSET))(this, chapterID, chapterCount);
		}

		::System::Int32 _GetChapterDepth(::System::UInt32 curChapterID, ::System::UInt32 targetChapterID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA__GETCHAPTERDEPTH_OFFSET))(this, curChapterID, targetChapterID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_HasScriptCharacteristic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_HASSCRIPTCHARACTERISTIC_OFFSET))(this);
		}

		::System::Boolean get_IsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ISINFINITE_OFFSET))(this);
		}

		::System::Boolean get_HasScriptGamePlayDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_HASSCRIPTGAMEPLAYDESC_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkScriptType get_ScriptType()
		{
			return ((::RPG::GameCore::ClockParkScriptType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_SCRIPTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkScriptConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ClockParkScriptConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_ROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ReachedChapterList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_REACHEDCHAPTERLIST_OFFSET))(this);
		}

		::System::Void set_ReachedChapterList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_REACHEDCHAPTERLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ChapterList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_CHAPTERLIST_OFFSET))(this);
		}

		::System::Void set_ChapterList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_CHAPTERLIST_OFFSET))(this, value);
		}

		::System::Int32 get_TotalEndChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_TOTALENDCHAPTERCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalEndChapterCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_TOTALENDCHAPTERCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_MaxChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_GET_MAXCHAPTERCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxChapterCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTDATA_SET_MAXCHAPTERCOUNT_OFFSET))(this, value);
		}
	};
}
