#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_5_057BBA51FB6DDF01_OFFSET UNITYSDK_OFFSET(0x16DFFB00)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_5_7437CF93E8E7E615_OFFSET UNITYSDK_OFFSET(0x16DFFCC0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFFC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueFormulaRequiredRogueBuffConfig_TypeDefinitionIndex = 17617;

	class RogueActRemoveRogueFormulaRequiredRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_057BBA51FB6DDF01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaRequiredRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaRequiredRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_5_057BBA51FB6DDF01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7437CF93E8E7E615(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaRequiredRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaRequiredRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_5_7437CF93E8E7E615_OFFSET))(a1, a2);
		}
	};
}
