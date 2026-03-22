#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_METHOD_4_A1FDA8587E2886C9_OFFSET UNITYSDK_OFFSET(0x16D6B840)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_METHOD_4_B15998C4D7C4FF82_OFFSET UNITYSDK_OFFSET(0x16D6B6D0)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D6B7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParamLineupAvatarConsumeHpCountConfig_TypeDefinitionIndex = 17522;

	class PlayerParamLineupAvatarConsumeHpCountConfig : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B15998C4D7C4FF82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_METHOD_4_B15998C4D7C4FF82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A1FDA8587E2886C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_METHOD_4_A1FDA8587E2886C9_OFFSET))(a1, a2);
		}
	};
}
