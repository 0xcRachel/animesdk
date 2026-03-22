#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class BaseModifierInstance; }

#define RPG_GAMECORE_ABILITYPREADDMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2A3FD0)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA2A40A0)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA2A4020)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xA2A3F80)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A40F0)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2A4100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPreAddModifier_TypeDefinitionIndex = 44427;

	class AbilityPreAddModifier : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::BaseModifierInstance* ModifierInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityPreAddModifier* Init(::RPG::GameCore::BaseModifierInstance* pModifierInstance)
		{
			return ((::RPG::GameCore::AbilityPreAddModifier*(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_INIT_OFFSET))(this, pModifierInstance);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
