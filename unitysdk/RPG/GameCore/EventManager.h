#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/Struct_2_2F6AC431AAB2D4A6.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_347;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::GameCore { class OnEventCallBack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_GAMECORE_EVENTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3F1920)
#define RPG_GAMECORE_EVENTMANAGER_FIREEVENT_OFFSET UNITYSDK_OFFSET(0xA3CC0F0)
#define RPG_GAMECORE_EVENTMANAGER_GETEXECUTELIST_OFFSET UNITYSDK_OFFSET(0xA3F1AE0)
#define RPG_GAMECORE_EVENTMANAGER_REGISTEREVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xA3E6170)
#define RPG_GAMECORE_EVENTMANAGER_RELEASEEXECUTELIST_OFFSET UNITYSDK_OFFSET(0xA3F1B70)
#define RPG_GAMECORE_EVENTMANAGER_UNREGISTEREVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xA3E6300)
#define RPG_GAMECORE_EVENTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F1BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventManager_TypeDefinitionIndex = 44528;

	class EventManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*>* _ExecuteListPool; // 0x10
		::System::Collections::Generic::Dictionary_2<::Struct_2_2F6AC431AAB2D4A6, ::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*>* _EntityEventHandleMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void FireEvent(::Class_0_16E4307DCC419505_347* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_FIREEVENT_OFFSET))(this, pEvent);
		}

		::System::Void RegisterEventListener(::RPG::GameCore::EventType eType, ::System::UInt32 nSourceRuntimeID, ::RPG::GameCore::OnEventCallBack* pCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::System::UInt32, ::RPG::GameCore::OnEventCallBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_REGISTEREVENTLISTENER_OFFSET))(this, eType, nSourceRuntimeID, pCallBack);
		}

		::System::Void UnRegisterEventListener(::RPG::GameCore::EventType eType, ::System::UInt32 nSourceRuntimeID, ::RPG::GameCore::OnEventCallBack* pCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::System::UInt32, ::RPG::GameCore::OnEventCallBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_UNREGISTEREVENTLISTENER_OFFSET))(this, eType, nSourceRuntimeID, pCallBack);
		}

		::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>* GetExecuteList()
		{
			return ((::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_GETEXECUTELIST_OFFSET))(this);
		}

		::System::Void ReleaseExecuteList(::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>* executeList)
		{
			return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_RELEASEEXECUTELIST_OFFSET))(this, executeList);
		}
	};
}
