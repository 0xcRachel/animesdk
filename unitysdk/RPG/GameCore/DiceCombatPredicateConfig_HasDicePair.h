#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_33EEE4D03551D75F_OFFSET UNITYSDK_OFFSET(0x16A399E0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_5860FB85F01446C3_OFFSET UNITYSDK_OFFSET(0x16A3B300)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x16A39960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasDicePair_TypeDefinitionIndex = 14528;

	class DiceCombatPredicateConfig_HasDicePair : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DynamicFloat* PairCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5860FB85F01446C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_5860FB85F01446C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33EEE4D03551D75F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_METHOD_4_33EEE4D03551D75F_OFFSET))(a1, a2);
		}
	};
}
