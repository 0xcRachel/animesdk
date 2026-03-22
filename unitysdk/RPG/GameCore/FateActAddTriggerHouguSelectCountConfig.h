#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_5_072C774FAF98E1A9_OFFSET UNITYSDK_OFFSET(0x16A91840)
#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_5_7F497BBC751FD90B_OFFSET UNITYSDK_OFFSET(0x16A91970)
#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A918F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddTriggerHouguSelectCountConfig_TypeDefinitionIndex = 17265;

	class FateActAddTriggerHouguSelectCountConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_072C774FAF98E1A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_5_072C774FAF98E1A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7F497BBC751FD90B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_5_7F497BBC751FD90B_OFFSET))(a1, a2);
		}
	};
}
