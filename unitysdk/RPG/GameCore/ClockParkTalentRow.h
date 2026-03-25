#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkUnlockCost; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171305A0)
#define RPG_GAMECORE_CLOCKPARKTALENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17130CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkTalentRow_TypeDefinitionIndex = 10461;

	class ClockParkTalentRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkUnlockCost* TalentUnlockCost; // 0x10
		::System::String* TalentDesc; // 0x18
		::System::String* ImgPath; // 0x20
		::RPG::Client::TextID TalentTitle; // 0x28
		::System::UInt32 ActivityTalentID; // 0x38
		::System::UInt32 TalentBuffID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkTalentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkTalentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
