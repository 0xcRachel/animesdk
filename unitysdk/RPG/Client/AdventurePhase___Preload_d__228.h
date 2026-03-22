#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_227;
namespace RPG::Client { class AdventurePhase; }

#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8C1CC40)
#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8C1CF90)
#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8C1CFF0)
#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8C1CFA0)
#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C1CC30)
#define RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228__CTOR_OFFSET UNITYSDK_OFFSET(0x8C17730)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhase___Preload_d__228_TypeDefinitionIndex = 47623;

	class AdventurePhase___Preload_d__228 : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* __4__this; // 0x10
		::Class_0_16E4307DCC419505_227* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_227* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_227*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___PRELOAD_D__228_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
