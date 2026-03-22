#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/DialogType.h"
#include "unitysdk/MiHoYo/SDK/LOGIN_TYPE.h"
#include "unitysdk/MiHoYo/SDK/LoginPattern.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Base::ABTestPlatform::Const { class ABTestRequestParam; }
namespace MiHoYo::SDK::Win { class ThirdpartyOAuthClient; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_LOGINMANAGER_ACCOUNTPLATSTEAMLOGIN_OFFSET UNITYSDK_OFFSET(0x15A0F520)
#define MIHOYO_SDK_WIN_LOGINMANAGER_CHECKANDAPPENDTHEMETOURL_OFFSET UNITYSDK_OFFSET(0x15A1B970)
#define MIHOYO_SDK_WIN_LOGINMANAGER_CREATEFAILCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A0F580)
#define MIHOYO_SDK_WIN_LOGINMANAGER_FACEBOOKWEB_ONPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x15A125A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_FORGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x15A1BC10)
#define MIHOYO_SDK_WIN_LOGINMANAGER_GETACCOUNTPLATFORGETPASSWORDPAGEURL_OFFSET UNITYSDK_OFFSET(0x15A1B560)
#define MIHOYO_SDK_WIN_LOGINMANAGER_GETACCOUNTPLATREGISTERURL_OFFSET UNITYSDK_OFFSET(0x15A1B230)
#define MIHOYO_SDK_WIN_LOGINMANAGER_GETRENDERMETHODABMODEL_OFFSET UNITYSDK_OFFSET(0x15A1A560)
#define MIHOYO_SDK_WIN_LOGINMANAGER_HIDEACCOUNTLISTCONFIRMVIEW_OFFSET UNITYSDK_OFFSET(0x15A13CA0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_HIDEACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15A12EA0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_HIDEACCOUNTLOGIN_OFFSET UNITYSDK_OFFSET(0x15A10630)
#define MIHOYO_SDK_WIN_LOGINMANAGER_HIDEPHONELOGIN_OFFSET UNITYSDK_OFFSET(0x15A109D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_HIDEQRLOGINDIALOG_OFFSET UNITYSDK_OFFSET(0x15A0D7D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ISSHOWGUEST_OFFSET UNITYSDK_OFFSET(0x15A11800)
#define MIHOYO_SDK_WIN_LOGINMANAGER_LOGINCLOSE_OFFSET UNITYSDK_OFFSET(0x15A1D6B0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x159C6120)
#define MIHOYO_SDK_WIN_LOGINMANAGER_LOGOUTWITHCONFIRM_OFFSET UNITYSDK_OFFSET(0x15A0A940)
#define MIHOYO_SDK_WIN_LOGINMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x159CCED0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x159CC710)
#define MIHOYO_SDK_WIN_LOGINMANAGER_MAKETHEMEQUERYFILED_OFFSET UNITYSDK_OFFSET(0x15A1B8D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONAPPLEAUTHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15A15770)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONBACKACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x15A13620)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONBINDTAPTAP_OFFSET UNITYSDK_OFFSET(0x15A1D0F0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONCHECKACCOUNT_1_OFFSET UNITYSDK_OFFSET(0x15A17460)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONCHECKACCOUNT_OFFSET UNITYSDK_OFFSET(0x15A10230)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONGETACCOUNTLOGIN_OFFSET UNITYSDK_OFFSET(0x15A13E30)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONGETPHONELOGIN_OFFSET UNITYSDK_OFFSET(0x15A19FC0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONGETQRCODE_OFFSET UNITYSDK_OFFSET(0x15A0E930)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x15A14DE0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONGETVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x15A0EE90)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONGOOGLEAUTHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15A15BC0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONGUESTLOGIN_OFFSET UNITYSDK_OFFSET(0x15A1A450)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONLOGINCLOSE_OFFSET UNITYSDK_OFFSET(0x15A19850)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x15A194D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONLOGIN_OFFSET UNITYSDK_OFFSET(0x15A19AF0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONLOGOUT_OFFSET UNITYSDK_OFFSET(0x15A0ABC0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONPHONELOGIN_OFFSET UNITYSDK_OFFSET(0x15A19DC0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONQUERYQRCODE_OFFSET UNITYSDK_OFFSET(0x15A0D930)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONREGISTERCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15A15F30)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONSTEAMLOGIN_OFFSET UNITYSDK_OFFSET(0x15A0F690)
#define MIHOYO_SDK_WIN_LOGINMANAGER_ONTAPTAPLOGIN_OFFSET UNITYSDK_OFFSET(0x15A1C8D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_PARSEACCOUNTLOGININFO_OFFSET UNITYSDK_OFFSET(0x15A14750)
#define MIHOYO_SDK_WIN_LOGINMANAGER_QRLOGINBACK_OFFSET UNITYSDK_OFFSET(0x15A0C4C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REFRESHACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x15A0D310)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REGISTERACCOUNT_OFFSET UNITYSDK_OFFSET(0x15A1C190)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYAPPLE_OFFSET UNITYSDK_OFFSET(0x15A158D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x15A160B0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYFACEBOOK_OFFSET UNITYSDK_OFFSET(0x15A15350)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYGOOGLE_OFFSET UNITYSDK_OFFSET(0x15A15D20)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYTAPTAP_OFFSET UNITYSDK_OFFSET(0x15A1D1C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYTOKEN_OFFSET UNITYSDK_OFFSET(0x15A16D00)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYTWITTER_OFFSET UNITYSDK_OFFSET(0x15A15560)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTQRCODEFORLOGIN_OFFSET UNITYSDK_OFFSET(0x15A0D1D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTQUERYQRCODE_OFFSET UNITYSDK_OFFSET(0x15A0D270)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x15A0ECC0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x15A1ABD0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SETAGEGATEFAILCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A16500)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SETUPQRCODECOROUTINE_OFFSET UNITYSDK_OFFSET(0x15A0CDF0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLISTCONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15A137F0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLISTCONFIRM_OFFSET UNITYSDK_OFFSET(0x15A136D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15A125E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLISTVIEW_OFFSET UNITYSDK_OFFSET(0x15A13030)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15A10B60)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLOGINVIEW_OFFSET UNITYSDK_OFFSET(0x15A11AE0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWGUESTDIALOG_OFFSET UNITYSDK_OFFSET(0x15A1A350)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWLOGINSTATEINVALID_OFFSET UNITYSDK_OFFSET(0x15A1D4F0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x15A0CC30)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWLOGINVIEW_OFFSET UNITYSDK_OFFSET(0x15A0A5D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x15A0C670)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWPHONEMESSAGEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15A0B690)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWPHONEMESSAGEVIEW_OFFSET UNITYSDK_OFFSET(0x15A0B290)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWQRCODELOADING_OFFSET UNITYSDK_OFFSET(0x15A0C500)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWQRCODELOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15A0BEE0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWQRCODELOGINVIEW_OFFSET UNITYSDK_OFFSET(0x15A0A7E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWQRCODEOVERDUE_OFFSET UNITYSDK_OFFSET(0x15A0C950)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0x15A0C7E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWSCANSUCCESS_OFFSET UNITYSDK_OFFSET(0x15A0CAC0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SHOWTAPTAPLOGINVIEW_OFFSET UNITYSDK_OFFSET(0x15A1C710)
#define MIHOYO_SDK_WIN_LOGINMANAGER_STEAMLOGIN_OFFSET UNITYSDK_OFFSET(0x15A0F3D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_STOPQRCODECOROUTINE_OFFSET UNITYSDK_OFFSET(0x15A0D010)
#define MIHOYO_SDK_WIN_LOGINMANAGER_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x159CDB90)
#define MIHOYO_SDK_WIN_LOGINMANAGER_THIRDPARTYLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x15A16BF0)
#define MIHOYO_SDK_WIN_LOGINMANAGER_THIRDPARTYPARSEACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x15A16640)
#define MIHOYO_SDK_WIN_LOGINMANAGER_TRUNCATETHIRDPARTYNAME_OFFSET UNITYSDK_OFFSET(0x15A16480)
#define MIHOYO_SDK_WIN_LOGINMANAGER_UPDATEGETCAPTCHAELEMENTTEXT_OFFSET UNITYSDK_OFFSET(0x15A0EDD0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A1D6F0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A1D6C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__ONGUESTLOGIN_B__94_0_OFFSET UNITYSDK_OFFSET(0x15A20110)
#define MIHOYO_SDK_WIN_LOGINMANAGER__ONQUERYQRCODE_B__49_0_OFFSET UNITYSDK_OFFSET(0x15A1E470)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTPLUGINUI_B__64_0_OFFSET UNITYSDK_OFFSET(0x15A1F1C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTPLUGINUI_B__64_1_OFFSET UNITYSDK_OFFSET(0x15A1F3D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTPLUGINUI_B__64_2_OFFSET UNITYSDK_OFFSET(0x15A1F520)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTVIEW_B__66_0_OFFSET UNITYSDK_OFFSET(0x15A1F950)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTVIEW_B__66_1_OFFSET UNITYSDK_OFFSET(0x15A1F9D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTVIEW_B__66_2_OFFSET UNITYSDK_OFFSET(0x15A1FBF0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTVIEW_B__66_5_OFFSET UNITYSDK_OFFSET(0x15A1FD30)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTVIEW_B__66_6_OFFSET UNITYSDK_OFFSET(0x15A1FF20)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_0_OFFSET UNITYSDK_OFFSET(0x15A1E7A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_10_OFFSET UNITYSDK_OFFSET(0x15A1F160)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_13_OFFSET UNITYSDK_OFFSET(0x15A1F180)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_14_OFFSET UNITYSDK_OFFSET(0x15A1F190)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_15_OFFSET UNITYSDK_OFFSET(0x15A1F1A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_1_OFFSET UNITYSDK_OFFSET(0x15A1E7B0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_2_OFFSET UNITYSDK_OFFSET(0x15A1E7C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_3_OFFSET UNITYSDK_OFFSET(0x15A1E970)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_4_OFFSET UNITYSDK_OFFSET(0x15A1EB20)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_5_OFFSET UNITYSDK_OFFSET(0x15A1ED80)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_6_OFFSET UNITYSDK_OFFSET(0x15A1F100)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_7_OFFSET UNITYSDK_OFFSET(0x15A1F110)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_8_OFFSET UNITYSDK_OFFSET(0x15A1F120)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_9_OFFSET UNITYSDK_OFFSET(0x15A1F140)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWGUESTDIALOG_B__93_0_OFFSET UNITYSDK_OFFSET(0x15A20100)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_0_OFFSET UNITYSDK_OFFSET(0x15A1D760)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_1_OFFSET UNITYSDK_OFFSET(0x15A1D780)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_2_OFFSET UNITYSDK_OFFSET(0x15A1D7A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_3_OFFSET UNITYSDK_OFFSET(0x15A1DA40)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_6_OFFSET UNITYSDK_OFFSET(0x15A1DCD0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_7_OFFSET UNITYSDK_OFFSET(0x15A1DD80)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_8_OFFSET UNITYSDK_OFFSET(0x15A1DDA0)
#define MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_9_OFFSET UNITYSDK_OFFSET(0x15A1DE60)
#define MIHOYO_SDK_WIN_LOGINMANAGER__STEAMLOGIN_B__54_0_OFFSET UNITYSDK_OFFSET(0x15A1E4A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 7913;

