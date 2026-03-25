#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1761AC20)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1761B260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueOptionDisplayRow_TypeDefinitionIndex = 13551;

	class RogueDialogueOptionDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID OptionTitle; // 0x10
		::System::UInt32 OptionDisplayID; // 0x20
		::RPG::Client::TextID OptionDesc; // 0x28

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
