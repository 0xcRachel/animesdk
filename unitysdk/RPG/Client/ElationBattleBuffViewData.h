#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleBuffViewData.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x959DBB0)
#define RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_GET_ELATIONECHOPOINT_OFFSET UNITYSDK_OFFSET(0x959DF10)
#define RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_SET_ELATIONECHOPOINT_OFFSET UNITYSDK_OFFSET(0x959DF20)
#define RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x959DCA0)
#define RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA__GETELATIONECHOPOINT_OFFSET UNITYSDK_OFFSET(0x959DCD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBattleBuffViewData_TypeDefinitionIndex = 58602;

	class ElationBattleBuffViewData : public ::RPG::Client::BattleBuffViewData
	{
	public:
		// static const ::System::String* ELATION_ECHO_POINT_DV_KEY; // 0x0
		::System::Int32 _ElationEchoPoint_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA__CTOR_OFFSET))(this, modifier);
		}

		static ::RPG::Client::ElationBattleBuffViewData* Create(::RPG::GameCore::TurnBasedModifierInstance* modifier)
		{
			return ((::RPG::Client::ElationBattleBuffViewData*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_CREATE_OFFSET))(modifier);
		}

		::System::Int32 _GetElationEchoPoint(::RPG::GameCore::TurnBasedModifierInstance* modifier)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA__GETELATIONECHOPOINT_OFFSET))(this, modifier);
		}

		::System::Int32 get_ElationEchoPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_GET_ELATIONECHOPOINT_OFFSET))(this);
		}

		::System::Void set_ElationEchoPoint(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_SET_ELATIONECHOPOINT_OFFSET))(this, value);
		}
	};
}
