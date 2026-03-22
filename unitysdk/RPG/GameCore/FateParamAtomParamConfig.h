#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_METHOD_5_E35A108CADE4D7B8_OFFSET UNITYSDK_OFFSET(0x16A993F0)
#define RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_METHOD_5_F45766A6145779D3_OFFSET UNITYSDK_OFFSET(0x16A99280)
#define RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A99350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamAtomParamConfig_TypeDefinitionIndex = 14977;

	class FateParamAtomParamConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F45766A6145779D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamAtomParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamAtomParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_METHOD_5_F45766A6145779D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E35A108CADE4D7B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamAtomParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamAtomParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_METHOD_5_E35A108CADE4D7B8_OFFSET))(a1, a2);
		}
	};
}
