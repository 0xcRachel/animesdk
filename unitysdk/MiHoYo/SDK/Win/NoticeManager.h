#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class Web; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_NOTICEMANAGER_BUILDREPORTMSGWITHTYPE_OFFSET UNITYSDK_OFFSET(0x15A42E30)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x15A3AFE0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKLOGOUTREDPOINT_OFFSET UNITYSDK_OFFSET(0x15A476E0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x15A37D90)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_GETURLSTRING_OFFSET UNITYSDK_OFFSET(0x15A41450)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_HIDE_OFFSET UNITYSDK_OFFSET(0x15A42FF0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_MANUALLYCLOSE_OFFSET UNITYSDK_OFFSET(0x15A3A590)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWERROR_OFFSET UNITYSDK_OFFSET(0x15A420E0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWNORMALCLOSED_OFFSET UNITYSDK_OFFSET(0x15A423A0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWRESULT_OFFSET UNITYSDK_OFFSET(0x15A420F0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x15A45320)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKLOGOUTANNLIST_OFFSET UNITYSDK_OFFSET(0x15A463D0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCONSUMELOGOUTREDPOINT_OFFSET UNITYSDK_OFFSET(0x15A47960)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCUSTOMNOTICEMESSAGE_OFFSET UNITYSDK_OFFSET(0x15A445B0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x15A449A0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x15A44990)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x15A438D0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x15A43A10)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x15A43DC0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONREADY_OFFSET UNITYSDK_OFFSET(0x15A448C0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONSETSERVERID_OFFSET UNITYSDK_OFFSET(0x15A36F50)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x15A43EE0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_PACKCUSTOMNOTICEURL_OFFSET UNITYSDK_OFFSET(0x15A45AB0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_PRELOAD_OFFSET UNITYSDK_OFFSET(0x15A423B0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_REBUILDURLWITHCUSTOMPARAMS_OFFSET UNITYSDK_OFFSET(0x15A45E20)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_REQUESTREDPOINTTEXT_OFFSET UNITYSDK_OFFSET(0x15A42030)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SENDCLOSENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x15A42F70)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x15A43090)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMNOTICE_OFFSET UNITYSDK_OFFSET(0x15A3AA90)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x15A3AE30)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWLOADING_OFFSET UNITYSDK_OFFSET(0x15A43460)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICEERROR_OFFSET UNITYSDK_OFFSET(0x15A43660)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x15A3A370)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x15A3A800)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_UPDATEJOYPADCONTROL_OFFSET UNITYSDK_OFFSET(0x15A46290)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A47CD0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A47CC0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_0_OFFSET UNITYSDK_OFFSET(0x15A47D00)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_1_OFFSET UNITYSDK_OFFSET(0x15A47F90)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager_TypeDefinitionIndex = 7874;

	class NoticeManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::NoticeManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::NoticeManager**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x7300);
		}
		static ::System::Boolean* StaticGet_isShowPopNotice()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x2670);
		}
		::System::String* m_customNoticeType; // 0x10
		::MiHoYo::SDK::Web* noticeWeb; // 0x18
		::System::String* HoYoLogoutAnnRedPoint; // 0x20
		::UnityEngine::Coroutine* noticeCoroutine; // 0x28
		::System::Action_1<::System::String*>* m_callbackShowNotice; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void CheckPopNotice(::System::Boolean isParseTextOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET))(this, isParseTextOnly);
		}

		::System::Void CheckCustomPopNotice(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKCUSTOMPOPNOTICE_OFFSET))(this, jsonString);
		}

		::System::Void RequestRedPointText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_REQUESTREDPOINTTEXT_OFFSET))(this);
		}

		::System::Void NotifyShowError(::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWERROR_OFFSET))(this, strMsg);
		}

		::System::Void NotifyShowNormalClosed(::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWNORMALCLOSED_OFFSET))(this, strMsg);
		}

		::System::Void NotifyShowResult(::System::Int32 nRetCode, ::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWRESULT_OFFSET))(this, nRetCode, strMsg);
		}

		::System::Void PreLoad(::System::String* noticeUrl, ::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_PRELOAD_OFFSET))(this, noticeUrl, jsonString);
		}

		::System::Void ShowNotice(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICE_OFFSET))(this, jsonString, callback);
		}

		::System::Void ShowCustomNotice(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMNOTICE_OFFSET))(this, jsonString, callback);
		}

		::System::Boolean ShowPopNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET))(this);
		}

		::System::Boolean ShowCustomPopNotice(::System::String* jsonString)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET))(this, jsonString);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_HIDE_OFFSET))(this);
		}

		::System::Void ManuallyClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_MANUALLYCLOSE_OFFSET))(this);
		}

		::System::Void SetCookies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SETCOOKIES_OFFSET))(this);
		}

		::System::Void ShowLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWLOADING_OFFSET))(this);
		}

		::System::Void ShowNoticeError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICEERROR_OFFSET))(this);
		}

		::System::Void OnPageClose(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGECLOSE_OFFSET))(this, web);
		}

		::System::Void OnPageError(::MiHoYo::SDK::Web* web, ::System::String* url, ::System::Int32 errorCode, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEERROR_OFFSET))(this, web, url, errorCode, errorMessage);
		}

		::System::Void OnPageFinish(::MiHoYo::SDK::Web* web, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEFINISH_OFFSET))(this, web, url);
		}

		::System::Void OnUniWebViewMessage(::MiHoYo::SDK::Web* web, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET))(this, web, message);
		}

		::System::Void OnCustomNoticeMessage(::MiHoYo::SDK::Web* web, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCUSTOMNOTICEMESSAGE_OFFSET))(this, web, message);
		}

		::System::Void OnReady(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONREADY_OFFSET))(this, web);
		}

		::System::Void OnInputEnableStatus(::MiHoYo::SDK::Web* web, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONINPUTENABLESTATUS_OFFSET))(this, web, enabled);
		}

		::System::Void SendCloseNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SENDCLOSENOTIFICATION_OFFSET))(this);
		}

		::System::Void OnGetCheckPopNotice(::MiHoYo::SDK::NetworkResponseModel* response, ::System::Boolean isCheckTextOnly, ::System::String* strRequestLang)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET))(this, response, isCheckTextOnly, strRequestLang);
		}

		::System::Void OnCheckCustomPopNotice(::MiHoYo::SDK::NetworkResponseModel* response, ::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKCUSTOMPOPNOTICE_OFFSET))(this, response, jsonString);
		}

		::System::String* GetURLString(::System::String* url, ::System::String* jsonString)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_GETURLSTRING_OFFSET))(this, url, jsonString);
		}

		::System::Void PackCustomNoticeUrl(::MiHoYo::SDK::JSONObject* queryMap, ::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_PACKCUSTOMNOTICEURL_OFFSET))(this, queryMap, jsonString);
		}

		::System::String* RebuildUrlWithCustomParams(::System::String* originalUrl, ::System::String* jsonParam)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_REBUILDURLWITHCUSTOMPARAMS_OFFSET))(this, originalUrl, jsonParam);
		}

		::System::Void UpdateJoypadControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_UPDATEJOYPADCONTROL_OFFSET))(this);
		}

		::System::Void OnSetServerID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONSETSERVERID_OFFSET))(this);
		}

		::System::Void OnCheckLogoutAnnList(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKLOGOUTANNLIST_OFFSET))(this, response);
		}

		::System::Void OnConsumeLogoutRedPoint(::MiHoYo::SDK::JSONNode* consumeData)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCONSUMELOGOUTREDPOINT_OFFSET))(this, consumeData);
		}

		::System::Void CheckLogoutRedPoint(::MiHoYo::SDK::JSONNode* annList)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKLOGOUTREDPOINT_OFFSET))(this, annList);
		}

		::System::String* BuildReportMsgWithType(::System::String* strMsg)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_BUILDREPORTMSGWITHTYPE_OFFSET))(this, strMsg);
		}

		::System::Void _PreLoad_b__13_0(::MiHoYo::SDK::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_0_OFFSET))(this, node);
		}

		::System::Void _PreLoad_b__13_1(::MiHoYo::SDK::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_1_OFFSET))(this, node);
		}
	};
}
