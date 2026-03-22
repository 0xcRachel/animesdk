#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_28.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_477DBC7B6CD0F332;
class Class_1_C2029720BB7172FE_9;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueMiracleData; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityRogueAreaConfigRow; }
namespace RPG::GameCore { class RogueAreaConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEENDLESSAREADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9DE1D60)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x9DE22D0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTBUFFS_OFFSET UNITYSDK_OFFSET(0x9DE26C0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTMIRACLES_OFFSET UNITYSDK_OFFSET(0x9DE2760)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTSELFAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9DE21D0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9DE2250)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEIDS_OFFSET UNITYSDK_OFFSET(0x9DE2A50)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEMONSTERDATAS_OFFSET UNITYSDK_OFFSET(0x9DE2C90)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x9DE29B0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ACTIVITYAREAROW_OFFSET UNITYSDK_OFFSET(0x9DE3640)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9DE35E0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAROW_OFFSET UNITYSDK_OFFSET(0x9DE3620)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9DE3900)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9DE3690)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9DE3B10)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDRANK_OFFSET UNITYSDK_OFFSET(0x9DE3B50)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDSCORE_OFFSET UNITYSDK_OFFSET(0x9DE3B30)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x9DE3880)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCEIMAGE_OFFSET UNITYSDK_OFFSET(0x9DE36C0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCELOCKEDIMAGE_OFFSET UNITYSDK_OFFSET(0x9DE36E0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEBUFFDATAS_OFFSET UNITYSDK_OFFSET(0x9DE38E0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0x9DE2990)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x9DE3A50)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENTEREDENDLESS_OFFSET UNITYSDK_OFFSET(0x9DE3A60)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x9DE39F0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0x9DE39A0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISNORMALFINISHED_OFFSET UNITYSDK_OFFSET(0x9DE3A80)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9DE1D00)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_MECHANISMTEXTS_OFFSET UNITYSDK_OFFSET(0x9DE32F0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9DE3660)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9DE3AD0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x9DE3AF0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x9DE3860)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALSTATUS_OFFSET UNITYSDK_OFFSET(0x9DE3980)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_PICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9DE3C00)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x9DE3700)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDTYPES_OFFSET UNITYSDK_OFFSET(0x9DE3840)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9DE3BF0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ROGUEMAPID_OFFSET UNITYSDK_OFFSET(0x9DE3600)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x9DE31B0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEBUFF_OFFSET UNITYSDK_OFFSET(0x9DE2800)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEMIRACLE_OFFSET UNITYSDK_OFFSET(0x9DE2920)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_REGISTERSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9DE14B0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ACTIVITYAREAROW_OFFSET UNITYSDK_OFFSET(0x9DE3650)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x9DE35F0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAROW_OFFSET UNITYSDK_OFFSET(0x9DE3630)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9DE3B20)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDSCORE_OFFSET UNITYSDK_OFFSET(0x9DE3B40)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_FREEBUFFDATAS_OFFSET UNITYSDK_OFFSET(0x9DE38F0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_HASENTEREDENDLESS_OFFSET UNITYSDK_OFFSET(0x9DE3A70)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9DE3AE0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x9DE3B00)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x9DE3870)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALSTATUS_OFFSET UNITYSDK_OFFSET(0x9DE3990)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9DE2050)
#define RPG_CLIENT_ROGUEENDLESSAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE1F60)
#define RPG_CLIENT_ROGUEENDLESSAREADATA__GETENDLESSSTAGEINFINITEGROUPID_OFFSET UNITYSDK_OFFSET(0x9DE2AE0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA__ONSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x9DE3290)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessAreaData_TypeDefinitionIndex = 53604;

	class RogueEndlessAreaData : public ::System::Object
	{
	public:
		::RPG::Client::RoguePickAvatarInfo* _CurrentPickAvatarInfo; // 0x10
		::RPG::Client::RogueReviveAvatarInfo* _CurrentReviveAvatarInfo; // 0x18
		::RPG::Client::RogueMiracleInfo* _CurrentMiracleInfo; // 0x20
		::Class_1_477DBC7B6CD0F332* _CurrentBuffInfo; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _FreeBuffDatas_k__BackingField; // 0x30
		::RPG::GameCore::ActivityRogueAreaConfigRow* _ActivityAreaRow_k__BackingField; // 0x38
		::RPG::GameCore::RogueAreaConfigRow* _AreaRow_k__BackingField; // 0x40
		::System::UInt32 _EndlessAchievedScore_k__BackingField; // 0x48
		::System::UInt32 _RogueMapID; // 0x4C
		::System::Boolean hasRegisterSchedule; // 0x50
		::System::Boolean _HasEnteredEndless_k__BackingField; // 0x51
		::System::UInt32 _NormalMaxProgress_k__BackingField; // 0x54
		::System::UInt32 _NormalCurrentProgress_k__BackingField; // 0x58
		::System::UInt32 _EndlessAchievedProgress_k__BackingField; // 0x5C
		::Enum_3_4608E37A1B3D374A_28 _NormalStatus_k__BackingField; // 0x60
		::System::UInt32 _NormalAchievedProgress_k__BackingField; // 0x64
		::System::UInt32 _AreaID_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueEndlessAreaData* Create(::System::UInt32 areaID)
		{
			return ((::RPG::Client::RogueEndlessAreaData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_CREATE_OFFSET))(areaID);
		}

		::System::Void Sync(::Class_1_C2029720BB7172FE_9* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C2029720BB7172FE_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SYNC_OFFSET))(this, data);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCurrentSelfAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTSELFAVATARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCurrentTrialAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTTRIALAVATARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetCurrentAvatarDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTAVATARDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* GetCurrentBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTBUFFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* GetCurrentMiracles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTMIRACLES_OFFSET))(this);
		}

		::System::Boolean IsFreeBuff(::System::UInt32 buffID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEBUFF_OFFSET))(this, buffID);
		}

		::System::Boolean IsFreeMiracle(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEMIRACLE_OFFSET))(this, miracleID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRewardQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETREWARDQUESTIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetEndlessWaveIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetEndlessWaveMonsterDatas(::System::UInt32 waveID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEMONSTERDATAS_OFFSET))(this, waveID);
		}

		::System::Void RegisterSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_REGISTERSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 _GetEndlessStageInfiniteGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA__GETENDLESSSTAGEINFINITEGROUPID_OFFSET))(this);
		}

		::System::Void _OnScheduleStart(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA__ONSCHEDULESTART_OFFSET))(this, data);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_MechanismTexts()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_MECHANISMTEXTS_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_RogueMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ROGUEMAPID_OFFSET))(this);
		}

		::RPG::GameCore::RogueAreaConfigRow* get_AreaRow()
		{
			return ((::RPG::GameCore::RogueAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAROW_OFFSET))(this);
		}

		::System::Void set_AreaRow(::RPG::GameCore::RogueAreaConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAROW_OFFSET))(this, value);
		}

		::RPG::GameCore::ActivityRogueAreaConfigRow* get_ActivityAreaRow()
		{
			return ((::RPG::GameCore::ActivityRogueAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ACTIVITYAREAROW_OFFSET))(this);
		}

		::System::Void set_ActivityAreaRow(::RPG::GameCore::ActivityRogueAreaConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityRogueAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ACTIVITYAREAROW_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_EntranceImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCEIMAGE_OFFSET))(this);
		}

		::System::String* get_EntranceLockedImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCELOCKEDIMAGE_OFFSET))(this);
		}

		::System::UInt32 get_RecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDTYPES_OFFSET))(this);
		}

		::System::UInt32 get_NormalMaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALMAXPROGRESS_OFFSET))(this);
		}

		::System::Void set_NormalMaxProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALMAXPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_EndlessMaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSMAXPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_FreeBuffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEBUFFDATAS_OFFSET))(this);
		}

		::System::Void set_FreeBuffDatas(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_FREEBUFFDATAS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_FreeMiracleIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEMIRACLEIDS_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_28 get_NormalStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALSTATUS_OFFSET))(this);
		}

		::System::Void set_NormalStatus(::Enum_3_4608E37A1B3D374A_28 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALSTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISDOING_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Boolean get_HasEnteredEndless()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENTEREDENDLESS_OFFSET))(this);
		}

		::System::Void set_HasEnteredEndless(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_HASENTEREDENDLESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsNormalFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISNORMALFINISHED_OFFSET))(this);
		}

		::System::Boolean get_HasEndlessScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENDLESSSCORE_OFFSET))(this);
		}

		::System::UInt32 get_NormalAchievedProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALACHIEVEDPROGRESS_OFFSET))(this);
		}

		::System::Void set_NormalAchievedProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALACHIEVEDPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_NormalCurrentProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALCURRENTPROGRESS_OFFSET))(this);
		}

		::System::Void set_NormalCurrentProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALCURRENTPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_EndlessAchievedProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDPROGRESS_OFFSET))(this);
		}

		::System::Void set_EndlessAchievedProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_EndlessAchievedScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDSCORE_OFFSET))(this);
		}

		::System::Void set_EndlessAchievedScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDSCORE_OFFSET))(this, value);
		}

		::System::Int32 get_EndlessAchievedRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDRANK_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RoguePickAvatarInfo* get_PickAvatarInfo()
		{
			return ((::RPG::Client::RoguePickAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_PICKAVATARINFO_OFFSET))(this);
		}
	};
}
