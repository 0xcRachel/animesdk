#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F551778D210075EF;

#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFEF70C0)
#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFEF7150)
#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFEF71B0)
#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xFEF7160)
#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFEF70B0)
#define CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47__CTOR_OFFSET UNITYSDK_OFFSET(0xFEF6C10)

inline static constexpr unsigned int Class_2_F551778D210075EF___DelayGoBridge_d__47_TypeDefinitionIndex = 45110;

class Class_2_F551778D210075EF___DelayGoBridge_d__47 : public ::System::Object
{
public:
	::Class_2_F551778D210075EF* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Single delay; // 0x20
	::System::Int32 __1__state; // 0x24
	::System::Boolean goBridge; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___DELAYGOBRIDGE_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
