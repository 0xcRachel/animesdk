#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_668790FD8B1B5915;

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS101_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB3BB0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS101_0__TRIGGERFRAMECAPTUREPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x8DBAE60)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass101_0_TypeDefinitionIndex = 48335;

	class BattleGamePhase___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::Class_2_668790FD8B1B5915* frameCapturePage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS101_0__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerFrameCapturePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS101_0__TRIGGERFRAMECAPTUREPAGE_B__0_OFFSET))(this);
		}
	};
}
