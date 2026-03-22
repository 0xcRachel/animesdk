#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1A263F5BDD91B9DA;
class Class_1_35379441886C7D20;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }

#define RPG_CLIENT_LOBBYMODULE_CREATELOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x9575220)
#define RPG_CLIENT_LOBBYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9573A40)
#define RPG_CLIENT_LOBBYMODULE_GET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0x9575B00)
#define RPG_CLIENT_LOBBYMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9575AA0)
#define RPG_CLIENT_LOBBYMODULE_GET__ISRECONNECTING_OFFSET UNITYSDK_OFFSET(0x95748C0)
#define RPG_CLIENT_LOBBYMODULE_INITLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x9574D70)
#define RPG_CLIENT_LOBBYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x95738F0)
#define RPG_CLIENT_LOBBYMODULE_ISLOBBYEXIST_OFFSET UNITYSDK_OFFSET(0x9575920)
#define RPG_CLIENT_LOBBYMODULE_JOINLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x9575370)
#define RPG_CLIENT_LOBBYMODULE_MODIFYSELFINFOPROMISE_OFFSET UNITYSDK_OFFSET(0x9575830)
#define RPG_CLIENT_LOBBYMODULE_QUITLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x9575520)
#define RPG_CLIENT_LOBBYMODULE_RECONNECTPROMISE_OFFSET UNITYSDK_OFFSET(0x9575680)
#define RPG_CLIENT_LOBBYMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x95751C0)
#define RPG_CLIENT_LOBBYMODULE_SET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0x9575B10)
#define RPG_CLIENT_LOBBYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9573B90)
#define RPG_CLIENT_LOBBYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9575B20)
#define RPG_CLIENT_LOBBYMODULE__ONCMDCANCELMATCHSCRSP_OFFSET UNITYSDK_OFFSET(0x9574580)
#define RPG_CLIENT_LOBBYMODULE__ONCMDGETCROSSINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9574920)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYCREATESCRSP_OFFSET UNITYSDK_OFFSET(0x9573E50)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYGETINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x95745D0)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYJOINSCRSP_OFFSET UNITYSDK_OFFSET(0x9573FF0)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYKICKOUTSCRSP_OFFSET UNITYSDK_OFFSET(0x95742B0)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYMODIFYPLAYERINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9574430)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYQUITSCRSP_OFFSET UNITYSDK_OFFSET(0x9574300)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYSYNCINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9574FB0)
#define RPG_CLIENT_LOBBYMODULE__ONCMDSTARTMATCHSCRSP_OFFSET UNITYSDK_OFFSET(0x9574530)
#define RPG_CLIENT_LOBBYMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9575060)
#define RPG_CLIENT_LOBBYMODULE__ONLOBBYINTERACTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x95750F0)
#define RPG_CLIENT_LOBBYMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0x9575A40)
#define RPG_CLIENT_LOBBYMODULE__TRYRECONNECTLOBBY_OFFSET UNITYSDK_OFFSET(0x9575990)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVECREATELOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x9573F60)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVEJOINLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x9574210)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVEMODIFYPROMISE_OFFSET UNITYSDK_OFFSET(0x95744D0)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVEQUITLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x95743D0)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVERECONNECTPROMISE_OFFSET UNITYSDK_OFFSET(0x9574F00)
#define RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9575BD0)
#define RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9575B40)
#define RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9575BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyModule_TypeDefinitionIndex = 52282;

	class LobbyModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise* _QuitLobbyPromise; // 0x10
		::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4>>* _ReconnectPromise; // 0x18
		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* _JoinLobbyPromise; // 0x20
		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* _CreateLobbyPromise; // 0x28
		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* _InitPromise; // 0x30
		::RPG::Client::Promises::Promise* _ModifyPromise; // 0x38
		::RPG::Client::BaseLobby* _CurrentLobby_k__BackingField; // 0x40
		::System::Boolean _DataDirty; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdLobbyCreateScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYCREATESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbyJoinScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYJOINSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbyKickOutScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYKICKOUTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbyQuitScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYQUITSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbyModifyPlayerInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYMODIFYPLAYERINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdStartMatchScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDSTARTMATCHSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdCancelMatchScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDCANCELMATCHSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbyGetInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYGETINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetCrossInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDGETCROSSINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbySyncInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYSYNCINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFightGameStartScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnLobbyInteractScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONLOBBYINTERACTSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* CreateLobbyPromise(::Enum_3_F80BFD5B986D5503_4 type, ::Class_1_35379441886C7D20* info, ::System::UInt32 createParam, ::Class_1_1A263F5BDD91B9DA* roomExtInfo)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_4, ::Class_1_35379441886C7D20*, ::System::UInt32, ::Class_1_1A263F5BDD91B9DA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_CREATELOBBYPROMISE_OFFSET))(this, type, info, createParam, roomExtInfo);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* JoinLobbyPromise(::System::UInt64 roomID, ::Class_1_35379441886C7D20* info)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::UInt64, ::Class_1_35379441886C7D20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_JOINLOBBYPROMISE_OFFSET))(this, roomID, info);
		}

		::RPG::Client::Promises::Promise* QuitLobbyPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_QUITLOBBYPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* InitLobbyPromise()
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_INITLOBBYPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4>>* ReconnectPromise()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_RECONNECTPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* ModifySelfInfoPromise(::Enum_3_63C076C405BE0674_1 type, ::Class_1_35379441886C7D20* extInfo)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::Enum_3_63C076C405BE0674_1, ::Class_1_35379441886C7D20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_MODIFYSELFINFOPROMISE_OFFSET))(this, type, extInfo);
		}

		::System::Boolean IsLobbyExist(::Enum_3_F80BFD5B986D5503_4 type)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_ISLOBBYEXIST_OFFSET))(this, type);
		}

		::System::Void _TryReconnectLobby(::RPG::Client::BaseLobby* lobby)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRECONNECTLOBBY_OFFSET))(this, lobby);
		}

		::System::Void _OnMultiplayerServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void _TryResolveCreateLobbyPromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVECREATELOBBYPROMISE_OFFSET))(this);
		}

		::System::Void _TryResolveJoinLobbyPromise(::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVEJOINLOBBYPROMISE_OFFSET))(this, isSuccess);
		}

		::System::Void _TryResolveQuitLobbyPromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVEQUITLOBBYPROMISE_OFFSET))(this);
		}

		::System::Void _TryResolveReconnectPromise(::System::Boolean isInFight, ::Enum_3_F80BFD5B986D5503_4 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_F80BFD5B986D5503_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVERECONNECTPROMISE_OFFSET))(this, isInFight, gameMode);
		}

		::System::Void _TryResolveModifyPromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVEMODIFYPROMISE_OFFSET))(this);
		}

		static ::RPG::Client::LobbyModule* get_Instance()
		{
			return ((::RPG::Client::LobbyModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_GET_INSTANCE_OFFSET))();
		}

		::RPG::Client::BaseLobby* get_CurrentLobby()
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_GET_CURRENTLOBBY_OFFSET))(this);
		}

		::System::Void set_CurrentLobby(::RPG::Client::BaseLobby* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_SET_CURRENTLOBBY_OFFSET))(this, value);
		}

		::System::Boolean get__IsReconnecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_GET__ISRECONNECTING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
