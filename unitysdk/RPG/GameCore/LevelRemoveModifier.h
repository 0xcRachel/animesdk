#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELREMOVEMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA4AB770)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA4AB810)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA4AB7C0)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xA4AB880)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA4AB860)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_SHOWFLOATMSG_OFFSET UNITYSDK_OFFSET(0xA4AB8A0)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xA4AB710)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xA4AB890)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA4AB870)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_SHOWFLOATMSG_OFFSET UNITYSDK_OFFSET(0xA4AB8B0)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4AB8C0)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA4AB8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRemoveModifier_TypeDefinitionIndex = 44614;

	class LevelRemoveModifier : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* _ModifierInstance_k__BackingField; // 0x18
		::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x20
		::System::Boolean _ShowFloatMsg_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelRemoveModifier* Init(::RPG::GameCore::TurnBasedModifierInstance* mdf, ::RPG::GameCore::ModifierDeathSource deathSource, ::System::Boolean showMsg)
		{
			return ((::RPG::GameCore::LevelRemoveModifier*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::ModifierDeathSource, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_INIT_OFFSET))(this, mdf, deathSource, showMsg);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedModifierInstance* get_ModifierInstance()
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_MODIFIERINSTANCE_OFFSET))(this);
		}

		::System::Void set_ModifierInstance(::RPG::GameCore::TurnBasedModifierInstance* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_MODIFIERINSTANCE_OFFSET))(this, value);
		}

		::RPG::GameCore::ModifierDeathSource get_DeathSource()
		{
			return ((::RPG::GameCore::ModifierDeathSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_DEATHSOURCE_OFFSET))(this);
		}

		::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_DEATHSOURCE_OFFSET))(this, value);
		}

		::System::Boolean get_ShowFloatMsg()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_SHOWFLOATMSG_OFFSET))(this);
		}

		::System::Void set_ShowFloatMsg(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_SHOWFLOATMSG_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
