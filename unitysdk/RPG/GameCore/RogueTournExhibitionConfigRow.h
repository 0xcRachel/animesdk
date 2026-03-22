#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueExhibitionType.h"
#include "unitysdk/RPG/GameCore/RogueTournCollectionExhibitionPropFloor.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EC5810)
#define RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC5970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournExhibitionConfigRow_TypeDefinitionIndex = 13645;

	class RogueTournExhibitionConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueExhibitionType Type; // 0x10
		::RPG::GameCore::RogueTournCollectionExhibitionPropFloor Floor; // 0x14
		::System::UInt32 PaintingID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournExhibitionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournExhibitionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
