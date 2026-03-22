#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_METHOD_5_5B47EB22462AE753_OFFSET UNITYSDK_OFFSET(0x16DFF3C0)
#define RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_METHOD_5_9F9E9C7B4C54F9AF_OFFSET UNITYSDK_OFFSET(0x16DFF580)
#define RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFF4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveMazeBuffConfig_TypeDefinitionIndex = 17577;

	class RogueActRemoveMazeBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_5B47EB22462AE753(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveMazeBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveMazeBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_METHOD_5_5B47EB22462AE753_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9F9E9C7B4C54F9AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_METHOD_5_9F9E9C7B4C54F9AF_OFFSET))(a1, a2);
		}
	};
}
