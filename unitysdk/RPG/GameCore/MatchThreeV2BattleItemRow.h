#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19999F30)
#define RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1999A560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2BattleItemRow_TypeDefinitionIndex = 11430;

	class MatchThreeV2BattleItemRow : public ::System::Object
	{
	public:
		::System::String* ItemIcon; // 0x10
		::System::String* ItemEffectJson; // 0x18
		::System::UInt32 BattleItemID; // 0x20
		::System::UInt32 InputGridCount; // 0x24
		::System::UInt32 ItemUseCount; // 0x28
		::System::UInt32 ItemLevel; // 0x2C
		::System::Boolean IsUnlock; // 0x30
		::System::UInt32 LevelUpCost; // 0x34
		::RPG::Client::TextID ItemHint; // 0x38
		::RPG::Client::TextID ItemName; // 0x48
		::RPG::Client::TextID ItemUseFailHint; // 0x58
		::RPG::Client::TextID ItemLevelUpDesc; // 0x68
		::RPG::GameCore::MatchThreePropType PropType; // 0x78
		::System::UInt32 Order; // 0x7C
		::RPG::Client::TextID ItemDesc; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeV2BattleItemRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2BattleItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BATTLEITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
