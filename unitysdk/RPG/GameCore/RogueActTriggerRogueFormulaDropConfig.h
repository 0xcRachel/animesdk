#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_METHOD_5_22CB072D81CE5C88_OFFSET UNITYSDK_OFFSET(0x16E03330)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_METHOD_5_497CD66930DF842C_OFFSET UNITYSDK_OFFSET(0x16E034F0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E03430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueFormulaDropConfig_TypeDefinitionIndex = 17601;

	class RogueActTriggerRogueFormulaDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_22CB072D81CE5C88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_METHOD_5_22CB072D81CE5C88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_497CD66930DF842C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_METHOD_5_497CD66930DF842C_OFFSET))(a1, a2);
		}
	};
}
