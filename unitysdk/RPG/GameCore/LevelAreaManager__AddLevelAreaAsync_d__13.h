#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_227;
namespace RPG::GameCore { class LevelAreaManager; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA44C860)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA44C970)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA44C9D0)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA44C980)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA44C850)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0xA448D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAreaManager__AddLevelAreaAsync_d__13_TypeDefinitionIndex = 45563;

	class LevelAreaManager__AddLevelAreaAsync_d__13 : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelAreaManager* __4__this; // 0x10
		::System::String* ConfigPath; // 0x18
		::Class_0_16E4307DCC419505_227* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_227* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_227*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
