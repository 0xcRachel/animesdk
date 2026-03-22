#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_METHOD_5_22EFD11B51234E19_OFFSET UNITYSDK_OFFSET(0x16A9B420)
#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_METHOD_5_9B1D498DF6D332A2_OFFSET UNITYSDK_OFFSET(0x16A9B590)
#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9B4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamShopRefreshCountConfig_TypeDefinitionIndex = 14978;

	class FateParamShopRefreshCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_22EFD11B51234E19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamShopRefreshCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamShopRefreshCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_METHOD_5_22EFD11B51234E19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9B1D498DF6D332A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamShopRefreshCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamShopRefreshCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_METHOD_5_9B1D498DF6D332A2_OFFSET))(a1, a2);
		}
	};
}
