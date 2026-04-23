#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1DF845F074911800;
namespace System::Collections { class IEnumerator; }

#define CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBC20040)
#define CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBC202D0)
#define CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBC20330)
#define CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBC202E0)
#define CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC20030)
#define CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0xBC18100)

inline static constexpr unsigned int Class_2_1DF845F074911800__PersistentLoad_d__8_TypeDefinitionIndex = 68004;

class Class_2_1DF845F074911800__PersistentLoad_d__8 : public ::System::Object
{
public:
	::System::Collections::IEnumerator* _iter_5__2; // 0x10
	::Class_2_1DF845F074911800* __4__this; // 0x18
	::System::Object* __2__current; // 0x20
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
