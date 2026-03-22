#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_METHOD_4_5D724A7C80CB9738_OFFSET UNITYSDK_OFFSET(0x16A3AF90)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_METHOD_4_C68B35C7C898372B_OFFSET UNITYSDK_OFFSET(0x16A38420)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A38400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_CurrentTurnCompare_TypeDefinitionIndex = 14542;

	class DiceCombatPredicateConfig_CurrentTurnCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x20
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5D724A7C80CB9738(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_METHOD_4_5D724A7C80CB9738_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C68B35C7C898372B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_METHOD_4_C68B35C7C898372B_OFFSET))(a1, a2);
		}
	};
}
