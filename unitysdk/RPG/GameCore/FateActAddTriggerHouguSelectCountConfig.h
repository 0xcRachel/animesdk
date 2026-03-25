#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_6_E43C7A1A3395BF41_OFFSET UNITYSDK_OFFSET(0x171D56D0)
#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_6_F472730998E9796A_OFFSET UNITYSDK_OFFSET(0x171D5840)
#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171D57A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddTriggerHouguSelectCountConfig_TypeDefinitionIndex = 17670;

	class FateActAddTriggerHouguSelectCountConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E43C7A1A3395BF41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_6_E43C7A1A3395BF41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F472730998E9796A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_6_F472730998E9796A_OFFSET))(a1, a2);
		}
	};
}
