#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimationBlendMode.h"
#include "unitysdk/UnityEngine/TrackedReference.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_ANIMATIONSTATE_ADDMIXINGTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x181BD650)
#define UNITYENGINE_ANIMATIONSTATE_ADDMIXINGTRANSFORM_OFFSET UNITYSDK_OFFSET(0x181BD640)
#define UNITYENGINE_ANIMATIONSTATE_GET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x181BD690)
#define UNITYENGINE_ANIMATIONSTATE_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x181BCBD0)
#define UNITYENGINE_ANIMATIONSTATE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x181BD530)
#define UNITYENGINE_ANIMATIONSTATE_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x181BD620)
#define UNITYENGINE_ANIMATIONSTATE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x181BD610)
#define UNITYENGINE_ANIMATIONSTATE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x181BD670)
#define UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDSPEED_OFFSET UNITYSDK_OFFSET(0x181BD5F0)
#define UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x181BD5B0)
#define UNITYENGINE_ANIMATIONSTATE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x181BD5D0)
#define UNITYENGINE_ANIMATIONSTATE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x181BD590)
#define UNITYENGINE_ANIMATIONSTATE_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x181BD550)
#define UNITYENGINE_ANIMATIONSTATE_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x181BD570)
#define UNITYENGINE_ANIMATIONSTATE_REMOVEMIXINGTRANSFORM_OFFSET UNITYSDK_OFFSET(0x181BD660)
#define UNITYENGINE_ANIMATIONSTATE_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x181BD6A0)
#define UNITYENGINE_ANIMATIONSTATE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x181BD540)
#define UNITYENGINE_ANIMATIONSTATE_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x181BD630)
#define UNITYENGINE_ANIMATIONSTATE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x181BD680)
#define UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDSPEED_OFFSET UNITYSDK_OFFSET(0x181BD600)
#define UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x181BD5C0)
#define UNITYENGINE_ANIMATIONSTATE_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x181BD5E0)
#define UNITYENGINE_ANIMATIONSTATE_SET_TIME_OFFSET UNITYSDK_OFFSET(0x181BD5A0)
#define UNITYENGINE_ANIMATIONSTATE_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x181BD560)
#define UNITYENGINE_ANIMATIONSTATE_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x181BD580)
#define UNITYENGINE_ANIMATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x181BD6B0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 4962;

	class AnimationState : public ::UnityEngine::TrackedReference
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Single get_weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_weight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_WEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::WrapMode get_wrapMode()
		{
			return ((::UnityEngine::WrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_WRAPMODE_OFFSET))(this);
		}

		::System::Void set_wrapMode(::UnityEngine::WrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_WRAPMODE_OFFSET))(this, value);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_TIME_OFFSET))(this, value);
		}

		::System::Single get_normalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDTIME_OFFSET))(this);
		}

		::System::Void set_normalizedTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDTIME_OFFSET))(this, value);
		}

		::System::Single get_speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_SPEED_OFFSET))(this, value);
		}

		::System::Single get_normalizedSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDSPEED_OFFSET))(this);
		}

		::System::Void set_normalizedSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDSPEED_OFFSET))(this, value);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_LENGTH_OFFSET))(this);
		}

		::System::Int32 get_layer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_layer(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_LAYER_OFFSET))(this, value);
		}

		::UnityEngine::AnimationClip* get_clip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_CLIP_OFFSET))(this);
		}

		::System::Void AddMixingTransform(::UnityEngine::Transform* mix, ::System::Boolean recursive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_ADDMIXINGTRANSFORM_OFFSET))(this, mix, recursive);
		}

		::System::Void AddMixingTransform_1(::UnityEngine::Transform* mix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_ADDMIXINGTRANSFORM_1_OFFSET))(this, mix);
		}

		::System::Void RemoveMixingTransform(::UnityEngine::Transform* mix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_REMOVEMIXINGTRANSFORM_OFFSET))(this, mix);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_NAME_OFFSET))(this, value);
		}

		::UnityEngine::AnimationBlendMode get_blendMode()
		{
			return ((::UnityEngine::AnimationBlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_BLENDMODE_OFFSET))(this);
		}

		::System::Void set_blendMode(::UnityEngine::AnimationBlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationBlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_BLENDMODE_OFFSET))(this, value);
		}
	};
}
