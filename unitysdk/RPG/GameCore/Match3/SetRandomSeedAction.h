#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_4_2A1B5955E56E93B8_OFFSET UNITYSDK_OFFSET(0x16C549A0)
#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_4_953EF38F42F7EB72_OFFSET UNITYSDK_OFFSET(0x16C5B3F0)
#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C54950)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetRandomSeedAction_TypeDefinitionIndex = 22173;

	class SetRandomSeedAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 RandomSeed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_953EF38F42F7EB72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetRandomSeedAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetRandomSeedAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_4_953EF38F42F7EB72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2A1B5955E56E93B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetRandomSeedAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetRandomSeedAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_METHOD_4_2A1B5955E56E93B8_OFFSET))(a1, a2);
		}
	};
}
