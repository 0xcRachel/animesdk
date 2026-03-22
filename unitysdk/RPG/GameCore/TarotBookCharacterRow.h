#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FF3CB0)
#define RPG_GAMECORE_TAROTBOOKCHARACTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF41F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookCharacterRow_TypeDefinitionIndex = 13842;

	class TarotBookCharacterRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* RectIconPath; // 0x18
		::System::String* TabIconPath; // 0x20
		::System::String* RoundIconPath; // 0x28
		::Il2CppArray<::System::UInt32>* StoryList; // 0x30
		::RPG::Client::TextID SubCatalogTitle; // 0x38
		::RPG::Client::TextID StarUnlockToast; // 0x48
		::System::UInt32 MaxLevel; // 0x58
		::System::UInt32 ID; // 0x5C
		::RPG::Client::TextID Name; // 0x60
		::System::UInt32 Tag; // 0x70
		::System::UInt32 Position; // 0x74
		::RPG::Client::TextID MainCatalogTitle; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookCharacterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookCharacterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
