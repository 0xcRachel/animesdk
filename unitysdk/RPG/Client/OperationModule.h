#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/MessageSituationType.h"

class Class_1_9100C4ECB2108214;
namespace RPG::Client { class AnnounceData; }
namespace RPG::Client { class AuthKeyData; }
namespace RPG::Client { class MessageSectionData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPERATIONMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A21310)
#define RPG_CLIENT_OPERATIONMODULE_GETAUTHKEYPROMISE_OFFSET UNITYSDK_OFFSET(0x9A0B630)
#define RPG_CLIENT_OPERATIONMODULE_GET_ACTIVITYHASREDDOT_OFFSET UNITYSDK_OFFSET(0x9A210D0)
#define RPG_CLIENT_OPERATIONMODULE_GET_AUTHKEYDATA_OFFSET UNITYSDK_OFFSET(0x9A21F80)
#define RPG_CLIENT_OPERATIONMODULE_GET_IMHASREDDOT_OFFSET UNITYSDK_OFFSET(0x9A210B0)
#define RPG_CLIENT_OPERATIONMODULE_GET_PLAYERRETURNINVITEHASREDDOT_OFFSET UNITYSDK_OFFSET(0x9A21140)
#define RPG_CLIENT_OPERATIONMODULE_GET_WEBTOOLHASREDDOT_OFFSET UNITYSDK_OFFSET(0x9A211A0)
#define RPG_CLIENT_OPERATIONMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9A21360)
#define RPG_CLIENT_OPERATIONMODULE_REPORTMESSAGESENT_OFFSET UNITYSDK_OFFSET(0x9A21570)
#define RPG_CLIENT_OPERATIONMODULE_SETUPHTTPAUTHKEYPROMISED_OFFSET UNITYSDK_OFFSET(0x9A21430)
#define RPG_CLIENT_OPERATIONMODULE_SET_AUTHKEYDATA_OFFSET UNITYSDK_OFFSET(0x9A21F90)
#define RPG_CLIENT_OPERATIONMODULE_SET_IMHASREDDOT_OFFSET UNITYSDK_OFFSET(0x9A210C0)
#define RPG_CLIENT_OPERATIONMODULE_SET_WEBTOOLHASREDDOT_OFFSET UNITYSDK_OFFSET(0x9A211B0)
#define RPG_CLIENT_OPERATIONMODULE_UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x9A204C0)
#define RPG_CLIENT_OPERATIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A21CF0)
#define RPG_CLIENT_OPERATIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A215C0)
#define RPG_CLIENT_OPERATIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A211C0)
#define RPG_CLIENT_OPERATIONMODULE__GETACTIVITYPLAYERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0x9A20760)
#define RPG_CLIENT_OPERATIONMODULE__GETACTIVITYSERVERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0x9A20870)
#define RPG_CLIENT_OPERATIONMODULE__GETIMREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0x9A20650)
#define RPG_CLIENT_OPERATIONMODULE__GETPLAYERRETURNINVITEPLAYERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0x9A20980)
#define RPG_CLIENT_OPERATIONMODULE__GETPLAYERRETURNINVITESERVERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0x9A20A90)
#define RPG_CLIENT_OPERATIONMODULE__GETWEBTOOLREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0x9A20BA0)
#define RPG_CLIENT_OPERATIONMODULE__ONGETAUTHKEYSCRSP_OFFSET UNITYSDK_OFFSET(0x9A216C0)
#define RPG_CLIENT_OPERATIONMODULE__ONMESSAGESITUATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9A21ED0)
#define RPG_CLIENT_OPERATIONMODULE__ONREPORTOPTIONCHOSEN_OFFSET UNITYSDK_OFFSET(0x9A21E10)
#define RPG_CLIENT_OPERATIONMODULE__ONSERVERANNOUNCENOTIFY_OFFSET UNITYSDK_OFFSET(0x9A21890)
#define RPG_CLIENT_OPERATIONMODULE__ONSETREDPOINTSTATUSSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9A20D20)
#define RPG_CLIENT_OPERATIONMODULE__REDDOTADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A20CB0)
#define RPG_CLIENT_OPERATIONMODULE__REDDOTDISPOSE_OFFSET UNITYSDK_OFFSET(0x9A20410)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A21FA0)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9A21FB0)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A22070)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A22010)

