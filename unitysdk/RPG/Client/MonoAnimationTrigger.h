#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MONOANIMATIONTRIGGER_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x9778EC0)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERANIMATIONEVENTNOTIFY_OFFSET UNITYSDK_OFFSET(0x9778D90)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT2D_OFFSET UNITYSDK_OFFSET(0x9778BB0)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x9778AA0)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGEREFFECTEVENT_OFFSET UNITYSDK_OFFSET(0x9778CB0)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERREGISTEREDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9778DF0)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x9778E50)
#define RPG_CLIENT_MONOANIMATIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9778F30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimationTrigger_TypeDefinitionIndex = 54760;

	class MonoAnimationTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::String*>* _AnimationCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void TriggerAudioEvent(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT_OFFSET))(this, name);
		}

		::System::Void TriggerAudioEvent2D(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT2D_OFFSET))(this, name);
		}

		::System::Void TriggerEffectEvent(::System::String* effectPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGEREFFECTEVENT_OFFSET))(this, effectPath);
		}

		::System::Void TriggerAnimationEventNotify(::System::String* notifyParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERANIMATIONEVENTNOTIFY_OFFSET))(this, notifyParam);
		}

		::System::Void TriggerRegisteredCallback(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERREGISTEREDCALLBACK_OFFSET))(this, content);
		}

		::System::Void UnRegisterCallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_UNREGISTERCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RegisterCallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_REGISTERCALLBACK_OFFSET))(this, callback);
		}
	};
}
