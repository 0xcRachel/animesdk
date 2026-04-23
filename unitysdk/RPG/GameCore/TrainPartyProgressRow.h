#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPROGRESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19498DE0)
#define RPG_GAMECORE_TRAINPARTYPROGRESSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19499130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyProgressRow_TypeDefinitionIndex = 14506;

	class TrainPartyProgressRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TeamIDList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockPassengerList; // 0x18
		::System::String* PassengerUnlockActPath; // 0x20
		::System::UInt32 StatRatio; // 0x28
		::RPG::Client::TextID ProgressTitle; // 0x30
		::System::UInt32 CoinRatio; // 0x40
		::System::UInt32 InitialStatExp; // 0x44
		::System::UInt32 UnlcokRequireArea; // 0x48
		::System::UInt32 ProgressID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPROGRESSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyProgressRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyProgressRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPROGRESSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
