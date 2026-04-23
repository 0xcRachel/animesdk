#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TITANATLASGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19488CE0)
#define RPG_GAMECORE_TITANATLASGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19488F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TitanAtlasGroupRow_TypeDefinitionIndex = 14496;

	class TitanAtlasGroupRow : public ::System::Object
	{
	public:
		::System::String* TitleBGColor; // 0x10
		::RPG::Client::TextID TitanGroupDesc; // 0x18
		::System::UInt32 TitanGroupID; // 0x28
		::RPG::Client::TextID TitanGroupName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TitanAtlasGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TitanAtlasGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
