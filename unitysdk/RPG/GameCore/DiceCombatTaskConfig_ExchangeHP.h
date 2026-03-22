#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP_METHOD_3_004E2B6C4EB528D3_OFFSET UNITYSDK_OFFSET(0x16A429A0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP_METHOD_3_8EF3E7C129FEAE32_OFFSET UNITYSDK_OFFSET(0x16A3FAA0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3FA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ExchangeHP_TypeDefinitionIndex = 14525;

	class DiceCombatTaskConfig_ExchangeHP : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_004E2B6C4EB528D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP_METHOD_3_004E2B6C4EB528D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8EF3E7C129FEAE32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP_METHOD_3_8EF3E7C129FEAE32_OFFSET))(a1, a2);
		}
	};
}
