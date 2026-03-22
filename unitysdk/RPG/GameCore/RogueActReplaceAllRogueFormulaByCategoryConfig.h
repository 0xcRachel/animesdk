#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_METHOD_5_0EF4B36145137A63_OFFSET UNITYSDK_OFFSET(0x16E00400)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_METHOD_5_7E1F6057108FE43F_OFFSET UNITYSDK_OFFSET(0x16E00240)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E00340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceAllRogueFormulaByCategoryConfig_TypeDefinitionIndex = 17607;

	class RogueActReplaceAllRogueFormulaByCategoryConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7E1F6057108FE43F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_METHOD_5_7E1F6057108FE43F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0EF4B36145137A63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_METHOD_5_0EF4B36145137A63_OFFSET))(a1, a2);
		}
	};
}
