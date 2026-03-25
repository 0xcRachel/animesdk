#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB51B50)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB51B40)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB51D40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ConvinceSplitLineChangeClip_TypeDefinitionIndex = 38903;

	class ConvinceSplitLineChangeClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Single ChangeNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
