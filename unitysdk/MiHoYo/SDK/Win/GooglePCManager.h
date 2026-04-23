#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class GoogleOAuthServer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_AUTOCHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1547A0D0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x15475310)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOAUTHRESULT_OFFSET UNITYSDK_OFFSET(0x154756F0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOUTENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x154791B0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_DETECTPAY_OFFSET UNITYSDK_OFFSET(0x154795E0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x154767A0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x154752D0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINAUTHSUCCESS_OFFSET UNITYSDK_OFFSET(0x15475B50)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINCHECKOAUTH_OFFSET UNITYSDK_OFFSET(0x15475370)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONAUTHCALLBACKFAILED_OFFSET UNITYSDK_OFFSET(0x154766C0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONBACKAUTH_OFFSET UNITYSDK_OFFSET(0x15475E80)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONFINISHAUTH_OFFSET UNITYSDK_OFFSET(0x15476060)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x15476ED0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGOOGLEPCTOKENERROR_OFFSET UNITYSDK_OFFSET(0x15477760)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x15479BE0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x15478600)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x15479ED0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONSTARTAUTH_OFFSET UNITYSDK_OFFSET(0x15475E50)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_1_OFFSET UNITYSDK_OFFSET(0x15478B60)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x154779B0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTGOOGLEQUERYGOODS_OFFSET UNITYSDK_OFFSET(0x15477130)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHINFO_OFFSET UNITYSDK_OFFSET(0x154753F0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHRESULT_OFFSET UNITYSDK_OFFSET(0x154757A0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWAUTHERROR_OFFSET UNITYSDK_OFFSET(0x15476530)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWGOOGLEWEBPAY_OFFSET UNITYSDK_OFFSET(0x15478F70)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x154764D0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1547A0F0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CHECKOAUTHRESULT_B__14_0_OFFSET UNITYSDK_OFFSET(0x1547A750)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1547A0E0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__LOGINCHECKOAUTH_B__13_0_OFFSET UNITYSDK_OFFSET(0x1547A120)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCManager_TypeDefinitionIndex = 8091;

	class GooglePCManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::GooglePCManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::GooglePCManager**)Il2CppClass::FromTypeDefinitionIndex(GooglePCManager_TypeDefinitionIndex)->GetStaticField(0xE560);
		}
		::System::Action* OnAuthSuccess; // 0x10
		::MiHoYo::SDK::Win::GoogleOAuthServer* server; // 0x18
		::System::Action* OnBack; // 0x20
		::System::String* oauthDeepLink; // 0x28
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x30
		::System::Action_1<::System::String*>* OnAuthFailed; // 0x38
		::System::String* payDeepLink; // 0x40
		::System::Action_1<::System::String*>* payCallback; // 0x48
		::MiHoYo::SDK::AccountModel* accountModel; // 0x50
		::System::Boolean isPaying; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_INIT_OFFSET))(this);
		}

		static ::System::Boolean CheckChannel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKCHANNEL_OFFSET))();
		}

		::System::Void LoginCheckOAuth(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINCHECKOAUTH_OFFSET))(this, account);
		}

		::System::Void CheckOAuthResult(::System::String* code, ::System::String* scope, ::System::String* state, ::System::String* redirectURI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOAUTHRESULT_OFFSET))(this, code, scope, state, redirectURI);
		}

		::System::Void LoginAuthSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINAUTHSUCCESS_OFFSET))(this);
		}

		::System::Void OnStartAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONSTARTAUTH_OFFSET))(this);
		}

		::System::Void OnBackAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONBACKAUTH_OFFSET))(this);
		}

		::System::Void OnFinishAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONFINISHAUTH_OFFSET))(this);
		}

		::System::Void ShowAuthError(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWAUTHERROR_OFFSET))(this, msg);
		}

		::System::Void OnAuthCallbackFailed(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONAUTHCALLBACKFAILED_OFFSET))(this, msg);
		}

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* callback, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGETPRODUCTLISTERROR_OFFSET))(this, callback, msg);
		}

		::System::Void OnGooglePCTokenError(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGOOGLEPCTOKENERROR_OFFSET))(this, callback);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void Pay_1(::MiHoYo::SDK::JSONNode* payInfo, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_1_OFFSET))(this, payInfo, callback);
		}

		::System::Void ShowGoogleWebPay(::System::String* url, ::System::String* payGoodsId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWGOOGLEWEBPAY_OFFSET))(this, url, payGoodsId);
		}

		::System::Void CheckoutEntitlements(::System::String* goods_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOUTENTITLEMENTS_OFFSET))(this, goods_id);
		}

		::System::Void RequestOAuthInfo(::System::String* accountId, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHINFO_OFFSET))(this, accountId, callback);
		}

		::System::Void RequestOAuthResult(::System::String* accountId, ::System::String* code, ::System::String* scope, ::System::String* state, ::System::String* redirectURI, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHRESULT_OFFSET))(this, accountId, code, scope, state, redirectURI, callback);
		}

		::System::Void RequestGoogleQueryGoods(::System::String* accountId, ::System::String* gameToken, ::System::Collections::Generic::List_1<::System::String*>* goodsIdList, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTGOOGLEQUERYGOODS_OFFSET))(this, accountId, gameToken, goodsIdList, callback);
		}

		static ::System::Void DetectPay(::System::String* aid, ::System::String* token, ::System::String* game, ::System::String* region, ::System::String* uid, ::System::String* device, ::System::String* delivery_url, ::System::String* goods_id, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_DETECTPAY_OFFSET))(aid, token, game, region, uid, device, delivery_url, goods_id, callback);
		}

		::System::Void OnPayCallbackFail(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, msg);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void ShowTips(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWTIPS_OFFSET))(this, message);
		}

		::System::Void AutoCheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_AUTOCHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::Void _LoginCheckOAuth_b__13_0(::MiHoYo::SDK::NetworkResponseModel* oauthResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__LOGINCHECKOAUTH_B__13_0_OFFSET))(this, oauthResponse);
		}

		::System::Void _CheckOAuthResult_b__14_0(::MiHoYo::SDK::NetworkResponseModel* oauthResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CHECKOAUTHRESULT_B__14_0_OFFSET))(this, oauthResponse);
		}
	};
}
