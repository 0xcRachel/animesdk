#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

class Class_1_43BD383C98B4C0C5_147;
class Class_1_7E32D6F5055ABCDE;
class Class_1_B823313B2CC4BC8E;
class Class_1_D94CA56F333E077E;
class Class_1_EC9AE4C13166BF65;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlowDataContainer; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x17F06480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANGOTO_OFFSET UNITYSDK_OFFSET(0x17F064C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0x17F056E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_DATACONTAINER_OFFSET UNITYSDK_OFFSET(0x17F07B10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17F065C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x17F065D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x17F05870)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x17F05790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__HANDLEGOTO_OFFSET UNITYSDK_OFFSET(0x17F07380)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__HANDLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x17F06C10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0x17F067F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x17F06840)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0x17F06890)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONGOTOEVENT_OFFSET UNITYSDK_OFFSET(0x17F07AB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x17F07A40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__REGISTERCONTEXTS_OFFSET UNITYSDK_OFFSET(0x17F06300)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x17F07B80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_CHECKCANGOTO_OFFSET UNITYSDK_OFFSET(0x17F07BE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET UNITYSDK_OFFSET(0x17F07BF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET UNITYSDK_OFFSET(0x17F07B20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0x17F07C80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x17F07CE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET UNITYSDK_OFFSET(0x17F07D40)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2GameFlow_TypeDefinitionIndex = 70755;

	class DiceCombatV2GameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer* _DataContainer; // 0x40
		::Class_1_7E32D6F5055ABCDE* _GameFlowUIManager; // 0x48
		::Class_1_EC9AE4C13166BF65* _Director; // 0x50

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2GameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2GameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CREATE_OFFSET))(a1);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONINITED_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::System::Boolean CheckCanGoto(::Class_1_B823313B2CC4BC8E* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANGOTO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnContextAttached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTATTACHED_OFFSET))(this, a1);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, a1);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleInitParams()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__HANDLEINITPARAMS_OFFSET))(this);
		}

		::System::Void _RegisterContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__REGISTERCONTEXTS_OFFSET))(this);
		}

		::System::Void _OnNetworkReconnected(::Class_1_43BD383C98B4C0C5_147* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_147*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONNETWORKRECONNECTED_OFFSET))(this, a1);
		}

		::System::Void _OnGotoEvent(::Class_1_D94CA56F333E077E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D94CA56F333E077E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONGOTOEVENT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleGoTo(::Class_1_B823313B2CC4BC8E* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__HANDLEGOTO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer* get_DataContainer()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_DATACONTAINER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CheckCanGoto(::Class_1_B823313B2CC4BC8E* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_CHECKCANGOTO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy_OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnContextAttached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONCONTEXTATTACHED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET))(this);
		}
	};
}
