#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1996F550)
#define RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1996F870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScepterDisplayRow_TypeDefinitionIndex = 14086;

	class RogueMagicScepterDisplayRow : public ::System::Object
	{
	public:
		::System::String* ScepterFigurePath; // 0x10
		::System::String* ScepterIconPath; // 0x18
		::RPG::Client::TextID ScepterBGDesc; // 0x20
		::RPG::Client::TextID ScepterTriggerDesc; // 0x30
		::RPG::Client::TextID ScepterName; // 0x40
		::System::UInt32 ScepterID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicScepterDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicScepterDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
