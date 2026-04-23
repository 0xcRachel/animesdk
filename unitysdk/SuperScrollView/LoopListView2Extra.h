#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace SuperScrollView { class LoopListView2; }

#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMMINOPACITY_OFFSET UNITYSDK_OFFSET(0x14FCC660)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMMINSCALE_OFFSET UNITYSDK_OFFSET(0x14FCC680)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMSCALEDISTANCE_OFFSET UNITYSDK_OFFSET(0x14FCC5F0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14FCC750)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMMINOPACITY_OFFSET UNITYSDK_OFFSET(0x14FCC670)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMMINSCALE_OFFSET UNITYSDK_OFFSET(0x14FCC690)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMSCALEDISTANCE_OFFSET UNITYSDK_OFFSET(0x14FCC600)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_START_OFFSET UNITYSDK_OFFSET(0x14FCC6A0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCC9F0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2Extra_TypeDefinitionIndex = 44411;

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
