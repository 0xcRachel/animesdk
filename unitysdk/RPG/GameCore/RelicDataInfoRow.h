#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RELICDATAINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175A2C90)
#define RPG_GAMECORE_RELICDATAINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175A3450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicDataInfoRow_TypeDefinitionIndex = 13370;

	class RelicDataInfoRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* BGStoryContent; // 0x18
		::System::String* BGStoryTitle; // 0x20
		::System::String* RelicName; // 0x28
		::System::String* ItemBGDesc; // 0x30
		::System::String* ItemFigureIconPath; // 0x38
		::RPG::GameCore::RelicType Type; // 0x40
		::System::UInt32 SetID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RelicDataInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicDataInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
