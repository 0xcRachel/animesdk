#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A2B5EC56C7F63653;
class Class_1_BCCF85E57593CA8D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10F16C70)
#define CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10F17320)
#define CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10F17380)
#define CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10F17330)
#define CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F16C50)
#define CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37__CTOR_OFFSET UNITYSDK_OFFSET(0x10F10600)

inline static constexpr unsigned int Class_1_A2B5EC56C7F63653__UpgradeDicePerformance_d__37_TypeDefinitionIndex = 47782;

class Class_1_A2B5EC56C7F63653__UpgradeDicePerformance_d__37 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* _oldDicePool_5__2; // 0x18
	::Class_1_A2B5EC56C7F63653* __4__this; // 0x20
	::Class_1_BCCF85E57593CA8D* detail; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* _newDicePool_5__3; // 0x30
	::System::Boolean isLocalPlayer; // 0x38
	::System::Int32 __1__state; // 0x3C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__UPGRADEDICEPERFORMANCE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
