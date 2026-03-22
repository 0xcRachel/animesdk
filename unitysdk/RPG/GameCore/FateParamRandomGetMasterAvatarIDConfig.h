#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_METHOD_5_D88E3B3C49377A19_OFFSET UNITYSDK_OFFSET(0x16A9B290)
#define RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_METHOD_5_FE72F59F9E3B2912_OFFSET UNITYSDK_OFFSET(0x16A9B120)
#define RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9B1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamRandomGetMasterAvatarIDConfig_TypeDefinitionIndex = 14985;

	class FateParamRandomGetMasterAvatarIDConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FE72F59F9E3B2912(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_METHOD_5_FE72F59F9E3B2912_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D88E3B3C49377A19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_METHOD_5_D88E3B3C49377A19_OFFSET))(a1, a2);
		}
	};
}
