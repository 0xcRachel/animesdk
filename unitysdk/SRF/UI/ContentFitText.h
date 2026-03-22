#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SRF::UI { class SRText; }

#define SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x17C6D410)
#define SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x17C6D430)
#define SRF_UI_CONTENTFITTEXT_COPYSOURCEONLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x17C6D670)
#define SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x17C6D320)
#define SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x17C6D0E0)
#define SRF_UI_CONTENTFITTEXT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x17C6D400)
#define SRF_UI_CONTENTFITTEXT_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x17C6D3E0)
#define SRF_UI_CONTENTFITTEXT_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x17C6D3F0)
#define SRF_UI_CONTENTFITTEXT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x17C6D1A0)
#define SRF_UI_CONTENTFITTEXT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x17C6CF60)
#define SRF_UI_CONTENTFITTEXT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x17C6D260)
#define SRF_UI_CONTENTFITTEXT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x17C6D020)
#define SRF_UI_CONTENTFITTEXT_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x17C6D980)
#define SRF_UI_CONTENTFITTEXT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17C6D910)
#define SRF_UI_CONTENTFITTEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17C6D750)
#define SRF_UI_CONTENTFITTEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17C6D450)
#define SRF_UI_CONTENTFITTEXT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x17C6D6E0)
#define SRF_UI_CONTENTFITTEXT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x17C6D580)
#define SRF_UI_CONTENTFITTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6D9F0)

namespace SRF::UI
{
	inline static constexpr unsigned int ContentFitText_TypeDefinitionIndex = 26926;

	class ContentFitText : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::SRF::UI::SRText* CopySource; // 0x18
		::UnityEngine::Vector2 Padding; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT__CTOR_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONENABLE_OFFSET))(this);
		}

		::System::Void CopySourceOnLayoutDirty(::SRF::UI::SRText* srText)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::UI::SRText*))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_COPYSOURCEONLAYOUTDIRTY_OFFSET))(this, srText);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_SETDIRTY_OFFSET))(this);
		}
	};
}
