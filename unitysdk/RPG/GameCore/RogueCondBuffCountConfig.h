#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_METHOD_5_BB1F7BC4B1E88CBE_OFFSET UNITYSDK_OFFSET(0x16E613E0)
#define RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_METHOD_5_F141285914BB28DD_OFFSET UNITYSDK_OFFSET(0x16E61550)
#define RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E614B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondBuffCountConfig_TypeDefinitionIndex = 17659;

	class RogueCondBuffCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BB1F7BC4B1E88CBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondBuffCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondBuffCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_METHOD_5_BB1F7BC4B1E88CBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F141285914BB28DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_METHOD_5_F141285914BB28DD_OFFSET))(a1, a2);
		}
	};
}
