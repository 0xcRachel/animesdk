#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_METHOD_5_204BDBCDEEBA56AD_OFFSET UNITYSDK_OFFSET(0x16A9ABE0)
#define RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_METHOD_5_F56039C14274279E_OFFSET UNITYSDK_OFFSET(0x16A9AD50)
#define RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9ACB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamOtherContentParamConfig_TypeDefinitionIndex = 14981;

	class FateParamOtherContentParamConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_204BDBCDEEBA56AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOtherContentParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOtherContentParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_METHOD_5_204BDBCDEEBA56AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F56039C14274279E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOtherContentParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOtherContentParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_METHOD_5_F56039C14274279E_OFFSET))(a1, a2);
		}
	};
}
