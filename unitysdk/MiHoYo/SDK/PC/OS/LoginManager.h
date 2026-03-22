#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_LOGINMANAGER_CREATECALLBACK_OFFSET UNITYSDK_OFFSET(0x15884B40)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x15883D90)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x15883FA0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x15883EB0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_ONLOGIN_OFFSET UNITYSDK_OFFSET(0x158849E0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_REFRESHACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x158847C0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_REQUESTLOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x158842C0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_SHOWLOGINSTATEINVALID_OFFSET UNITYSDK_OFFSET(0x15884610)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x15884090)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15884BC0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15884BB0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 7312;

	class LoginManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::LoginManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::LoginManager**)Il2CppClass::FromTypeDefinitionIndex(LoginManager_TypeDefinitionIndex)->GetStaticField(0x14CC0);
		}
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* loginCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Login(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGIN_OFFSET))(this, callback);
		}

		::System::Void Logout(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGOUT_OFFSET))(this, callback);
		}

		::System::Void LogoutWithoutConfirm(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET))(this, callback);
		}

		::System::Void SwitchRole(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_SWITCHROLE_OFFSET))(this, callback);
		}

		::System::Void RequestLoginByAuthTicket(::System::String* authTicket, ::System::String* thirdpartyType, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_REQUESTLOGINBYAUTHTICKET_OFFSET))(this, authTicket, thirdpartyType, callback);
		}

		::System::Void ShowLoginStateInvalid(::System::String* message, ::MiHoYo::SDK::ReportType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ReportType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_SHOWLOGINSTATEINVALID_OFFSET))(this, message, type);
		}

		::System::Void RefreshAccountInfo(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_REFRESHACCOUNTINFO_OFFSET))(this, callback);
		}

		::System::Void OnLogin(::System::Int32 retcode, ::System::String* message, ::MiHoYo::SDK::AccountModel* accountModel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_ONLOGIN_OFFSET))(this, retcode, message, accountModel);
		}

		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* CreateCallback(::System::Int32 retcode, ::System::String* message, ::MiHoYo::SDK::AccountModel* accountModel)
		{
			return ((::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_CREATECALLBACK_OFFSET))(this, retcode, message, accountModel);
		}
	};
}
