#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURRAILBALLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16D17840)
#define RPG_GAMECORE_PARKOURRAILBALLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16D17C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourRailBallConfigRow_TypeDefinitionIndex = 11013;

	class ParkourRailBallConfigRow : public ::System::Object
	{
	public:
		::System::String* ResPath; // 0x10
		::System::String* UI3DPrefabPath; // 0x18
		::System::String* BigResPath; // 0x20
		::System::String* PrefabPath; // 0x28
		::System::UInt32 SkillID; // 0x30
		::System::Single StabilityDisplay; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::Single SpeedDisplay; // 0x48
		::System::Single SkillChargeDisplay; // 0x4C
		::System::UInt32 UpgradeSubMission; // 0x50
		::System::UInt32 ID; // 0x54
		::System::UInt32 UpgradeBallID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRAILBALLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ParkourRailBallConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourRailBallConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRAILBALLCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
