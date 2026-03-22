#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A48C00)
#define RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16A49080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersGroupRow_TypeDefinitionIndex = 11974;

	class DrinkMakerCheersGroupRow : public ::System::Object
	{
	public:
		::System::String* HeadbookHeadIcon; // 0x10
		::Il2CppArray<::System::UInt32>* IngredientList; // 0x18
		::System::String* AvatarRequestHeadIcon; // 0x20
		::RPG::Client::TextID RoleRequirement; // 0x28
		::RPG::Client::TextID AvatarName; // 0x38
		::System::UInt32 HidingDrinkID; // 0x48
		::System::UInt32 TutorialGuideGroupID; // 0x4C
		::System::UInt32 NextGroupID; // 0x50
		::System::UInt32 PrimaryDrinkID; // 0x54
		::System::UInt32 GroupID; // 0x58
		::RPG::Client::TextID GroupName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerCheersGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
