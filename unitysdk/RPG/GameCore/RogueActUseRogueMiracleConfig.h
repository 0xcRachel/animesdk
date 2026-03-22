#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_METHOD_5_09A895E31500F393_OFFSET UNITYSDK_OFFSET(0x16E05760)
#define RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_METHOD_5_62EFD42E35D683EF_OFFSET UNITYSDK_OFFSET(0x16E055A0)
#define RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E056A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActUseRogueMiracleConfig_TypeDefinitionIndex = 17593;

	class RogueActUseRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_62EFD42E35D683EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActUseRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActUseRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_METHOD_5_62EFD42E35D683EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_09A895E31500F393(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActUseRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActUseRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_METHOD_5_09A895E31500F393_OFFSET))(a1, a2);
		}
	};
}
