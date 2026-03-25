#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace SuperScrollView { class LoopListView2; }

#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMMINOPACITY_OFFSET UNITYSDK_OFFSET(0xAC227F0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMMINSCALE_OFFSET UNITYSDK_OFFSET(0xAC22810)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMSCALEDISTANCE_OFFSET UNITYSDK_OFFSET(0xAC22780)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAC228E0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMMINOPACITY_OFFSET UNITYSDK_OFFSET(0xAC22800)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMMINSCALE_OFFSET UNITYSDK_OFFSET(0xAC22820)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMSCALEDISTANCE_OFFSET UNITYSDK_OFFSET(0xAC22790)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_START_OFFSET UNITYSDK_OFFSET(0xAC22830)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0xAC22B80)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2Extra_TypeDefinitionIndex = 38529;

	class LoopListView2Extra : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SuperScrollView::LoopListView2* mLoopListView; // 0x18
		::System::Single mItemDistance; // 0x20
		::System::Single mMinScale; // 0x24
		::System::Single mMinOpacity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA__CTOR_OFFSET))(this);
		}

		::System::Single get_ItemScaleDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMSCALEDISTANCE_OFFSET))(this);
		}

		::System::Void set_ItemScaleDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMSCALEDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_ItemMinOpacity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMMINOPACITY_OFFSET))(this);
		}

		::System::Void set_ItemMinOpacity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMMINOPACITY_OFFSET))(this, value);
		}

		::System::Single get_ItemMinScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMMINSCALE_OFFSET))(this);
		}

		::System::Void set_ItemMinScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMMINSCALE_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_LATEUPDATE_OFFSET))(this);
		}
	};
}
