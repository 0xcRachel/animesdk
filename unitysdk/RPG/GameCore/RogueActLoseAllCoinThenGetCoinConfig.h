#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_5_0C9BF84E555572F6_OFFSET UNITYSDK_OFFSET(0x16DFEAA0)
#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_5_637064A22F27D54A_OFFSET UNITYSDK_OFFSET(0x16DFE8E0)
#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFE9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActLoseAllCoinThenGetCoinConfig_TypeDefinitionIndex = 17571;

	class RogueActLoseAllCoinThenGetCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_637064A22F27D54A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_5_637064A22F27D54A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0C9BF84E555572F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_5_0C9BF84E555572F6_OFFSET))(a1, a2);
		}
	};
}
