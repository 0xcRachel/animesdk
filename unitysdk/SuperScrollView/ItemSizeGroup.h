#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_ITEMSIZEGROUP_CLEAROLDDATA_OFFSET UNITYSDK_OFFSET(0xA6EA6F0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMINDEXBYPOS_OFFSET UNITYSDK_OFFSET(0xA6EAF50)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMSTARTPOS_OFFSET UNITYSDK_OFFSET(0xA6EACF0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xA6EB3B0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_INIT_OFFSET UNITYSDK_OFFSET(0xA6EB1B0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_RECALCGROUPSIZE_OFFSET UNITYSDK_OFFSET(0xA6EB3C0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xA6EA840)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0xA6EA9A0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_UPDATEALLITEMSTARTPOS_OFFSET UNITYSDK_OFFSET(0xA6EB080)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xA6EA820)

namespace SuperScrollView
{
	inline static constexpr unsigned int ItemSizeGroup_TypeDefinitionIndex = 37536;

	class ItemSizeGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* mItemStartPosArray; // 0x10
		::Il2CppArray<::System::Single>* mItemSizeArray; // 0x18
		::System::Single mItemDefaultSize; // 0x20
		::System::Int32 mItemCount; // 0x24
		::System::Single mGroupEndPos; // 0x28
		::System::Int32 mGroupIndex; // 0x2C
		::System::Single mGroupSize; // 0x30
		::System::Single mGroupStartPos; // 0x34
		::System::Int32 mDirtyBeginIndex; // 0x38
		::System::Int32 mMaxNoZeroIndex; // 0x3C

		::System::Void _ctor(::System::Int32 index, ::System::Single itemDefaultSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP__CTOR_OFFSET))(this, index, itemDefaultSize);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_INIT_OFFSET))(this);
		}

		::System::Single GetItemStartPos(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMSTARTPOS_OFFSET))(this, index);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Single SetItemSize(::System::Int32 index, ::System::Single size)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMSIZE_OFFSET))(this, index, size);
		}

		::System::Void SetItemCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMCOUNT_OFFSET))(this, count);
		}

		::System::Void RecalcGroupSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_RECALCGROUPSIZE_OFFSET))(this);
		}

		::System::Int32 GetItemIndexByPos(::System::Single pos)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMINDEXBYPOS_OFFSET))(this, pos);
		}

		::System::Void UpdateAllItemStartPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_UPDATEALLITEMSTARTPOS_OFFSET))(this);
		}

		::System::Void ClearOldData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_CLEAROLDDATA_OFFSET))(this);
		}
	};
}
