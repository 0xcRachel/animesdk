#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochurePasterType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PASTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16D19560)
#define RPG_GAMECORE_PASTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16D1A770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PasterConfigRow_TypeDefinitionIndex = 13994;

	class PasterConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TravelBrochureID; // 0x10
		::System::String* TextPasterPrefab; // 0x18
		::RPG::GameCore::TravelBrochurePasterType Type; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 IncreaseCompletion; // 0x28
		::System::Boolean DefaultUnlock; // 0x2C
		::RPG::Client::TextID PasterUnlockDesc; // 0x30
		::RPG::Client::TextID PasterTextmap; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PasterConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PasterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
