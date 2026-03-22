#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_5_12D79E801CF7C8BB_OFFSET UNITYSDK_OFFSET(0x16DF8360)
#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_5_CA5C71C28D368E17_OFFSET UNITYSDK_OFFSET(0x16DF8520)
#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF8460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddRogueModifierConfig_TypeDefinitionIndex = 17592;

	class RogueActAddRogueModifierConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_12D79E801CF7C8BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddRogueModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddRogueModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_5_12D79E801CF7C8BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_CA5C71C28D368E17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddRogueModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddRogueModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_5_CA5C71C28D368E17_OFFSET))(a1, a2);
		}
	};
}
