#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSICRHYTHMPRESETSONGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186441D0)
#define RPG_GAMECORE_MUSICRHYTHMPRESETSONGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18644410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmPresetSongRow_TypeDefinitionIndex = 13532;

	class MusicRhythmPresetSongRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PresetGridConfig; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::Client::TextID PresetDesc; // 0x20
		::RPG::Client::TextID PresetName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMPRESETSONGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MusicRhythmPresetSongRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmPresetSongRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMPRESETSONGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
