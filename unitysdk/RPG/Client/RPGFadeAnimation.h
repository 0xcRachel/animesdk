#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UITransitionAnimType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class CustomTransitionFadeIn; }
namespace RPG::Client { class CustomTransitionFadeOut; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_RPGFADEANIMATION_GETANIMTYPE_OFFSET UNITYSDK_OFFSET(0x17169220)
#define RPG_CLIENT_RPGFADEANIMATION_GETFADEINANIM_OFFSET UNITYSDK_OFFSET(0x17168EC0)
#define RPG_CLIENT_RPGFADEANIMATION_GETFADEINCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x17168E40)
#define RPG_CLIENT_RPGFADEANIMATION_GETFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x17169060)
#define RPG_CLIENT_RPGFADEANIMATION_GETFADEOUTCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x17168FE0)
#define RPG_CLIENT_RPGFADEANIMATION_INIT_OFFSET UNITYSDK_OFFSET(0x17169310)
#define RPG_CLIENT_RPGFADEANIMATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17169350)
#define RPG_CLIENT_RPGFADEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x171693A0)
#define RPG_CLIENT_RPGFADEANIMATION__DEFAULTFADEINANIM_OFFSET UNITYSDK_OFFSET(0x17169190)
#define RPG_CLIENT_RPGFADEANIMATION__DEFAULTFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x171691E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGFadeAnimation_TypeDefinitionIndex = 68029;

	class RPGFadeAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationClip* EntranceAnimationClip; // 0x18
		::UnityEngine::AnimationClip* ExitAnimationClip; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::CustomTransitionFadeIn*>* CustomEntranceAnimationClips; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::CustomTransitionFadeOut*>* CustomExitAnimationClips; // 0x30
		::System::Single OverrideEntranceTime; // 0x38
		::System::Single OverrideExitTime; // 0x3C
		::System::Single FullScreenBlockTime; // 0x40
		::System::Boolean DoNotBlockOnExit; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION__CTOR_OFFSET))(this);
		}

		::System::Single GetFadeInClipLength(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_GETFADEINCLIPLENGTH_OFFSET))(this, a1);
		}

		::System::Single GetFadeOutClipLength(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_GETFADEOUTCLIPLENGTH_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationClip* GetFadeInAnim(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_GETFADEINANIM_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationClip* GetFadeOutAnim(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_GETFADEOUTANIM_OFFSET))(this, a1);
		}

		::RPG::Client::UITransitionAnimType GetAnimType(::System::String* a1)
		{
			return ((::RPG::Client::UITransitionAnimType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_GETANIMTYPE_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* _DefaultFadeInAnim()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION__DEFAULTFADEINANIM_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* _DefaultFadeOutAnim()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGFADEANIMATION__DEFAULTFADEOUTANIM_OFFSET))(this);
		}
	};
}
