#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_STEPCONDITION_METHOD_4_1E906A73990428DA_OFFSET UNITYSDK_OFFSET(0x16C58260)
#define RPG_GAMECORE_MATCH3_STEPCONDITION_METHOD_4_EFCA79FE6600EC9C_OFFSET UNITYSDK_OFFSET(0x16C5BF70)
#define RPG_GAMECORE_MATCH3_STEPCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C58210)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StepCondition_TypeDefinitionIndex = 22150;

	class StepCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetStep; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EFCA79FE6600EC9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StepCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StepCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPCONDITION_METHOD_4_EFCA79FE6600EC9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E906A73990428DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StepCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StepCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPCONDITION_METHOD_4_1E906A73990428DA_OFFSET))(a1, a2);
		}
	};
}
