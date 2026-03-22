#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_5_B28DC2C0569E3688_OFFSET UNITYSDK_OFFSET(0x16A9AD60)
#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_5_CDCE9879B0DAB8D3_OFFSET UNITYSDK_OFFSET(0x16A9AED0)
#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9AE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamOwnerMasterAvatarIDConfig_TypeDefinitionIndex = 14982;

	class FateParamOwnerMasterAvatarIDConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B28DC2C0569E3688(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_5_B28DC2C0569E3688_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_CDCE9879B0DAB8D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_5_CDCE9879B0DAB8D3_OFFSET))(a1, a2);
		}
	};
}
