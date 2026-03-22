#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_5_E5057A3C049ED618_OFFSET UNITYSDK_OFFSET(0x16E61CE0)
#define RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_5_EEE7861765692C63_OFFSET UNITYSDK_OFFSET(0x16E61E50)
#define RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E61DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondMiracleCountConfig_TypeDefinitionIndex = 17660;

	class RogueCondMiracleCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_E5057A3C049ED618(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondMiracleCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondMiracleCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_5_E5057A3C049ED618_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_EEE7861765692C63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondMiracleCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondMiracleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_5_EEE7861765692C63_OFFSET))(a1, a2);
		}
	};
}
