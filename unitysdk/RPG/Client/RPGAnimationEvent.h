#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RPGAnimationEvent_InvokeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class RPGAnimationEvent_AnimationEventCallBack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationEvent; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENTBYCLIP_OFFSET UNITYSDK_OFFSET(0x9D36620)
#define RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9D36090)
#define RPG_CLIENT_RPGANIMATIONEVENT_ADDEVENTFORALLCLIPS_OFFSET UNITYSDK_OFFSET(0x9D35D40)
#define RPG_CLIENT_RPGANIMATIONEVENT_CLEAREVENT_OFFSET UNITYSDK_OFFSET(0x9D36690)
#define RPG_CLIENT_RPGANIMATIONEVENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9D37150)
#define RPG_CLIENT_RPGANIMATIONEVENT_GET_OFFSET UNITYSDK_OFFSET(0x9D35C50)
#define RPG_CLIENT_RPGANIMATIONEVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D37050)
#define RPG_CLIENT_RPGANIMATIONEVENT_ONRPGANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9D369F0)
#define RPG_CLIENT_RPGANIMATIONEVENT_REMOVEANIMATIONEVENTBYCLIP_OFFSET UNITYSDK_OFFSET(0x9D36730)
#define RPG_CLIENT_RPGANIMATIONEVENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9D37110)
#define RPG_CLIENT_RPGANIMATIONEVENT__ADDRPGANIMATIONEVENTTOCLIP_OFFSET UNITYSDK_OFFSET(0x9D363E0)
#define RPG_CLIENT_RPGANIMATIONEVENT__CHECKANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9D37210)
#define RPG_CLIENT_RPGANIMATIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9D37310)
#define RPG_CLIENT_RPGANIMATIONEVENT__GETANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x9D36110)
#define RPG_CLIENT_RPGANIMATIONEVENT__SETSTRINGANIMATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D367A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGAnimationEvent_TypeDefinitionIndex = 58094;

	class RPGAnimationEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::RPGAnimationEvent_InvokeType CallbackInvokeType; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*>* _StringAnimationCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RPGAnimationEvent* Get(::UnityEngine::Transform* target)
		{
			return ((::RPG::Client::RPGAnimationEvent*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_GET_OFFSET))(target);
		}

		::System::Void AddEventForAllClips(::UnityEngine::Animation* animation, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ADDEVENTFORALLCLIPS_OFFSET))(this, animation, callback);
		}

		::System::Void AddAnimationEvent(::System::String* clipName, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENT_OFFSET))(this, clipName, callback);
		}

		::System::Void AddAnimationEventByClip(::UnityEngine::AnimationClip* clip, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENTBYCLIP_OFFSET))(this, clip, callback);
		}

		::UnityEngine::AnimationClip* _GetAnimationClip(::System::String* clipName)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__GETANIMATIONCLIP_OFFSET))(this, clipName);
		}

		::System::Void ClearEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_CLEAREVENT_OFFSET))(this);
		}

		::System::Void RemoveAnimationEventByClip(::System::String* clipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_REMOVEANIMATIONEVENTBYCLIP_OFFSET))(this, clipName);
		}

		::System::Void _AddRPGAnimationEventToClip(::UnityEngine::AnimationClip* clip, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__ADDRPGANIMATIONEVENTTOCLIP_OFFSET))(this, clip, callback);
		}

		::System::Void OnRPGAnimationEvent(::System::String* clipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ONRPGANIMATIONEVENT_OFFSET))(this, clipName);
		}

		::System::Void _SetStringAnimationCallback(::System::String* clipName, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__SETSTRINGANIMATIONCALLBACK_OFFSET))(this, clipName, callback);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_DESPAWNED_OFFSET))(this);
		}

		::System::Void _CheckAnimationEvent(::UnityEngine::AnimationEvent* animationEvent, ::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationEvent*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__CHECKANIMATIONEVENT_OFFSET))(this, animationEvent, clip);
		}
	};
}
