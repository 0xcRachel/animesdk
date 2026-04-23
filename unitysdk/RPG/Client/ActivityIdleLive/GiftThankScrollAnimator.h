#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_APPENDSCROLL_OFFSET UNITYSDK_OFFSET(0x1733F320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_GET_ISSCROLLING_OFFSET UNITYSDK_OFFSET(0x1733F220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_INIT_OFFSET UNITYSDK_OFFSET(0x1733F230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1733F5C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_STARTSCROLL_OFFSET UNITYSDK_OFFSET(0x1733F2A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_STOPSCROLL_OFFSET UNITYSDK_OFFSET(0x1733F3A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1733F3F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1733F610)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int GiftThankScrollAnimator_TypeDefinitionIndex = 69229;

	class GiftThankScrollAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _Content; // 0x18
		::System::Single _ScrollDuration; // 0x20
		::System::Single _ScrollElapsed; // 0x24
		::System::Single _ScrollTotalDistance; // 0x28
		::System::Single _ScrollStartY; // 0x2C
		::System::Boolean _IsScrolling; // 0x30
		::System::Action* _OnScrollStepComplete; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsScrolling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_GET_ISSCROLLING_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::RectTransform* content, ::System::Single scrollDuration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_INIT_OFFSET))(this, content, scrollDuration);
		}

		::System::Void StartScroll(::System::Single startY, ::System::Single totalDistance, ::System::Action* onStepComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_STARTSCROLL_OFFSET))(this, startY, totalDistance, onStepComplete);
		}

		::System::Void AppendScroll(::System::Single newStartY, ::System::Single newTotalDistance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_APPENDSCROLL_OFFSET))(this, newStartY, newTotalDistance);
		}

		::System::Void StopScroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_STOPSCROLL_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTTHANKSCROLLANIMATOR_ONDESTROY_OFFSET))(this);
		}
	};
}
