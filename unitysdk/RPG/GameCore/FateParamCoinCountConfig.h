#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_METHOD_5_015D67B967DB6439_OFFSET UNITYSDK_OFFSET(0x16A99760)
#define RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_METHOD_5_82549BFFBABA5A8E_OFFSET UNITYSDK_OFFSET(0x16A99580)
#define RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A996C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamCoinCountConfig_TypeDefinitionIndex = 14994;

	class FateParamCoinCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_82549BFFBABA5A8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamCoinCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamCoinCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_METHOD_5_82549BFFBABA5A8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_015D67B967DB6439(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamCoinCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamCoinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_METHOD_5_015D67B967DB6439_OFFSET))(a1, a2);
		}
	};
}
