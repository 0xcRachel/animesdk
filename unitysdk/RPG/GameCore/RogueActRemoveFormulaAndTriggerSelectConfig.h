#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_METHOD_5_0660F90958F8A850_OFFSET UNITYSDK_OFFSET(0x16DFF1F0)
#define RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_METHOD_5_BBF0057BBA995234_OFFSET UNITYSDK_OFFSET(0x16DFF3B0)
#define RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFF2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveFormulaAndTriggerSelectConfig_TypeDefinitionIndex = 17654;

	class RogueActRemoveFormulaAndTriggerSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0660F90958F8A850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_METHOD_5_0660F90958F8A850_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BBF0057BBA995234(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_METHOD_5_BBF0057BBA995234_OFFSET))(a1, a2);
		}
	};
}
