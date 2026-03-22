#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E7B6C0)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E7BD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueOptionDisplayRow_TypeDefinitionIndex = 13473;

	class RogueDialogueOptionDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID OptionTitle; // 0x10
		::RPG::Client::TextID OptionDesc; // 0x20
		::System::UInt32 OptionDisplayID; // 0x30
		::RPG::Client::TextID OptionDetailDesc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDialogueOptionDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueOptionDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
