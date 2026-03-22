#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_METHOD_5_5E75DE8D9823906A_OFFSET UNITYSDK_OFFSET(0x16A92380)
#define RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_METHOD_5_FAD7A3ED106468D8_OFFSET UNITYSDK_OFFSET(0x16A924B0)
#define RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A92430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActRemoveOwnerMasterAffixConfig_TypeDefinitionIndex = 17255;

	class FateActRemoveOwnerMasterAffixConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_5E75DE8D9823906A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_METHOD_5_5E75DE8D9823906A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_FAD7A3ED106468D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_METHOD_5_FAD7A3ED106468D8_OFFSET))(a1, a2);
		}
	};
}
