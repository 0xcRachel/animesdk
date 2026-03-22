#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_METHOD_4_13394D45D3C9EF6D_OFFSET UNITYSDK_OFFSET(0x16C5AD60)
#define RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_METHOD_4_DDB67D4C9B36AA3B_OFFSET UNITYSDK_OFFSET(0x16C54110)
#define RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C540C0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ResetPropUseCountAction_TypeDefinitionIndex = 22179;

	class ResetPropUseCountAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_13394D45D3C9EF6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ResetPropUseCountAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ResetPropUseCountAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_METHOD_4_13394D45D3C9EF6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DDB67D4C9B36AA3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ResetPropUseCountAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ResetPropUseCountAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_METHOD_4_DDB67D4C9B36AA3B_OFFSET))(a1, a2);
		}
	};
}
