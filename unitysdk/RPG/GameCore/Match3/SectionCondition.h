#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SECTIONCONDITION_METHOD_4_4410EA61A5643949_OFFSET UNITYSDK_OFFSET(0x16C5AFF0)
#define RPG_GAMECORE_MATCH3_SECTIONCONDITION_METHOD_4_656BE16BC2ACEE79_OFFSET UNITYSDK_OFFSET(0x16C58110)
#define RPG_GAMECORE_MATCH3_SECTIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C580C0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SectionCondition_TypeDefinitionIndex = 22151;

	class SectionCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetSection; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SECTIONCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4410EA61A5643949(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SectionCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SectionCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SECTIONCONDITION_METHOD_4_4410EA61A5643949_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_656BE16BC2ACEE79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SectionCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SectionCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SECTIONCONDITION_METHOD_4_656BE16BC2ACEE79_OFFSET))(a1, a2);
		}
	};
}
