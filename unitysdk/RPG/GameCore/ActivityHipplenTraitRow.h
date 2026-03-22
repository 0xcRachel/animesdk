#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1679C070)
#define RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1679C510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenTraitRow_TypeDefinitionIndex = 10794;

	class ActivityHipplenTraitRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Effects; // 0x10
		::Il2CppArray<::System::Int32>* TraitDescParam; // 0x18
		::System::String* ImagePath; // 0x20
		::Il2CppArray<::System::Int32>* TraitUnlockDescParam; // 0x28
		::RPG::Client::TextID TraitUnlockDesc; // 0x30
		::RPG::Client::TextID TraitDesc; // 0x40
		::System::UInt32 ID; // 0x50
		::RPG::Client::TextID TraitTitle; // 0x58
		::System::Boolean IsEffectDelay; // 0x68
		::System::UInt32 Rarity; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenTraitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenTraitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
