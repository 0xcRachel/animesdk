#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AVATARGROWUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x1587CBE0)
#define RPG_CLIENT_AVATARGROWUPBEFOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1587CA20)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowUpBeforeData_TypeDefinitionIndex = 57631;

	class AvatarGrowUpBeforeData : public ::System::Object
	{
	public:
		::System::UInt32 PropomtionBefore; // 0x10
		::System::UInt32 ExpBefore; // 0x14
		::System::UInt32 LevelBefore; // 0x18
		::System::UInt32 MaxLevelBefore; // 0x1C
		::RPG::GameCore::FixPoint HpMaxBefore; // 0x20
		::RPG::GameCore::FixPoint SpeedBefore; // 0x28
		::RPG::GameCore::FixPoint DefenseBefore; // 0x30
		::RPG::GameCore::FixPoint AttackBefore; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWUPBEFOREDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::AvatarGrowUpBeforeData* beforeData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWUPBEFOREDATA_COPYTO_OFFSET))(this, beforeData);
		}
	};
}
