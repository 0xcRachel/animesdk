#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELINFINITEINFOCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x19207090)
#define RPG_GAMECORE_LEVELINFINITEINFOCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19206FF0)
#define RPG_GAMECORE_LEVELINFINITEINFOCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19207040)
#define RPG_GAMECORE_LEVELINFINITEINFOCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x192070E0)
#define RPG_GAMECORE_LEVELINFINITEINFOCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x192070F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInfiniteInfoChange_TypeDefinitionIndex = 52282;

	class LevelInfiniteInfoChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Int32 TotalSummonCount; // 0x18
		::System::Int32 CurrentWaveIndex; // 0x1C
		::System::Int32 TotalMonsterCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEINFOCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEINFOCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEINFOCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEINFOCHANGE_CLEAR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEINFOCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
