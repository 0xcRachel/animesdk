#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA3B2C00)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA3B2BC0)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA3B2B70)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B2C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityAnimStateChange_TypeDefinitionIndex = 44517;

	class EntityAnimStateChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EntityAnimStateChange* Init(::System::UInt32 nEntityRuntimeID)
		{
			return ((::RPG::GameCore::EntityAnimStateChange*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE_INIT_OFFSET))(this, nEntityRuntimeID);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
