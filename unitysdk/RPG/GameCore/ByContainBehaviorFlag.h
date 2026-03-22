#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_63D80D32ED138013_OFFSET UNITYSDK_OFFSET(0x16920190)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_AD83312E2915EB81_OFFSET UNITYSDK_OFFSET(0x16920260)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x16920210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainBehaviorFlag_TypeDefinitionIndex = 20668;

	class ByContainBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ModifierBehaviorFlag Flag; // 0x28
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x30
		::System::Boolean AddedOrAlive; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_63D80D32ED138013(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_63D80D32ED138013_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AD83312E2915EB81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_AD83312E2915EB81_OFFSET))(a1, a2);
		}
	};
}
