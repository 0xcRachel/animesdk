#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188823A0)
#define RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18882840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenTraitRow_TypeDefinitionIndex = 11107;

	class ActivityHipplenTraitRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::Il2CppArray<::System::Int32>* TraitUnlockDescParam; // 0x18
		::Il2CppArray<::System::Int32>* TraitDescParam; // 0x20
		::Il2CppArray<::System::UInt32>* Effects; // 0x28
		::RPG::Client::TextID TraitDesc; // 0x30
		::RPG::Client::TextID TraitTitle; // 0x40
		::RPG::Client::TextID TraitUnlockDesc; // 0x50
		::System::UInt32 Rarity; // 0x60
		::System::Boolean IsEffectDelay; // 0x64
		::System::UInt32 ID; // 0x68

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
