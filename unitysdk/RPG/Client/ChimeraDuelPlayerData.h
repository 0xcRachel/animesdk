#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1DC52A0BEDF50632_1;
class Class_1_D8EAED2BCF3F4D39_2;
class Class_1_E473F14F738B1BF5_8;
namespace RPG::Client { class ChimeraDuelPlayerRankData; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELPLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F1AAE0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GETDEFENCETEAM_OFFSET UNITYSDK_OFFSET(0x8F1B3A0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GETFINISHEDTRIALCOUNT_OFFSET UNITYSDK_OFFSET(0x8F1B490)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GETTOTALTRIALCOUNT_OFFSET UNITYSDK_OFFSET(0x8F1B440)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_DEFENCESLOTINDEX_OFFSET UNITYSDK_OFFSET(0x8F1B730)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_NEXTGAMEID_OFFSET UNITYSDK_OFFSET(0x8F1B710)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x8F1AE50)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_ISMASTERCHALLENGEFINISHED_OFFSET UNITYSDK_OFFSET(0x8F149F0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SET_DEFENCESLOTINDEX_OFFSET UNITYSDK_OFFSET(0x8F1B740)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SET_NEXTGAMEID_OFFSET UNITYSDK_OFFSET(0x8F1B720)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCDEFENCESLOTINDEX_OFFSET UNITYSDK_OFFSET(0x8F17ED0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCFINISHEDMASTERCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x8F18600)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCNEXTGAMEID_OFFSET UNITYSDK_OFFSET(0x8F19150)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCPVPTEAM_1_OFFSET UNITYSDK_OFFSET(0x8F18250)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCPVPTEAM_OFFSET UNITYSDK_OFFSET(0x8F17E60)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x8F172D0)
#define RPG_CLIENT_CHIMERADUELPLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F1A4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelPlayerData_TypeDefinitionIndex = 50242;

	class ChimeraDuelPlayerData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelPlayerRankData* _Rank_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* PlayerSaveTeams; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedMasterChallengeIDList; // 0x20
		::System::UInt32 _NextGameID_k__BackingField; // 0x28
		::System::Int32 _DefenceSlotIndex_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelPlayerRankData* get_Rank()
		{
			return ((::RPG::Client::ChimeraDuelPlayerRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_1DC52A0BEDF50632_1* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1DC52A0BEDF50632_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNC_OFFSET))(this, serverData);
		}

		::System::Void SyncNextGameID(::System::UInt32 nextGameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCNEXTGAMEID_OFFSET))(this, nextGameID);
		}

		::System::Void SyncPvpTeam(::Class_1_E473F14F738B1BF5_8* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E473F14F738B1BF5_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCPVPTEAM_OFFSET))(this, serverData);
		}

		::System::Void SyncPvpTeam_1(::Class_1_D8EAED2BCF3F4D39_2* lineup, ::System::Int32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCPVPTEAM_1_OFFSET))(this, lineup, slotIndex);
		}

		::System::Void SyncDefenceSlotIndex(::System::Int32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCDEFENCESLOTINDEX_OFFSET))(this, slotIndex);
		}

		::RPG::Client::ChimeraDuelPvpTeamSnapshot* GetDefenceTeam()
		{
			return ((::RPG::Client::ChimeraDuelPvpTeamSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GETDEFENCETEAM_OFFSET))(this);
		}

		::System::Void SyncFinishedMasterChallengeID(::System::UInt32 masterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SYNCFINISHEDMASTERCHALLENGEID_OFFSET))(this, masterID);
		}

		::System::Boolean IsMasterChallengeFinished(::System::UInt32 masterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_ISMASTERCHALLENGEFINISHED_OFFSET))(this, masterID);
		}

		::System::Int32 GetTotalTrialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GETTOTALTRIALCOUNT_OFFSET))(this);
		}

		::System::Int32 GetFinishedTrialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GETFINISHEDTRIALCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_NextGameID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_NEXTGAMEID_OFFSET))(this);
		}

		::System::Void set_NextGameID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SET_NEXTGAMEID_OFFSET))(this, value);
		}

		::System::Int32 get_DefenceSlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_GET_DEFENCESLOTINDEX_OFFSET))(this);
		}

		::System::Void set_DefenceSlotIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERDATA_SET_DEFENCESLOTINDEX_OFFSET))(this, value);
		}
	};
}
