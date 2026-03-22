#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_4_3376982B0E15C9BE_OFFSET UNITYSDK_OFFSET(0x16C5B890)
#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_4_5637E11FDD0C718B_OFFSET UNITYSDK_OFFSET(0x16C55510)
#define RPG_GAMECORE_MATCH3_SHOWEMOJIACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C554C0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowEmojiAction_TypeDefinitionIndex = 22171;

	class ShowEmojiAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* EmojiList; // 0x10
		::System::Single DelayTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3376982B0E15C9BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowEmojiAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowEmojiAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_4_3376982B0E15C9BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5637E11FDD0C718B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowEmojiAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowEmojiAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWEMOJIACTION_METHOD_4_5637E11FDD0C718B_OFFSET))(a1, a2);
		}
	};
}
