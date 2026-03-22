#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"
#include "unitysdk/UnityEngine/UI/ScrollRect_AlignDirection.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_818;
class Class_1_A0302E9AE0B8A2B9;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabCache; }
namespace RPG::Client { class StaticListViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_STATICLISTVIEW_CLEARALLNAVI_OFFSET UNITYSDK_OFFSET(0x9FCD6E0)
#define RPG_CLIENT_STATICLISTVIEW_CLEARALL_OFFSET UNITYSDK_OFFSET(0x9FC9A70)
#define RPG_CLIENT_STATICLISTVIEW_CLEARFOCUSCACHE_OFFSET UNITYSDK_OFFSET(0x9FCA1F0)
#define RPG_CLIENT_STATICLISTVIEW_CLEAR_OFFSET UNITYSDK_OFFSET(0x9FC9EA0)
#define RPG_CLIENT_STATICLISTVIEW_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x9FCC5A0)
#define RPG_CLIENT_STATICLISTVIEW_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9FC9A20)
#define RPG_CLIENT_STATICLISTVIEW_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0x9FC9C00)
#define RPG_CLIENT_STATICLISTVIEW_GETFIRSTITEM_OFFSET UNITYSDK_OFFSET(0x9FCDC20)
#define RPG_CLIENT_STATICLISTVIEW_GETLASTITEM_OFFSET UNITYSDK_OFFSET(0x9FCE120)
#define RPG_CLIENT_STATICLISTVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0x9FCDBA0)
#define RPG_CLIENT_STATICLISTVIEW_GET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0x9FCFAF0)
#define RPG_CLIENT_STATICLISTVIEW_GET_FADEINOFFSET_OFFSET UNITYSDK_OFFSET(0x9FCFAD0)
#define RPG_CLIENT_STATICLISTVIEW_GET_ISFORBIDNAVI_OFFSET UNITYSDK_OFFSET(0x9FC9200)
#define RPG_CLIENT_STATICLISTVIEW_GET_ISIGNORETRANSDIRTYWAIT_OFFSET UNITYSDK_OFFSET(0x9FCFB10)
#define RPG_CLIENT_STATICLISTVIEW_GET_ISVERTIAL_OFFSET UNITYSDK_OFFSET(0x9FCDAB0)
#define RPG_CLIENT_STATICLISTVIEW_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FC91F0)
#define RPG_CLIENT_STATICLISTVIEW_GET_ITEMPREVIEWCOUNT_OFFSET UNITYSDK_OFFSET(0x9FC9220)
#define RPG_CLIENT_STATICLISTVIEW_GET_MSCROLLRECT_OFFSET UNITYSDK_OFFSET(0x9FCD410)
#define RPG_CLIENT_STATICLISTVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x9FC9290)
#define RPG_CLIENT_STATICLISTVIEW_MOVEPANELTOITEMINDEX_OFFSET UNITYSDK_OFFSET(0x9FCD970)
#define RPG_CLIENT_STATICLISTVIEW_NEWLISTVIEWITEM_OFFSET UNITYSDK_OFFSET(0x9FCC8D0)
#define RPG_CLIENT_STATICLISTVIEW_ONANIMATORBUTTONSELECTED_OFFSET UNITYSDK_OFFSET(0x9FCD740)
#define RPG_CLIENT_STATICLISTVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9FCA260)
#define RPG_CLIENT_STATICLISTVIEW_ONFINISHALLNAVICONNECT_OFFSET UNITYSDK_OFFSET(0x9FCB9D0)
#define RPG_CLIENT_STATICLISTVIEW_ONLISTVIEWSETDIRECTION_OFFSET UNITYSDK_OFFSET(0x9FCE630)
#define RPG_CLIENT_STATICLISTVIEW_ONNEWITEM_OFFSET UNITYSDK_OFFSET(0x9FCA910)
#define RPG_CLIENT_STATICLISTVIEW_ONRECYCLEITEM_OFFSET UNITYSDK_OFFSET(0x9FCCB90)
#define RPG_CLIENT_STATICLISTVIEW_PLAYFADEINWITHAUTOANIMTIME_OFFSET UNITYSDK_OFFSET(0x9FCFFC0)
#define RPG_CLIENT_STATICLISTVIEW_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x9FCFB30)
#define RPG_CLIENT_STATICLISTVIEW_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0x9FCCAE0)
#define RPG_CLIENT_STATICLISTVIEW_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0x9FCC4F0)
#define RPG_CLIENT_STATICLISTVIEW_REFRESHLISTNAVI_OFFSET UNITYSDK_OFFSET(0x9FCA770)
#define RPG_CLIENT_STATICLISTVIEW_SETDIRECTIONREFLISTVIEW_OFFSET UNITYSDK_OFFSET(0x9FCF9D0)
#define RPG_CLIENT_STATICLISTVIEW_SETGAMEOBJECTACTIVE_OFFSET UNITYSDK_OFFSET(0x9FC9890)
#define RPG_CLIENT_STATICLISTVIEW_SETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FCC530)
#define RPG_CLIENT_STATICLISTVIEW_SET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0x9FCFB00)
#define RPG_CLIENT_STATICLISTVIEW_SET_FADEINOFFSET_OFFSET UNITYSDK_OFFSET(0x9FCFAE0)
#define RPG_CLIENT_STATICLISTVIEW_SET_ISFORBIDNAVI_OFFSET UNITYSDK_OFFSET(0x9FC9210)
#define RPG_CLIENT_STATICLISTVIEW_SET_ISIGNORETRANSDIRTYWAIT_OFFSET UNITYSDK_OFFSET(0x9FCFB20)
#define RPG_CLIENT_STATICLISTVIEW_SET_ITEMPREVIEWCOUNT_OFFSET UNITYSDK_OFFSET(0x9FC9230)
#define RPG_CLIENT_STATICLISTVIEW_SET_MSCROLLRECT_OFFSET UNITYSDK_OFFSET(0x9FCD420)
#define RPG_CLIENT_STATICLISTVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0x9FCA5E0)
#define RPG_CLIENT_STATICLISTVIEW_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9FCA2B0)
#define RPG_CLIENT_STATICLISTVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FCA2F0)
#define RPG_CLIENT_STATICLISTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD0150)
#define RPG_CLIENT_STATICLISTVIEW__TICKFADEIN_OFFSET UNITYSDK_OFFSET(0x9FCA840)

namespace RPG::Client
{
	inline static constexpr unsigned int StaticListView_TypeDefinitionIndex = 57926;

