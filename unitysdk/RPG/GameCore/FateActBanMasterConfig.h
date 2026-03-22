#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTBANMASTERCONFIG_METHOD_5_5CD7B8601300C7A8_OFFSET UNITYSDK_OFFSET(0x16A91980)
#define RPG_GAMECORE_FATEACTBANMASTERCONFIG_METHOD_5_7E888F619DAD44BA_OFFSET UNITYSDK_OFFSET(0x16A91AB0)
#define RPG_GAMECORE_FATEACTBANMASTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A91A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActBanMasterConfig_TypeDefinitionIndex = 17263;

	class FateActBanMasterConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTBANMASTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_5CD7B8601300C7A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActBanMasterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActBanMasterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTBANMASTERCONFIG_METHOD_5_5CD7B8601300C7A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7E888F619DAD44BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActBanMasterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActBanMasterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTBANMASTERCONFIG_METHOD_5_7E888F619DAD44BA_OFFSET))(a1, a2);
		}
	};
}
