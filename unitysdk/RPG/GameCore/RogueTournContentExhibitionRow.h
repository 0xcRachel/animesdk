#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueExhibitionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EC3990)
#define RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC3BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournContentExhibitionRow_TypeDefinitionIndex = 13678;

	class RogueTournContentExhibitionRow : public ::System::Object
	{
	public:
		::System::String* SlotIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* ImagePath; // 0x20
		::System::UInt32 ExhibitionID; // 0x28
		::RPG::GameCore::RogueExhibitionType ExhibitionType; // 0x2C
		::System::UInt32 ProgramGroupID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournContentExhibitionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournContentExhibitionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
