#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG_METHOD_5_4A231FAA55243DA6_OFFSET UNITYSDK_OFFSET(0x16DFC2D0)
#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG_METHOD_5_7F257E408E74FAFA_OFFSET UNITYSDK_OFFSET(0x16DFC490)
#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFC3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRandomCountRogueMiracleConfig_TypeDefinitionIndex = 17556;

	class RogueActGetRandomCountRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_4A231FAA55243DA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRandomCountRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRandomCountRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG_METHOD_5_4A231FAA55243DA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7F257E408E74FAFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRandomCountRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRandomCountRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG_METHOD_5_7F257E408E74FAFA_OFFSET))(a1, a2);
		}
	};
}
