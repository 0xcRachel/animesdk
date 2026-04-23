#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerRequestMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19136A90)
#define RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19137030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersConfigRow_TypeDefinitionIndex = 12479;

	class DrinkMakerCheersConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::String* DrinkIconPath; // 0x18
		::System::String* DrinkIconPrefab; // 0x20
		::Il2CppArray<::System::UInt32>* CommentList; // 0x28
		::System::UInt32 DrinkNameTextJoinID; // 0x30
		::RPG::Client::TextID Contraindications; // 0x38
		::RPG::Client::TextID TagName; // 0x48
		::RPG::Client::TextID AvatarRequestText; // 0x58
		::System::UInt32 ID; // 0x68
		::RPG::GameCore::DrinkMakerRequestMode Mode; // 0x6C
		::RPG::Client::TextID FunctionName; // 0x70
		::RPG::Client::TextID OriginalName; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerCheersConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
