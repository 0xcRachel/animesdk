#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_METHOD_5_3261E2827F38FFD6_OFFSET UNITYSDK_OFFSET(0x16EB52F0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_METHOD_5_B5AF73E7F49767D5_OFFSET UNITYSDK_OFFSET(0x16EB5460)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB53C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournLayerIndexConfig_TypeDefinitionIndex = 17688;

	class RogueParamRogueTournLayerIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_3261E2827F38FFD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_METHOD_5_3261E2827F38FFD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B5AF73E7F49767D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_METHOD_5_B5AF73E7F49767D5_OFFSET))(a1, a2);
		}
	};
}
