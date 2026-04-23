#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkCheckPointType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKCHECKPOINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194DAE00)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194DB5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCheckPointRow_TypeDefinitionIndex = 10670;

	class ClockParkCheckPointRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* CheckFailTextList; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* CheckWinTextList; // 0x18
		::RPG::Client::TextID CheckPoint; // 0x20
		::System::UInt32 CheckParam2; // 0x30
		::System::UInt32 CheckParam1; // 0x34
		::System::UInt32 CheckPointID; // 0x38
		::RPG::GameCore::ClockParkCheckPointType CheckPointType; // 0x3C
		::System::UInt32 CheckParam3; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkCheckPointRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkCheckPointRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
