#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::GamePlay { class GamePlayTimeRewindClip; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x17E20190)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x17E20490)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x17E206A0)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x17E20790)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_METHOD_2_5A94436233800AC6_OFFSET UNITYSDK_OFFSET(0x17E20740)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0x17E20380)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x17E20610)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x17E202F0)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x17E201B0)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17E20290)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x17E201A0)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17E20920)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x17E20960)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x17E20950)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x17E20930)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17E20940)

namespace RPGTools::Timeline::GamePlay
{
	inline static constexpr unsigned int GamePlayTimeRewindBehaviour_TypeDefinitionIndex = 45366;

	class GamePlayTimeRewindBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::GamePlay::GamePlayTimeRewindClip* _Clip_k__BackingField; // 0x10
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x18
		::System::Boolean _Showing; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::GamePlay::GamePlayTimeRewindClip* get_Clip()
		{
			return ((::RPGTools::Timeline::GamePlay::GamePlayTimeRewindClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::GamePlay::GamePlayTimeRewindClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::GamePlay::GamePlayTimeRewindClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_D4499A0147676A9C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_METHOD_2_D4499A0147676A9C_OFFSET))(this);
		}

		::System::Void Method_2_2DCDFF29E7FDDAA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
		}

		::System::Void Method_2_5A94436233800AC6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_METHOD_2_5A94436233800AC6_OFFSET))(this);
		}

		::System::Void Method_2_17BD30EFE8176014()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_METHOD_2_17BD30EFE8176014_OFFSET))(this);
		}

		::System::Void Method_2_4389275F4099DE36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_METHOD_2_4389275F4099DE36_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
