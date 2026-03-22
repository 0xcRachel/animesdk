#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_3_B9F055F7C274BF03_OFFSET UNITYSDK_OFFSET(0x1677D650)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_3_DFA4784154E4F05B_OFFSET UNITYSDK_OFFSET(0x1677D5C0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1677D630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionMultiTimeConfig_TypeDefinitionIndex = 15359;

	class ActionTriggerActionMultiTimeConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* Action; // 0x10
		::RPG::GameCore::MiParameterConfigBase* TriggerCountParam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DFA4784154E4F05B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_3_DFA4784154E4F05B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9F055F7C274BF03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_3_B9F055F7C274BF03_OFFSET))(a1, a2);
		}
	};
}
