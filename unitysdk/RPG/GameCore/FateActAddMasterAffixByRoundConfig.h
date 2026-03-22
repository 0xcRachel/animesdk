#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_METHOD_5_0FE7884E5CCE0AC7_OFFSET UNITYSDK_OFFSET(0x16A910C0)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_METHOD_5_1BB7A8938174DB5D_OFFSET UNITYSDK_OFFSET(0x16A911F0)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A91170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByRoundConfig_TypeDefinitionIndex = 17259;

	class FateActAddMasterAffixByRoundConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0FE7884E5CCE0AC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_METHOD_5_0FE7884E5CCE0AC7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1BB7A8938174DB5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYROUNDCONFIG_METHOD_5_1BB7A8938174DB5D_OFFSET))(a1, a2);
		}
	};
}
