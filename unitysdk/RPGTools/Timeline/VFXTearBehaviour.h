#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class VFXTearBehaviour_Class_2_006BAB46FE72520C; }
namespace RPGTools::Timeline { class VFXTearBehaviour_Class_2_396AFD4C5FDE54CE; }
namespace RPGTools::Timeline { class VFXTearClip; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA67BC90)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA67C6A0)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA67BCB0)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xA67BCA0)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0xA67C890)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xA67C880)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA67C940)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA67C930)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VFXTearBehaviour_TypeDefinitionIndex = 37961;

	class VFXTearBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Int32* StaticGet_AnimParam_TransSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VFXTearBehaviour_TypeDefinitionIndex)->GetStaticField(0xF150);
		}
		static ::System::Int32* StaticGet_AnimParam_EyeTearState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VFXTearBehaviour_TypeDefinitionIndex)->GetStaticField(0xF154);
		}
		static ::System::Int32* StaticGet_AnimParam_LoopSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VFXTearBehaviour_TypeDefinitionIndex)->GetStaticField(0xF158);
		}
		static ::System::Int32* StaticGet_AnimParam_FaceTearState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VFXTearBehaviour_TypeDefinitionIndex)->GetStaticField(0xF15C);
		}
		// static const ::System::String* LeftEyeTearPath; // 0x0
		// static const ::System::String* RightEyeTearPath; // 0x0
		// static const ::System::String* LeftFaceTearPath; // 0x0
		// static const ::System::String* RightFaceTearPath; // 0x0
		// static const ::System::String* LeftEyeTearUniqueName; // 0x0
		// static const ::System::String* RightEyeTearUniqueName; // 0x0
		// static const ::System::String* LeftFaceTearUniqueName; // 0x0
		// static const ::System::String* RightFaceTearUniqueName; // 0x0
		// static const ::System::String* LeftEyeTearAttachPath; // 0x0
		// static const ::System::String* RightEyeTearAttachPath; // 0x0
		// static const ::System::String* FaceTearAttachPath; // 0x0
		::RPGTools::Timeline::VFXTearClip* _Clip_k__BackingField; // 0x10
		::RPGTools::Timeline::VFXTearBehaviour_Class_2_396AFD4C5FDE54CE* _LeftEye; // 0x18
		::RPGTools::Timeline::VFXTearBehaviour_Class_2_396AFD4C5FDE54CE* _RightEye; // 0x20
		::RPGTools::Timeline::VFXTearBehaviour_Class_2_006BAB46FE72520C* _LeftFace; // 0x28
		::RPGTools::Timeline::VFXTearBehaviour_Class_2_006BAB46FE72520C* _RightFace; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR__CCTOR_OFFSET))();
		}

		::RPGTools::Timeline::VFXTearClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VFXTearClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VFXTearClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFXTearClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
