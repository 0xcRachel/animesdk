#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }

#define RPG_CLIENT_UIANIMATIONUTILS_CURRENTPLAYINGNAME_OFFSET UNITYSDK_OFFSET(0x13906030)
#define RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x13906440)
#define RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONPLAYINGNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x13906540)
#define RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONPLAYINGTIME_OFFSET UNITYSDK_OFFSET(0x139065B0)
#define RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x13905DF0)
#define RPG_CLIENT_UIANIMATIONUTILS_GETCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x139063B0)
#define RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMBEGIN_OFFSET UNITYSDK_OFFSET(0x138DD830)
#define RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMEND_OFFSET UNITYSDK_OFFSET(0x13905EF0)
#define RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMTIME_OFFSET UNITYSDK_OFFSET(0x13905F80)
#define RPG_CLIENT_UIANIMATIONUTILS_PLAYTOBEGIN_OFFSET UNITYSDK_OFFSET(0x13905E50)
#define RPG_CLIENT_UIANIMATIONUTILS_PLAYTOEND_OFFSET UNITYSDK_OFFSET(0x138DDA20)
#define RPG_CLIENT_UIANIMATIONUTILS_SETANIMATIONSPEED_OFFSET UNITYSDK_OFFSET(0x139064B0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAnimationUtils_TypeDefinitionIndex = 67373;

	class UIAnimationUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::AnimationState* GetAnimationState(::UnityEngine::Animation* animation, ::System::String* name)
		{
			return ((::UnityEngine::AnimationState*(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONSTATE_OFFSET))(animation, name);
		}

		static ::System::Void PlayFromBegin(::UnityEngine::Animation* animation, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMBEGIN_OFFSET))(animation, name);
		}

		static ::System::Void PlayToBegin(::UnityEngine::Animation* animation, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_PLAYTOBEGIN_OFFSET))(animation, name);
		}

		static ::System::Void PlayToEnd(::UnityEngine::Animation* animation, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_PLAYTOEND_OFFSET))(animation, name);
		}

		static ::System::Void PlayFromEnd(::UnityEngine::Animation* animation, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMEND_OFFSET))(animation, name);
		}

		static ::System::Void PlayFromTime(::UnityEngine::Animation* animation, ::System::String* name, ::System::Single time)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMTIME_OFFSET))(animation, name, time);
		}

		static ::System::String* CurrentPlayingName(::UnityEngine::Animation* animation)
		{
			return ((::System::String*(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_CURRENTPLAYINGNAME_OFFSET))(animation);
		}

		static ::System::Single GetClipLength(::UnityEngine::Animation* animationCmpt, ::System::String* name)
		{
			return ((::System::Single(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_GETCLIPLENGTH_OFFSET))(animationCmpt, name);
		}

		static ::System::Single GetAnimationLength(::UnityEngine::Animation* animation, ::System::String* name)
		{
			return ((::System::Single(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONLENGTH_OFFSET))(animation, name);
		}

		static ::System::Void SetAnimationSpeed(::UnityEngine::Animation* animation, ::System::String* name, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_SETANIMATIONSPEED_OFFSET))(animation, name, speed);
		}

		static ::System::Single GetAnimationPlayingNormalizedTime(::UnityEngine::Animation* animation, ::System::String* name)
		{
			return ((::System::Single(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONPLAYINGNORMALIZEDTIME_OFFSET))(animation, name);
		}

		static ::System::Single GetAnimationPlayingTime(::UnityEngine::Animation* animation, ::System::String* name)
		{
			return ((::System::Single(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONPLAYINGTIME_OFFSET))(animation, name);
		}
	};
}
