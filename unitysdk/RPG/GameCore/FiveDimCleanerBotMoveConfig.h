#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_12B1D822B1A46381_OFFSET UNITYSDK_OFFSET(0x16AB6A30)
#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_B748B2E37617DB4C_OFFSET UNITYSDK_OFFSET(0x16AB6A80)
#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB6A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCleanerBotMoveConfig_TypeDefinitionIndex = 15041;

	class FiveDimCleanerBotMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::Single FallGravity; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_12B1D822B1A46381(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_12B1D822B1A46381_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B748B2E37617DB4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCleanerBotMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_METHOD_3_B748B2E37617DB4C_OFFSET))(a1, a2);
		}
	};
}
