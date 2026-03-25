#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7250B7BB9413AA62.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_301;
class Class_3_66AFDE798AC015C5;

#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10B2C5E0)
#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10B2C670)
#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10B2C6D0)
#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10B2C680)
#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B2C5D0)
#define CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B2BCB0)

inline static constexpr unsigned int Class_3_66AFDE798AC015C5__MainAsync_d__0_TypeDefinitionIndex = 39666;

class Class_3_66AFDE798AC015C5__MainAsync_d__0 : public ::System::Object
{
public:
	::Class_3_66AFDE798AC015C5* __4__this; // 0x10
	::Struct_2_7250B7BB9413AA62 startNode; // 0x18
	::Class_0_16E4307DCC419505_301* container; // 0x28
	::Struct_2_7250B7BB9413AA62 goalNode; // 0x30
	::System::Int32 __1__state; // 0x40
	::System::Single G; // 0x44
	::System::Nullable_1<::System::Boolean> __2__current; // 0x48

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_MOVENEXT_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> System_Collections_Generic_IEnumerator_System_Boolean___get_Current()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66AFDE798AC015C5__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
