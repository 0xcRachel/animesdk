#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_13FE4AAA1A281B42;
class Class_1_EB7FD32C4AD9446F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x155C16D0)
#define CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x155C1D50)
#define CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x155C1DB0)
#define CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x155C1D60)
#define CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155C16C0)
#define CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52__CTOR_OFFSET UNITYSDK_OFFSET(0x155B9550)

inline static constexpr unsigned int Class_1_13FE4AAA1A281B42__UpgradeDicePerformance_d__52_TypeDefinitionIndex = 55630;

class Class_1_13FE4AAA1A281B42__UpgradeDicePerformance_d__52 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* _newDicePool_5__3; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* _oldDicePool_5__2; // 0x20
	::Class_1_13FE4AAA1A281B42* __4__this; // 0x28
	::Class_1_EB7FD32C4AD9446F* entityDiff; // 0x30
	::System::UInt32 triggerEntityUID; // 0x38
	::System::UInt32 entityUID; // 0x3C
	::System::Int32 __1__state; // 0x40

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__UPGRADEDICEPERFORMANCE_D__52_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
