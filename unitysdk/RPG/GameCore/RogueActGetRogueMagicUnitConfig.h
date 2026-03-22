#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_METHOD_5_9EBF27C43E4556D2_OFFSET UNITYSDK_OFFSET(0x16DFD880)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_METHOD_5_BAB006FD639110BE_OFFSET UNITYSDK_OFFSET(0x16DFD6C0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFD7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMagicUnitConfig_TypeDefinitionIndex = 17624;

	class RogueActGetRogueMagicUnitConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BAB006FD639110BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_METHOD_5_BAB006FD639110BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9EBF27C43E4556D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_METHOD_5_9EBF27C43E4556D2_OFFSET))(a1, a2);
		}
	};
}
