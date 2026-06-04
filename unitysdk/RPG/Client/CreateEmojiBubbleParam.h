#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EmojiIconInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_CREATEEMOJIICONINFOS_OFFSET UNITYSDK_OFFSET(0x15F2BDB0)
#define RPG_CLIENT_CREATEEMOJIBUBBLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2BDA0)

namespace RPG::Client
{
	inline static constexpr unsigned int CreateEmojiBubbleParam_TypeDefinitionIndex = 58892;

	class CreateEmojiBubbleParam : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::EmojiIconInfo*>* EmojiIconInfos; // 0x10
		::System::String* BubbleBGPath; // 0x18
		::RPG::GameCore::GameEntity* Entity; // 0x20
		::System::Single Duration; // 0x28
		::System::UInt32 PositionIndex; // 0x2C
		::System::Boolean IsVertical; // 0x30
		::System::Boolean UseDummyPosition; // 0x31
		::System::Boolean IsFromOnlineChat; // 0x32
		::System::Single BubbleRoll; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::RPG::GameCore::EmojiIconInfo*>* CreateEmojiIconInfos(::Il2CppArray<::System::String*>* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::EmojiIconInfo*>*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CREATEEMOJIBUBBLEPARAM_CREATEEMOJIICONINFOS_OFFSET))(a1);
		}
	};
}
