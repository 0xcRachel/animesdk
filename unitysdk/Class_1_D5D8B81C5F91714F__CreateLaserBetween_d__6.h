#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D5D8B81C5F91714F;
namespace UnityEngine { class GameObject; }

#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBF2FD30)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF30400)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF30460)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBF30410)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF2FD20)
#define CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0xBF2E2D0)

inline static constexpr unsigned int Class_1_D5D8B81C5F91714F__CreateLaserBetween_d__6_TypeDefinitionIndex = 61804;

class Class_1_D5D8B81C5F91714F__CreateLaserBetween_d__6 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::UnityEngine::GameObject* startGameObject; // 0x18
	::Class_1_D5D8B81C5F91714F* __4__this; // 0x20
	::System::Boolean needCreateNewEffect; // 0x28
	::System::Int32 __1__state; // 0x2C
	::UnityEngine::Vector3 position1; // 0x30
	::UnityEngine::Vector3 position2; // 0x3C
	::System::Single _currentMoveTime_5__3; // 0x48
	::System::Single _moveDuration_5__2; // 0x4C
	::System::Single _waitProtectTime_5__4; // 0x50

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
