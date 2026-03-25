#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PINGPONGMODULE_PINGPONGADDPOINTUIINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F78D10)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_PingPongAddPointUIInfo_TypeDefinitionIndex = 54058;

	class PingPongModule_PingPongAddPointUIInfo : public ::System::Object
	{
	public:
		::System::Int32 MaxHPPointNum; // 0x10
		::System::Int32 PointNum; // 0x14
		::System::Boolean AllowSP; // 0x18
		::System::Boolean ShowAddPointUI; // 0x19
		::System::Int32 MaxSPPointNum; // 0x1C
		::System::Boolean AllowMP; // 0x20
		::System::Boolean AllowRacketLength; // 0x21
		::System::Boolean AllowHP; // 0x22
		::System::Boolean AllowRacketSpeed; // 0x23
		::System::Int32 MaxRacketSpeedPointNum; // 0x24
		::System::Int32 MaxMPPointNum; // 0x28
		::System::Int32 MaxRacketLengthPointNum; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_PINGPONGADDPOINTUIINFO__CTOR_OFFSET))(this);
		}
	};
}
