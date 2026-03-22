#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_METHOD_4_39DD0CD1420F559B_OFFSET UNITYSDK_OFFSET(0x16D6B9C0)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_METHOD_4_A0963B8063B39670_OFFSET UNITYSDK_OFFSET(0x16D6B850)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D6B920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParamLineupAvatarCountConfig_TypeDefinitionIndex = 17521;

	class PlayerParamLineupAvatarCountConfig : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A0963B8063B39670(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_METHOD_4_A0963B8063B39670_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_39DD0CD1420F559B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_METHOD_4_39DD0CD1420F559B_OFFSET))(a1, a2);
		}
	};
}
