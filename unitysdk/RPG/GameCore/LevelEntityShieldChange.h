#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x19201DD0)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19201E70)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19201E20)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x19201D20)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19201EC0)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x19201ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityShieldChange_TypeDefinitionIndex = 52385;

	class LevelEntityShieldChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x148
		::RPG::GameCore::FixPoint ChangeValue; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityShieldChange* Init(::RPG::GameCore::GameEntity* target, ::Struct_2_5909FD7779934CCA chgParams, ::RPG::GameCore::FixPoint chgVal)
		{
			return ((::RPG::GameCore::LevelEntityShieldChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_INIT_OFFSET))(this, target, chgParams, chgVal);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
