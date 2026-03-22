#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_4_1C86A401158DAE82_OFFSET UNITYSDK_OFFSET(0x16C54730)
#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_4_329DF65E4DB8C357_OFFSET UNITYSDK_OFFSET(0x16C5B360)
#define RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C546E0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetEmojiReplyPatternAction_TypeDefinitionIndex = 22176;

	class SetEmojiReplyPatternAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* EmojiList; // 0x10
		::System::Single DelayTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_329DF65E4DB8C357(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_4_329DF65E4DB8C357_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1C86A401158DAE82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETEMOJIREPLYPATTERNACTION_METHOD_4_1C86A401158DAE82_OFFSET))(a1, a2);
		}
	};
}
