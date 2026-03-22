#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_METHOD_4_33B9CC1264F3474A_OFFSET UNITYSDK_OFFSET(0x16C5B520)
#define RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_METHOD_4_6AF23506474FE9B7_OFFSET UNITYSDK_OFFSET(0x16C54B10)
#define RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C54AC0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetScoreBonusAction_TypeDefinitionIndex = 22177;

	class SetScoreBonusAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x10
		::System::Boolean Enduring; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_33B9CC1264F3474A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetScoreBonusAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetScoreBonusAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_METHOD_4_33B9CC1264F3474A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6AF23506474FE9B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetScoreBonusAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetScoreBonusAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_METHOD_4_6AF23506474FE9B7_OFFSET))(a1, a2);
		}
	};
}
