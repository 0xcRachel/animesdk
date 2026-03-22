#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_METHOD_5_02C55D23622811F6_OFFSET UNITYSDK_OFFSET(0x16DFD890)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_METHOD_5_5636EF6605C6698A_OFFSET UNITYSDK_OFFSET(0x16DFDA50)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFD990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMagicUnitRandomCountConfig_TypeDefinitionIndex = 17625;

	class RogueActGetRogueMagicUnitRandomCountConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_02C55D23622811F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_METHOD_5_02C55D23622811F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5636EF6605C6698A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_METHOD_5_5636EF6605C6698A_OFFSET))(a1, a2);
		}
	};
}
