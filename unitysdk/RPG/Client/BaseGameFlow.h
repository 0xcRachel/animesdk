#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameFlowState.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_510;
class Class_1_1B267C8FC1CD793A;
class Class_1_3B36CE63D36E9917;
class Class_1_3C3EAF61D129C7B7;
class Class_1_ECE27CA14AB1E925;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BASEGAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x8D73A10)
#define RPG_CLIENT_BASEGAMEFLOW_DESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x8D742E0)
#define RPG_CLIENT_BASEGAMEFLOW_ENTERFAILED_OFFSET UNITYSDK_OFFSET(0x8D73AF0)
#define RPG_CLIENT_BASEGAMEFLOW_ENTER_OFFSET UNITYSDK_OFFSET(0x8D73A50)
#define RPG_CLIENT_BASEGAMEFLOW_EXIT_OFFSET UNITYSDK_OFFSET(0x8D73C40)
#define RPG_CLIENT_BASEGAMEFLOW_GET_ISAUTOEXITONLASTDETACH_OFFSET UNITYSDK_OFFSET(0x8D73780)
#define RPG_CLIENT_BASEGAMEFLOW_GET_ISNEEDAUTOEXIT_OFFSET UNITYSDK_OFFSET(0x8D737A0)
#define RPG_CLIENT_BASEGAMEFLOW_GET_STATE_OFFSET UNITYSDK_OFFSET(0x8D73760)
#define RPG_CLIENT_BASEGAMEFLOW_INIT_OFFSET UNITYSDK_OFFSET(0x8D739B0)
#define RPG_CLIENT_BASEGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x8D74580)
#define RPG_CLIENT_BASEGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x8D74540)
#define RPG_CLIENT_BASEGAMEFLOW_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0x8D741F0)
#define RPG_CLIENT_BASEGAMEFLOW_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x8D74260)
#define RPG_CLIENT_BASEGAMEFLOW_SET_ISAUTOEXITONLASTDETACH_OFFSET UNITYSDK_OFFSET(0x8D73790)
#define RPG_CLIENT_BASEGAMEFLOW_SET_STATE_OFFSET UNITYSDK_OFFSET(0x8D73770)
#define RPG_CLIENT_BASEGAMEFLOW__ATTACH_OFFSET UNITYSDK_OFFSET(0x8D74720)
#define RPG_CLIENT_BASEGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x8D73830)
#define RPG_CLIENT_BASEGAMEFLOW__DESTROY_OFFSET UNITYSDK_OFFSET(0x8D73BB0)
#define RPG_CLIENT_BASEGAMEFLOW__DETACHALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x8D73DB0)
#define RPG_CLIENT_BASEGAMEFLOW__DETACHCONTEXT_OFFSET UNITYSDK_OFFSET(0x8D743C0)
#define RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0x8D74640)
#define RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x8D74690)
#define RPG_CLIENT_BASEGAMEFLOW__ONENTERFAILED_OFFSET UNITYSDK_OFFSET(0x8D74600)
#define RPG_CLIENT_BASEGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0x8D746E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGameFlow_TypeDefinitionIndex = 51098;

	class BaseGameFlow : public ::System::Object
	{
	public:
		::Class_1_3B36CE63D36E9917* EventRegistry; // 0x10
		::Class_1_3C3EAF61D129C7B7* MessageRegistry; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Parameters; // 0x20
		::Class_1_ECE27CA14AB1E925* ContextFactory; // 0x28
		::Class_1_1B267C8FC1CD793A* ContextRegistry; // 0x30
		::RPG::Client::GameFlowState _State_k__BackingField; // 0x38
		::System::Boolean _IsAutoExitOnLastDetach_k__BackingField; // 0x3C

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__CTOR_OFFSET))(this, parameters);
		}

		::RPG::Client::GameFlowState get_State()
		{
			return ((::RPG::Client::GameFlowState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::GameFlowState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameFlowState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_SET_STATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsAutoExitOnLastDetach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_GET_ISAUTOEXITONLASTDETACH_OFFSET))(this);
		}

		::System::Void set_IsAutoExitOnLastDetach(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_SET_ISAUTOEXITONLASTDETACH_OFFSET))(this, value);
		}

		::System::Boolean get_IsNeedAutoExit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_GET_ISNEEDAUTOEXIT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_INIT_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Enter()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ENTER_OFFSET))(this);
		}

		::System::Void EnterFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ENTERFAILED_OFFSET))(this);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_EXIT_OFFSET))(this);
		}

		::System::Void ReceiveEvent(::Class_0_16E4307DCC419505_510* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_510*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_RECEIVEEVENT_OFFSET))(this, evt);
		}

		::System::Void SendMessage_(::System::Int32 message, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_SENDMESSAGE__OFFSET))(this, message, obj);
		}

		::System::Void DestroyContext(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_DESTROYCONTEXT_OFFSET))(this, context);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnEnterFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONENTERFAILED_OFFSET))(this);
		}

		::System::Void _OnContextAttached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTATTACHED_OFFSET))(this, context);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, context);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::System::Void _Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__DESTROY_OFFSET))(this);
		}

		::System::Void _Attach(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ATTACH_OFFSET))(this, context);
		}

		::System::Void _DetachAllContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__DETACHALLCONTEXTS_OFFSET))(this);
		}

		::System::Void _DetachContext(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__DETACHCONTEXT_OFFSET))(this, context);
		}
	};
}
