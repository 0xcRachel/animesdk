#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLEYGRIDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1687A440)
#define RPG_GAMECORE_ALLEYGRIDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1687AC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyGridRow_TypeDefinitionIndex = 11420;

	class AlleyGridRow : public ::System::Object
	{
	public:
		::System::String* ShopInfoIcon; // 0x10
		::System::String* GridIcon; // 0x18
		::RPG::Client::TextID GridDesc; // 0x20
		::RPG::Client::TextID GridTitle; // 0x30
		::System::UInt32 GridID; // 0x40
		::System::UInt32 RelatedEventID; // 0x44
		::System::UInt32 RelatedMainMission; // 0x48
		::RPG::GameCore::GridTypeEnum GridType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleyGridRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyGridRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
