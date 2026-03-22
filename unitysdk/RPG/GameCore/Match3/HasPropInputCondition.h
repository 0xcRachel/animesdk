#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_METHOD_4_07258433EE6EE12E_OFFSET UNITYSDK_OFFSET(0x16C51420)
#define RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_METHOD_4_C835A5056D9052D0_OFFSET UNITYSDK_OFFSET(0x16C51260)
#define RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C513D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int HasPropInputCondition_TypeDefinitionIndex = 22158;

	class HasPropInputCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C835A5056D9052D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::HasPropInputCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::HasPropInputCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_METHOD_4_C835A5056D9052D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_07258433EE6EE12E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::HasPropInputCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::HasPropInputCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_METHOD_4_07258433EE6EE12E_OFFSET))(a1, a2);
		}
	};
}
