#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E62B17C9BB9D6AE;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class Stage; }

#define CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10E5A740)
#define CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10E5AB80)
#define CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10E5ABE0)
#define CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10E5AB90)
#define CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E5A730)
#define CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x10E592A0)

inline static constexpr unsigned int Class_1_6E62B17C9BB9D6AE___WaitStreaming_d__19_TypeDefinitionIndex = 47954;

class Class_1_6E62B17C9BB9D6AE___WaitStreaming_d__19 : public ::System::Object
{
public:
	::Class_1_6E62B17C9BB9D6AE* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::RPG::Client::FiveDimGameInstance* _targetInstance_5__2; // 0x20
	::RPG::Client::Stage* _stage_5__3; // 0x28
	::System::Int32 __1__state; // 0x30
	::System::Int32 _i_5__4; // 0x34

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E62B17C9BB9D6AE___WAITSTREAMING_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
