#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7CC98C6000D59BCE;
class Class_1_C8EC2537CFD0A41F;
namespace RPG::Client { class ChatReportReason; }
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PAMCHATDATA_ADDFINISHEDMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x162C18D0)
#define RPG_CLIENT_PAMCHATDATA_ADDFIRSTOBTAINAVATARID_OFFSET UNITYSDK_OFFSET(0x162C1780)
#define RPG_CLIENT_PAMCHATDATA_ADDHUDBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x162C0D70)
#define RPG_CLIENT_PAMCHATDATA_CLEARFINISHEDMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x162C19B0)
#define RPG_CLIENT_PAMCHATDATA_CLEARFIRSTOBTAINAVATARIDS_OFFSET UNITYSDK_OFFSET(0x162C1800)
#define RPG_CLIENT_PAMCHATDATA_CLEARHUDBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x162C0F10)
#define RPG_CLIENT_PAMCHATDATA_GETACTIVITYENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x162C1580)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATGREETINGS_OFFSET UNITYSDK_OFFSET(0x162C2010)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATQUICKFUNCTION_OFFSET UNITYSDK_OFFSET(0x162C1D50)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATREPORTREASONS_OFFSET UNITYSDK_OFFSET(0x162C1BA0)
#define RPG_CLIENT_PAMCHATDATA_GETQUESTIDS_OFFSET UNITYSDK_OFFSET(0x162C22D0)
#define RPG_CLIENT_PAMCHATDATA_GET_CHATREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x162C1240)
#define RPG_CLIENT_PAMCHATDATA_GET_QUESTIONQUEST_OFFSET UNITYSDK_OFFSET(0x162C12F0)
#define RPG_CLIENT_PAMCHATDATA_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x162C2480)
#define RPG_CLIENT_PAMCHATDATA_GET__CHATREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x162C24A0)
#define RPG_CLIENT_PAMCHATDATA_GET__QUESTIONQUESTID_OFFSET UNITYSDK_OFFSET(0x162C25B0)
#define RPG_CLIENT_PAMCHATDATA_HASFINISHEDMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x162C1950)
#define RPG_CLIENT_PAMCHATDATA_HASFIRSTOBTAINAVATARID_OFFSET UNITYSDK_OFFSET(0x162C1870)
#define RPG_CLIENT_PAMCHATDATA_HASOTHERHUBBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x162C0DF0)
#define RPG_CLIENT_PAMCHATDATA_INCREMENTTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x162C0F80)
#define RPG_CLIENT_PAMCHATDATA_ISALLQUESTCLOSED_OFFSET UNITYSDK_OFFSET(0x162C1460)
#define RPG_CLIENT_PAMCHATDATA_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x162C0870)
#define RPG_CLIENT_PAMCHATDATA_ISFORBIDDATAFORTRAINING_OFFSET UNITYSDK_OFFSET(0x162C1740)
#define RPG_CLIENT_PAMCHATDATA_ISGREETINGTRIGGERED_OFFSET UNITYSDK_OFFSET(0x162C0CE0)
#define RPG_CLIENT_PAMCHATDATA_ISOPEN_OFFSET UNITYSDK_OFFSET(0x162C08B0)
#define RPG_CLIENT_PAMCHATDATA_ISQUESTIONEROPEN_OFFSET UNITYSDK_OFFSET(0x162C0B90)
#define RPG_CLIENT_PAMCHATDATA_ISTODAYFIRSTLOGIN_OFFSET UNITYSDK_OFFSET(0x162C0CA0)
#define RPG_CLIENT_PAMCHATDATA_RESETALLGREETINGBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x162C1A20)
#define RPG_CLIENT_PAMCHATDATA_RESETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x162C0FC0)
#define RPG_CLIENT_PAMCHATDATA_SENDCHATQUESTPROGRESS_OFFSET UNITYSDK_OFFSET(0x162C1010)
#define RPG_CLIENT_PAMCHATDATA_SETFORBIDDATAFORTRAINING_OFFSET UNITYSDK_OFFSET(0x162C0820)
#define RPG_CLIENT_PAMCHATDATA_SETGREETINGTRIGGERED_OFFSET UNITYSDK_OFFSET(0x162C0D20)
#define RPG_CLIENT_PAMCHATDATA_SETTODAYFIRSTLOGIN_OFFSET UNITYSDK_OFFSET(0x162C07D0)
#define RPG_CLIENT_PAMCHATDATA_SET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x162C2490)
#define RPG_CLIENT_PAMCHATDATA_TAKECHATQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x162C13A0)
#define RPG_CLIENT_PAMCHATDATA_UPDATEPAMCHATINFO_OFFSET UNITYSDK_OFFSET(0x162C0710)
#define RPG_CLIENT_PAMCHATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x162C0610)
#define RPG_CLIENT_PAMCHATDATA__INITPAMCHATGREETINGS_OFFSET UNITYSDK_OFFSET(0x162C2070)
#define RPG_CLIENT_PAMCHATDATA__INITPAMCHATQUICKFUNCTIONS_OFFSET UNITYSDK_OFFSET(0x162C1E50)
#define RPG_CLIENT_PAMCHATDATA__ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x162C0AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatData_TypeDefinitionIndex = 58286;

	class PamChatData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _FirstObtainAvatarIDs; // 0x10
		::System::Collections::Generic::List_1<::Class_1_C8EC2537CFD0A41F*>* _PamChatGreetings; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _HudBubbleTriggeredIDs; // 0x20
		::System::Collections::Generic::List_1<::Class_1_7CC98C6000D59BCE*>* _PamChatQuickFunctions; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedMainMissionIDs; // 0x30
		::System::UInt32 _TouchCount_k__BackingField; // 0x38
		::System::Boolean _IsDataReady; // 0x3C
		::System::Boolean _IsGreetingTriggered; // 0x3D
		::System::Boolean _IsForbidDataForTraining; // 0x3E
		::System::Boolean _IsTodayFirstLogin; // 0x3F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__CTOR_OFFSET))(this);
		}

		::System::Void UpdatePamChatInfo(::System::Boolean isTodayFirstLogin, ::System::Boolean isForbidDataForTraining)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_UPDATEPAMCHATINFO_OFFSET))(this, isTodayFirstLogin, isForbidDataForTraining);
		}

		::System::Boolean IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISOPEN_OFFSET))(this);
		}

		::System::Boolean IsQuestionerOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISQUESTIONEROPEN_OFFSET))(this);
		}

		::System::Boolean IsTodayFirstLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISTODAYFIRSTLOGIN_OFFSET))(this);
		}

		::System::Void SetTodayFirstLogin(::System::Boolean isTodayFirstLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SETTODAYFIRSTLOGIN_OFFSET))(this, isTodayFirstLogin);
		}

		::System::Boolean IsGreetingTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISGREETINGTRIGGERED_OFFSET))(this);
		}

		::System::Void SetGreetingTriggered(::System::Boolean triggered)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SETGREETINGTRIGGERED_OFFSET))(this, triggered);
		}

		::System::Void AddHudBubbleTriggered(::System::UInt32 greetingID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ADDHUDBUBBLETRIGGERED_OFFSET))(this, greetingID);
		}

		::System::Boolean HasOtherHubBubbleTriggered(::System::UInt32 greetingID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_HASOTHERHUBBUBBLETRIGGERED_OFFSET))(this, greetingID);
		}

		::System::Void ClearHudBubbleTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_CLEARHUDBUBBLETRIGGERED_OFFSET))(this);
		}

		::System::Void IncrementTouchCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_INCREMENTTOUCHCOUNT_OFFSET))(this);
		}

		::System::Void ResetTouchCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_RESETTOUCHCOUNT_OFFSET))(this);
		}

		::System::Void SendChatQuestProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SENDCHATQUESTPROGRESS_OFFSET))(this);
		}

		::System::Void TakeChatQuestReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_TAKECHATQUESTREWARD_OFFSET))(this);
		}

		::System::Boolean IsAllQuestClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISALLQUESTCLOSED_OFFSET))(this);
		}

		::System::UInt32 GetActivityEndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETACTIVITYENDTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean IsForbidDataForTraining()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISFORBIDDATAFORTRAINING_OFFSET))(this);
		}

		::System::Void SetForbidDataForTraining(::System::Boolean forbid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SETFORBIDDATAFORTRAINING_OFFSET))(this, forbid);
		}

		::System::Void AddFirstObtainAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ADDFIRSTOBTAINAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void ClearFirstObtainAvatarIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_CLEARFIRSTOBTAINAVATARIDS_OFFSET))(this);
		}

		::System::Boolean HasFirstObtainAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_HASFIRSTOBTAINAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void AddFinishedMainMissionID(::System::UInt32 mainMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ADDFINISHEDMAINMISSIONID_OFFSET))(this, mainMissionID);
		}

		::System::Boolean HasFinishedMainMissionID(::System::UInt32 mainMissionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_HASFINISHEDMAINMISSIONID_OFFSET))(this, mainMissionID);
		}

		::System::Void ClearFinishedMainMissionIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_CLEARFINISHEDMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Void ResetAllGreetingBubbleTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_RESETALLGREETINGBUBBLETRIGGERED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>* GetPamChatReportReasons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETPAMCHATREPORTREASONS_OFFSET))(this);
		}

		::Class_1_7CC98C6000D59BCE* GetPamChatQuickFunction(::RPG::Client::PamChatQuickFunctionType type)
		{
			return ((::Class_1_7CC98C6000D59BCE*(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETPAMCHATQUICKFUNCTION_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::Class_1_C8EC2537CFD0A41F*>* GetPamChatGreetings()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C8EC2537CFD0A41F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETPAMCHATGREETINGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETQUESTIDS_OFFSET))(this);
		}

		::System::Void _InitPamChatQuickFunctions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__INITPAMCHATQUICKFUNCTIONS_OFFSET))(this);
		}

		::System::Void _InitPamChatGreetings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__INITPAMCHATGREETINGS_OFFSET))(this);
		}

		::System::Boolean _IsInSchedule(::System::UInt32 activityModuleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__ISINSCHEDULE_OFFSET))(this, activityModuleID);
		}

		::System::UInt32 get_TouchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GET_TOUCHCOUNT_OFFSET))(this);
		}

		::System::Void set_TouchCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SET_TOUCHCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::QuestData* get_ChatRewardQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GET_CHATREWARDQUEST_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_QuestionQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GET_QUESTIONQUEST_OFFSET))(this);
		}

		::System::UInt32 get__ChatRewardQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GET__CHATREWARDQUESTID_OFFSET))(this);
		}

		::System::UInt32 get__QuestionQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GET__QUESTIONQUESTID_OFFSET))(this);
		}
	};
}
