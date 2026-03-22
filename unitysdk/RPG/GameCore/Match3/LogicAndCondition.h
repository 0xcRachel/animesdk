#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_LOGICANDCONDITION_METHOD_4_6959CFA94D0F58BE_OFFSET UNITYSDK_OFFSET(0x16C515C0)
#define RPG_GAMECORE_MATCH3_LOGICANDCONDITION_METHOD_4_C45401094AA9118C_OFFSET UNITYSDK_OFFSET(0x16C514E0)
#define RPG_GAMECORE_MATCH3_LOGICANDCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C51570)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int LogicAndCondition_TypeDefinitionIndex = 22159;

	class LogicAndCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::Match3ConditionBase*>* Conditions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICANDCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C45401094AA9118C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::LogicAndCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::LogicAndCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICANDCONDITION_METHOD_4_C45401094AA9118C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6959CFA94D0F58BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::LogicAndCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::LogicAndCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICANDCONDITION_METHOD_4_6959CFA94D0F58BE_OFFSET))(a1, a2);
		}
	};
}
