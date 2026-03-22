#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_LOGICORCONDITION_METHOD_4_573A87E51FBAF48A_OFFSET UNITYSDK_OFFSET(0x16C51810)
#define RPG_GAMECORE_MATCH3_LOGICORCONDITION_METHOD_4_AF51B73713854030_OFFSET UNITYSDK_OFFSET(0x16C51730)
#define RPG_GAMECORE_MATCH3_LOGICORCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C517C0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int LogicOrCondition_TypeDefinitionIndex = 22160;

	class LogicOrCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::Match3ConditionBase*>* Conditions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICORCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AF51B73713854030(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::LogicOrCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::LogicOrCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICORCONDITION_METHOD_4_AF51B73713854030_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_573A87E51FBAF48A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::LogicOrCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::LogicOrCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICORCONDITION_METHOD_4_573A87E51FBAF48A_OFFSET))(a1, a2);
		}
	};
}
