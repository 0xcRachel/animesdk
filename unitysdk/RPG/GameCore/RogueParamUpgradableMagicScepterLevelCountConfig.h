#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_METHOD_5_0F3317A0F8CF68B3_OFFSET UNITYSDK_OFFSET(0x16EB5BE0)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_METHOD_5_F21B0367B799BD68_OFFSET UNITYSDK_OFFSET(0x16EB5A70)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB5B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamUpgradableMagicScepterLevelCountConfig_TypeDefinitionIndex = 17685;

	class RogueParamUpgradableMagicScepterLevelCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F21B0367B799BD68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_METHOD_5_F21B0367B799BD68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0F3317A0F8CF68B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_METHOD_5_0F3317A0F8CF68B3_OFFSET))(a1, a2);
		}
	};
}
