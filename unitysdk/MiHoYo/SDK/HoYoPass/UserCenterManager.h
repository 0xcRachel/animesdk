#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::HoYoPass { class UserCenterManager_UserCenterJsBridge; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_CANOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x1583DEB0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_MANUALLYCLOSE_OFFSET UNITYSDK_OFFSET(0x1583E2B0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYNORMALCLOSE_OFFSET UNITYSDK_OFFSET(0x1583F2E0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYOPENERROR_OFFSET UNITYSDK_OFFSET(0x1583E2A0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYUSERCENTERRESULT_OFFSET UNITYSDK_OFFSET(0x1583F350)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONGETTHIRDTOKENINVOKED_OFFSET UNITYSDK_OFFSET(0x1583E420)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONLOGOUT_OFFSET UNITYSDK_OFFSET(0x1583F2F0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONUSERCENTERRESULT_OFFSET UNITYSDK_OFFSET(0x1583EB80)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_OPEN_OFFSET UNITYSDK_OFFSET(0x1583DF70)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_REGISTERRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x1583DC80)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1583F790)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1583DBD0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_0_OFFSET UNITYSDK_OFFSET(0x1583F8C0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_1_OFFSET UNITYSDK_OFFSET(0x1583F9C0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_3_OFFSET UNITYSDK_OFFSET(0x1583F960)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_4_OFFSET UNITYSDK_OFFSET(0x1583FA60)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int UserCenterManager_TypeDefinitionIndex = 7136;

	class UserCenterManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_USER_CENTER_NOMALLY_CLOSE_MSG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x13540);
		}
		static ::MiHoYo::SDK::HoYoPass::UserCenterManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::UserCenterManager**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x13548);
		}
		static ::System::String** StaticGet_CURRENT_USER_INVALID_MSG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x13550);
		}
		static ::System::String** StaticGet_COOKIE_TOKEN_INVALID_MSG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x13558);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::HoYoPass::UserCenterManager_UserCenterJsBridge*>* resultHandlerMap; // 0x10
		::System::Action_1<::System::String*>* userCenterCallback; // 0x18
		::System::Int32 TOKEN_INVALID; // 0x20
		::System::Int32 NOTICE_ERROR_CODE; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean CanOpenUserCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_CANOPENUSERCENTER_OFFSET))(this);
		}

		::System::Void Open(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_OPEN_OFFSET))(this, callback);
		}

		::System::Void ManuallyClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_MANUALLYCLOSE_OFFSET))(this);
		}

		::System::Void RegisterResultHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_REGISTERRESULTHANDLER_OFFSET))(this);
		}

		::System::Void OnGetThirdTokenInvoked(::MiHoYo::SDK::Web* webPage, ::MiHoYo::SDK::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONGETTHIRDTOKENINVOKED_OFFSET))(this, webPage, node);
		}

		::System::Void OnUserCenterResult(::System::Int32 retcode, ::System::String* resultType, ::MiHoYo::SDK::JSONNode* resultObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONUSERCENTERRESULT_OFFSET))(this, retcode, resultType, resultObj);
		}

		::System::Void onLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONLOGOUT_OFFSET))(this);
		}

		::System::Void NotifyOpenError(::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYOPENERROR_OFFSET))(this, strMsg);
		}

		::System::Void NotifyNormalClose(::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYNORMALCLOSE_OFFSET))(this, strMsg);
		}

		::System::Void NotifyUserCenterResult(::System::Int32 retcode, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYUSERCENTERRESULT_OFFSET))(this, retcode, message);
		}

		::System::Void _RegisterResultHandler_b__15_0(::System::Int32 retcode, ::MiHoYo::SDK::JSONNode* resultObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_0_OFFSET))(this, retcode, resultObj);
		}

		::System::Void _RegisterResultHandler_b__15_3(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_3_OFFSET))(this, response);
		}

		::System::Void _RegisterResultHandler_b__15_1(::System::Int32 retcode, ::MiHoYo::SDK::JSONNode* resultObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_1_OFFSET))(this, retcode, resultObj);
		}

		::System::Void _RegisterResultHandler_b__15_4(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_4_OFFSET))(this, response);
		}
	};
}
