#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16799BB0)
#define RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16799F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenEndingRow_TypeDefinitionIndex = 10800;

	class ActivityHipplenEndingRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 RewardID; // 0x28
		::RPG::GameCore::HipplenStatType StatType; // 0x2C
		::System::Boolean IsShowInGuidePage; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::Client::TextID UnlockDesc; // 0x38
		::RPG::Client::TextID Desc; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenEndingRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenEndingRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