	class LoginManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::LoginManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::LoginManager**)Il2CppClass::FromTypeDefinitionIndex(LoginManager_TypeDefinitionIndex)->GetStaticField(0xFAD0);
		}
		// static const ::System::String* THIRD_PARTY_GOOGLE; // 0x0
		// static const ::System::String* THIRD_PARTY_FACEBOOK; // 0x0
		// static const ::System::String* THIRD_PARTY_APPLE; // 0x0
		// static const ::System::String* THIRD_PARTY_TWITTER; // 0x0
		// static const ::System::String* LOGIN_EMAIL; // 0x0
		// static const ::System::String* LOGIN_USERNAME; // 0x0
		// static const ::System::String* SCAN_BIZ; // 0x0
		// static const ::System::String* THEME_PARAM; // 0x0
		::System::Action_1<::System::String*>* m_callbackPluginUIGetCaptcha; // 0x10
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* loginCallback; // 0x18
		::System::String* phoneAction; // 0x20
		::UnityEngine::Coroutine* queryQRCodeCoroutine; // 0x28
		::System::String* ticket; // 0x30
		::MiHoYo::SDK::Web* facebookWeb; // 0x38
		::MiHoYo::SDK::AccountModel* userData; // 0x40
		::MiHoYo::SDK::Web* twitterWeb; // 0x48
		::System::String* accessToken; // 0x50
		::MiHoYo::SDK::Win::ThirdpartyOAuthClient* thirdpartyOAuthClient; // 0x58
		::System::Boolean qrCodeScanFlag; // 0x60
		::System::Boolean isLoginRequest; // 0x61
		::System::Boolean isQRCodeLogin; // 0x62
		::System::Boolean m_bIsAgreePhoneLoginProtocol; // 0x63
		::System::Int32 tokenType; // 0x64
		::MiHoYo::SDK::ReportType loginMethod; // 0x68
		::System::Boolean m_bIsAgreeAccountLoginProtocol; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Login(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_LOGIN_OFFSET))(this, callback);
		}

		::System::Void Logout(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_LOGOUT_OFFSET))(this, callback);
		}

		::System::Void LogoutWithConfirm(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_LOGOUTWITHCONFIRM_OFFSET))(this, callback);
		}

		::System::Void LogoutWithoutConfirm(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET))(this, callback);
		}

		::System::Void OnLogout(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONLOGOUT_OFFSET))(this, callback);
		}

		::System::Void SwitchRole(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SWITCHROLE_OFFSET))(this, callback);
		}

		::System::Void ShowLoginView(::MiHoYo::SDK::DialogType dialogType)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::DialogType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWLOGINVIEW_OFFSET))(this, dialogType);
		}

		::System::Boolean ShowPhoneMessagePluginUI(::MiHoYo::SDK::AccountModel* model)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWPHONEMESSAGEPLUGINUI_OFFSET))(this, model);
		}

		::System::Void ShowPhoneMessageView(::MiHoYo::SDK::AccountModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWPHONEMESSAGEVIEW_OFFSET))(this, model);
		}

		::System::Boolean ShowQRCodeLoginPluginUI(::MiHoYo::SDK::DialogType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::DialogType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWQRCODELOGINPLUGINUI_OFFSET))(this, type);
		}

		::System::Void QRLoginBack(::MiHoYo::SDK::DialogType type)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::DialogType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_QRLOGINBACK_OFFSET))(this, type);
		}

		::System::Void ShowQRCodeLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWQRCODELOADING_OFFSET))(this);
		}

		::System::Void ShowNetworkError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWNETWORKERROR_OFFSET))(this);
		}

		::System::Void ShowQRCode(::System::String* strUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWQRCODE_OFFSET))(this, strUrl);
		}

		::System::Void ShowQRCodeOverdue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWQRCODEOVERDUE_OFFSET))(this);
		}

		::System::Void ShowScanSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWSCANSUCCESS_OFFSET))(this);
		}

		::System::Void ShowLoginSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWLOGINSUCCESS_OFFSET))(this);
		}

		::System::Void SetupQrCodeCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SETUPQRCODECOROUTINE_OFFSET))(this);
		}

		::System::Void StopQrCodeCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_STOPQRCODECOROUTINE_OFFSET))(this);
		}

		::System::Void ShowQRCodeLoginView(::MiHoYo::SDK::DialogType type)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::DialogType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWQRCODELOGINVIEW_OFFSET))(this, type);
		}

		::System::Void RequestQRCodeForLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTQRCODEFORLOGIN_OFFSET))(this);
		}

		::System::Void RequestQueryQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTQUERYQRCODE_OFFSET))(this);
		}

		::System::Void RefreshAccountInfo(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REFRESHACCOUNTINFO_OFFSET))(this, callback);
		}

		::System::Void HideQRLoginDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_HIDEQRLOGINDIALOG_OFFSET))(this);
		}

		::System::Void OnQueryQRCode(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONQUERYQRCODE_OFFSET))(this, response);
		}

		::System::Void OnGetQRCode(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONGETQRCODE_OFFSET))(this, response);
		}

		::System::Void RequestVerifyMessage(::System::String* phone)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTVERIFYMESSAGE_OFFSET))(this, phone);
		}

		::System::Void UpdateGetCaptchaElementText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_UPDATEGETCAPTCHAELEMENTTEXT_OFFSET))(this);
		}

		::System::Void OnGetVerifyCode(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONGETVERIFYCODE_OFFSET))(this, response);
		}

		::System::Void SteamLogin(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_STEAMLOGIN_OFFSET))(this, callback);
		}

		::System::Void AccountPlatSteamLogin(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ACCOUNTPLATSTEAMLOGIN_OFFSET))(this, callback);
		}

		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* CreateFailCallback(::System::String* message)
		{
			return ((::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_CREATEFAILCALLBACK_OFFSET))(this, message);
		}

		::System::Void OnSteamLogin(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONSTEAMLOGIN_OFFSET))(this, responseString);
		}

		::System::Void HideAccountLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_HIDEACCOUNTLOGIN_OFFSET))(this);
		}

		::System::Void HidePhoneLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_HIDEPHONELOGIN_OFFSET))(this);
		}

		::System::Boolean ShowAccountLoginPluginUI(::MiHoYo::SDK::AccountModel* model, ::System::Boolean showBackButton)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLOGINPLUGINUI_OFFSET))(this, model, showBackButton);
		}

		::System::Boolean IsShowGuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ISSHOWGUEST_OFFSET))(this);
		}

		::System::Void ShowAccountLoginView(::MiHoYo::SDK::AccountModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLOGINVIEW_OFFSET))(this, model);
		}

		::System::Void FacebookWeb_OnPopupBrowserCreate(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::Web* newWeb)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_FACEBOOKWEB_ONPOPUPBROWSERCREATE_OFFSET))(this, webView, newWeb);
		}

		::System::Boolean ShowAccountListPluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLISTPLUGINUI_OFFSET))(this);
		}

		::System::Void HideAccountListPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_HIDEACCOUNTLISTPLUGINUI_OFFSET))(this);
		}

		::System::Void ShowAccountListView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLISTVIEW_OFFSET))(this);
		}

		::System::Void OnBackAccountList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONBACKACCOUNTLIST_OFFSET))(this);
		}

		::System::Void ShowAccountListConfirm(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLISTCONFIRM_OFFSET))(this, callback);
		}

		::System::Boolean ShowAccountListConfirmPluginUI(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWACCOUNTLISTCONFIRMPLUGINUI_OFFSET))(this, callback);
		}

		::System::Void HideAccountListConfirmView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_HIDEACCOUNTLISTCONFIRMVIEW_OFFSET))(this);
		}

		::System::Void OnGetAccountLogin(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONGETACCOUNTLOGIN_OFFSET))(this, response);
		}

		::System::Void ParseAccountLoginInfo(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_PARSEACCOUNTLOGININFO_OFFSET))(this, response);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* web, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, web, message);
		}

		::System::Void OnAppleAuthComplete(::System::String* accessToken, ::System::String* idToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONAPPLEAUTHCOMPLETE_OFFSET))(this, accessToken, idToken);
		}

		::System::Void OnGoogleAuthComplete(::System::String* accessToken, ::System::String* idToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONGOOGLEAUTHCOMPLETE_OFFSET))(this, accessToken, idToken);
		}

		::System::Void OnRegisterComplete(::System::String* authTicket, ::System::String* username, ::System::Action_2<::System::String*, ::System::Boolean>* customCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* exHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::String*, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONREGISTERCOMPLETE_OFFSET))(this, authTicket, username, customCallback, exHeaders);
		}

		::System::Void RequestLoginByAuthTicket(::System::String* authTicket, ::System::String* traceId, ::System::String* loginType, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* exHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYAUTHTICKET_OFFSET))(this, authTicket, traceId, loginType, callback, exHeaders);
		}

		::System::String* TruncateThirdPartyName(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_TRUNCATETHIRDPARTYNAME_OFFSET))(this, name);
		}

		::System::Void RequestLoginByFacebook(::System::String* token, ::System::String* redirectUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYFACEBOOK_OFFSET))(this, token, redirectUrl);
		}

		::System::Void RequestLoginByTwitter(::System::String* token, ::System::String* redirectUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYTWITTER_OFFSET))(this, token, redirectUrl);
		}

		::System::Void RequestLoginByApple(::System::String* idToken, ::System::String* redirectUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYAPPLE_OFFSET))(this, idToken, redirectUrl);
		}

		::System::Void RequestLoginByGoogle(::System::String* idToken, ::System::String* redirectUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYGOOGLE_OFFSET))(this, idToken, redirectUrl);
		}

		::System::Void ThirdpartyParseAccountInfo(::MiHoYo::SDK::ReportType reportType, ::MiHoYo::SDK::LOGIN_TYPE loginType, ::System::String* token, ::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::LOGIN_TYPE, ::System::String*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_THIRDPARTYPARSEACCOUNTINFO_OFFSET))(this, reportType, loginType, token, response);
		}

		::System::Void ThirdpartyLoginFail(::MiHoYo::SDK::ReportType type, ::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_THIRDPARTYLOGINFAIL_OFFSET))(this, type, response);
		}

		::System::Void RequestLoginByToken(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYTOKEN_OFFSET))(this, account);
		}

		::System::Void OnCheckAccount(::MiHoYo::SDK::JSONNode* data, ::MiHoYo::SDK::LoginPattern pattern)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::LoginPattern))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONCHECKACCOUNT_OFFSET))(this, data, pattern);
		}

		::System::Void OnCheckAccount_1(::MiHoYo::SDK::JSONNode* model, ::MiHoYo::SDK::LoginPattern pattern, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::LoginPattern, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONCHECKACCOUNT_1_OFFSET))(this, model, pattern, index);
		}

		::System::Void OnLoginClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONLOGINCLOSE_OFFSET))(this);
		}

		::System::Void OnLoginSuccess(::System::Int32 code, ::System::String* message, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONLOGINSUCCESS_OFFSET))(this, code, message, account);
		}

		::System::Void OnLogin(::System::String* account, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONLOGIN_OFFSET))(this, account, password);
		}

		::System::Void OnPhoneLogin(::System::String* mobile, ::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONPHONELOGIN_OFFSET))(this, mobile, code);
		}

		::System::Void OnGetPhoneLogin(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONGETPHONELOGIN_OFFSET))(this, response);
		}

		::System::Void ShowGuestDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWGUESTDIALOG_OFFSET))(this);
		}

		::System::Void OnGuestLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONGUESTLOGIN_OFFSET))(this);
		}

		::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* GetRenderMethodAbModel()
		{
			return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_GETRENDERMETHODABMODEL_OFFSET))(this);
		}

		::System::Void RequestWebViewRenderMethodAbTestConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_OFFSET))(this);
		}

		::System::String* GetAccountPlatRegisterUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_GETACCOUNTPLATREGISTERURL_OFFSET))(this);
		}

		::System::String* GetAccountPlatForgetPasswordPageUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_GETACCOUNTPLATFORGETPASSWORDPAGEURL_OFFSET))(this);
		}

		::System::String* MakeThemeQueryFiled()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_MAKETHEMEQUERYFILED_OFFSET))(this);
		}

		::System::String* CheckAndAppendThemeToUrl(::System::String* strUrl)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_CHECKANDAPPENDTHEMETOURL_OFFSET))(this, strUrl);
		}

		::System::Void ForgetPassword(::System::Action_1<::System::String*>* customCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_FORGETPASSWORD_OFFSET))(this, customCallback);
		}

		::System::Void RegisterAccount(::System::Action_2<::System::String*, ::System::Boolean>* customCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REGISTERACCOUNT_OFFSET))(this, customCallback);
		}

		::System::Void ShowTapTapLoginView(::MiHoYo::SDK::DialogType dialogType)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::DialogType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWTAPTAPLOGINVIEW_OFFSET))(this, dialogType);
		}

		::System::Void OnTapTapLogin(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONTAPTAPLOGIN_OFFSET))(this, response);
		}

		::System::Void OnBindTapTap(::MiHoYo::SDK::NetworkResponseModel* response, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_ONBINDTAPTAP_OFFSET))(this, response, account);
		}

		::System::Void RequestLoginByTapTap(::System::String* kid, ::System::String* macKey, ::System::String* redirectUrl, ::System::Boolean no_regist, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_REQUESTLOGINBYTAPTAP_OFFSET))(this, kid, macKey, redirectUrl, no_regist, callback);
		}

		::System::Void ShowLoginStateInvalid(::System::String* message, ::MiHoYo::SDK::ReportType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ReportType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SHOWLOGINSTATEINVALID_OFFSET))(this, message, type);
		}

		::System::Void SetAgeGateFailCallback(::System::Action* customCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_SETAGEGATEFAILCALLBACK_OFFSET))(this, customCallback);
		}

		::System::Void LoginClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER_LOGINCLOSE_OFFSET))(this);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_6(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_6_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_7(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_7_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_8(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_8_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_9(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWPHONEMESSAGEPLUGINUI_B__32_9_OFFSET))(this, strArgs, callback);
		}

		::System::Void _OnQueryQRCode_b__49_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__ONQUERYQRCODE_B__49_0_OFFSET))(this);
		}

		::System::Void _SteamLogin_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__STEAMLOGIN_B__54_0_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_0_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_1_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_2_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_3_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_4_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_5_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_6_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_7_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_8_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_9_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_10_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_13_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_14()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_14_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLOGINVIEW_B__62_15_OFFSET))(this);
		}

		::System::Void _ShowAccountListPluginUI_b__64_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTPLUGINUI_B__64_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountListPluginUI_b__64_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTPLUGINUI_B__64_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountListPluginUI_b__64_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTPLUGINUI_B__64_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountListView_b__66_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTVIEW_B__66_0_OFFSET))(this);
		}

		::System::Void _ShowAccountListView_b__66_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTVIEW_B__66_1_OFFSET))(this);
		}

		::System::Void _ShowAccountListView_b__66_2(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTVIEW_B__66_2_OFFSET))(this, account);
		}

		::System::Void _ShowAccountListView_b__66_5(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTVIEW_B__66_5_OFFSET))(this, account);
		}

		::System::Void _ShowAccountListView_b__66_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWACCOUNTLISTVIEW_B__66_6_OFFSET))(this);
		}

		::System::Void _ShowGuestDialog_b__93_0(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__SHOWGUESTDIALOG_B__93_0_OFFSET))(this, result);
		}

		::System::Void _OnGuestLogin_b__94_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER__ONGUESTLOGIN_B__94_0_OFFSET))(this, response);
		}
	};
}
