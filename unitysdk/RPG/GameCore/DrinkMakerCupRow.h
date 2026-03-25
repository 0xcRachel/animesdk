#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerCupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1718C9B0)
#define RPG_GAMECORE_DRINKMAKERCUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1718CD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCupRow_TypeDefinitionIndex = 12011;

	class DrinkMakerCupRow : public ::System::Object
	{
	public:
		::System::String* AudioEvent; // 0x10
		::Il2CppArray<::System::UInt32>* IceCount; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* PrefabPath; // 0x28
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x30
		::Il2CppArray<::System::Single>* PerLayerHeight; // 0x38
		::System::UInt32 Capacity; // 0x40
		::RPG::Client::TextID CupName; // 0x48
		::RPG::GameCore::DrinkMakerCupType Type; // 0x58
		::System::UInt32 CupID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerCupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
