#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_5_63489A2D2B9FFDAD_OFFSET UNITYSDK_OFFSET(0x16A92870)
#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_5_C236150F94A9F9D7_OFFSET UNITYSDK_OFFSET(0x16A92740)
#define RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A927F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActUpgradeHouguConfig_TypeDefinitionIndex = 17249;

	class FateActUpgradeHouguConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C236150F94A9F9D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActUpgradeHouguConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActUpgradeHouguConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_5_C236150F94A9F9D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_63489A2D2B9FFDAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActUpgradeHouguConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActUpgradeHouguConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTUPGRADEHOUGUCONFIG_METHOD_5_63489A2D2B9FFDAD_OFFSET))(a1, a2);
		}
	};
}
