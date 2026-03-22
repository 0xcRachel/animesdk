#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"

class Class_0_16E4307DCC419505_302;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA499950)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA499900)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xA4999C0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA4999E0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xA4999A0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_INIT_OFFSET UNITYSDK_OFFSET(0xA499890)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xA4999D0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA4999F0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xA4999B0)
#define RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0xA499A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterRemoveShield_TypeDefinitionIndex = 44627;

	class LevelCharacterRemoveShield : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Class_0_16E4307DCC419505_302* _ModifierInstance_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _Target_k__BackingField; // 0x20
		::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterRemoveShield* Init(::RPG::GameCore::GameEntity* target, ::Class_0_16E4307DCC419505_302* modifierInstance, ::RPG::GameCore::ModifierDeathSource source)
		{
			return ((::RPG::GameCore::LevelCharacterRemoveShield*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_302*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_INIT_OFFSET))(this, target, modifierInstance, source);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Target()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_TARGET_OFFSET))(this, value);
		}

		::RPG::GameCore::ModifierDeathSource get_DeathSource()
		{
			return ((::RPG::GameCore::ModifierDeathSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_DEATHSOURCE_OFFSET))(this);
		}

		::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_DEATHSOURCE_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_302* get_ModifierInstance()
		{
			return ((::Class_0_16E4307DCC419505_302*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_GET_MODIFIERINSTANCE_OFFSET))(this);
		}

		::System::Void set_ModifierInstance(::Class_0_16E4307DCC419505_302* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_302*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREMOVESHIELD_SET_MODIFIERINSTANCE_OFFSET))(this, value);
		}
	};
}
