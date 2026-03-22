#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A0302E9AE0B8A2B9;
namespace RPG::Client { class PrefabCache; }
namespace SuperScrollView { class GridItemPool_OnNewPrefabIns; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_GRIDITEMPOOL_ADDANDRECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xA6A9090)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xA6A9380)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xA6A8900)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0xA6A9140)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_FINDITEM_OFFSET UNITYSDK_OFFSET(0xA6A8D10)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_GETITEM_OFFSET UNITYSDK_OFFSET(0xA6A8F10)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_GET_POOLEDITEMLIST_OFFSET UNITYSDK_OFFSET(0xA6A9E40)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_INIT_OFFSET UNITYSDK_OFFSET(0xA6A8760)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_RECYCLEITEMREAL_OFFSET UNITYSDK_OFFSET(0xA6A8CA0)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xA6A9D90)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xA6A9D00)
#define SUPERSCROLLVIEW_GRIDITEMPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A86E0)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridItemPool_TypeDefinitionIndex = 37546;

	class GridItemPool : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_mCurItemIdCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GridItemPool_TypeDefinitionIndex)->GetStaticField(0xF2D0);
		}
		::System::Collections::Generic::List_1<::SuperScrollView::LoopGridViewItem*>* mSelectPooledItemList; // 0x10
		::SuperScrollView::GridItemPool_OnNewPrefabIns* onNewPrefabHandler; // 0x18
		::UnityEngine::RectTransform* mItemParent; // 0x20
		::UnityEngine::GameObject* mPrefabObj; // 0x28
		::System::Collections::Generic::List_1<::SuperScrollView::LoopGridViewItem*>* mPooledItemList; // 0x30
		::RPG::Client::PrefabCache* prefabCache; // 0x38
		::System::String* mPrefabName; // 0x40
		::System::Collections::Generic::List_1<::SuperScrollView::LoopGridViewItem*>* mTmpPooledItemList; // 0x48
		::Class_1_A0302E9AE0B8A2B9* mPool; // 0x50
		::System::Int32 mInitCreateCount; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::GameObject* prefabObj, ::System::Int32 createCount, ::UnityEngine::RectTransform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_INIT_OFFSET))(this, prefabObj, createCount, parent);
		}

		::SuperScrollView::LoopGridViewItem* FindItem(::System::Int32 intanceID)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_FINDITEM_OFFSET))(this, intanceID);
		}

		::SuperScrollView::LoopGridViewItem* GetItem()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_GETITEM_OFFSET))(this);
		}

		::System::Void AddAndRecycleItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_ADDANDRECYCLEITEM_OFFSET))(this);
		}

		::System::Void DestroyAllItem(::System::Boolean im)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_DESTROYALLITEM_OFFSET))(this, im);
		}

		::SuperScrollView::LoopGridViewItem* CreateItem()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_CREATEITEM_OFFSET))(this);
		}

		::System::Void RecycleItemReal(::SuperScrollView::LoopGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_RECYCLEITEMREAL_OFFSET))(this, item);
		}

		::System::Void SetItemVisibleByPos(::SuperScrollView::LoopGridViewItem* item, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET))(this, item, visible);
		}

		::System::Void RecycleItem(::SuperScrollView::LoopGridViewItem* item, ::System::Boolean isSeleced)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_RECYCLEITEM_OFFSET))(this, item, isSeleced);
		}

		::System::Void ClearTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::SuperScrollView::LoopGridViewItem*>* get_PooledItemList()
		{
			return ((::System::Collections::Generic::List_1<::SuperScrollView::LoopGridViewItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_GET_POOLEDITEMLIST_OFFSET))(this);
		}
	};
}
