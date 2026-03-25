#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_191C2F1F7FBAA480_OFFSET UNITYSDK_OFFSET(0x17040390)
#define RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_D960F9EAA73AF27E_OFFSET UNITYSDK_OFFSET(0x170402C0)
#define RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17040340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCurrentSkillAllowMultiTarget_TypeDefinitionIndex = 21736;

	class ByIsCurrentSkillAllowMultiTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean AccessClientActiveSkill; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D960F9EAA73AF27E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_D960F9EAA73AF27E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_191C2F1F7FBAA480(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLALLOWMULTITARGET_METHOD_4_191C2F1F7FBAA480_OFFSET))(a1, a2);
		}
	};
}
