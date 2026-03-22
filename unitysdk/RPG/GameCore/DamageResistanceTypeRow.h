#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DAMAGERESISTANCETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x169E1260)
#define RPG_GAMECORE_DAMAGERESISTANCETYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x169E1930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageResistanceTypeRow_TypeDefinitionIndex = 12914;

	class DamageResistanceTypeRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::String* HighResistanceIcon; // 0x18
		::RPG::Client::TextID HighResistance; // 0x20
		::RPG::Client::TextID Resistance; // 0x30
		::RPG::GameCore::AttackDamageType Type; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGERESISTANCETYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DamageResistanceTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageResistanceTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGERESISTANCETYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
