#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/ActionRole.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_METHOD_4_5144EFD8CB309AB5_OFFSET UNITYSDK_OFFSET(0x16C4EB60)
#define RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_METHOD_4_9E0A72F419C49509_OFFSET UNITYSDK_OFFSET(0x16C4EC40)
#define RPG_GAMECORE_MATCH3_ACTIONROLECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4EBF0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ActionRoleCondition_TypeDefinitionIndex = 22155;

	class ActionRoleCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::RPG::GameCore::Match3::ActionRole Role; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ACTIONROLECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5144EFD8CB309AB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ActionRoleCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ActionRoleCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_METHOD_4_5144EFD8CB309AB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9E0A72F419C49509(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ActionRoleCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ActionRoleCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_METHOD_4_9E0A72F419C49509_OFFSET))(a1, a2);
		}
	};
}
