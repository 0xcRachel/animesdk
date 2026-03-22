#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_5_8AE1E0579F77C808_OFFSET UNITYSDK_OFFSET(0x16DFAD00)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_5_E468A991E537C8EC_OFFSET UNITYSDK_OFFSET(0x16DFAB40)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFAC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyRogueMiracleThenGetRogueMiracleConfig_TypeDefinitionIndex = 17566;

	class RogueActDestroyRogueMiracleThenGetRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_E468A991E537C8EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_5_E468A991E537C8EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_8AE1E0579F77C808(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_5_8AE1E0579F77C808_OFFSET))(a1, a2);
		}
	};
}
