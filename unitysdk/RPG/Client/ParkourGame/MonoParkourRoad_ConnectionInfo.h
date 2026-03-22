#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_CONNECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9A3D0A0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_ConnectionInfo_TypeDefinitionIndex = 59067;

	class MonoParkourRoad_ConnectionInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_CONNECTIONINFO__CTOR_OFFSET))(this);
		}
	};
}
