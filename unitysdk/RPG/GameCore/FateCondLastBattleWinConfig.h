#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_METHOD_5_682C6D45870F9FAA_OFFSET UNITYSDK_OFFSET(0x16A94330)
#define RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_METHOD_5_941165CC9B2CB431_OFFSET UNITYSDK_OFFSET(0x16A944A0)
#define RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A94400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondLastBattleWinConfig_TypeDefinitionIndex = 17271;

	class FateCondLastBattleWinConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_682C6D45870F9FAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondLastBattleWinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondLastBattleWinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_METHOD_5_682C6D45870F9FAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_941165CC9B2CB431(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondLastBattleWinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondLastBattleWinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_METHOD_5_941165CC9B2CB431_OFFSET))(a1, a2);
		}
	};
}
