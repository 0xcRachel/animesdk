#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTEMPTYCONFIG_METHOD_5_62B1BCB998B82930_OFFSET UNITYSDK_OFFSET(0x16DFB0A0)
#define RPG_GAMECORE_ROGUEACTEMPTYCONFIG_METHOD_5_D4D3CBE12C034CB4_OFFSET UNITYSDK_OFFSET(0x16DFAEE0)
#define RPG_GAMECORE_ROGUEACTEMPTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFAFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActEmptyConfig_TypeDefinitionIndex = 17650;

	class RogueActEmptyConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTEMPTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D4D3CBE12C034CB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActEmptyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActEmptyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTEMPTYCONFIG_METHOD_5_D4D3CBE12C034CB4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_62B1BCB998B82930(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActEmptyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActEmptyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTEMPTYCONFIG_METHOD_5_62B1BCB998B82930_OFFSET))(a1, a2);
		}
	};
}
