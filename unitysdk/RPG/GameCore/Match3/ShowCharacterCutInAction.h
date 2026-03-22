#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/ActionRole.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_METHOD_4_12742FDF516921E6_OFFSET UNITYSDK_OFFSET(0x16C550A0)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_METHOD_4_B1257523B0AEEBF5_OFFSET UNITYSDK_OFFSET(0x16C5B770)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C55050)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowCharacterCutInAction_TypeDefinitionIndex = 22180;

	class ShowCharacterCutInAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 CutInID; // 0x10
		::RPG::GameCore::Match3::ActionRole Role; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B1257523B0AEEBF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowCharacterCutInAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowCharacterCutInAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_METHOD_4_B1257523B0AEEBF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_12742FDF516921E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowCharacterCutInAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowCharacterCutInAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINACTION_METHOD_4_12742FDF516921E6_OFFSET))(a1, a2);
		}
	};
}
