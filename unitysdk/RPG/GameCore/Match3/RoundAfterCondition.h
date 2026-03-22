#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_METHOD_4_20BB3C9773FA1E9A_OFFSET UNITYSDK_OFFSET(0x16C57CE0)
#define RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_METHOD_4_80ECC7D3A2B12EDC_OFFSET UNITYSDK_OFFSET(0x16C5AE40)
#define RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C57C90)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RoundAfterCondition_TypeDefinitionIndex = 22152;

	class RoundAfterCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetRound; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_80ECC7D3A2B12EDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RoundAfterCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RoundAfterCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_METHOD_4_80ECC7D3A2B12EDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_20BB3C9773FA1E9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RoundAfterCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RoundAfterCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_METHOD_4_20BB3C9773FA1E9A_OFFSET))(a1, a2);
		}
	};
}
