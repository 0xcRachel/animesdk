#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UI/ContentSizeFitter_FitMode.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_CONTENTSIZEFITTER_GET_HORIZONTALFIT_OFFSET UNITYSDK_OFFSET(0x18245D30)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x182460D0)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_GET_VERTICALFIT_OFFSET UNITYSDK_OFFSET(0x18245F60)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_HANDLESELFFITTINGALONGAXIS_OFFSET UNITYSDK_OFFSET(0x18246520)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18246430)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18246230)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18246170)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x182462D0)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x18246390)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x18246460)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x18245EA0)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x182468B0)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x182468C0)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SET_HORIZONTALFIT_OFFSET UNITYSDK_OFFSET(0x18245D40)
#define UNITYENGINE_UI_CONTENTSIZEFITTER_SET_VERTICALFIT_OFFSET UNITYSDK_OFFSET(0x18245F70)
#define UNITYENGINE_UI_CONTENTSIZEFITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18246160)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ContentSizeFitter_TypeDefinitionIndex = 5645;

	class ContentSizeFitter : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::UI::ContentSizeFitter_FitMode m_HorizontalFit; // 0x18
		::UnityEngine::UI::ContentSizeFitter_FitMode m_VerticalFit; // 0x1C
		::UnityEngine::RectTransform* m_Rect; // 0x20
		::UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::ContentSizeFitter_FitMode get_horizontalFit()
		{
			return ((::UnityEngine::UI::ContentSizeFitter_FitMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_GET_HORIZONTALFIT_OFFSET))(this);
		}

		::System::Void set_horizontalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ContentSizeFitter_FitMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SET_HORIZONTALFIT_OFFSET))(this, value);
		}

		::UnityEngine::UI::ContentSizeFitter_FitMode get_verticalFit()
		{
			return ((::UnityEngine::UI::ContentSizeFitter_FitMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_GET_VERTICALFIT_OFFSET))(this);
		}

		::System::Void set_verticalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ContentSizeFitter_FitMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SET_VERTICALFIT_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void HandleSelfFittingAlongAxis(::System::Int32 axis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_HANDLESELFFITTINGALONGAXIS_OFFSET))(this, axis);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CONTENTSIZEFITTER_SETDIRTY_OFFSET))(this);
		}
	};
}
