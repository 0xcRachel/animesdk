#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_5_867DE3FCD86EC089_OFFSET UNITYSDK_OFFSET(0x16DFB9B0)
#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_5_93BA87D959E7A85D_OFFSET UNITYSDK_OFFSET(0x16DFB7F0)
#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFB8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetCoinByLoseCoinConfig_TypeDefinitionIndex = 17570;

	class RogueActGetCoinByLoseCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_93BA87D959E7A85D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_5_93BA87D959E7A85D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_867DE3FCD86EC089(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_5_867DE3FCD86EC089_OFFSET))(a1, a2);
		}
	};
}
