#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace TapTap::Sdk { class UIAnimator_Action; }
namespace TapTap::Sdk { class UIElement; }

#define TAPTAP_SDK_UIANIMATOR_BLOCKCOROUTINE_OFFSET UNITYSDK_OFFSET(0x17F72470)
#define TAPTAP_SDK_UIANIMATOR_BLOCKFORSECOND_OFFSET UNITYSDK_OFFSET(0x17F72280)
#define TAPTAP_SDK_UIANIMATOR_DOENTERANIMATION_OFFSET UNITYSDK_OFFSET(0x17F723A0)
#define TAPTAP_SDK_UIANIMATOR_DOEXITANIMATION_OFFSET UNITYSDK_OFFSET(0x17F721E0)
#define TAPTAP_SDK_UIANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17F728B0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIAnimator_TypeDefinitionIndex = 6320;

	class UIAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void DoExitAnimation(::TapTap::Sdk::UIElement* exit, ::TapTap::Sdk::UIElement* resume, ::TapTap::Sdk::UIAnimator_Action* onAnimationEnd)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_DOEXITANIMATION_OFFSET))(this, exit, resume, onAnimationEnd);
		}

		::System::Void DoEnterAnimation(::TapTap::Sdk::UIElement* pause, ::TapTap::Sdk::UIElement* enter, ::TapTap::Sdk::UIAnimator_Action* onAnimationEnd)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_DOENTERANIMATION_OFFSET))(this, pause, enter, onAnimationEnd);
		}

		::System::Void BlockForSecond(::System::Single duration, ::TapTap::Sdk::UIAnimator_Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_BLOCKFORSECOND_OFFSET))(this, duration, callback);
		}

		::System::Collections::IEnumerator* BlockCoroutine(::System::Single blockDuration, ::TapTap::Sdk::UIAnimator_Action* onBlockEnd)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_BLOCKCOROUTINE_OFFSET))(this, blockDuration, onBlockEnd);
		}
	};
}