	class StaticListView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Func_4<::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>* mOnGetItemByIndex; // 0x18
		::UnityEngine::GameObject* mItemPrefab; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::StaticListViewItem*>* mList; // 0x28
		::System::Collections::Generic::Queue_1<::RPG::Client::StaticListViewItem*>* itemPoolList; // 0x30
		::Class_0_16E4307DCC419505_818* layoutGroup; // 0x38
		::XLua::LuaTable* mLuaTable; // 0x40
		::RPG::Client::PrefabCache* prefabCache; // 0x48
		::Class_1_A0302E9AE0B8A2B9* mPool; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::StaticListViewItem*>* instanceMap; // 0x58
		::UnityEngine::Transform* mTransform; // 0x60
		::UnityEngine::RectTransform* mRecTransform; // 0x68
		::System::Int32 Count; // 0x70
		::System::Boolean UseWeakActive; // 0x74
		::System::Int32 naviCoulmn; // 0x78
		::System::Int32 naviRow; // 0x7C
		::System::Boolean isForbidNavi; // 0x80
		::System::Int32 mItemPreviewCount; // 0x84
		::System::Boolean isInProfile; // 0x88
		::System::Boolean inited; // 0x89
		::System::Boolean lastDirty; // 0x8A
		::System::Collections::Generic::List_1<::RPG::Client::StaticListViewItem*>* tmpItemPoolList; // 0x90
		::System::Boolean cachedFocused; // 0x98
		::UnityEngine::UI::ScrollRect* m_ScrollRect; // 0xA0
		::UnityEngine::UI::GridLayoutGroup_RowColumnPair focusedRowColumn; // 0xA8
		::System::Int32 focusedInstanceID; // 0xB0
		::SuperScrollView::LoopListView2* parentList; // 0xB8
		::SuperScrollView::LoopListViewItem2* parentItem; // 0xC0
		::Il2CppArray<::UnityEngine::Vector3>* tempPoints; // 0xC8
		::System::Func_2<::RPG::Client::StaticListViewItem*, ::UnityEngine::Vector2>* OnGetAlignOffset; // 0xD0
		::RPG::Client::StaticListView* topList; // 0xD8
		::RPG::Client::StaticListView* bottomList; // 0xE0
		::RPG::Client::StaticListView* leftList; // 0xE8
		::RPG::Client::StaticListView* rightList; // 0xF0
		::System::Single _fadeInBeginStamp; // 0xF8
		::System::Single _fadeInEndStamp; // 0xFC
		::System::Single _fadeInOffset; // 0x100
		::System::Single _fadeInLength; // 0x104
		::System::Boolean isIgnoreTransDirtyWait; // 0x108
		::System::Boolean m_isRowNaviLoop; // 0x109

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsForbidNavi()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ISFORBIDNAVI_OFFSET))(this);
		}

		::System::Void set_IsForbidNavi(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_ISFORBIDNAVI_OFFSET))(this, value);
		}

		::System::Int32 get_ItemPreviewCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ITEMPREVIEWCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemPreviewCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_ITEMPREVIEWCOUNT_OFFSET))(this, value);
		}

		::System::Void init(::XLua::LuaTable* table, ::System::Int32 count, ::System::Func_4<::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>* onNewItem, ::System::Int32 prefabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Func_4<::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_INIT_OFFSET))(this, table, count, onNewItem, prefabIndex);
		}

		::System::Void SetGameObjectActive(::UnityEngine::GameObject* obj, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SETGAMEOBJECTACTIVE_OFFSET))(this, obj, value);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_DESPAWNED_OFFSET))(this);
		}

		::System::Void DestroyAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_DESTROYALLITEM_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SPAWNED_OFFSET))(this);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CLEARALL_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SHOW_OFFSET))(this);
		}

		::System::Void RefreshAllShownItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_REFRESHALLSHOWNITEM_OFFSET))(this);
		}

		::System::Void SetListItemCount(::System::Int32 count, ::System::Boolean resetPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SETLISTITEMCOUNT_OFFSET))(this, count, resetPos);
		}

		::RPG::Client::StaticListViewItem* CreateItem()
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CREATEITEM_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* NewListViewItem(::System::Int32 prefabIndex)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_NEWLISTVIEWITEM_OFFSET))(this, prefabIndex);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CLEAR_OFFSET))(this);
		}

		::System::Void RecycleItem(::RPG::Client::StaticListViewItem* item, ::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_RECYCLEITEM_OFFSET))(this, item, isForce);
		}

		::UnityEngine::UI::ScrollRect* get_mScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_MSCROLLRECT_OFFSET))(this);
		}

		::System::Void set_mScrollRect(::UnityEngine::UI::ScrollRect* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_MSCROLLRECT_OFFSET))(this, value);
		}

		::System::Void ClearFocusCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CLEARFOCUSCACHE_OFFSET))(this);
		}

		::System::Void OnNewItem(::RPG::Client::StaticListViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListViewItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONNEWITEM_OFFSET))(this, item);
		}

		::System::Void OnRecycleItem(::RPG::Client::StaticListViewItem* item, ::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONRECYCLEITEM_OFFSET))(this, item, isForce);
		}

		::System::Void ClearAllNavi()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CLEARALLNAVI_OFFSET))(this);
		}

		::System::Void OnAnimatorButtonSelected(::RPG::Client::AnimatorButton* button)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONANIMATORBUTTONSELECTED_OFFSET))(this, button);
		}

		::System::Void MovePanelToItemIndex(::System::Int32 itemIndex, ::System::Single offset, ::UnityEngine::UI::ScrollRect_AlignDirection direction, ::System::Boolean ignoreMoveIfInView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::UI::ScrollRect_AlignDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_MOVEPANELTOITEMINDEX_OFFSET))(this, itemIndex, offset, direction, ignoreMoveIfInView);
		}

		::System::Boolean get_IsVertial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ISVERTIAL_OFFSET))(this);
		}

		::System::Void OnFinishAllNaviConnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONFINISHALLNAVICONNECT_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* GetShownItemByItemIndex(::System::Int32 itemIndex)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, itemIndex);
		}

		::RPG::Client::StaticListViewItem* GetFirstItem(::System::Int32 rowOrColumn)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GETFIRSTITEM_OFFSET))(this, rowOrColumn);
		}

		::RPG::Client::StaticListViewItem* GetLastItem(::System::Int32 rowOrColumn)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GETLASTITEM_OFFSET))(this, rowOrColumn);
		}

		::System::Void RefreshListNavi()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_REFRESHLISTNAVI_OFFSET))(this);
		}

		::System::Void SetDirectionRefListview(::RPG::Client::StaticListView* listView, ::UnityEngine::EventSystems::MoveDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListView*, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SETDIRECTIONREFLISTVIEW_OFFSET))(this, listView, direction);
		}

		::System::Void OnListViewSetDirection(::UnityEngine::EventSystems::MoveDirection direction, ::System::Boolean isAuto)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONLISTVIEWSETDIRECTION_OFFSET))(this, direction, isAuto);
		}

		::System::Single get_FadeInOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_FADEINOFFSET_OFFSET))(this);
		}

		::System::Void set_FadeInOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_FADEINOFFSET_OFFSET))(this, value);
		}

		::System::Single get_FadeInLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_FADEINLENGTH_OFFSET))(this);
		}

		::System::Void set_FadeInLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_FADEINLENGTH_OFFSET))(this, value);
		}

		::System::Boolean get_IsIgnoreTransDirtyWait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ISIGNORETRANSDIRTYWAIT_OFFSET))(this);
		}

		::System::Void set_IsIgnoreTransDirtyWait(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_ISIGNORETRANSDIRTYWAIT_OFFSET))(this, value);
		}

		::System::Void PlayFadeIn(::System::Single animTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_PLAYFADEIN_OFFSET))(this, animTime);
		}

		::System::Void PlayFadeInWithAutoAnimTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_PLAYFADEINWITHAUTOANIMTIME_OFFSET))(this);
		}

		::System::Void _TickFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW__TICKFADEIN_OFFSET))(this);
		}
	};
}
