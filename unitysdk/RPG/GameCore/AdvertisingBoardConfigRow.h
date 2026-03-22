#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16864C60)
#define RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16864EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvertisingBoardConfigRow_TypeDefinitionIndex = 11417;

	class AdvertisingBoardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 AdvertisingBoardID; // 0x10
		::System::UInt32 VoiceID; // 0x14
		::System::Boolean IsPlayerInvolved; // 0x18
		::System::Boolean IsSwitch; // 0x19
		::System::Single Interval; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AdvertisingBoardConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvertisingBoardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
