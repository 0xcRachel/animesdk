#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x203F100)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x1465FE0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x181BFB10)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x203EFE0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPosePlayable_TypeDefinitionIndex = 4975;

	struct alignas(8) AnimationPosePlayable
	{
		static ::UnityEngine::Animations::AnimationPosePlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationPosePlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationPosePlayable_TypeDefinitionIndex)->GetStaticField(0x6B10);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE__CCTOR_OFFSET))();
		}

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimationPosePlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationPosePlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_EQUALS_OFFSET))(this, other);
		}
	};
}
