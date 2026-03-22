#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_4_27180F2697DC5A6E_OFFSET UNITYSDK_OFFSET(0x16D6B500)
#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_4_D5AF3517EF950E4D_OFFSET UNITYSDK_OFFSET(0x16D6B670)
#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D6B5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParamFullHpAvatarCountConfig_TypeDefinitionIndex = 17520;

	class PlayerParamFullHpAvatarCountConfig : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_27180F2697DC5A6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_4_27180F2697DC5A6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5AF3517EF950E4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_4_D5AF3517EF950E4D_OFFSET))(a1, a2);
		}
	};
}
