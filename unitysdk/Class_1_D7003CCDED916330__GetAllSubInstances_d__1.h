#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_ValueCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_D7003CCDED916330;
class Class_1_F55BDFA70D4C523C;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x115B0940)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_FREESTYLESUBINSTANCE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x115B0B40)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_FREESTYLESUBINSTANCE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x115B0AD0)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x115B0BC0)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x115B0B30)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x115B0AE0)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115B0920)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x115A5C80)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x115B0930)

inline static constexpr unsigned int Class_1_D7003CCDED916330__GetAllSubInstances_d__1_TypeDefinitionIndex = 46139;

class Class_1_D7003CCDED916330__GetAllSubInstances_d__1 : public ::System::Object
{
public:
	::Class_1_F55BDFA70D4C523C* __2__current; // 0x10
	::Class_1_D7003CCDED916330* __4__this; // 0x18
	::System::Collections::Generic::Dictionary_2_ValueCollection_Enumerator<::System::String*, ::Class_1_F55BDFA70D4C523C*> __7__wrap1; // 0x20
	::System::Int32 __1__state; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1___M__FINALLY1_OFFSET))(this);
	}

	::Class_1_F55BDFA70D4C523C* System_Collections_Generic_IEnumerator_RPG_GameCore_FreeStyleSubInstance__get_Current()
	{
		return ((::Class_1_F55BDFA70D4C523C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_FREESTYLESUBINSTANCE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_F55BDFA70D4C523C*>* System_Collections_Generic_IEnumerable_RPG_GameCore_FreeStyleSubInstance__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_F55BDFA70D4C523C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_FREESTYLESUBINSTANCE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
