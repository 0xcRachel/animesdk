#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_5_00FEBDFB18877346_OFFSET UNITYSDK_OFFSET(0x16DFCA10)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_5_2C6448A5A03A111A_OFFSET UNITYSDK_OFFSET(0x16DFCBD0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFCB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByInactiveFormulaWithWeightConfig_TypeDefinitionIndex = 17621;

	class RogueActGetRogueBuffByInactiveFormulaWithWeightConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_00FEBDFB18877346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_5_00FEBDFB18877346_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2C6448A5A03A111A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_5_2C6448A5A03A111A_OFFSET))(a1, a2);
		}
	};
}
