#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WIN_EOSMANAGER_CHANGESUBCHANNELTOOFFICAL_OFFSET UNITYSDK_OFFSET(0x153C1A00)
#define MIHOYO_SDK_WIN_EOSMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x153C1C00)
#define MIHOYO_SDK_WIN_EOSMANAGER_CHECKDLL_OFFSET UNITYSDK_OFFSET(0x153C1700)
#define MIHOYO_SDK_WIN_EOSMANAGER_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x153C3790)
#define MIHOYO_SDK_WIN_EOSMANAGER_CHECKLOCALPARAMS_OFFSET UNITYSDK_OFFSET(0x153C1AE0)
#define MIHOYO_SDK_WIN_EOSMANAGER_DETECTPAY_OFFSET UNITYSDK_OFFSET(0x153C3990)
#define MIHOYO_SDK_WIN_EOSMANAGER_GETCMDLINEMAP_OFFSET UNITYSDK_OFFSET(0x153C1C60)
#define MIHOYO_SDK_WIN_EOSMANAGER_GETLAUNCHPARAMS_OFFSET UNITYSDK_OFFSET(0x153C1BA0)
#define MIHOYO_SDK_WIN_EOSMANAGER_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x153C20A0)
#define MIHOYO_SDK_WIN_EOSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x153C0FE0)
#define MIHOYO_SDK_WIN_EOSMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x153C3130)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x153C41B0)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONGETPRODUCTLISTCALLBACK_OFFSET UNITYSDK_OFFSET(0x153C2E50)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONGETPRODUCTLISTERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x153C2B40)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONPAYCANCEL_OFFSET UNITYSDK_OFFSET(0x153C4350)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONPAYFAIL_OFFSET UNITYSDK_OFFSET(0x153C3250)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x153C44F0)
#define MIHOYO_SDK_WIN_EOSMANAGER_PAY_1_OFFSET UNITYSDK_OFFSET(0x153C3430)
#define MIHOYO_SDK_WIN_EOSMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x153C3160)
#define MIHOYO_SDK_WIN_EOSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x153C46F0)
#define MIHOYO_SDK_WIN_EOSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x153C4680)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int EOSManager_TypeDefinitionIndex = 8973;

	class EOSManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::EOSManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::EOSManager**)Il2CppClass::FromTypeDefinitionIndex(EOSManager_TypeDefinitionIndex)->GetStaticField(0x25A60);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_cmdLineMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EOSManager_TypeDefinitionIndex)->GetStaticField(0x25A68);
		}
		::MiHoYo::SDK::JSONArray* productList; // 0x10
		::System::Boolean hasInit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_INIT_OFFSET))(this);
		}

		static ::System::Boolean CheckChannel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_CHECKCHANNEL_OFFSET))();
		}

		::System::Boolean CheckDll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_CHECKDLL_OFFSET))(this);
		}

		::System::Boolean CheckLocalParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_CHECKLOCALPARAMS_OFFSET))(this);
		}

		::System::Boolean GetLaunchParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_GETLAUNCHPARAMS_OFFSET))(this);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void Login(::System::Action_2<::System::Int32, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_LOGIN_OFFSET))(this, a1);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void Pay_1(::MiHoYo::SDK::JSONNode* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_PAY_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CheckEntitlements(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_CHECKENTITLEMENTS_OFFSET))(this, a1);
		}

		static ::System::Void DetectPay(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::String* a9, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a10)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_DETECTPAY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void OnPayFail(::System::Action_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONPAYFAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPayCancel(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONPAYCANCEL_OFFSET))(this, a1, a2);
		}

		::System::Void OnPaySuccess(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONPAYSUCCESS_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnCallback(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3, ::MiHoYo::SDK::JSONNode* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void OnGetProductListCallback(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONGETPRODUCTLISTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListErrorCallback(::System::Action_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONGETPRODUCTLISTERRORCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetCmdLineMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_GETCMDLINEMAP_OFFSET))(this);
		}

		::System::Void ChangeSubChannelToOffical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_CHANGESUBCHANNELTOOFFICAL_OFFSET))(this);
		}
	};
}
