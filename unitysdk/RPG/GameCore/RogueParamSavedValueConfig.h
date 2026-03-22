#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_METHOD_5_2D24191A1F39B9CF_OFFSET UNITYSDK_OFFSET(0x16EB58F0)
#define RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_METHOD_5_89768478230E7FCC_OFFSET UNITYSDK_OFFSET(0x16EB5A60)
#define RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB59C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamSavedValueConfig_TypeDefinitionIndex = 17687;

	class RogueParamSavedValueConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_2D24191A1F39B9CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_METHOD_5_2D24191A1F39B9CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_89768478230E7FCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_METHOD_5_89768478230E7FCC_OFFSET))(a1, a2);
		}
	};
}
