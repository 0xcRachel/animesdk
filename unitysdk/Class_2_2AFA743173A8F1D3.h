#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_0ACE77AB9981A526;
namespace RPGTools::Timeline { class ScaleCharacterNodeClip; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2AFA743173A8F1D3_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x10BD7DB0)
#define CLASS_2_2AFA743173A8F1D3_METHOD_2_0190BA75FF339E40_OFFSET UNITYSDK_OFFSET(0x10BD7FE0)
#define CLASS_2_2AFA743173A8F1D3_METHOD_2_A97853745B74DFF6_OFFSET UNITYSDK_OFFSET(0x10BD7E80)
#define CLASS_2_2AFA743173A8F1D3_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x10BD8090)
#define CLASS_2_2AFA743173A8F1D3_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x10BD7DD0)
#define CLASS_2_2AFA743173A8F1D3_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x10BD7DC0)
#define CLASS_2_2AFA743173A8F1D3__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD8210)
#define CLASS_2_2AFA743173A8F1D3___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x10BD8230)
#define CLASS_2_2AFA743173A8F1D3___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x10BD8220)

inline static constexpr unsigned int Class_2_2AFA743173A8F1D3_TypeDefinitionIndex = 38133;

class Class_2_2AFA743173A8F1D3 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::ScaleCharacterNodeClip* _Clip_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_1; // 0x18
	::Class_2_0ACE77AB9981A526* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AFA743173A8F1D3__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::ScaleCharacterNodeClip* get_Clip()
	{
		return ((::RPGTools::Timeline::ScaleCharacterNodeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AFA743173A8F1D3_GET_CLIP_OFFSET))(this);
	}

	::System::Void set_Clip(::RPGTools::Timeline::ScaleCharacterNodeClip* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ScaleCharacterNodeClip*))((::PBYTE)hIl2Cpp + CLASS_2_2AFA743173A8F1D3_SET_CLIP_OFFSET))(this, value);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_2AFA743173A8F1D3_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_2AFA743173A8F1D3_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A97853745B74DFF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AFA743173A8F1D3_METHOD_2_A97853745B74DFF6_OFFSET))(this);
	}

	::System::Void Method_2_0190BA75FF339E40(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2AFA743173A8F1D3_METHOD_2_0190BA75FF339E40_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_2AFA743173A8F1D3___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_2AFA743173A8F1D3___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
	}
};
