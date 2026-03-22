#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_5_80A4F330FF353E85_OFFSET UNITYSDK_OFFSET(0x16DFD320)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_5_9F5064535FE0D1F1_OFFSET UNITYSDK_OFFSET(0x16DFD4E0)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFD420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueFormulaRequiredRogueBuffConfig_TypeDefinitionIndex = 17615;

	class RogueActGetRogueFormulaRequiredRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_80A4F330FF353E85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_5_80A4F330FF353E85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9F5064535FE0D1F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_5_9F5064535FE0D1F1_OFFSET))(a1, a2);
		}
	};
}
