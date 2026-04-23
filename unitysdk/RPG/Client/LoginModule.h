#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class LoginModule_PlayerLoginSuccessNotifyParams; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_LOGINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16552180)
#define RPG_CLIENT_LOGINMODULE_FORCESYNCGAMESTATE_OFFSET UNITYSDK_OFFSET(0x16555AF0)
#define RPG_CLIENT_LOGINMODULE_GET_ISRELAYLOGIN_OFFSET UNITYSDK_OFFSET(0x16555F80)
#define RPG_CLIENT_LOGINMODULE_GET_LOGINSESSIONID_OFFSET UNITYSDK_OFFSET(0x16555F60)
#define RPG_CLIENT_LOGINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x16552080)
#define RPG_CLIENT_LOGINMODULE_RECONNECTRESETDATA_OFFSET UNITYSDK_OFFSET(0x16554A00)
#define RPG_CLIENT_LOGINMODULE_SET_LOGINSESSIONID_OFFSET UNITYSDK_OFFSET(0x16555F70)
#define RPG_CLIENT_LOGINMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x16551F10)
#define RPG_CLIENT_LOGINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x16551EF0)
#define RPG_CLIENT_LOGINMODULE__DOSENDALLPACKETSREQUESTSAFTERPLAYERLOGIN_OFFSET UNITYSDK_OFFSET(0x165532D0)
#define RPG_CLIENT_LOGINMODULE__ONCMDREGIONSTOPSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x16555C10)
#define RPG_CLIENT_LOGINMODULE__ONLOGINOVERSEAREALNAMECHECK_OFFSET UNITYSDK_OFFSET(0x16555EF0)
#define RPG_CLIENT_LOGINMODULE__ONMDKWILLENTERGAMERESULT_OFFSET UNITYSDK_OFFSET(0x165527D0)
#define RPG_CLIENT_LOGINMODULE__ONNETWORKDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x165521C0)
#define RPG_CLIENT_LOGINMODULE__ONPLAYERFORCESYNCGAMESTATEFINISHSCRSP_OFFSET UNITYSDK_OFFSET(0x16555E20)
#define RPG_CLIENT_LOGINMODULE__ONPLAYERLOGINFINISHSCRSP_OFFSET UNITYSDK_OFFSET(0x16554CE0)
#define RPG_CLIENT_LOGINMODULE__ONPLAYERLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x16552300)
#define RPG_CLIENT_LOGINMODULE__ONPLAYERTOKENGOT_OFFSET UNITYSDK_OFFSET(0x16552250)
#define RPG_CLIENT_LOGINMODULE__PLAYERLOGINSUCCESSPROCESS_OFFSET UNITYSDK_OFFSET(0x16552CE0)
#define RPG_CLIENT_LOGINMODULE__SENDALLPACKETSREQUESTSAFTERPLAYERLOGIN_OFFSET UNITYSDK_OFFSET(0x16554940)
#define RPG_CLIENT_LOGINMODULE__SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0x16554EB0)
#define RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16556090)
#define RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x16556000)
#define RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x16555FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginModule_TypeDefinitionIndex = 60563;

	class LoginModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::String* _LoginSessionID_k__BackingField; // 0x10
		::RPG::Client::LoginModule_PlayerLoginSuccessNotifyParams* _LoginSuccessParam; // 0x18
		::System::String* _OverSeaRealNameCheckUrl; // 0x20
		::System::Boolean DuringLogin; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnNetworkDisconnected(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONNETWORKDISCONNECTED_OFFSET))(this, arg);
		}

		::System::Void _OnPlayerTokenGot(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONPLAYERTOKENGOT_OFFSET))(this, param);
		}

		::System::Void _OnPlayerLoginSuccess(::System::Object* paramObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONPLAYERLOGINSUCCESS_OFFSET))(this, paramObj);
		}

		::System::Void _OnMDKWillEnterGameResult(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONMDKWILLENTERGAMERESULT_OFFSET))(this, arg);
		}

		::System::Void _DoSendAllPacketsRequestsAfterPlayerLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__DOSENDALLPACKETSREQUESTSAFTERPLAYERLOGIN_OFFSET))(this);
		}

		::System::Void _SendAllPacketsRequestsAfterPlayerLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__SENDALLPACKETSREQUESTSAFTERPLAYERLOGIN_OFFSET))(this);
		}

		::System::Void _PlayerLoginSuccessProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__PLAYERLOGINSUCCESSPROCESS_OFFSET))(this);
		}

		::System::Void _OnPlayerLoginFinishScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONPLAYERLOGINFINISHSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SendPacketsAfterLoginFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__SENDPACKETSAFTERLOGINFINISHED_OFFSET))(this);
		}

		::System::Void ReconnectResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_RECONNECTRESETDATA_OFFSET))(this);
		}

		::System::Void ForceSyncGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_FORCESYNCGAMESTATE_OFFSET))(this);
		}

		::System::Void _OnCmdRegionStopScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONCMDREGIONSTOPSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnPlayerForceSyncGameStateFinishScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONPLAYERFORCESYNCGAMESTATEFINISHSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnLoginOverSeaRealNameCheck(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE__ONLOGINOVERSEAREALNAMECHECK_OFFSET))(this, arg);
		}

		::System::String* get_LoginSessionID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_GET_LOGINSESSIONID_OFFSET))(this);
		}

		::System::Void set_LoginSessionID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_SET_LOGINSESSIONID_OFFSET))(this, value);
		}

		::System::Boolean get_IsRelayLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_GET_ISRELAYLOGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
