#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace UnityEngine { class Animator; }

#define STATEWHEELMOVE_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA6A5A60)
#define STATEWHEELMOVE_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA6A5AD0)
#define STATEWHEELMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A5C40)
#define STATEWHEELMOVE___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA6A5C50)
#define STATEWHEELMOVE___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA6A5C60)

inline static constexpr unsigned int StateWheelMove_TypeDefinitionIndex = 37219;

class StateWheelMove : public ::UnityEngine::StateMachineBehaviour
{
public:
	::System::Single fadeTime; // 0x18
	::System::Single MoveAnimSpeed; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEWHEELMOVE__CTOR_OFFSET))(this);
	}

	::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEWHEELMOVE_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEWHEELMOVE_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEWHEELMOVE___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEWHEELMOVE___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
	}
};
