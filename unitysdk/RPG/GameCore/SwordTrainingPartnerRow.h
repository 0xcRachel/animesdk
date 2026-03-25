#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGPARTNERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177B3090)
#define RPG_GAMECORE_SWORDTRAININGPARTNERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177B39A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPartnerRow_TypeDefinitionIndex = 11365;

	class SwordTrainingPartnerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PartnerAbilityIDList; // 0x10
		::System::String* PartnerImage; // 0x18
		::System::UInt32 AvatarID; // 0x20
		::RPG::Client::TextID PartnerName; // 0x28
		::System::UInt32 UnlockID; // 0x38
		::System::UInt32 PartnerID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingPartnerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingPartnerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
