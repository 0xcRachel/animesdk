#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE_METHOD_4_6D7CFE4B43FBB922_OFFSET UNITYSDK_OFFSET(0x16A3AFE0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE_METHOD_4_D491D4D4BF3D47D9_OFFSET UNITYSDK_OFFSET(0x16A38620)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A38600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_CustomValueCompare_TypeDefinitionIndex = 14515;

	class DiceCombatPredicateConfig_CustomValueCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Left; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Op; // 0x28
		::RPG::GameCore::DynamicFloat* Right; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6D7CFE4B43FBB922(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE_METHOD_4_6D7CFE4B43FBB922_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D491D4D4BF3D47D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE_METHOD_4_D491D4D4BF3D47D9_OFFSET))(a1, a2);
		}
	};
}
