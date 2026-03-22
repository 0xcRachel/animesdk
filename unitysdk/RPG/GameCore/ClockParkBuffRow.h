#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x169A7320)
#define RPG_GAMECORE_CLOCKPARKBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x169A7B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkBuffRow_TypeDefinitionIndex = 10393;

	class ClockParkBuffRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID BuffDesc; // 0x10
		::RPG::Client::TextID BuffTitle; // 0x20
		::System::UInt32 Times; // 0x30
		::System::Int32 Param2; // 0x34
		::System::Int32 Param3; // 0x38
		::System::Int32 Param1; // 0x3C
		::System::UInt32 BuffID; // 0x40
		::RPG::GameCore::ClockParkBuffType BuffType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkBuffRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
