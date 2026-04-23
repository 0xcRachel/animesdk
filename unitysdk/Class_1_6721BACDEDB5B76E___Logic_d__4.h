#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_344;
class Class_1_6721BACDEDB5B76E;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCCF2F60)
#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCCF3330)
#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCCF3390)
#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCCF3340)
#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCF2F50)
#define CLASS_1_6721BACDEDB5B76E___LOGIC_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0xCCF2F40)

inline static constexpr unsigned int Class_1_6721BACDEDB5B76E___Logic_d__4_TypeDefinitionIndex = 56144;

class Class_1_6721BACDEDB5B76E___Logic_d__4 : public ::System::Object
{
public:
	::Class_1_6721BACDEDB5B76E* __4__this; // 0x10
	::System::Action_1<::Class_0_16E4307DCC419505_344*>* onBeforeDispose; // 0x18
	::System::Object* __2__current; // 0x20
	::System::Int32 __1__state; // 0x28
	::System::Single delaySeconds; // 0x2C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6721BACDEDB5B76E___LOGIC_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
