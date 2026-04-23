#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_487;

#define RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1920AE20)
#define RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_RPG_IREFERENCE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1920ADD0)
#define RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1920B040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnBasedModifierEventProcessor_TypeDefinitionIndex = 51812;

	class LevelTurnBasedModifierEventProcessor : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_487*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Void RPG_IReference_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_RPG_IREFERENCE_CLEAR_OFFSET))(this);
		}

		::System::Void Execute(::Struct_2_BA11F281BD100FCC& ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_EXECUTE_OFFSET))(this, ctx);
		}
	};
}
