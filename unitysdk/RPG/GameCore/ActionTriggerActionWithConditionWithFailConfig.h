#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_3_7C7B7798F4986124_OFFSET UNITYSDK_OFFSET(0x1677D940)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_3_9E8AB027926003C1_OFFSET UNITYSDK_OFFSET(0x1677D9D0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1677D9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionWithConditionWithFailConfig_TypeDefinitionIndex = 15361;

	class ActionTriggerActionWithConditionWithFailConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* SuccAction; // 0x10
		::RPG::GameCore::MiActionConfigBase* FailAction; // 0x18
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C7B7798F4986124(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_3_7C7B7798F4986124_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E8AB027926003C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_METHOD_3_9E8AB027926003C1_OFFSET))(a1, a2);
		}
	};
}
