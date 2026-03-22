#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_METHOD_6_13A778670A33025D_OFFSET UNITYSDK_OFFSET(0x16EC6740)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_METHOD_6_DD85CBD2A760663E_OFFSET UNITYSDK_OFFSET(0x16EC65D0)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC66A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaCondFilterTopKBuffTypeConfig_TypeDefinitionIndex = 17524;

	class RogueTournFormulaCondFilterTopKBuffTypeConfig : public ::RPG::GameCore::RogueFormulaConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DD85CBD2A760663E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_METHOD_6_DD85CBD2A760663E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_13A778670A33025D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_METHOD_6_13A778670A33025D_OFFSET))(a1, a2);
		}
	};
}
