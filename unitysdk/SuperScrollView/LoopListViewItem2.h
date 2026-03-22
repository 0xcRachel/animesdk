#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2_CanvasFadeInHandler; }
namespace SuperScrollView { class OnRecycleChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::UI { class Selectable; }

#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANCELFADEIN_OFFSET UNITYSDK_OFFSET(0xA713140)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GETFOLDITEM_OFFSET UNITYSDK_OFFSET(0xA716F10)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_BOTTOMY_OFFSET UNITYSDK_OFFSET(0xA7128C0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_BUTTONOBJECT_OFFSET UNITYSDK_OFFSET(0xA6E94E0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_CACHEANIMATORBUTTON_OFFSET UNITYSDK_OFFSET(0xA6EA170)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_CACHEDRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA6E9920)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_DISTANCEWITHVIEWPORTSNAPCENTER_OFFSET UNITYSDK_OFFSET(0xA7196F0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_FADEINANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xA71A010)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0xA71A0A0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISEXPAND_OFFSET UNITYSDK_OFFSET(0xA719DE0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISINITHANDLERCALLED_OFFSET UNITYSDK_OFFSET(0xA7197D0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0xA71A460)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISSIZEDIRTY_OFFSET UNITYSDK_OFFSET(0xA719DD0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISUSEANIMATION_OFFSET UNITYSDK_OFFSET(0xA71A030)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xA719730)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA7197B0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xA719790)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMPREFABNAME_OFFSET UNITYSDK_OFFSET(0xA719770)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMSIZEWITHPADDING_OFFSET UNITYSDK_OFFSET(0xA70E000)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMSIZE_OFFSET UNITYSDK_OFFSET(0xA70E050)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_LEFTX_OFFSET UNITYSDK_OFFSET(0xA703F60)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_PADDING_OFFSET UNITYSDK_OFFSET(0xA719750)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_PARENTLISTVIEW_OFFSET UNITYSDK_OFFSET(0xA7197F0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RAWHEIGHT_OFFSET UNITYSDK_OFFSET(0xA719810)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RAWWIDTH_OFFSET UNITYSDK_OFFSET(0xA719830)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RIGHTX_OFFSET UNITYSDK_OFFSET(0xA703E00)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_STARTPOSOFFSET_OFFSET UNITYSDK_OFFSET(0xA719710)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_SUBSTATICLIST_OFFSET UNITYSDK_OFFSET(0xA719E80)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_TOPY_OFFSET UNITYSDK_OFFSET(0xA712760)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERINTDATA1_OFFSET UNITYSDK_OFFSET(0xA719670)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERINTDATA2_OFFSET UNITYSDK_OFFSET(0xA719690)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xA719650)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERSTRINGDATA1_OFFSET UNITYSDK_OFFSET(0xA7196B0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERSTRINGDATA2_OFFSET UNITYSDK_OFFSET(0xA7196D0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_INITFADEHANDLER_OFFSET UNITYSDK_OFFSET(0xA7198A0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA71A330)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA719C30)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONEXPAND_OFFSET UNITYSDK_OFFSET(0xA716510)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONFOLDLISTONNAVI_OFFSET UNITYSDK_OFFSET(0xA719F70)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONFOLD_OFFSET UNITYSDK_OFFSET(0xA7161B0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONNEW_OFFSET UNITYSDK_OFFSET(0xA714280)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xA714B10)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xA713210)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETFOLDLIST_OFFSET UNITYSDK_OFFSET(0xA719E90)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETHEIGHT_OFFSET UNITYSDK_OFFSET(0xA7140E0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETHIDE_OFFSET UNITYSDK_OFFSET(0xA719B90)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETSUBLIST_OFFSET UNITYSDK_OFFSET(0xA719F00)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETWIDTH_OFFSET UNITYSDK_OFFSET(0xA714030)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_DISTANCEWITHVIEWPORTSNAPCENTER_OFFSET UNITYSDK_OFFSET(0xA719700)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_FADEINANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xA71A020)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISINITHANDLERCALLED_OFFSET UNITYSDK_OFFSET(0xA7197E0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0xA71A470)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISSIZEDIRTY_OFFSET UNITYSDK_OFFSET(0xA719CB0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xA719740)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA7197C0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xA7197A0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMPREFABNAME_OFFSET UNITYSDK_OFFSET(0xA719780)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_PADDING_OFFSET UNITYSDK_OFFSET(0xA719760)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_PARENTLISTVIEW_OFFSET UNITYSDK_OFFSET(0xA719800)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_RAWHEIGHT_OFFSET UNITYSDK_OFFSET(0xA719820)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_RAWWIDTH_OFFSET UNITYSDK_OFFSET(0xA719840)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_STARTPOSOFFSET_OFFSET UNITYSDK_OFFSET(0xA719720)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERINTDATA1_OFFSET UNITYSDK_OFFSET(0xA719680)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERINTDATA2_OFFSET UNITYSDK_OFFSET(0xA7196A0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xA719660)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERSTRINGDATA1_OFFSET UNITYSDK_OFFSET(0xA7196C0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERSTRINGDATA2_OFFSET UNITYSDK_OFFSET(0xA7196E0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_START_OFFSET UNITYSDK_OFFSET(0xA719850)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA71A100)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_UPDATE_OFFSET UNITYSDK_OFFSET(0xA719A40)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2__CTOR_OFFSET UNITYSDK_OFFSET(0xA71A480)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA71A4A0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListViewItem2_TypeDefinitionIndex = 37567;

