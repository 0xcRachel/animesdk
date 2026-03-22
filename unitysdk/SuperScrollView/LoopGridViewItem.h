#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopListViewItem2_CanvasFadeInHandler; }
namespace SuperScrollView { class OnRecycleChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_CLEARFADEIN_OFFSET UNITYSDK_OFFSET(0xA6FD570)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_BUTTONOBJECT_OFFSET UNITYSDK_OFFSET(0xA6FDE90)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_CACHEANIMATORBUTTON_OFFSET UNITYSDK_OFFSET(0xA6FDD70)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_CACHEDRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA6F57E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_COLUMN_OFFSET UNITYSDK_OFFSET(0xA701020)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_FADEINANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xA7015E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0xA6FD9A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISINITHANDLERCALLED_OFFSET UNITYSDK_OFFSET(0xA701080)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0xA701650)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISUSEANIMATION_OFFSET UNITYSDK_OFFSET(0xA6FD930)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xA700FC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA701060)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xA701040)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMPREFABNAME_OFFSET UNITYSDK_OFFSET(0xA700FE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_NEXTITEM_OFFSET UNITYSDK_OFFSET(0xA7010E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_PARENTGRIDVIEW_OFFSET UNITYSDK_OFFSET(0xA7010A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_PREVITEM_OFFSET UNITYSDK_OFFSET(0xA7010C0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA701000)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERINTDATA1_OFFSET UNITYSDK_OFFSET(0xA700F40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERINTDATA2_OFFSET UNITYSDK_OFFSET(0xA700F60)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xA700F20)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERSTRINGDATA1_OFFSET UNITYSDK_OFFSET(0xA700F80)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERSTRINGDATA2_OFFSET UNITYSDK_OFFSET(0xA700FA0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_INITFADEHANDLER_OFFSET UNITYSDK_OFFSET(0xA7011C0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA701600)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA701560)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONNEW_OFFSET UNITYSDK_OFFSET(0xA6FE3B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xA6FDCE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xA6FDA00)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETHEIGHT_OFFSET UNITYSDK_OFFSET(0xA6FA000)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETHIDE_OFFSET UNITYSDK_OFFSET(0xA6FE490)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETSHOW_OFFSET UNITYSDK_OFFSET(0xA6FE530)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETWIDTH_OFFSET UNITYSDK_OFFSET(0xA6F9F50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_COLUMN_OFFSET UNITYSDK_OFFSET(0xA701030)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_FADEINANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xA7015F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ISINITHANDLERCALLED_OFFSET UNITYSDK_OFFSET(0xA701090)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0xA701660)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xA700FD0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA701070)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xA701050)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMPREFABNAME_OFFSET UNITYSDK_OFFSET(0xA700FF0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_NEXTITEM_OFFSET UNITYSDK_OFFSET(0xA7010F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_PARENTGRIDVIEW_OFFSET UNITYSDK_OFFSET(0xA7010B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_PREVITEM_OFFSET UNITYSDK_OFFSET(0xA7010D0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA701010)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERINTDATA1_OFFSET UNITYSDK_OFFSET(0xA700F50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERINTDATA2_OFFSET UNITYSDK_OFFSET(0xA700F70)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xA700F30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERSTRINGDATA1_OFFSET UNITYSDK_OFFSET(0xA700F90)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERSTRINGDATA2_OFFSET UNITYSDK_OFFSET(0xA700FB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_START_OFFSET UNITYSDK_OFFSET(0xA701100)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA701330)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xA7012D0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA701670)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA701680)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridViewItem_TypeDefinitionIndex = 37556;

	class LoopGridViewItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 mItemIndex; // 0x18
		::System::Int32 mRow; // 0x1C
		::System::Int32 mColumn; // 0x20
		::System::Int32 mItemId; // 0x24
		::SuperScrollView::LoopGridView* mParentGridView; // 0x28
		::System::Boolean mIsInitHandlerCalled; // 0x30
		::System::String* mItemPrefabName; // 0x38
		::UnityEngine::RectTransform* mCachedRectTransform; // 0x40
		::System::Int32 mItemCreatedCheckFrameCount; // 0x48
		::System::Object* mUserObjectData; // 0x50
		::System::Int32 mUserIntData1; // 0x58
		::System::Int32 mUserIntData2; // 0x5C
		::System::String* mUserStringData1; // 0x60
		::System::String* mUserStringData2; // 0x68
		::SuperScrollView::LoopGridViewItem* mPrevItem; // 0x70
		::SuperScrollView::LoopGridViewItem* mNextItem; // 0x78
		::RPG::Client::AnimatorButton* mAnimatorButton; // 0x80
		::SuperScrollView::LoopListViewItem2_CanvasFadeInHandler* _fadeInHandler; // 0x88
		::UnityEngine::AnimationClip* m_FadeInAnimationClip; // 0x90
		::UnityEngine::Animation* _animation; // 0x98
		::System::Boolean IsFromPreview; // 0xA0
		::System::Boolean _IsRecycled_k__BackingField; // 0xA1
		::SuperScrollView::OnRecycleChanged* onRecycleChanged; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM__CTOR_OFFSET))(this);
		}

		::System::Object* get_UserObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_UserObjectData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USEROBJECTDATA_OFFSET))(this, value);
		}

		::System::Int32 get_UserIntData1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERINTDATA1_OFFSET))(this);
		}

		::System::Void set_UserIntData1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERINTDATA1_OFFSET))(this, value);
		}

		::System::Int32 get_UserIntData2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERINTDATA2_OFFSET))(this);
		}

		::System::Void set_UserIntData2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERINTDATA2_OFFSET))(this, value);
		}

		::System::String* get_UserStringData1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERSTRINGDATA1_OFFSET))(this);
		}

		::System::Void set_UserStringData1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERSTRINGDATA1_OFFSET))(this, value);
		}

		::System::String* get_UserStringData2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERSTRINGDATA2_OFFSET))(this);
		}

		::System::Void set_UserStringData2(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERSTRINGDATA2_OFFSET))(this, value);
		}

		::System::Int32 get_ItemCreatedCheckFrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCreatedCheckFrameCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_CachedRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_CACHEDRECTTRANSFORM_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_CacheAnimatorButton()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_CACHEANIMATORBUTTON_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ButtonObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_BUTTONOBJECT_OFFSET))(this);
		}

		::System::Void SetHeight(::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETHEIGHT_OFFSET))(this, height);
		}

		::System::Void SetWidth(::System::Single width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETWIDTH_OFFSET))(this, width);
		}

		::System::String* get_ItemPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMPREFABNAME_OFFSET))(this);
		}

		::System::Void set_ItemPrefabName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMPREFABNAME_OFFSET))(this, value);
		}

		::System::Int32 get_Row()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ROW_OFFSET))(this, value);
		}

		::System::Int32 get_Column()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_COLUMN_OFFSET))(this);
		}

		::System::Void set_Column(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_COLUMN_OFFSET))(this, value);
		}

		::System::Int32 get_ItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMINDEX_OFFSET))(this);
		}

		::System::Void set_ItemIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_ItemId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMID_OFFSET))(this, value);
		}

		::System::Boolean get_IsInitHandlerCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISINITHANDLERCALLED_OFFSET))(this);
		}

		::System::Void set_IsInitHandlerCalled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ISINITHANDLERCALLED_OFFSET))(this, value);
		}

		::SuperScrollView::LoopGridView* get_ParentGridView()
		{
			return ((::SuperScrollView::LoopGridView*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_PARENTGRIDVIEW_OFFSET))(this);
		}

		::System::Void set_ParentGridView(::SuperScrollView::LoopGridView* value)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_PARENTGRIDVIEW_OFFSET))(this, value);
		}

		::SuperScrollView::LoopGridViewItem* get_PrevItem()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_PREVITEM_OFFSET))(this);
		}

		::System::Void set_PrevItem(::SuperScrollView::LoopGridViewItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_PREVITEM_OFFSET))(this, value);
		}

		::SuperScrollView::LoopGridViewItem* get_NextItem()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_NEXTITEM_OFFSET))(this);
		}

		::System::Void set_NextItem(::SuperScrollView::LoopGridViewItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_NEXTITEM_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_UPDATE_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Single beginStamp, ::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_PLAYFADEIN_OFFSET))(this, beginStamp, length);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_TOSTRING_OFFSET))(this);
		}

		::System::Void initFadeHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_INITFADEHANDLER_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONNEW_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONRECYCLE_OFFSET))(this);
		}

		::System::Void SetHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETHIDE_OFFSET))(this);
		}

		::System::Void SetShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETSHOW_OFFSET))(this);
		}

		::System::Void ClearFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_CLEARFADEIN_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_FadeInAnimationClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_FADEINANIMATIONCLIP_OFFSET))(this);
		}

		::System::Void set_FadeInAnimationClip(::UnityEngine::AnimationClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_FADEINANIMATIONCLIP_OFFSET))(this, value);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsUseAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISUSEANIMATION_OFFSET))(this);
		}

		::System::Single get_FadeInLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_FADEINLENGTH_OFFSET))(this);
		}

		::System::Boolean get_IsRecycled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISRECYCLED_OFFSET))(this);
		}

		::System::Void set_IsRecycled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ISRECYCLED_OFFSET))(this, value);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
