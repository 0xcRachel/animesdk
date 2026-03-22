#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_METHOD_4_7859B1FDE6A1B7F0_OFFSET UNITYSDK_OFFSET(0x170FF180)
#define RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_METHOD_4_F38B0EAF936B7610_OFFSET UNITYSDK_OFFSET(0x170FF200)
#define RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170FF1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddAllStatToTopConfig_TypeDefinitionIndex = 16218;

	class TrainPartyActionAddAllStatToTopConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7859B1FDE6A1B7F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_METHOD_4_7859B1FDE6A1B7F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F38B0EAF936B7610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_METHOD_4_F38B0EAF936B7610_OFFSET))(a1, a2);
		}
	};
}
