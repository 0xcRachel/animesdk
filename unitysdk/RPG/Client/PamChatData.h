#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/System/Object.h"

class Class_1_3F75F8CAAFB46C9E;
class Class_1_7CC98C6000D59BCE;
namespace RPG::Client { class ChatReportReason; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PAMCHATDATA_ADDFIRSTOBTAINAVATARID_OFFSET UNITYSDK_OFFSET(0x9A31AF0)
#define RPG_CLIENT_PAMCHATDATA_ADDHUDBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x9A318A0)
#define RPG_CLIENT_PAMCHATDATA_CLEARFIRSTOBTAINAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9A31B70)
#define RPG_CLIENT_PAMCHATDATA_CLEARHUDBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x9A31A40)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATGREETINGS_OFFSET UNITYSDK_OFFSET(0x9A32230)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATQUICKFUNCTION_OFFSET UNITYSDK_OFFSET(0x9A31F70)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATREPORTREASONS_OFFSET UNITYSDK_OFFSET(0x9A31DC0)
#define RPG_CLIENT_PAMCHATDATA_HASFIRSTOBTAINAVATARID_OFFSET UNITYSDK_OFFSET(0x9A31BE0)
#define RPG_CLIENT_PAMCHATDATA_HASOTHERHUBBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x9A31920)
#define RPG_CLIENT_PAMCHATDATA_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9A315F0)
#define RPG_CLIENT_PAMCHATDATA_ISFORBIDDATAFORTRAINING_OFFSET UNITYSDK_OFFSET(0x9A31AB0)
#define RPG_CLIENT_PAMCHATDATA_ISGREETINGTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9A31810)
#define RPG_CLIENT_PAMCHATDATA_ISOPEN_OFFSET UNITYSDK_OFFSET(0x9A31630)
#define RPG_CLIENT_PAMCHATDATA_ISTODAYFIRSTLOGIN_OFFSET UNITYSDK_OFFSET(0x9A317D0)
#define RPG_CLIENT_PAMCHATDATA_RESETALLGREETINGBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x9A31C40)
#define RPG_CLIENT_PAMCHATDATA_SETFORBIDDATAFORTRAINING_OFFSET UNITYSDK_OFFSET(0x9A315A0)
#define RPG_CLIENT_PAMCHATDATA_SETGREETINGTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9A31850)
#define RPG_CLIENT_PAMCHATDATA_SETTODAYFIRSTLOGIN_OFFSET UNITYSDK_OFFSET(0x9A31550)
#define RPG_CLIENT_PAMCHATDATA_UPDATEPAMCHATINFO_OFFSET UNITYSDK_OFFSET(0x9A31490)
#define RPG_CLIENT_PAMCHATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A313F0)
#define RPG_CLIENT_PAMCHATDATA__INITPAMCHATGREETINGS_OFFSET UNITYSDK_OFFSET(0x9A32290)
#define RPG_CLIENT_PAMCHATDATA__INITPAMCHATQUICKFUNCTIONS_OFFSET UNITYSDK_OFFSET(0x9A32070)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatData_TypeDefinitionIndex = 50220;

	class PamChatData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _HudBubbleTriggeredIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _FirstObtainAvatarIDs; // 0x18
		::System::Collections::Generic::List_1<::Class_1_7CC98C6000D59BCE*>* _PamChatQuickFunctions; // 0x20
		::System::Collections::Generic::List_1<::Class_1_3F75F8CAAFB46C9E*>* _PamChatGreetings; // 0x28
		::System::Boolean _IsGreetingTriggered; // 0x30
		::System::Boolean _IsTodayFirstLogin; // 0x31
		::System::Boolean _IsForbidDataForTraining; // 0x32
		::System::Boolean _IsDataReady; // 0x33

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

		::System::Collections::Generic::List_1<::Class_1_3F75F8CAAFB46C9E*>* GetPamChatGreetings()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3F75F8CAAFB46C9E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETPAMCHATGREETINGS_OFFSET))(this);
		}

		::System::Void _InitPamChatQuickFunctions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__INITPAMCHATQUICKFUNCTIONS_OFFSET))(this);
		}

		::System::Void _InitPamChatGreetings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__INITPAMCHATGREETINGS_OFFSET))(this);
		}
	};
}
