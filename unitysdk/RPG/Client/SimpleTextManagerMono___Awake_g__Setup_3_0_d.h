#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SimpleTextManagerMono; }

#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA4A1E00)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA4A1E50)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA4A1EB0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA4A1E60)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A1DF0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A1DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono___Awake_g__Setup_3_0_d_TypeDefinitionIndex = 59547;

	class SimpleTextManagerMono___Awake_g__Setup_3_0_d : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::SimpleTextManagerMono* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_3_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
