#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_METHOD_4_57FC3746DEAC8FBE_OFFSET UNITYSDK_OFFSET(0x16C5B1F0)
#define RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_METHOD_4_99156B99E676FEB0_OFFSET UNITYSDK_OFFSET(0x16C54590)
#define RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C54540)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetBirdSkillDisableAction_TypeDefinitionIndex = 22175;

	class SetBirdSkillDisableAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Boolean Disable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_57FC3746DEAC8FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetBirdSkillDisableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetBirdSkillDisableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_METHOD_4_57FC3746DEAC8FBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_99156B99E676FEB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetBirdSkillDisableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetBirdSkillDisableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_METHOD_4_99156B99E676FEB0_OFFSET))(a1, a2);
		}
	};
}
