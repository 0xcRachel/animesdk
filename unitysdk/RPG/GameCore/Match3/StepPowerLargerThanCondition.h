#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_METHOD_4_DF5B8DB4DD01D3F1_OFFSET UNITYSDK_OFFSET(0x16C5C000)
#define RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_METHOD_4_FA16D8277CB7A561_OFFSET UNITYSDK_OFFSET(0x16C583B0)
#define RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C58360)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StepPowerLargerThanCondition_TypeDefinitionIndex = 22157;

	class StepPowerLargerThanCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 Power; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DF5B8DB4DD01D3F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StepPowerLargerThanCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StepPowerLargerThanCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_METHOD_4_DF5B8DB4DD01D3F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA16D8277CB7A561(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StepPowerLargerThanCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StepPowerLargerThanCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_METHOD_4_FA16D8277CB7A561_OFFSET))(a1, a2);
		}
	};
}
