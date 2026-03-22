#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/ActionRole.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_METHOD_4_378E19812371052A_OFFSET UNITYSDK_OFFSET(0x16C5B800)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_METHOD_4_B1603179807763EC_OFFSET UNITYSDK_OFFSET(0x16C552B0)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C55260)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowCharacterCutInGroupAction_TypeDefinitionIndex = 22181;

	class ShowCharacterCutInGroupAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* CutInIDList; // 0x10
		::System::UInt32 CountLimit; // 0x18
		::RPG::GameCore::Match3::ActionRole Role; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_378E19812371052A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_METHOD_4_378E19812371052A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B1603179807763EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_METHOD_4_B1603179807763EC_OFFSET))(a1, a2);
		}
	};
}
