#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_13FE4AAA1A281B42;
class Class_1_9C8BB23B0435A836;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x155C1DD0)
#define CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x155C2170)
#define CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x155C21D0)
#define CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x155C2180)
#define CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155C1DC0)
#define CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x155B58F0)

inline static constexpr unsigned int Class_1_13FE4AAA1A281B42___MoveDicesToPositionCoroutine_d__25_TypeDefinitionIndex = 55631;

class Class_1_13FE4AAA1A281B42___MoveDicesToPositionCoroutine_d__25 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* targetPositions; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* originPositions; // 0x18
	::System::Object* __2__current; // 0x20
	::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>* dices; // 0x28
	::Class_1_13FE4AAA1A281B42* __4__this; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Single _speed_5__2; // 0x3C
	::System::Single _ratio_5__3; // 0x40

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
