#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_METHOD_5_337E6FD600007ECB_OFFSET UNITYSDK_OFFSET(0x16B37930)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_METHOD_5_992BF0BDCCF7B78E_OFFSET UNITYSDK_OFFSET(0x16B37B60)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B37A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetHistoryAllCoinInterestConfig_TypeDefinitionIndex = 17504;

	class GridFightParamGetHistoryAllCoinInterestConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_337E6FD600007ECB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_METHOD_5_337E6FD600007ECB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_992BF0BDCCF7B78E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_METHOD_5_992BF0BDCCF7B78E_OFFSET))(a1, a2);
		}
	};
}
