#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_26;
class Class_1_AF847B3936BF1C13;
class Class_2_9DD8A46984F1AFFD;

#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA6AA420)
#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA6AB020)
#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA6AB080)
#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA6AB030)
#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6AA400)
#define CLASS_1_AF847B3936BF1C13___ASYNCSETWINDOWINTOSLOT_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0xA6AA3F0)

inline static constexpr unsigned int Class_1_AF847B3936BF1C13___AsyncSetWindowIntoSlot_d__21_TypeDefinitionIndex = 60619;

class Class_1_AF847B3936BF1C13___AsyncSetWindowIntoSlot_d__21 : public ::System::Object
{
public:
	::Class_2_9DD8A46984F1AFFD* _window_5__4; // 0x10
	::Class_1_AF847B3936BF1C13* __4__this; // 0x18
	::Class_1_43BD383C98B4C0C5_26* _state_5__3; // 0x20
	::Class_2_9DD8A46984F1AFFD* _windowControllerEntity_5__2; // 0x28
	::Class_2_9DD8A46984F1AFFD* _slot_5__5; // 0x30
	::System::Object* __2__current; // 0x38
	::System::Int32 slotIndex; // 0x40
	::System::Int32 __1__state; // 0x44
	::System::Single _distance_5__7; // 0x48
	::UnityEngine::Vector3 _curPos_5__9; // 0x4C
	::UnityEngine::Vector3 _targetPos_5__6; // 0x58
	::System::Single _curDistance_5__10; // 0x64
	::System::Single _duration_5__8; // 0x68
	::System::Int32 windowIndex; // 0x6C

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
