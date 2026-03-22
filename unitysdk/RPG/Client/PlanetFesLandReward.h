#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesReward; }

#define RPG_CLIENT_PLANETFESLANDREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD5160)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLandReward_TypeDefinitionIndex = 53075;

	class PlanetFesLandReward : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesReward* Reward; // 0x10
		::System::UInt32 LandID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDREWARD__CTOR_OFFSET))(this);
		}
	};
}
