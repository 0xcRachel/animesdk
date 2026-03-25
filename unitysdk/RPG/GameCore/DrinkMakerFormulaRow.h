#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerFormulaUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERFORMULAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1718DF20)
#define RPG_GAMECORE_DRINKMAKERFORMULAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1718E450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerFormulaRow_TypeDefinitionIndex = 12032;

	class DrinkMakerFormulaRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* IngredientList; // 0x18
		::System::String* SmallIconPath; // 0x20
		::System::UInt32 FormulaID; // 0x28
		::System::Boolean IsMission; // 0x2C
		::System::Boolean IsChallengeMode; // 0x2D
		::System::UInt32 UnlockParam; // 0x30
		::System::UInt32 MixRate; // 0x34
		::System::UInt32 CupID; // 0x38
		::RPG::GameCore::DrinkMakerFormulaUnlockType UnlockType; // 0x3C
		::RPG::Client::TextID FormulaDesc; // 0x40
		::System::UInt32 DecoID; // 0x50
		::System::UInt32 IceID; // 0x54
		::RPG::Client::TextID FormulaName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERFORMULAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerFormulaRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerFormulaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERFORMULAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
