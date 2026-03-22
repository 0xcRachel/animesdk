#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG_METHOD_5_45FC1B12A5E4F994_OFFSET UNITYSDK_OFFSET(0x16DF9CC0)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG_METHOD_5_5448AB7E4A2D9910_OFFSET UNITYSDK_OFFSET(0x16DF9E80)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF9DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueMiracleToMagicUnitConfig_TypeDefinitionIndex = 17643;

	class RogueActChangeRogueMiracleToMagicUnitConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_45FC1B12A5E4F994(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG_METHOD_5_45FC1B12A5E4F994_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5448AB7E4A2D9910(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG_METHOD_5_5448AB7E4A2D9910_OFFSET))(a1, a2);
		}
	};
}
