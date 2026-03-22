#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEHANDBOOKTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E81BD0)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E822D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandbookTypeRow_TypeDefinitionIndex = 13481;

	class RogueHandbookTypeRow : public ::System::Object
	{
	public:
		::System::String* HandBookIconPath; // 0x10
		::RPG::Client::TextID RogueHandBookDesc; // 0x18
		::System::UInt32 HandBookType; // 0x28
		::RPG::Client::TextID RogueHandBookType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueHandbookTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueHandbookTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
