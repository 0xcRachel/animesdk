#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D6681068F74FC3B8;
namespace RPG::Client { class Stage; }

#define CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF3E0E30)
#define CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF3E0FA0)
#define CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF3E1000)
#define CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xF3E0FB0)
#define CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3E0E20)
#define CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E04A0)

inline static constexpr unsigned int Class_1_D6681068F74FC3B8___WaitStreaming_d__11_TypeDefinitionIndex = 56576;

class Class_1_D6681068F74FC3B8___WaitStreaming_d__11 : public ::System::Object
{
public:
	::RPG::Client::Stage* _stage_5__2; // 0x10
	::System::Object* __2__current; // 0x18
	::Class_1_D6681068F74FC3B8* __4__this; // 0x20
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6681068F74FC3B8___WAITSTREAMING_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
