#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x170416F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x17041780)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x17041790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17041770)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PVPBattlePreparePageParam_TypeDefinitionIndex = 69960;

	class DiceCombatV2PVPBattlePreparePageParam : public ::System::Object
	{
	public:
		::System::Boolean _ShowImmediately_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam* Create(::System::Boolean showImmediately)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_CREATE_OFFSET))(showImmediately);
		}

		::System::Boolean get_ShowImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_ShowImmediately(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET))(this, value);
		}
	};
}
