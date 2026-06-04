#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class SortedList; }

#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_ADD_OFFSET UNITYSDK_OFFSET(0x19A25D90)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x19A25DF0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19A25E50)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x19A25E80)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19A26030)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19A25CF0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x19A25D20)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19A25D10)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19A25D30)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19A25FA0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x19A25D60)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19A260B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_INSERT_OFFSET UNITYSDK_OFFSET(0x19A25F40)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19A26160)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x19A26100)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19A25FD0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19A23D20)

namespace System::Collections
{
	inline static constexpr unsigned int SortedList_ValueList_TypeDefinitionIndex = 1491;

	class SortedList_ValueList : public ::System::Object
	{
	public:
		::System::Collections::SortedList* sortedList; // 0x10

		::System::Void _ctor(::System::Collections::SortedList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::SortedList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Void Insert(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Object* get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_REMOVE_OFFSET))(this, a1);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_REMOVEAT_OFFSET))(this, a1);
		}
	};
}
