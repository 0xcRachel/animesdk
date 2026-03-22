#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_51EA3DA096C7D2E4_OFFSET UNITYSDK_OFFSET(0x17155180)
#define RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_56AE1B31F2957B7E_OFFSET UNITYSDK_OFFSET(0x17155260)
#define RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17155200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLittleGameLevelVarChange_TypeDefinitionIndex = 19112;

	class WaitLittleGameLevelVarChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_51EA3DA096C7D2E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLittleGameLevelVarChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLittleGameLevelVarChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_51EA3DA096C7D2E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_56AE1B31F2957B7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLittleGameLevelVarChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLittleGameLevelVarChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMELEVELVARCHANGE_METHOD_4_56AE1B31F2957B7E_OFFSET))(a1, a2);
		}
	};
}
