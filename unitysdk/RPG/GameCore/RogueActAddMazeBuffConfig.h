#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_5_A27EC57E5F7BA388_OFFSET UNITYSDK_OFFSET(0x16DF8190)
#define RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_5_C93094BA0E8CCB2C_OFFSET UNITYSDK_OFFSET(0x16DF8350)
#define RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF8290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddMazeBuffConfig_TypeDefinitionIndex = 17576;

	class RogueActAddMazeBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A27EC57E5F7BA388(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMazeBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMazeBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_5_A27EC57E5F7BA388_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C93094BA0E8CCB2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_5_C93094BA0E8CCB2C_OFFSET))(a1, a2);
		}
	};
}
