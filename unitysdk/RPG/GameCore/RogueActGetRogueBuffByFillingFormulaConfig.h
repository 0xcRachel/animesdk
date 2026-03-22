#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_5_0ECF6BEFA25D6750_OFFSET UNITYSDK_OFFSET(0x16DFC670)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_5_C45E786203FE1134_OFFSET UNITYSDK_OFFSET(0x16DFC830)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFC770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByFillingFormulaConfig_TypeDefinitionIndex = 17611;

	class RogueActGetRogueBuffByFillingFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0ECF6BEFA25D6750(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_5_0ECF6BEFA25D6750_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C45E786203FE1134(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_5_C45E786203FE1134_OFFSET))(a1, a2);
		}
	};
}
