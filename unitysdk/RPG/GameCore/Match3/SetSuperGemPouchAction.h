#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_METHOD_4_877DE7C75416BE37_OFFSET UNITYSDK_OFFSET(0x16C54F30)
#define RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_METHOD_4_94E4CADA504B11CD_OFFSET UNITYSDK_OFFSET(0x16C5B640)
#define RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C54EE0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetSuperGemPouchAction_TypeDefinitionIndex = 22187;

	class SetSuperGemPouchAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 Count; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_94E4CADA504B11CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetSuperGemPouchAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetSuperGemPouchAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_METHOD_4_94E4CADA504B11CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_877DE7C75416BE37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetSuperGemPouchAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetSuperGemPouchAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_METHOD_4_877DE7C75416BE37_OFFSET))(a1, a2);
		}
	};
}
