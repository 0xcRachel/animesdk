#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D5D8B81C5F91714F;
namespace UnityEngine { class GameObject; }

#define CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBF30480)
#define CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF30870)
#define CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF308D0)
#define CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBF30880)
#define CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF30470)
#define CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0xBF2E940)

inline static constexpr unsigned int Class_1_D5D8B81C5F91714F___StartLastBullet_d__15_TypeDefinitionIndex = 61805;

class Class_1_D5D8B81C5F91714F___StartLastBullet_d__15 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::UnityEngine::GameObject* startGameObject; // 0x18
	::Class_1_D5D8B81C5F91714F* __4__this; // 0x20
	::System::Boolean needCreateNewEffect; // 0x28
	::UnityEngine::Vector3 position2; // 0x2C
	::UnityEngine::Vector3 position1; // 0x38
	::System::Int32 __1__state; // 0x44

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
