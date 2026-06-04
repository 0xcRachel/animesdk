#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class ScrollRect; }

#define SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B2D7FC0)
#define SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_ONSCROLLRECTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B2D8060)
#define SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B2D7ED0)
#define SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B2D8070)
#define SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_START_OFFSET UNITYSDK_OFFSET(0x1B2D7D20)
#define SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1B2D7FD0)
#define SRF_UI_SCROLLTOBOTTOMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D8120)

namespace SRF::UI
{
	inline static constexpr unsigned int ScrollToBottomBehaviour_TypeDefinitionIndex = 33589;

	class ScrollToBottomBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::ScrollRect* _scrollRect; // 0x18
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x20
		::System::Boolean _scrollToTop; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SCROLLTOBOTTOMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_ONENABLE_OFFSET))(this);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_TRIGGER_OFFSET))(this);
		}

		::System::Void OnScrollRectValueChanged(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_ONSCROLLRECTVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_REFRESH_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_UI_SCROLLTOBOTTOMBEHAVIOUR_SETVISIBLE_OFFSET))(this, a1);
		}
	};
}
