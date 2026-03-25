#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_24;
class Class_1_AF847B3936BF1C13;
class Class_2_9DD8A46984F1AFFD;

#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x109F5E70)
#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x109F6C00)
#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x109F6C60)
#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x109F6C10)
#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109F5E50)
#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0x109F5530)

inline static constexpr unsigned int Class_1_AF847B3936BF1C13___AsyncSetWindowIntoSlot_d__21_TypeDefinitionIndex = 62600;

class Class_1_AF847B3936BF1C13___AsyncSetWindowIntoSlot_d__21 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_24* _state_5__3; // 0x10
	::Class_1_AF847B3936BF1C13* __4__this; // 0x18
	::System::Object* __2__current; // 0x20
	::Class_2_9DD8A46984F1AFFD* _windowControllerEntity_5__2; // 0x28
	::Class_2_9DD8A46984F1AFFD* _slot_5__5; // 0x30
	::Class_2_9DD8A46984F1AFFD* _window_5__4; // 0x38
	::System::Int32 slotIndex; // 0x40
	::System::Single _distance_5__7; // 0x44
	::UnityEngine::Vector3 _targetPos_5__6; // 0x48
	::System::Int32 windowIndex; // 0x54
	::System::Int32 __1__state; // 0x58
	::System::Single _curDistance_5__10; // 0x5C
	::System::Single _duration_5__8; // 0x60
	::UnityEngine::Vector3 _curPos_5__9; // 0x64

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
