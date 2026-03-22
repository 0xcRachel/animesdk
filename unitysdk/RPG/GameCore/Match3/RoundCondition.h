#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ROUNDCONDITION_METHOD_4_3545D29271F52886_OFFSET UNITYSDK_OFFSET(0x16C5AF60)
#define RPG_GAMECORE_MATCH3_ROUNDCONDITION_METHOD_4_B3DDB3CD8A0F98C8_OFFSET UNITYSDK_OFFSET(0x16C57FC0)
#define RPG_GAMECORE_MATCH3_ROUNDCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C57F70)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RoundCondition_TypeDefinitionIndex = 22149;

	class RoundCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetRound; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3545D29271F52886(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RoundCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RoundCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDCONDITION_METHOD_4_3545D29271F52886_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3DDB3CD8A0F98C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RoundCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RoundCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDCONDITION_METHOD_4_B3DDB3CD8A0F98C8_OFFSET))(a1, a2);
		}
	};
}
