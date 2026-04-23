#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraPhaseTargetType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraPhaseRow; }

#define RPG_CLIENT_CHIMERAPHASEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x174838D0)
#define RPG_CLIENT_CHIMERAPHASEDATA_GETREMAININGROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x17483780)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_LEADERCHARIOTSTATE_OFFSET UNITYSDK_OFFSET(0x17483710)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_NEXTPHASE_OFFSET UNITYSDK_OFFSET(0x174833A0)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x17483330)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_ROUNDIDARR_OFFSET UNITYSDK_OFFSET(0x174835C0)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_TARGETPARAMS_OFFSET UNITYSDK_OFFSET(0x174836A0)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x17483630)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x17483340)
#define RPG_CLIENT_CHIMERAPHASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17483920)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraPhaseData_TypeDefinitionIndex = 58440;

	class ChimeraPhaseData : public ::System::Object
	{
	public:
		::System::UInt32 _PhaseID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 phaseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA__CTOR_OFFSET))(this, phaseID);
		}

		::System::UInt32 get_PhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_PHASEID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraPhaseRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraPhaseRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::ChimeraPhaseData* get_NextPhase()
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_NEXTPHASE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RoundIDArr()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_ROUNDIDARR_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraPhaseTargetType get_TargetType()
		{
			return ((::RPG::GameCore::ChimeraPhaseTargetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_TARGETTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TargetParams()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_TARGETPARAMS_OFFSET))(this);
		}

		::System::Int32 get_LeaderChariotState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_LEADERCHARIOTSTATE_OFFSET))(this);
		}

		::System::Int32 GetRemainingRoundCount(::System::UInt32 currentRoundID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GETREMAININGROUNDCOUNT_OFFSET))(this, currentRoundID);
		}

		static ::RPG::Client::ChimeraPhaseData* Create(::System::UInt32 phaseID)
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_CREATE_OFFSET))(phaseID);
		}
	};
}
