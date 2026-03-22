#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_METHOD_5_1D93B6694562C0DD_OFFSET UNITYSDK_OFFSET(0x16A91200)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_METHOD_5_A86C1B0AFD8E72E7_OFFSET UNITYSDK_OFFSET(0x16A91330)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A912B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByWeightMapConfig_TypeDefinitionIndex = 17252;

	class FateActAddMasterAffixByWeightMapConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1D93B6694562C0DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_METHOD_5_1D93B6694562C0DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A86C1B0AFD8E72E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_METHOD_5_A86C1B0AFD8E72E7_OFFSET))(a1, a2);
		}
	};
}
