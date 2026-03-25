#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPARKOURAICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F18FD0)
#define RPG_GAMECORE_ACTIVITYPARKOURAICONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F19520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityParkourAIConfigRow_TypeDefinitionIndex = 11085;

	class ActivityParkourAIConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* ResPath; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Single ObstacleScore; // 0x24
		::System::Single SwitchRoadScore; // 0x28
		::System::Single NearPlayerScore; // 0x2C
		::System::UInt32 CalcStepCnt; // 0x30
		::System::Single AIPlayerScore; // 0x34
		::System::Single ActionIntervalTime; // 0x38
		::System::Single SpeedUpRegionScore; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::System::Single LeavePlayerScore; // 0x50
		::System::Single SpeedItemScore; // 0x54
		::System::Single LocalPlayerScore; // 0x58
		::System::Single SkillItemScore; // 0x5C
		::System::Single SlowDownRegionScore; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPARKOURAICONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityParkourAIConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityParkourAIConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPARKOURAICONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
