#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_METHOD_5_5AEF9A950B7A0943_OFFSET UNITYSDK_OFFSET(0x16DFEC70)
#define RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_METHOD_5_C2AFB5439C85D41F_OFFSET UNITYSDK_OFFSET(0x16DFEAB0)
#define RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFEBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRaiseDialogueConfig_TypeDefinitionIndex = 17644;

	class RogueActRaiseDialogueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C2AFB5439C85D41F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRaiseDialogueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRaiseDialogueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_METHOD_5_C2AFB5439C85D41F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5AEF9A950B7A0943(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRaiseDialogueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRaiseDialogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_METHOD_5_5AEF9A950B7A0943_OFFSET))(a1, a2);
		}
	};
}
