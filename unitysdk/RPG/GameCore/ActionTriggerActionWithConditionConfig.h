#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_METHOD_3_4B87051AA8010FDE_OFFSET UNITYSDK_OFFSET(0x1677D810)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_METHOD_3_D8019D8DD92C14F6_OFFSET UNITYSDK_OFFSET(0x1677D780)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1677D7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionWithConditionConfig_TypeDefinitionIndex = 15360;

	class ActionTriggerActionWithConditionConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* Action; // 0x10
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D8019D8DD92C14F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_METHOD_3_D8019D8DD92C14F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B87051AA8010FDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithConditionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_METHOD_3_4B87051AA8010FDE_OFFSET))(a1, a2);
		}
	};
}
