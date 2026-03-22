#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_227;
namespace RPG::Client { class TeamManager; }
namespace System { class Action; }

#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA05E960)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA05EBD0)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA05EC30)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA05EBE0)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA05E950)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0xA054E10)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___CreateLeaderMemberEntity_d__20_TypeDefinitionIndex = 48159;

	class TeamManager___CreateLeaderMemberEntity_d__20 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_227* __2__current; // 0x10
		::System::Action* onAsyncLoadFinish; // 0x18
		::RPG::Client::TeamManager* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Boolean bAsyncLoad; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_227* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_227*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
