#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_METHOD_5_73AA47189805BC99_OFFSET UNITYSDK_OFFSET(0x16DFD310)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_METHOD_5_76EB7D4B7F5CEB2D_OFFSET UNITYSDK_OFFSET(0x16DFD150)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFD250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueFormulaConfig_TypeDefinitionIndex = 17602;

	class RogueActGetRogueFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_76EB7D4B7F5CEB2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_METHOD_5_76EB7D4B7F5CEB2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_73AA47189805BC99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_METHOD_5_73AA47189805BC99_OFFSET))(a1, a2);
		}
	};
}
