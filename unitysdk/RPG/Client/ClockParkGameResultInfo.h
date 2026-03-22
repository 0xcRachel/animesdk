#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_79BE030ADC5EF318;
namespace RPG::Client { class ClockParkChapterInfo; }
namespace RPG::Client { class ClockParkInstance; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class ClockParkChapterConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEENDING_OFFSET UNITYSDK_OFFSET(0x8FA21E0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEFAIL_OFFSET UNITYSDK_OFFSET(0x8FA20E0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ENDINGNAME_OFFSET UNITYSDK_OFFSET(0x8FA2850)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x8FA2720)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x8FA2880)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILED_OFFSET UNITYSDK_OFFSET(0x8FA2680)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILINCHECK_OFFSET UNITYSDK_OFFSET(0x8FA26C0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISMANUALQUIT_OFFSET UNITYSDK_OFFSET(0x8FA26A0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISNEWEND_OFFSET UNITYSDK_OFFSET(0x8FA2790)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISNEWHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x8FA26E0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISTRUEENDING_OFFSET UNITYSDK_OFFSET(0x8FA27F0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_LOGOPATH_OFFSET UNITYSDK_OFFSET(0x8FA2900)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ORIGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x8FA2700)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_PROGRESSADDED_OFFSET UNITYSDK_OFFSET(0x8FA2630)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x8FA2770)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0x8FA28E0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_NEEDSHOWMISSIONHINT_OFFSET UNITYSDK_OFFSET(0x8FA23C0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILED_OFFSET UNITYSDK_OFFSET(0x8FA2690)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILINCHECK_OFFSET UNITYSDK_OFFSET(0x8FA26D0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISMANUALQUIT_OFFSET UNITYSDK_OFFSET(0x8FA26B0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISNEWHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x8FA26F0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_LOGOPATH_OFFSET UNITYSDK_OFFSET(0x8FA2910)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ORIGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x8FA2710)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x8FA2780)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0x8FA28F0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x8FA22C0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA2080)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkGameResultInfo_TypeDefinitionIndex = 48752;

	class ClockParkGameResultInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkChapterConfigRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Rewards_k__BackingField; // 0x18
		::System::String* _LogoPath_k__BackingField; // 0x20
		::Class_1_79BE030ADC5EF318* _RowFinishInfo; // 0x28
		::System::UInt32 _OriginProgress_k__BackingField; // 0x30
		::System::UInt32 _ScriptID_k__BackingField; // 0x34
		::System::Boolean _IsManualQuit_k__BackingField; // 0x38
		::System::Boolean _IsFailInCheck_k__BackingField; // 0x39
		::System::Boolean _IsFailed_k__BackingField; // 0x3A
		::System::Boolean _IsNewHighestEndlessScore_k__BackingField; // 0x3B

		::System::Void _ctor(::System::UInt32 originProgress, ::System::UInt32 scriptID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO__CTOR_OFFSET))(this, originProgress, scriptID);
		}

		static ::RPG::Client::ClockParkGameResultInfo* CreateFail(::System::UInt32 originProgress, ::System::UInt32 scriptID, ::RPG::Client::ClockParkInstance* instance)
		{
			return ((::RPG::Client::ClockParkGameResultInfo*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEFAIL_OFFSET))(originProgress, scriptID, instance);
		}

		static ::RPG::Client::ClockParkGameResultInfo* CreateEnding(::RPG::Client::ClockParkChapterInfo* chapterInfo, ::System::UInt32 originProgress, ::System::UInt32 scriptID)
		{
			return ((::RPG::Client::ClockParkGameResultInfo*(*)(::RPG::Client::ClockParkChapterInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEENDING_OFFSET))(chapterInfo, originProgress, scriptID);
		}

		::System::Void Sync(::Class_1_79BE030ADC5EF318* finishInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_79BE030ADC5EF318*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SYNC_OFFSET))(this, finishInfo);
		}

		::System::Boolean NeedShowMissionHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_NEEDSHOWMISSIONHINT_OFFSET))(this);
		}

		::System::Boolean get_IsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILED_OFFSET))(this);
		}

		::System::Void set_IsFailed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILED_OFFSET))(this, value);
		}

		::System::Boolean get_IsManualQuit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISMANUALQUIT_OFFSET))(this);
		}

		::System::Void set_IsManualQuit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISMANUALQUIT_OFFSET))(this, value);
		}

		::System::Boolean get_IsFailInCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILINCHECK_OFFSET))(this);
		}

		::System::Void set_IsFailInCheck(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILINCHECK_OFFSET))(this, value);
		}

		::System::Boolean get_IsNewHighestEndlessScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISNEWHIGHESTENDLESSSCORE_OFFSET))(this);
		}

		::System::Void set_IsNewHighestEndlessScore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISNEWHIGHESTENDLESSSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_OriginProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ORIGINPROGRESS_OFFSET))(this);
		}

		::System::Void set_OriginProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ORIGINPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_EndlessScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ENDLESSSCORE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_Rewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_REWARDS_OFFSET))(this);
		}

		::System::Void set_Rewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_REWARDS_OFFSET))(this, value);
		}

		::System::Boolean get_IsNewEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISNEWEND_OFFSET))(this);
		}

		::System::Boolean get_IsTrueEnding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISTRUEENDING_OFFSET))(this);
		}

		::RPG::Client::TextID get_EndingName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ENDINGNAME_OFFSET))(this);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_HASREWARD_OFFSET))(this);
		}

		::System::UInt32 get_ProgressAdded()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_PROGRESSADDED_OFFSET))(this);
		}

		::System::UInt32 get_ScriptID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_SCRIPTID_OFFSET))(this);
		}

		::System::Void set_ScriptID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_SCRIPTID_OFFSET))(this, value);
		}

		::System::String* get_LogoPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_LOGOPATH_OFFSET))(this);
		}

		::System::Void set_LogoPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_LOGOPATH_OFFSET))(this, value);
		}
	};
}
