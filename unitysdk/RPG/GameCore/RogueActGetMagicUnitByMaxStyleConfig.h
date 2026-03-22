#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_5_B9E843E9273F5326_OFFSET UNITYSDK_OFFSET(0x16DFBB90)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_5_EEEAA27F6090107A_OFFSET UNITYSDK_OFFSET(0x16DFBD50)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFBC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetMagicUnitByMaxStyleConfig_TypeDefinitionIndex = 17641;

	class RogueActGetMagicUnitByMaxStyleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B9E843E9273F5326(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_5_B9E843E9273F5326_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_EEEAA27F6090107A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_5_EEEAA27F6090107A_OFFSET))(a1, a2);
		}
	};
}
