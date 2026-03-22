#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_08DF1EBCE784FFA9_OFFSET UNITYSDK_OFFSET(0x16A34CE0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_6FC854697C7AF8E2_OFFSET UNITYSDK_OFFSET(0x16A35900)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A34CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Filter_TypeDefinitionIndex = 14580;

	class DiceCombatDiceSelectorConfig_Filter : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatDiceSelectorConfig*>* selectorList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FC854697C7AF8E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_6FC854697C7AF8E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08DF1EBCE784FFA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_METHOD_3_08DF1EBCE784FFA9_OFFSET))(a1, a2);
		}
	};
}
