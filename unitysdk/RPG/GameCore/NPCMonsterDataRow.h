#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_NPCMONSTERDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186479F0)
#define RPG_GAMECORE_NPCMONSTERDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186481D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterDataRow_TypeDefinitionIndex = 13541;

	class NPCMonsterDataRow : public ::System::Object
	{
	public:
		::System::String* DefaultAIPath; // 0x10
		::System::String* JsonPath; // 0x18
		::System::String* ConfigEntityPath; // 0x20
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::MonsterRank Rank; // 0x2C
		::System::UInt32 MappingInfoID; // 0x30
		::System::UInt32 PrototypeID; // 0x34
		::System::UInt32 MiniMapIconType; // 0x38
		::System::Boolean IsMazeLink; // 0x3C
		::RPG::Client::TextID NPCName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::NPCMonsterDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCMonsterDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
