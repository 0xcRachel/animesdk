#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_METHOD_4_1050FEFC405EF1DA_OFFSET UNITYSDK_OFFSET(0x16D68150)
#define RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_METHOD_4_A17CCE7673B09A21_OFFSET UNITYSDK_OFFSET(0x16D66B70)
#define RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D66AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerCondInRogueSubModeConfig_TypeDefinitionIndex = 17515;

	class PlayerCondInRogueSubModeConfig : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1050FEFC405EF1DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondInRogueSubModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondInRogueSubModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_METHOD_4_1050FEFC405EF1DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A17CCE7673B09A21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondInRogueSubModeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondInRogueSubModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_METHOD_4_A17CCE7673B09A21_OFFSET))(a1, a2);
		}
	};
}