	class LoopListViewItem2 : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 mItemIndex; // 0x18
		::System::Int32 mItemId; // 0x1C
		::SuperScrollView::LoopListView2* mParentListView; // 0x20
		::System::Boolean mIsInitHandlerCalled; // 0x28
		::System::String* mItemPrefabName; // 0x30
		::UnityEngine::RectTransform* mCachedRectTransform; // 0x38
		::System::Single mPadding; // 0x40
		::System::Single mDistanceWithViewPortSnapCenter; // 0x44
		::System::Int32 mItemCreatedCheckFrameCount; // 0x48
		::System::Single mStartPosOffset; // 0x4C
		::System::Object* mUserObjectData; // 0x50
		::System::Int32 mUserIntData1; // 0x58
		::System::Int32 mUserIntData2; // 0x5C
		::System::String* mUserStringData1; // 0x60
		::System::String* mUserStringData2; // 0x68
		::System::Int32 LeftNaviIndex; // 0x70
		::System::Int32 RightNaviIndex; // 0x74
		::RPG::Client::AnimatorButton* mAnimatorButton; // 0x78
		::System::Boolean IsFromPreview; // 0x80
		::System::Boolean WidthDefined; // 0x81
		::System::Boolean HeightDefined; // 0x82
		::System::Boolean FromObjPool; // 0x83
		::System::Single _RawHeight_k__BackingField; // 0x84
		::System::Single _RawWidth_k__BackingField; // 0x88
		::SuperScrollView::LoopListViewItem2_CanvasFadeInHandler* _fadeInHandler; // 0x90
		::System::Boolean m_isSizeDirty; // 0x98
		::System::Single tmpSize; // 0x9C
		::RPG::Client::StaticListView* foldStaticList; // 0xA0
		::RPG::Client::StaticListView* subStaticList; // 0xA8
		::UnityEngine::AnimationClip* m_FadeInAnimationClip; // 0xB0
		::UnityEngine::Animation* _animation; // 0xB8
		::UnityEngine::Component* cachedComponent; // 0xC0
		::System::Boolean cacheCompnentIsFind; // 0xC8
		::System::Boolean _IsRecycled_k__BackingField; // 0xC9
		::SuperScrollView::OnRecycleChanged* onRecycleChanged; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2__CTOR_OFFSET))(this);
		}

		::System::Object* get_UserObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_UserObjectData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USEROBJECTDATA_OFFSET))(this, value);
		}

		::System::Int32 get_UserIntData1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERINTDATA1_OFFSET))(this);
		}

		::System::Void set_UserIntData1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERINTDATA1_OFFSET))(this, value);
		}

		::System::Int32 get_UserIntData2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERINTDATA2_OFFSET))(this);
		}

		::System::Void set_UserIntData2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERINTDATA2_OFFSET))(this, value);
		}

		::System::String* get_UserStringData1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERSTRINGDATA1_OFFSET))(this);
		}

		::System::Void set_UserStringData1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERSTRINGDATA1_OFFSET))(this, value);
		}

		::System::String* get_UserStringData2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERSTRINGDATA2_OFFSET))(this);
		}

		::System::Void set_UserStringData2(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERSTRINGDATA2_OFFSET))(this, value);
		}

		::System::Single get_DistanceWithViewPortSnapCenter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_DISTANCEWITHVIEWPORTSNAPCENTER_OFFSET))(this);
		}

		::System::Void set_DistanceWithViewPortSnapCenter(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_DISTANCEWITHVIEWPORTSNAPCENTER_OFFSET))(this, value);
		}

		::System::Single get_StartPosOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_STARTPOSOFFSET_OFFSET))(this);
		}

		::System::Void set_StartPosOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_STARTPOSOFFSET_OFFSET))(this, value);
		}

		::System::Int32 get_ItemCreatedCheckFrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCreatedCheckFrameCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET))(this, value);
		}

		::System::Single get_Padding()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_Padding(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_PADDING_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_CachedRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_CACHEDRECTTRANSFORM_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_CacheAnimatorButton()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_CACHEANIMATORBUTTON_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ButtonObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_BUTTONOBJECT_OFFSET))(this);
		}

		::System::String* get_ItemPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMPREFABNAME_OFFSET))(this);
		}

		::System::Void set_ItemPrefabName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMPREFABNAME_OFFSET))(this, value);
		}

		::System::Int32 get_ItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMINDEX_OFFSET))(this);
		}

		::System::Void set_ItemIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_ItemId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMID_OFFSET))(this, value);
		}

		::System::Boolean get_IsInitHandlerCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISINITHANDLERCALLED_OFFSET))(this);
		}

		::System::Void set_IsInitHandlerCalled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISINITHANDLERCALLED_OFFSET))(this, value);
		}

		::SuperScrollView::LoopListView2* get_ParentListView()
		{
			return ((::SuperScrollView::LoopListView2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_PARENTLISTVIEW_OFFSET))(this);
		}

		::System::Void set_ParentListView(::SuperScrollView::LoopListView2* value)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_PARENTLISTVIEW_OFFSET))(this, value);
		}

		::System::Single get_TopY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_TOPY_OFFSET))(this);
		}

		::System::Single get_BottomY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_BOTTOMY_OFFSET))(this);
		}

		::System::Single get_LeftX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_LEFTX_OFFSET))(this);
		}

		::System::Single get_RightX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RIGHTX_OFFSET))(this);
		}

		::System::Single get_ItemSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMSIZE_OFFSET))(this);
		}

		::System::Single get_ItemSizeWithPadding()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMSIZEWITHPADDING_OFFSET))(this);
		}

		::System::Single get_RawHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RAWHEIGHT_OFFSET))(this);
		}

		::System::Void set_RawHeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_RAWHEIGHT_OFFSET))(this, value);
		}

		::System::Single get_RawWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RAWWIDTH_OFFSET))(this);
		}

		::System::Void set_RawWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_RAWWIDTH_OFFSET))(this, value);
		}

		::System::Void SetHeight(::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETHEIGHT_OFFSET))(this, height);
		}

		::System::Void SetWidth(::System::Single width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETWIDTH_OFFSET))(this, width);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_UPDATE_OFFSET))(this);
		}

		::System::Void initFadeHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_INITFADEHANDLER_OFFSET))(this);
		}

		::System::Void SetHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETHIDE_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Single beginStamp, ::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_PLAYFADEIN_OFFSET))(this, beginStamp, length);
		}

		::System::Void CancelFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANCELFADEIN_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONNEW_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONRECYCLE_OFFSET))(this);
		}

		::System::Boolean get_IsSizeDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISSIZEDIRTY_OFFSET))(this);
		}

		::System::Void set_IsSizeDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISSIZEDIRTY_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISEXPAND_OFFSET))(this);
		}

		::RPG::Client::StaticListView* get_SubStaticList()
		{
			return ((::RPG::Client::StaticListView*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_SUBSTATICLIST_OFFSET))(this);
		}

		::System::Void OnExpand(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONEXPAND_OFFSET))(this, time);
		}

		::System::Void SetFoldList(::RPG::Client::StaticListView* staticListView)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListView*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETFOLDLIST_OFFSET))(this, staticListView);
		}

		::System::Void SetSubList(::RPG::Client::StaticListView* staticListView)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListView*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETSUBLIST_OFFSET))(this, staticListView);
		}

		::RPG::Client::StaticListViewItem* GetFoldItem(::UnityEngine::EventSystems::MoveDirection dir)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GETFOLDITEM_OFFSET))(this, dir);
		}

		::System::Void OnFold()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONFOLD_OFFSET))(this);
		}

		::System::Void OnFoldListOnNavi(::UnityEngine::EventSystems::AxisEventData* eventData, ::UnityEngine::UI::Selectable* cmp, ::System::Boolean haveNavi)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONFOLDLISTONNAVI_OFFSET))(this, eventData, cmp, haveNavi);
		}

		::UnityEngine::AnimationClip* get_FadeInAnimationClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_FADEINANIMATIONCLIP_OFFSET))(this);
		}

		::System::Void set_FadeInAnimationClip(::UnityEngine::AnimationClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_FADEINANIMATIONCLIP_OFFSET))(this, value);
		}

		::System::Boolean get_IsUseAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISUSEANIMATION_OFFSET))(this);
		}

		::System::Single get_FadeInLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_FADEINLENGTH_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_TOSTRING_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsRecycled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISRECYCLED_OFFSET))(this);
		}

		::System::Void set_IsRecycled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISRECYCLED_OFFSET))(this, value);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
