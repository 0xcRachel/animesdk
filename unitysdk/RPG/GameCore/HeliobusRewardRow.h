#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172B9360)
#define RPG_GAMECORE_HELIOBUSREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172B9930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusRewardRow_TypeDefinitionIndex = 12587;

	class HeliobusRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 IncomeTarget; // 0x10
		::System::UInt32 RewardQuestID; // 0x14
		::System::UInt32 Level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
