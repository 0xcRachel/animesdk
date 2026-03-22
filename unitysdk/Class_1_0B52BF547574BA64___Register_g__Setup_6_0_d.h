#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA16C320)
#define CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA16C3D0)
#define CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA16C430)
#define CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA16C3E0)
#define CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA16C310)
#define CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D__CTOR_OFFSET UNITYSDK_OFFSET(0xA16C300)

inline static constexpr unsigned int Class_1_0B52BF547574BA64___Register_g__Setup_6_0_d_TypeDefinitionIndex = 57920;

class Class_1_0B52BF547574BA64___Register_g__Setup_6_0_d : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::System::Int32 __1__state; // 0x18

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64___REGISTER_G__SETUP_6_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
