#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5C9447FD38964139_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xEFAEFC0)
#define CLASS_2_5C9447FD38964139_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0xEFAED30)
#define CLASS_2_5C9447FD38964139_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xEFAF180)
#define CLASS_2_5C9447FD38964139_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xEFAF3B0)
#define CLASS_2_5C9447FD38964139_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xEFAF300)
#define CLASS_2_5C9447FD38964139_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xEFAE900)
#define CLASS_2_5C9447FD38964139__CTOR_OFFSET UNITYSDK_OFFSET(0xEFAF460)
#define CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xEFAF480)
#define CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xEFAF4A0)
#define CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xEFAF490)
#define CLASS_2_5C9447FD38964139___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xEFAF470)

inline static constexpr unsigned int Class_2_5C9447FD38964139_TypeDefinitionIndex = 44812;

class Class_2_5C9447FD38964139 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::Single Field_2_5; // 0x0
	::UnityEngine::Camera* Field_2_1; // 0x10
	::UnityEngine::GameObject* Field_2_8; // 0x18
	::UnityEngine::Camera* Field_2_2; // 0x20
	::UnityEngine::AnimationClip* Field_2_0; // 0x28
	::System::Boolean Field_2_9; // 0x30
	::System::Boolean Field_2_6; // 0x31
	::System::Single Field_2_10; // 0x34
	::System::Double Field_2_3; // 0x38
	::UnityEngine::Vector3 Field_2_7; // 0x40
	::System::Single Field_2_11; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}
};
