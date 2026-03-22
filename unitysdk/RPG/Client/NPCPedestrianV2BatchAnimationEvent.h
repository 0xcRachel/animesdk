#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BatchAnimationEvent.h"
#include "unitysdk/UnityEngine/Rendering/BatchAnimEventObjCB.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class BatchAnimEventObjCB_ExecuteEventFun; }
namespace UnityEngine::Rendering { class BatchAnimation; }

#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x991C5B0)
#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT_GETEVENTEXECUTORFUN_OFFSET UNITYSDK_OFFSET(0x991C8B0)
#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT_METHOD_6_29C36F9051203275_OFFSET UNITYSDK_OFFSET(0x991C9F0)
#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT_METHOD_6_D422F1B8D670D871_OFFSET UNITYSDK_OFFSET(0x991C970)
#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x991CB20)
#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___IFIXBASEPROXY_GETEVENTEXECUTORFUN_OFFSET UNITYSDK_OFFSET(0x991CB60)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCPedestrianV2BatchAnimationEvent_TypeDefinitionIndex = 55049;

	class NPCPedestrianV2BatchAnimationEvent : public ::RPG::CustomRP::BatchAnimationEvent
	{
	public:
		::Il2CppArray<::System::String*>* SignEvents; // 0x30
		::Il2CppArray<::System::String*>* AudioEvents; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::BatchAnimEventObjCB_ExecuteEventFun*>* EventMap; // 0x40
		::System::Action_2<::System::Int32, ::System::String*>* OnAnimationEventFire; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Rendering::BatchAnimEventObjCB_ExecuteEventFun* GetEventExecutorFun(::System::String* a1)
		{
			return ((::UnityEngine::Rendering::BatchAnimEventObjCB_ExecuteEventFun*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT_GETEVENTEXECUTORFUN_OFFSET))(this, a1);
		}

		::System::Void Method_6_D422F1B8D670D871(::UnityEngine::Rendering::BatchAnimation* a1, ::UnityEngine::Rendering::BatchAnimEventObjCB& a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimEventObjCB&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT_METHOD_6_D422F1B8D670D871_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_29C36F9051203275(::UnityEngine::Rendering::BatchAnimation* a1, ::UnityEngine::Rendering::BatchAnimEventObjCB& a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimEventObjCB&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT_METHOD_6_29C36F9051203275_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Rendering::BatchAnimEventObjCB_ExecuteEventFun* __iFixBaseProxy_GetEventExecutorFun(::System::String* P0)
		{
			return ((::UnityEngine::Rendering::BatchAnimEventObjCB_ExecuteEventFun*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___IFIXBASEPROXY_GETEVENTEXECUTORFUN_OFFSET))(this, P0);
		}
	};
}
