#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapShortCutType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPSHORTCUTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C31790)
#define RPG_GAMECORE_MAPSHORTCUTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16C31EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapShortCutConfigRow_TypeDefinitionIndex = 11398;

	class MapShortCutConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* Params; // 0x18
		::System::UInt32 MappingInfoID; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 UnlockID; // 0x38
		::System::UInt32 EntranceID; // 0x3C
		::RPG::GameCore::MapShortCutType Type; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSHORTCUTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MapShortCutConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapShortCutConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSHORTCUTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
