#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

class Class_1_09EB477CEBF404E2;
class Class_1_0DA3C61CB75D1344;
class Class_1_62DB3B5C659C57A3;
class Class_1_B823313B2CC4BC8E;
class Class_1_D94CA56F333E077E;
class Class_2_C82539080D85D503;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleContext; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlowDataContainer; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x17A20370)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0x17A1F750)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_DATACONTAINER_OFFSET UNITYSDK_OFFSET(0x17A21E90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_ISINPVE_OFFSET UNITYSDK_OFFSET(0x17A21EA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17A21E80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x17A203B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x17A1F9D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1F830)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__HANDLEGOTO_OFFSET UNITYSDK_OFFSET(0x17A216D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__HANDLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x17A20B40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0x17A205D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x17A206C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0x17A20730)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONGOTOEVENT_OFFSET UNITYSDK_OFFSET(0x17A21DA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__REGISTERCONTEXTS_OFFSET UNITYSDK_OFFSET(0x17A20220)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x17A21FA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET UNITYSDK_OFFSET(0x17A22010)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET UNITYSDK_OFFSET(0x17A21F40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0x17A220B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x17A22120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET UNITYSDK_OFFSET(0x17A22190)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatGameFlow_TypeDefinitionIndex = 69867;

	class DiceCombatGameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::Class_1_0DA3C61CB75D1344* _PVPInviteToastController; // 0x40
		::Class_1_09EB477CEBF404E2* _Director; // 0x48
		::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer* _DataContainer; // 0x50
		::Class_2_C82539080D85D503* PVPMatchContext; // 0x58
		::RPG::Client::DiceCombat::DiceCombatBattleContext* BattleContext; // 0x60
		::Class_1_62DB3B5C659C57A3* _GameFlowUIManager; // 0x68

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__CTOR_OFFSET))(this, parameters);
		}

		static ::RPG::Client::DiceCombat::DiceCombatGameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatGameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_CREATE_OFFSET))(parameters);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnContextAttached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONCONTEXTATTACHED_OFFSET))(this, context);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, context);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleInitParams()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__HANDLEINITPARAMS_OFFSET))(this);
		}

		::System::Void _RegisterContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__REGISTERCONTEXTS_OFFSET))(this);
		}

		::System::Void _OnGotoEvent(::Class_1_D94CA56F333E077E* gotoGameFlowEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D94CA56F333E077E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONGOTOEVENT_OFFSET))(this, gotoGameFlowEvent);
		}

		::RPG::Client::Promises::IPromise* _HandleGoTo(::Class_1_B823313B2CC4BC8E* gotoParams)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__HANDLEGOTO_OFFSET))(this, gotoParams);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer* get_DataContainer()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_DATACONTAINER_OFFSET))(this);
		}

		::System::Boolean get_IsInPVE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_ISINPVE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy_OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnContextAttached(::RPG::Client::BaseGameFlowContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY__ONCONTEXTATTACHED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnContextDetached(::RPG::Client::BaseGameFlowContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET))(this);
		}
	};
}
