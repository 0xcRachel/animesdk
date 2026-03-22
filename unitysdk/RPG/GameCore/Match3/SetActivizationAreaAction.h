#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_METHOD_4_2607D8FA71CD4E02_OFFSET UNITYSDK_OFFSET(0x16C5B080)
#define RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_METHOD_4_602F8185D8A9EE3C_OFFSET UNITYSDK_OFFSET(0x16C54320)
#define RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C542D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetActivizationAreaAction_TypeDefinitionIndex = 22178;

	class SetActivizationAreaAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Boolean Enduring; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2607D8FA71CD4E02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetActivizationAreaAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetActivizationAreaAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_METHOD_4_2607D8FA71CD4E02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_602F8185D8A9EE3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetActivizationAreaAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetActivizationAreaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_METHOD_4_602F8185D8A9EE3C_OFFSET))(a1, a2);
		}
	};
}