namespace RPG::Client
{
	inline static constexpr unsigned int OperationModule_TypeDefinitionIndex = 52873;

	class OperationModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivityServerRedDotContentIDs; // 0x10
		::RPG::Client::AuthKeyData* _AuthKeyData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivityPlayerRedDotContentIDs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Promises::Promise_1<::System::String*>*>* _AuthKeyPromises; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::AnnounceData*>* AnnounceDataList; // 0x30
		::System::Int32 _IMRedDotType; // 0x38
		::RPG::Client::MessageSituationType _MessageSituationType; // 0x3C
		::System::Boolean _IMHasRedDot_k__BackingField; // 0x40
		::System::Boolean _PlayerReturnInviteHasPlayerRedDot; // 0x41
		::System::Boolean _PlayerReturnInviteHasServerRedDot; // 0x42
		::System::Boolean _WebToolHasRedDot_k__BackingField; // 0x43

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _RedDotDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__REDDOTDISPOSE_OFFSET))(this);
		}

		::System::Void UpdateRedDot(::System::UInt32 redDotType, ::System::UInt32 contentID, ::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_UPDATEREDDOT_OFFSET))(this, redDotType, contentID, show);
		}

		::System::Int32 _GetIMRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETIMREDDOTTYPE_OFFSET))(this);
		}

		::System::Int32 _GetActivityPlayerRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETACTIVITYPLAYERREDDOTTYPE_OFFSET))(this);
		}

		::System::Int32 _GetActivityServerRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETACTIVITYSERVERREDDOTTYPE_OFFSET))(this);
		}

		::System::Int32 _GetPlayerReturnInvitePlayerRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETPLAYERRETURNINVITEPLAYERREDDOTTYPE_OFFSET))(this);
		}

		::System::Int32 _GetPlayerReturnInviteServerRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETPLAYERRETURNINVITESERVERREDDOTTYPE_OFFSET))(this);
		}

		::System::Int32 _GetWebToolRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETWEBTOOLREDDOTTYPE_OFFSET))(this);
		}

		::System::Void _RedDotAddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__REDDOTADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnSetRedPointStatusScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONSETREDPOINTSTATUSSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean get_IMHasRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_IMHASREDDOT_OFFSET))(this);
		}

		::System::Void set_IMHasRedDot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SET_IMHASREDDOT_OFFSET))(this, value);
		}

		::System::Boolean get_ActivityHasRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_ACTIVITYHASREDDOT_OFFSET))(this);
		}

		::System::Boolean get_PlayerReturnInviteHasRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_PLAYERRETURNINVITEHASREDDOT_OFFSET))(this);
		}

		::System::Boolean get_WebToolHasRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_WEBTOOLHASREDDOT_OFFSET))(this);
		}

		::System::Void set_WebToolHasRedDot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SET_WEBTOOLHASREDDOT_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::String*>* GetAuthKeyPromise(::System::String* appID, ::System::String* signType, ::System::String* version)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GETAUTHKEYPROMISE_OFFSET))(this, appID, signType, version);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_9100C4ECB2108214*>* SetupHttpAuthKeyPromised(::Class_1_9100C4ECB2108214* req, ::System::String* appID, ::System::String* signType, ::System::String* authKeyVer)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_9100C4ECB2108214*>*(*)(::PVOID, ::Class_1_9100C4ECB2108214*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SETUPHTTPAUTHKEYPROMISED_OFFSET))(this, req, appID, signType, authKeyVer);
		}

		::System::Void ReportMessageSent(::RPG::Client::MessageSectionData* sectionData, ::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_REPORTMESSAGESENT_OFFSET))(this, sectionData, itemID);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetAuthkeyScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONGETAUTHKEYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnServerAnnounceNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONSERVERANNOUNCENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnReportOptionChosen(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONREPORTOPTIONCHOSEN_OFFSET))(this, param);
		}

		::System::Void _OnMessageSituationChanged(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONMESSAGESITUATIONCHANGED_OFFSET))(this, param);
		}

		::RPG::Client::AuthKeyData* get_AuthKeyData()
		{
			return ((::RPG::Client::AuthKeyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_AUTHKEYDATA_OFFSET))(this);
		}

		::System::Void set_AuthKeyData(::RPG::Client::AuthKeyData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AuthKeyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SET_AUTHKEYDATA_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
