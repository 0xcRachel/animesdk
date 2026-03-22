#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG_METHOD_5_269D7B9BF029EAB4_OFFSET UNITYSDK_OFFSET(0x16DFC2C0)
#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG_METHOD_5_710E6F298E8940D0_OFFSET UNITYSDK_OFFSET(0x16DFC100)
#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFC200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRandomCountRogueBuffConfig_TypeDefinitionIndex = 17540;

	class RogueActGetRandomCountRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_710E6F298E8940D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRandomCountRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRandomCountRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG_METHOD_5_710E6F298E8940D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_269D7B9BF029EAB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRandomCountRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRandomCountRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG_METHOD_5_269D7B9BF029EAB4_OFFSET))(a1, a2);
		}
	};
}
