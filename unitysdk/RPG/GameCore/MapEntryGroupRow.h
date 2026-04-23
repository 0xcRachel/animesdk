#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPENTRYGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18FDA680)
#define RPG_GAMECORE_MAPENTRYGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18FDAD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEntryGroupRow_TypeDefinitionIndex = 13313;

	class MapEntryGroupRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID GroupName; // 0x10
		::System::UInt32 ID; // 0x20
		::System::UInt32 MapGuideID; // 0x24
		::System::UInt32 Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MapEntryGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapEntryGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
