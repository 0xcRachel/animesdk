#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_24;
class Class_1_F59AE8B69D24AC13;
class Class_2_9DD8A46984F1AFFD;

#define CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD4E5E40)
#define CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD4E6740)
#define CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD4E67A0)
#define CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD4E6750)
#define CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4E5E20)
#define CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0xD4E5720)

inline static constexpr unsigned int Class_1_F59AE8B69D24AC13___AsyncSetWindowIntoSlot_d__21_TypeDefinitionIndex = 70613;

class Class_1_F59AE8B69D24AC13___AsyncSetWindowIntoSlot_d__21 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_24* _state_5__3; // 0x10
	::System::Object* __2__current; // 0x18
	::Class_2_9DD8A46984F1AFFD* _windowControllerEntity_5__2; // 0x20
	::Class_1_F59AE8B69D24AC13* __4__this; // 0x28
	::Class_2_9DD8A46984F1AFFD* _slot_5__5; // 0x30
	::Class_2_9DD8A46984F1AFFD* _window_5__4; // 0x38
	::System::Single _duration_5__8; // 0x40
	::UnityEngine::Vector3 _curPos_5__9; // 0x44
	::System::Single _distance_5__7; // 0x50
	::System::Int32 __1__state; // 0x54
	::System::Int32 windowIndex; // 0x58
	::UnityEngine::Vector3 _targetPos_5__6; // 0x5C
	::System::Single _curDistance_5__10; // 0x68
	::System::Int32 slotIndex; // 0x6C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F59AE8B69D24AC13___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
