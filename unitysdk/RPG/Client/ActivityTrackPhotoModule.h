#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_21C7581DFE99F091_108;
class Class_1_D17272E82AE804C2_964;
namespace RPG::Client { class ActivityTrackPhotoStageData; }
namespace RPG::Client { class ActivityTrackPhotoStageInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x103DE6F0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GETSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x103DE7F0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_CURSTAGEINSTANCE_OFFSET UNITYSDK_OFFSET(0x103DED10)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_CURSTAGETRANSNO_OFFSET UNITYSDK_OFFSET(0x103E04C0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x103E04E0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_STAGEDATADICT_OFFSET UNITYSDK_OFFSET(0x103E04A0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_HASNEWSTAGEUNLOCK_OFFSET UNITYSDK_OFFSET(0x103DF270)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x103DE2D0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_LEAVESTAGE_OFFSET UNITYSDK_OFFSET(0x103DEA80)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_QUITSTAGE_OFFSET UNITYSDK_OFFSET(0x103DEB20)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_RECORDSTAGESEENUNLOCK_OFFSET UNITYSDK_OFFSET(0x103DEED0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_RESTARTSTAGE_OFFSET UNITYSDK_OFFSET(0x103DEDA0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_CURSTAGETRANSNO_OFFSET UNITYSDK_OFFSET(0x103E04D0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x103E04F0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_STAGEDATADICT_OFFSET UNITYSDK_OFFSET(0x103E04B0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_STARTSTAGE_OFFSET UNITYSDK_OFFSET(0x103DE8B0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x103DF480)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_TRYSETAUTOSHOWSTAGEID_OFFSET UNITYSDK_OFFSET(0x103DF9D0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x103DDA70)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x103E0500)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x103DFB70)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__HASANYFORBIDAUTOSHOWSUBMISSIONDOING_OFFSET UNITYSDK_OFFSET(0x103DF7C0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__INITCONST_OFFSET UNITYSDK_OFFSET(0x103DE620)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__INITSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x103DE3E0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDGETTRACKPHOTOACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x103DDB50)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDSETTLETRACKPHOTOSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x103DE150)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDSTARTTRACKPHOTOSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x103DE0E0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SENDINITPACKET_OFFSET UNITYSDK_OFFSET(0x103DFA30)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGEDATACHANGE_OFFSET UNITYSDK_OFFSET(0x103E0270)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x103DDBC0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGESETTLERESULT_OFFSET UNITYSDK_OFFSET(0x103DE1D0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x103E0640)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x103E05B0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x103E0550)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTrackPhotoModule_TypeDefinitionIndex = 57196;

	class ActivityTrackPhotoModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTrackPhotoStageData*>* _StageDataDict_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _DependantSubMissionIDs; // 0x18
		::System::Nullable_1<::System::UInt32> _AutoShowStageID; // 0x20
		::System::UInt32 _RewardID_k__BackingField; // 0x28
		::System::UInt32 _CurStageTransNo_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetTrackPhotoActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDGETTRACKPHOTOACTIVITYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdStartTrackPhotoStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDSTARTTRACKPHOTOSTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSettleTrackPhotoStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__ONCMDSETTLETRACKPHOTOSTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivityTrackPhotoStageData* GetStageData(::System::UInt32 stageID)
		{
			return ((::RPG::Client::ActivityTrackPhotoStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GETSTAGEDATA_OFFSET))(this, stageID);
		}

		::System::Void StartStage(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_STARTSTAGE_OFFSET))(this, stageID);
		}

		::System::Void LeaveStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_LEAVESTAGE_OFFSET))(this);
		}

		::System::Void QuitStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_QUITSTAGE_OFFSET))(this);
		}

		::System::Void RestartStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_RESTARTSTAGE_OFFSET))(this);
		}

		::System::Void RecordStageSeenUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_RECORDSTAGESEENUNLOCK_OFFSET))(this);
		}

		::System::Boolean HasNewStageUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_HASNEWSTAGEUNLOCK_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void TrySetAutoShowStageID(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_TRYSETAUTOSHOWSTAGEID_OFFSET))(this, stageID);
		}

		::System::Void _SendInitPacket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SENDINITPACKET_OFFSET))(this);
		}

		::System::Void _InitStageData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__INITSTAGEDATA_OFFSET))(this);
		}

		::System::Void _InitConst()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__INITCONST_OFFSET))(this);
		}

		::System::Void _SyncStageData(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_964*>* stageInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_964*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGEDATA_OFFSET))(this, stageInfos);
		}

		::System::Void _SyncStageSettleResult(::System::UInt32 stageID, ::System::UInt32 score, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_108*>* takeCanInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_108*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGESETTLERESULT_OFFSET))(this, stageID, score, takeCanInfos);
		}

		::System::Void _SyncStageDataChange(::System::UInt32 stageID, ::System::UInt32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__SYNCSTAGEDATACHANGE_OFFSET))(this, stageID, score);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetDependantSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Boolean _HasAnyForbidAutoShowSubMissionDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE__HASANYFORBIDAUTOSHOWSUBMISSIONDOING_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTrackPhotoStageData*>* get_StageDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTrackPhotoStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_STAGEDATADICT_OFFSET))(this);
		}

		::System::Void set_StageDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTrackPhotoStageData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTrackPhotoStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_STAGEDATADICT_OFFSET))(this, value);
		}

		::RPG::Client::ActivityTrackPhotoStageInstance* get_CurStageInstance()
		{
			return ((::RPG::Client::ActivityTrackPhotoStageInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_CURSTAGEINSTANCE_OFFSET))(this);
		}

		::System::UInt32 get_CurStageTransNo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_CURSTAGETRANSNO_OFFSET))(this);
		}

		::System::Void set_CurStageTransNo(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_CURSTAGETRANSNO_OFFSET))(this, value);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE_SET_REWARDID_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
