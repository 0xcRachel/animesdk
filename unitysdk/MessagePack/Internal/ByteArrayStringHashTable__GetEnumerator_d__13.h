#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Internal/ByteArrayStringHashTable_Entry.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ByteArrayStringHashTable; }
namespace System { class String; }

#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1564BBB0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_INT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1564BD60)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1564BDC0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1564BD70)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1564BBA0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x1564BB00)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ByteArrayStringHashTable__GetEnumerator_d__13_TypeDefinitionIndex = 9584;

	class ByteArrayStringHashTable__GetEnumerator_d__13 : public ::System::Object
	{
	public:
		::Il2CppArray<::MessagePack::Internal::ByteArrayStringHashTable_Entry>* __7__wrap3; // 0x10
		::MessagePack::Internal::ByteArrayStringHashTable* __4__this; // 0x18
		::Il2CppArray<::Il2CppArray<::MessagePack::Internal::ByteArrayStringHashTable_Entry>*>* __7__wrap1; // 0x20
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> __2__current; // 0x28
		::System::Int32 __1__state; // 0x38
		::System::Int32 __7__wrap2; // 0x3C
		::System::Int32 __7__wrap4; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Int32___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_INT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
