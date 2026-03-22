#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPresentShortenType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B423F0)
#define RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B42690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPresentConfigRow_TypeDefinitionIndex = 12201;

	class GridFightPresentConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID PresentName; // 0x10
		::RPG::GameCore::GridFightPresentShortenType ShortenType; // 0x20
		::System::UInt32 BonusID; // 0x24
		::RPG::Client::TextID PresentDesc; // 0x28
		::System::UInt32 ID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightPresentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPresentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
