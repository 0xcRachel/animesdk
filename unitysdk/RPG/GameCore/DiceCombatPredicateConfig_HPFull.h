#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_901385D4AF25D0AA_OFFSET UNITYSDK_OFFSET(0x16A3B260)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_FA6F8D7D915D7023_OFFSET UNITYSDK_OFFSET(0x16A39620)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL__CTOR_OFFSET UNITYSDK_OFFSET(0x16A39600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HPFull_TypeDefinitionIndex = 14537;

	class DiceCombatPredicateConfig_HPFull : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_901385D4AF25D0AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_901385D4AF25D0AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA6F8D7D915D7023(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_FA6F8D7D915D7023_OFFSET))(a1, a2);
		}
	};
}
