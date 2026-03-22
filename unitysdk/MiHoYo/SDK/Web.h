#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/WebFeature.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web_OnUniWebViewMessageDelegate; }
namespace MiHoYo::SDK { class Web_OnWebViewBeforeNavigationMessage; }
namespace MiHoYo::SDK { class Web_OnWebViewInputEnableStatus; }
namespace MiHoYo::SDK { class Web_OnWebViewNativeReady; }
namespace MiHoYo::SDK { class Web_OnWebViewPageBeforeHide; }
namespace MiHoYo::SDK { class Web_OnWebViewPageClose; }
namespace MiHoYo::SDK { class Web_OnWebViewPageError; }
namespace MiHoYo::SDK { class Web_OnWebViewPageFinish; }
namespace MiHoYo::SDK { class Web_OnWebViewPopupBrowserCreate; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WEB_ADD_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1596F530)
#define MIHOYO_SDK_WEB_ADD_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x1596F430)
#define MIHOYO_SDK_WEB_ADD_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x1596F330)
#define MIHOYO_SDK_WEB_ADD_ONPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x1596F230)
#define MIHOYO_SDK_WEB_ADD_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1596F130)
#define MIHOYO_SDK_WEB_ADD_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1596F030)
#define MIHOYO_SDK_WEB_ADD_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1596EF30)
#define MIHOYO_SDK_WEB_ADD_ONPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x1596F630)
#define MIHOYO_SDK_WEB_ADD_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1596EE30)
#define MIHOYO_SDK_WEB_CALLJSFUNCTION_OFFSET UNITYSDK_OFFSET(0x1597DF50)
#define MIHOYO_SDK_WEB_CALLJSPUBLISHFUNCTION_OFFSET UNITYSDK_OFFSET(0x1597D500)
#define MIHOYO_SDK_WEB_CLEARBGIMG_OFFSET UNITYSDK_OFFSET(0x1597CD90)
#define MIHOYO_SDK_WEB_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0x15976E30)
#define MIHOYO_SDK_WEB_CLOSE_OFFSET UNITYSDK_OFFSET(0x15970E60)
#define MIHOYO_SDK_WEB_DISABLEINPUT_OFFSET UNITYSDK_OFFSET(0x15982E00)
#define MIHOYO_SDK_WEB_GETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x15975160)
#define MIHOYO_SDK_WEB_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x159745F0)
#define MIHOYO_SDK_WEB_HIDEBG_OFFSET UNITYSDK_OFFSET(0x1597C410)
#define MIHOYO_SDK_WEB_HIDENAVIGATIONBAR_OFFSET UNITYSDK_OFFSET(0x159728D0)
#define MIHOYO_SDK_WEB_HIDE_OFFSET UNITYSDK_OFFSET(0x159706F0)
#define MIHOYO_SDK_WEB_INIT_OFFSET UNITYSDK_OFFSET(0x1596A270)
#define MIHOYO_SDK_WEB_LOAD_OFFSET UNITYSDK_OFFSET(0x1596F730)
#define MIHOYO_SDK_WEB_ONGETBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1597BBD0)
#define MIHOYO_SDK_WEB_ONGETINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x1597A0B0)
#define MIHOYO_SDK_WEB_ONGETNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x15979950)
#define MIHOYO_SDK_WEB_ONGETPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x1597B390)
#define MIHOYO_SDK_WEB_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x159775A0)
#define MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x159791F0)
#define MIHOYO_SDK_WEB_ONGETWEBVIEWPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x15978A90)
#define MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1597AA20)
#define MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x15978250)
#define MIHOYO_SDK_WEB_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1596E560)
#define MIHOYO_SDK_WEB_REGISTERJSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1597E9A0)
#define MIHOYO_SDK_WEB_REMOVE_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1596F5B0)
#define MIHOYO_SDK_WEB_REMOVE_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x1596F4B0)
#define MIHOYO_SDK_WEB_REMOVE_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x1596F3B0)
#define MIHOYO_SDK_WEB_REMOVE_ONPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x1596F2B0)
#define MIHOYO_SDK_WEB_REMOVE_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1596F1B0)
#define MIHOYO_SDK_WEB_REMOVE_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1596F0B0)
#define MIHOYO_SDK_WEB_REMOVE_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1596EFB0)
#define MIHOYO_SDK_WEB_REMOVE_ONPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x1596F6B0)
#define MIHOYO_SDK_WEB_REMOVE_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1596EEB0)
#define MIHOYO_SDK_WEB_SETADJUSTDPIENABLE_OFFSET UNITYSDK_OFFSET(0x15983910)
#define MIHOYO_SDK_WEB_SETBACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1597FBF0)
#define MIHOYO_SDK_WEB_SETBACKBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x15973330)
#define MIHOYO_SDK_WEB_SETBOUNCESENABLED_OFFSET UNITYSDK_OFFSET(0x15971F50)
#define MIHOYO_SDK_WEB_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x15982F80)
#define MIHOYO_SDK_WEB_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0x15980440)
#define MIHOYO_SDK_WEB_SETFORWARDBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x1597F270)
#define MIHOYO_SDK_WEB_SETFRAME_OFFSET UNITYSDK_OFFSET(0x15973CB0)
#define MIHOYO_SDK_WEB_SETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x15975560)
#define MIHOYO_SDK_WEB_SETNEWWINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15975CD0)
#define MIHOYO_SDK_WEB_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x159749F0)
#define MIHOYO_SDK_WEB_SETWEBANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0x159815A0)
#define MIHOYO_SDK_WEB_SETWEBCOOKIES_OFFSET UNITYSDK_OFFSET(0x15982690)
#define MIHOYO_SDK_WEB_SETWEBFEATURE_OFFSET UNITYSDK_OFFSET(0x15980DC0)
#define MIHOYO_SDK_WEB_SETWEBURLQUERY_OFFSET UNITYSDK_OFFSET(0x15981F20)
#define MIHOYO_SDK_WEB_SETZOOMENABLED_OFFSET UNITYSDK_OFFSET(0x159715D0)
#define MIHOYO_SDK_WEB_SHOWDEVTOOLS_OFFSET UNITYSDK_OFFSET(0x159764B0)
#define MIHOYO_SDK_WEB_SHOW_OFFSET UNITYSDK_OFFSET(0x1596FF80)
#define MIHOYO_SDK_WEB__CTOR_OFFSET UNITYSDK_OFFSET(0x15969A80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_TypeDefinitionIndex = 7084;

	class Web : public ::System::Object
	{
	public:
		::System::Object* webView; // 0x10
		::MiHoYo::SDK::Web_OnWebViewBeforeNavigationMessage* OnBeforeNavigationMessage; // 0x18
		::MiHoYo::SDK::Web_OnWebViewInputEnableStatus* OnInputEnableStatus; // 0x20
		::MiHoYo::SDK::Web_OnWebViewPageError* OnPageError; // 0x28
		::MiHoYo::SDK::Web_OnWebViewPageFinish* OnPageFinish; // 0x30
		::MiHoYo::SDK::Web_OnWebViewPopupBrowserCreate* OnPopupBrowserCreate; // 0x38
		::MiHoYo::SDK::Web_OnWebViewPageBeforeHide* OnPageBeforeHide; // 0x40
		::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate* OnUniWebViewMessage; // 0x48
		::MiHoYo::SDK::Web_OnWebViewNativeReady* OnNativeReady; // 0x50
		::MiHoYo::SDK::Web_OnWebViewPageClose* OnPageClose; // 0x58

		::System::Void _ctor(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB__CTOR_OFFSET))(this, url);
		}

		static ::MiHoYo::SDK::Web* Init(::System::String* url)
		{
			return ((::MiHoYo::SDK::Web*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_INIT_OFFSET))(url);
		}

		static ::System::Void PreLoad(::System::String* env, ::System::String* gameBiz, ::System::Boolean runtimeCache)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_PRELOAD_OFFSET))(env, gameBiz, runtimeCache);
		}

		::System::Void add_OnUniWebViewMessage(::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONUNIWEBVIEWMESSAGE_OFFSET))(this, value);
		}

		::System::Void remove_OnUniWebViewMessage(::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONUNIWEBVIEWMESSAGE_OFFSET))(this, value);
		}

		::System::Void add_OnPageFinish(::MiHoYo::SDK::Web_OnWebViewPageFinish* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageFinish*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONPAGEFINISH_OFFSET))(this, value);
		}

		::System::Void remove_OnPageFinish(::MiHoYo::SDK::Web_OnWebViewPageFinish* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageFinish*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONPAGEFINISH_OFFSET))(this, value);
		}

		::System::Void add_OnPageError(::MiHoYo::SDK::Web_OnWebViewPageError* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageError*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONPAGEERROR_OFFSET))(this, value);
		}

		::System::Void remove_OnPageError(::MiHoYo::SDK::Web_OnWebViewPageError* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageError*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONPAGEERROR_OFFSET))(this, value);
		}

		::System::Void add_OnPageClose(::MiHoYo::SDK::Web_OnWebViewPageClose* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageClose*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONPAGECLOSE_OFFSET))(this, value);
		}

		::System::Void remove_OnPageClose(::MiHoYo::SDK::Web_OnWebViewPageClose* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageClose*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONPAGECLOSE_OFFSET))(this, value);
		}

		::System::Void add_OnPageBeforeHide(::MiHoYo::SDK::Web_OnWebViewPageBeforeHide* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageBeforeHide*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONPAGEBEFOREHIDE_OFFSET))(this, value);
		}

		::System::Void remove_OnPageBeforeHide(::MiHoYo::SDK::Web_OnWebViewPageBeforeHide* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageBeforeHide*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONPAGEBEFOREHIDE_OFFSET))(this, value);
		}

		::System::Void add_OnNativeReady(::MiHoYo::SDK::Web_OnWebViewNativeReady* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewNativeReady*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONNATIVEREADY_OFFSET))(this, value);
		}

		::System::Void remove_OnNativeReady(::MiHoYo::SDK::Web_OnWebViewNativeReady* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewNativeReady*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONNATIVEREADY_OFFSET))(this, value);
		}

		::System::Void add_OnInputEnableStatus(::MiHoYo::SDK::Web_OnWebViewInputEnableStatus* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewInputEnableStatus*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONINPUTENABLESTATUS_OFFSET))(this, value);
		}

		::System::Void remove_OnInputEnableStatus(::MiHoYo::SDK::Web_OnWebViewInputEnableStatus* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewInputEnableStatus*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONINPUTENABLESTATUS_OFFSET))(this, value);
		}

		::System::Void add_OnBeforeNavigationMessage(::MiHoYo::SDK::Web_OnWebViewBeforeNavigationMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewBeforeNavigationMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONBEFORENAVIGATIONMESSAGE_OFFSET))(this, value);
		}

		::System::Void remove_OnBeforeNavigationMessage(::MiHoYo::SDK::Web_OnWebViewBeforeNavigationMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewBeforeNavigationMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONBEFORENAVIGATIONMESSAGE_OFFSET))(this, value);
		}

		::System::Void add_OnPopupBrowserCreate(::MiHoYo::SDK::Web_OnWebViewPopupBrowserCreate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPopupBrowserCreate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONPOPUPBROWSERCREATE_OFFSET))(this, value);
		}

		::System::Void remove_OnPopupBrowserCreate(::MiHoYo::SDK::Web_OnWebViewPopupBrowserCreate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPopupBrowserCreate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONPOPUPBROWSERCREATE_OFFSET))(this, value);
		}

		::System::Void Load(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_LOAD_OFFSET))(this, url);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_HIDE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_CLOSE_OFFSET))(this);
		}

		::System::Void SetZoomEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETZOOMENABLED_OFFSET))(this, enabled);
		}

		::System::Void SetBouncesEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETBOUNCESENABLED_OFFSET))(this, enabled);
		}

		::System::Void HideNavigationBar(::System::Boolean enabled, ::System::Boolean affectWebsBehindCurrentWebView, ::System::Boolean setFullScreenSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_HIDENAVIGATIONBAR_OFFSET))(this, enabled, affectWebsBehindCurrentWebView, setFullScreenSize);
		}

		::System::Void SetBackButtonEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETBACKBUTTONENABLED_OFFSET))(this, enabled);
		}

		::System::Void SetFrame(::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETFRAME_OFFSET))(this, x, y, width, height);
		}

		::System::String* GetUserAgent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_GETUSERAGENT_OFFSET))(this);
		}

		::System::Void SetUserAgent(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETUSERAGENT_OFFSET))(this, content);
		}

		static ::System::String* GetGlobalUserAgent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_GETGLOBALUSERAGENT_OFFSET))();
		}

		static ::System::Void SetGlobalUserAgent(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETGLOBALUSERAGENT_OFFSET))(content);
		}

		::System::Void SetNewWindowType(::System::Int32 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETNEWWINDOWTYPE_OFFSET))(this, type);
		}

		::System::Void ShowDevTools(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SHOWDEVTOOLS_OFFSET))(this, isShow);
		}

		::System::Void ClearCookies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_CLEARCOOKIES_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, result);
		}

		::System::Void OnGetWebViewPageFinish(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEFINISH_OFFSET))(this, url);
		}

		::System::Void OnGetWebViewPageClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETWEBVIEWPAGECLOSE_OFFSET))(this);
		}

		::System::Void OnGetWebViewPageBeforeHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEBEFOREHIDE_OFFSET))(this);
		}

		::System::Void OnGetNativeReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETNATIVEREADY_OFFSET))(this);
		}

		::System::Void OnGetInputEnableStatus(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETINPUTENABLESTATUS_OFFSET))(this, enabled);
		}

		::System::Void OnGetWebViewPageError(::System::String* url, ::System::Int32 errorCode, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEERROR_OFFSET))(this, url, errorCode, errorMessage);
		}

		::System::Void OnGetPopupBrowserCreate(::MiHoYo::SDK::Web* newWeb)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETPOPUPBROWSERCREATE_OFFSET))(this, newWeb);
		}

		::System::Void OnGetBeforeNavigationMessage(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETBEFORENAVIGATIONMESSAGE_OFFSET))(this, url);
		}

		::System::Void HideBG(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_HIDEBG_OFFSET))(this, flag);
		}

		::System::Void ClearBGImg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_CLEARBGIMG_OFFSET))(this);
		}

		::System::Void CallJSPublishFunction(::System::String* typeString, ::System::String* dataString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_CALLJSPUBLISHFUNCTION_OFFSET))(this, typeString, dataString, isDirectly);
		}

		::System::Void CallJSFunction(::System::String* method, ::System::String* jsonString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_CALLJSFUNCTION_OFFSET))(this, method, jsonString, isDirectly);
		}

		::System::Void RegisterJSPostMessage(::System::String* typeString, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REGISTERJSPOSTMESSAGE_OFFSET))(this, typeString, callback);
		}

		::System::Void SetForwardButtonEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETFORWARDBUTTONENABLED_OFFSET))(this, enabled);
		}

		::System::Void SetBackButtonAction(::System::Func_1<::System::Boolean>* backAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETBACKBUTTONACTION_OFFSET))(this, backAction);
		}

		::System::Void SetCurrentWebviewAnimationEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET))(this, enable);
		}

		::System::Void SetWebFeature(::MiHoYo::SDK::WebFeature feature)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETWEBFEATURE_OFFSET))(this, feature);
		}

		::System::Void SetWebAnimationEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETWEBANIMATIONENABLE_OFFSET))(this, enable);
		}

		static ::System::Void SetWebUrlQuery(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* query)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETWEBURLQUERY_OFFSET))(query);
		}

		static ::System::Void SetWebCookies(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* cookies)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETWEBCOOKIES_OFFSET))(cookies);
		}

		static ::System::Void DisableInput()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_DISABLEINPUT_OFFSET))();
		}

		::System::Void SetCookies(::System::String* key, ::System::String* content, ::System::String* domain)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETCOOKIES_OFFSET))(this, key, content, domain);
		}

		::System::Void SetAdjustDPIEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETADJUSTDPIENABLE_OFFSET))(this, enable);
		}
	};
}
