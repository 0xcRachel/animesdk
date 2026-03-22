#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_4_5685800CBD519C97_OFFSET UNITYSDK_OFFSET(0x16D66CF0)
#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_4_D38156E9A6B68A44_OFFSET UNITYSDK_OFFSET(0x16D68220)
#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D66C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerCondInRogueTournModeConfig_TypeDefinitionIndex = 17517;

	class PlayerCondInRogueTournModeConfig : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D38156E9A6B68A44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondInRogueTournModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondInRogueTournModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_4_D38156E9A6B68A44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5685800CBD519C97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondInRogueTournModeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondInRogueTournModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_4_5685800CBD519C97_OFFSET))(a1, a2);
		}
	};
}
