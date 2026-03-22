#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERTAGCOMBINATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A533C0)
#define RPG_GAMECORE_DRINKMAKERTAGCOMBINATIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16A53690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerTagCombinationRow_TypeDefinitionIndex = 11927;

	class DrinkMakerTagCombinationRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExcludeTags; // 0x10
		::Il2CppArray<::System::UInt32>* IncludeTags; // 0x18
		::System::String* HintStr; // 0x20
		::RPG::Client::TextID TagRequestDesc; // 0x28
		::RPG::GameCore::DrinkMakerQuantifyTagType HintIconType; // 0x38
		::System::UInt32 TagCombinationID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGCOMBINATIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerTagCombinationRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerTagCombinationRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGCOMBINATIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
