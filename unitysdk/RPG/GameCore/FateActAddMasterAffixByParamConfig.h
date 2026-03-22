#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_METHOD_5_45EFCC61C2D61BBC_OFFSET UNITYSDK_OFFSET(0x16A90F70)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_METHOD_5_9AC468B547B25556_OFFSET UNITYSDK_OFFSET(0x16A90E40)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A90EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByParamConfig_TypeDefinitionIndex = 17258;

	class FateActAddMasterAffixByParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_9AC468B547B25556(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_METHOD_5_9AC468B547B25556_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_45EFCC61C2D61BBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_METHOD_5_45EFCC61C2D61BBC_OFFSET))(a1, a2);
		}
	};
}
