#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG_METHOD_5_57227E0F68EA0AA5_OFFSET UNITYSDK_OFFSET(0x16EB40F0)
#define RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG_METHOD_5_F6EF098D27EC1036_OFFSET UNITYSDK_OFFSET(0x16EB4260)
#define RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB41C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueCoinCountConfig_TypeDefinitionIndex = 17683;

	class RogueParamRogueCoinCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_57227E0F68EA0AA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueCoinCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueCoinCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG_METHOD_5_57227E0F68EA0AA5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F6EF098D27EC1036(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueCoinCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueCoinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUECOINCOUNTCONFIG_METHOD_5_F6EF098D27EC1036_OFFSET))(a1, a2);
		}
	};
}
