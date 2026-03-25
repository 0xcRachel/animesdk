#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/ToastPauseSource.h"

class Class_1_81F181762B95C3EC;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TOASTQUEUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5ED6A0)
#define RPG_CLIENT_TOASTQUEUEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA5EDF90)
#define RPG_CLIENT_TOASTQUEUEMODULE_HASWAITINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA5EDBA0)
#define RPG_CLIENT_TOASTQUEUEMODULE_IGNORETEXTID_OFFSET UNITYSDK_OFFSET(0xA5EE0A0)
#define RPG_CLIENT_TOASTQUEUEMODULE_ISIGNORETEXTID_OFFSET UNITYSDK_OFFSET(0xA5EDFF0)
#define RPG_CLIENT_TOASTQUEUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA5ED5C0)
#define RPG_CLIENT_TOASTQUEUEMODULE_PAUSEQUEUE_OFFSET UNITYSDK_OFFSET(0xA5EDB00)
#define RPG_CLIENT_TOASTQUEUEMODULE_RESUMETEXTID_OFFSET UNITYSDK_OFFSET(0xA5EE180)
#define RPG_CLIENT_TOASTQUEUEMODULE_TRYADDLOGINTOASTBYNAME_OFFSET UNITYSDK_OFFSET(0xA5ED7F0)
#define RPG_CLIENT_TOASTQUEUEMODULE_TRYADDLOGINTOASTBYPRIORITY_OFFSET UNITYSDK_OFFSET(0xA5ED8A0)
#define RPG_CLIENT_TOASTQUEUEMODULE__ADDACTION_OFFSET UNITYSDK_OFFSET(0xA5EDA70)
#define RPG_CLIENT_TOASTQUEUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5ED780)
#define RPG_CLIENT_TOASTQUEUEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5EE290)
#define RPG_CLIENT_TOASTQUEUEMODULE__DOACTIONS_OFFSET UNITYSDK_OFFSET(0xA5EDD80)
#define RPG_CLIENT_TOASTQUEUEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xA5EDD30)
#define RPG_CLIENT_TOASTQUEUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5EE370)
#define RPG_CLIENT_TOASTQUEUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA5EE310)
#define RPG_CLIENT_TOASTQUEUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5EE380)

namespace RPG::Client
{
	inline static constexpr unsigned int ToastQueueModule_TypeDefinitionIndex = 55635;

	class ToastQueueModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TextID, ::System::Int32>* _IgnoreTextIDs; // 0x10
		::System::Collections::Generic::List_1<::Class_1_81F181762B95C3EC*>* _ToastQueueItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Boolean TryAddLoginToastByName(::System::Action* handler, ::System::String* funcName, ::System::Int32 sortIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_TRYADDLOGINTOASTBYNAME_OFFSET))(this, handler, funcName, sortIndex);
		}

		::System::Boolean TryAddLoginToastByPriority(::System::Action* handler, ::System::UInt32 priority, ::System::Int32 sortIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_TRYADDLOGINTOASTBYPRIORITY_OFFSET))(this, handler, priority, sortIndex);
		}

		::System::Void PauseQueue(::System::Boolean pause, ::RPG::Client::ToastPauseSource reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::ToastPauseSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_PAUSEQUEUE_OFFSET))(this, pause, reason);
		}

		::System::Boolean HasWaitingPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_HASWAITINGPERFORMANCE_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, param);
		}

		::System::Void _DoActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE__DOACTIONS_OFFSET))(this);
		}

		::System::Void _AddAction(::Class_1_81F181762B95C3EC* queueItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_81F181762B95C3EC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE__ADDACTION_OFFSET))(this, queueItem);
		}

		static ::RPG::Client::ToastQueueModule* get_Instance()
		{
			return ((::RPG::Client::ToastQueueModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean IsIgnoreTextID(::RPG::Client::TextID textID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_ISIGNORETEXTID_OFFSET))(this, textID);
		}

		::System::Void IgnoreTextID(::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_IGNORETEXTID_OFFSET))(this, textID);
		}

		::System::Void ResumeTextID(::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE_RESUMETEXTID_OFFSET))(this, textID);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
