#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_8.h"
#include "unitysdk/RPG/Client/ClientPunkLordAttackerStatus.h"
#include "unitysdk/RPG/Client/ClientPunkLordShareType.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_21DCD4640D389503_6;
class Class_1_95C0420F56A6EE67_1;
class Class_1_99711449DFAB5464;
class Class_1_CD9875F83BA64B10;
class Class_1_E7C4009BCC22497A;
class Class_1_EBB10EC01CCC4716;
class Class_1_F3ECA6195BFBE70F_2;
namespace RPG::Client { class PunkLordHonor; }
namespace RPG::Client { class PunkLordScore; }
namespace RPG::GameCore { class ActivityPunkLordConfigRow; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace RPG::GameCore { class RaidConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PUNKLORDDATA_APPENDBATTLERECORD_OFFSET UNITYSDK_OFFSET(0x9D22E20)
#define RPG_CLIENT_PUNKLORDDATA_COLLECTUIDS_OFFSET UNITYSDK_OFFSET(0x9D22AF0)
#define RPG_CLIENT_PUNKLORDDATA_FILLDATAFORSDKRECORD_OFFSET UNITYSDK_OFFSET(0x9D22440)
#define RPG_CLIENT_PUNKLORDDATA_GETHONORLIST_OFFSET UNITYSDK_OFFSET(0x9D22AA0)
#define RPG_CLIENT_PUNKLORDDATA_GETRECORDBYKEY_OFFSET UNITYSDK_OFFSET(0x9D222D0)
#define RPG_CLIENT_PUNKLORDDATA_GETREPLAYBYKEY_OFFSET UNITYSDK_OFFSET(0x9D22160)
#define RPG_CLIENT_PUNKLORDDATA_GET_ATTACKERSLIST_OFFSET UNITYSDK_OFFSET(0x9D23070)
#define RPG_CLIENT_PUNKLORDDATA_GET_ATTACKNUM_OFFSET UNITYSDK_OFFSET(0x9D22FD0)
#define RPG_CLIENT_PUNKLORDDATA_GET_BATTLERECORDLIST_OFFSET UNITYSDK_OFFSET(0x9D23090)
#define RPG_CLIENT_PUNKLORDDATA_GET_BATTLEREPLAYLIST_OFFSET UNITYSDK_OFFSET(0x9D230B0)
#define RPG_CLIENT_PUNKLORDDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9D23230)
#define RPG_CLIENT_PUNKLORDDATA_GET_CURHP_OFFSET UNITYSDK_OFFSET(0x9D23010)
#define RPG_CLIENT_PUNKLORDDATA_GET_DISPLAYMONSTERID_OFFSET UNITYSDK_OFFSET(0x9D23280)
#define RPG_CLIENT_PUNKLORDDATA_GET_EXPIREDATETIME_OFFSET UNITYSDK_OFFSET(0x9D23050)
#define RPG_CLIENT_PUNKLORDDATA_GET_EXPIRETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D23030)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISATTACKING_OFFSET UNITYSDK_OFFSET(0x9D22F70)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISGENBYSYSTEM_OFFSET UNITYSDK_OFFSET(0x9D22F50)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISSHARED_OFFSET UNITYSDK_OFFSET(0x9D22F90)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISSUMMONEDBYSELF_OFFSET UNITYSDK_OFFSET(0x9D23170)
#define RPG_CLIENT_PUNKLORDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9D23290)
#define RPG_CLIENT_PUNKLORDDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x9D232B0)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERBASICINFO_OFFSET UNITYSDK_OFFSET(0x9D230D0)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERKEY_OFFSET UNITYSDK_OFFSET(0x9D22F10)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERROW_OFFSET UNITYSDK_OFFSET(0x9D23260)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERTEMPLATEROW_OFFSET UNITYSDK_OFFSET(0x9D23270)
#define RPG_CLIENT_PUNKLORDDATA_GET_PUNKLORDROW_OFFSET UNITYSDK_OFFSET(0x9D23240)
#define RPG_CLIENT_PUNKLORDDATA_GET_RAIDCONFIGROW_OFFSET UNITYSDK_OFFSET(0x9D23250)
#define RPG_CLIENT_PUNKLORDDATA_GET_RAIDID_OFFSET UNITYSDK_OFFSET(0x9D21CE0)
#define RPG_CLIENT_PUNKLORDDATA_GET_SELFATTACKNUM_OFFSET UNITYSDK_OFFSET(0x9D22FF0)
#define RPG_CLIENT_PUNKLORDDATA_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x9D22EE0)
#define RPG_CLIENT_PUNKLORDDATA_GET_SHARETYPE_OFFSET UNITYSDK_OFFSET(0x9D22FB0)
#define RPG_CLIENT_PUNKLORDDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9D22F30)
#define RPG_CLIENT_PUNKLORDDATA_GET_SUMMONPLAYERUID_OFFSET UNITYSDK_OFFSET(0x9D22EF0)
#define RPG_CLIENT_PUNKLORDDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x9D230F0)
#define RPG_CLIENT_PUNKLORDDATA_GET_WORLDLV_OFFSET UNITYSDK_OFFSET(0x9D21D00)
#define RPG_CLIENT_PUNKLORDDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9D22A60)
#define RPG_CLIENT_PUNKLORDDATA_SET_ATTACKERSLIST_OFFSET UNITYSDK_OFFSET(0x9D23080)
#define RPG_CLIENT_PUNKLORDDATA_SET_ATTACKNUM_OFFSET UNITYSDK_OFFSET(0x9D22FE0)
#define RPG_CLIENT_PUNKLORDDATA_SET_BATTLERECORDLIST_OFFSET UNITYSDK_OFFSET(0x9D230A0)
#define RPG_CLIENT_PUNKLORDDATA_SET_BATTLEREPLAYLIST_OFFSET UNITYSDK_OFFSET(0x9D230C0)
#define RPG_CLIENT_PUNKLORDDATA_SET_CURHP_OFFSET UNITYSDK_OFFSET(0x9D23020)
#define RPG_CLIENT_PUNKLORDDATA_SET_EXPIREDATETIME_OFFSET UNITYSDK_OFFSET(0x9D23060)
#define RPG_CLIENT_PUNKLORDDATA_SET_EXPIRETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D23040)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISATTACKING_OFFSET UNITYSDK_OFFSET(0x9D22F80)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISGENBYSYSTEM_OFFSET UNITYSDK_OFFSET(0x9D22F60)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISSHARED_OFFSET UNITYSDK_OFFSET(0x9D22FA0)
#define RPG_CLIENT_PUNKLORDDATA_SET_MONSTERBASICINFO_OFFSET UNITYSDK_OFFSET(0x9D230E0)
#define RPG_CLIENT_PUNKLORDDATA_SET_MONSTERKEY_OFFSET UNITYSDK_OFFSET(0x9D22F20)
#define RPG_CLIENT_PUNKLORDDATA_SET_SELFATTACKNUM_OFFSET UNITYSDK_OFFSET(0x9D23000)
#define RPG_CLIENT_PUNKLORDDATA_SET_SHARETYPE_OFFSET UNITYSDK_OFFSET(0x9D22FC0)
#define RPG_CLIENT_PUNKLORDDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9D22F40)
#define RPG_CLIENT_PUNKLORDDATA_SET_SUMMONPLAYERUID_OFFSET UNITYSDK_OFFSET(0x9D22F00)
#define RPG_CLIENT_PUNKLORDDATA_SYNCATTACKERINFO_OFFSET UNITYSDK_OFFSET(0x9D21F60)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBASICINFO_OFFSET UNITYSDK_OFFSET(0x9D21DB0)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_1_OFFSET UNITYSDK_OFFSET(0x9D22000)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_OFFSET UNITYSDK_OFFSET(0x9D21EB0)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLEREPLAY_OFFSET UNITYSDK_OFFSET(0x9D22080)
#define RPG_CLIENT_PUNKLORDDATA_SYNCSHARESTATE_OFFSET UNITYSDK_OFFSET(0x9D22100)
#define RPG_CLIENT_PUNKLORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9D21D20)
#define RPG_CLIENT_PUNKLORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D21B50)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordData_TypeDefinitionIndex = 53160;

	class PunkLordData : public ::System::Object
	{
	public:
		::Class_1_EBB10EC01CCC4716* _MonsterBasicInfo_k__BackingField; // 0x10
		::RPG::Client::PunkLordScore* Score; // 0x18
		::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>* _BattleRecordList_k__BackingField; // 0x20
		::RPG::GameCore::MonsterTemplateRow* _MonsterTemplateRow_k__BackingField; // 0x28
		::RPG::GameCore::MonsterRow* _MonsterRow_k__BackingField; // 0x30
		::RPG::GameCore::ActivityPunkLordConfigRow* _PunkLordRow_k__BackingField; // 0x38
		::RPG::GameCore::RaidConfigRow* _RaidConfigRow_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _AttackersList_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* _BattleReplayList_k__BackingField; // 0x50
		::System::UInt32 _CurHP_k__BackingField; // 0x58
		::System::UInt32 _DisplayMonsterID_k__BackingField; // 0x5C
		::RPG::Client::DateTimePro _ExpireDateTime_k__BackingField; // 0x60
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _MonsterKey_k__BackingField; // 0x68
		::System::UInt32 _AttackNum_k__BackingField; // 0x70
		::RPG::Client::ClientPunkLordAttackerStatus _Status_k__BackingField; // 0x74
		::System::UInt32 _SummonPlayerUID_k__BackingField; // 0x78
		::System::UInt32 _ServerID_k__BackingField; // 0x7C
		::System::UInt32 _ExpireTimeStamp_k__BackingField; // 0x80
		::RPG::Client::ClientPunkLordShareType _ShareType_k__BackingField; // 0x84
		::System::UInt32 _SelfAttackNum_k__BackingField; // 0x88
		::System::Boolean _IsShared_k__BackingField; // 0x8C
		::System::Boolean _IsAttacking_k__BackingField; // 0x8D
		::System::Boolean _IsGenBySystem_k__BackingField; // 0x8E
		::System::Boolean IsTakenScore; // 0x8F
		::System::UInt32 _ConfigID_k__BackingField; // 0x90

		::System::Void _ctor(::System::UInt32 serverID, ::System::UInt32 summonUID, ::System::UInt32 configID, ::System::UInt32 worldLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA__CTOR_OFFSET))(this, serverID, summonUID, configID, worldLevel);
		}

		::System::Void Sync(::Class_1_95C0420F56A6EE67_1* plMonsterInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_95C0420F56A6EE67_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNC_OFFSET))(this, plMonsterInfo);
		}

		::System::Void SyncBasicInfo(::Class_1_EBB10EC01CCC4716* basicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBASICINFO_OFFSET))(this, basicInfo);
		}

		::System::Void SyncAttackerInfo(::System::Collections::Generic::List_1<::System::UInt32>* attackersList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCATTACKERINFO_OFFSET))(this, attackersList);
		}

		::System::Void SyncBattleRecord(::Class_1_E7C4009BCC22497A* battleRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_OFFSET))(this, battleRecordList);
		}

		::System::Void SyncBattleRecord_1(::System::Collections::Generic::IEnumerable_1<::Class_1_21DCD4640D389503_6*>* battleRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_21DCD4640D389503_6*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_1_OFFSET))(this, battleRecordList);
		}

		::System::Void SyncBattleReplay(::System::Collections::Generic::IEnumerable_1<::Class_1_F3ECA6195BFBE70F_2*>* battleReplayList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F3ECA6195BFBE70F_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLEREPLAY_OFFSET))(this, battleReplayList);
		}

		::System::Void SyncShareState(::Enum_3_0A3761FE34514D6C_8 shareType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCSHARESTATE_OFFSET))(this, shareType);
		}

		::Class_1_99711449DFAB5464* GetReplayByKey(::System::String* key)
		{
			return ((::Class_1_99711449DFAB5464*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GETREPLAYBYKEY_OFFSET))(this, key);
		}

		::Class_1_CD9875F83BA64B10* GetRecordByKey(::System::String* key)
		{
			return ((::Class_1_CD9875F83BA64B10*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GETRECORDBYKEY_OFFSET))(this, key);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FillDataForSDKRecord(::System::String* battleReplayKey, ::System::Int32 op)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_FILLDATAFORSDKRECORD_OFFSET))(this, battleReplayKey, op);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PunkLordHonor*>* GetHonorList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PunkLordHonor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GETHONORLIST_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* CollectUids()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_COLLECTUIDS_OFFSET))(this);
		}

		::System::Void AppendBattleRecord(::Class_1_CD9875F83BA64B10* battleRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CD9875F83BA64B10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_APPENDBATTLERECORD_OFFSET))(this, battleRecord);
		}

		::System::UInt32 get_ServerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SERVERID_OFFSET))(this);
		}

		::System::UInt32 get_SummonPlayerUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SUMMONPLAYERUID_OFFSET))(this);
		}

		::System::Void set_SummonPlayerUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_SUMMONPLAYERUID_OFFSET))(this, value);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> get_MonsterKey()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MONSTERKEY_OFFSET))(this);
		}

		::System::Void set_MonsterKey(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_MONSTERKEY_OFFSET))(this, value);
		}

		::RPG::Client::ClientPunkLordAttackerStatus get_Status()
		{
			return ((::RPG::Client::ClientPunkLordAttackerStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::ClientPunkLordAttackerStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClientPunkLordAttackerStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsGenBySystem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ISGENBYSYSTEM_OFFSET))(this);
		}

		::System::Void set_IsGenBySystem(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ISGENBYSYSTEM_OFFSET))(this, value);
		}

		::System::Boolean get_IsAttacking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ISATTACKING_OFFSET))(this);
		}

		::System::Void set_IsAttacking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ISATTACKING_OFFSET))(this, value);
		}

		::System::Boolean get_IsShared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ISSHARED_OFFSET))(this);
		}

		::System::Void set_IsShared(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ISSHARED_OFFSET))(this, value);
		}

		::RPG::Client::ClientPunkLordShareType get_ShareType()
		{
			return ((::RPG::Client::ClientPunkLordShareType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SHARETYPE_OFFSET))(this);
		}

		::System::Void set_ShareType(::RPG::Client::ClientPunkLordShareType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClientPunkLordShareType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_SHARETYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_AttackNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ATTACKNUM_OFFSET))(this);
		}

		::System::Void set_AttackNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ATTACKNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_SelfAttackNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SELFATTACKNUM_OFFSET))(this);
		}

		::System::Void set_SelfAttackNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_SELFATTACKNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_CurHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_CURHP_OFFSET))(this);
		}

		::System::Void set_CurHP(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_CURHP_OFFSET))(this, value);
		}

		::System::UInt32 get_ExpireTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_EXPIRETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_ExpireTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_EXPIRETIMESTAMP_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro get_ExpireDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_EXPIREDATETIME_OFFSET))(this);
		}

		::System::Void set_ExpireDateTime(::RPG::Client::DateTimePro value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_EXPIREDATETIME_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AttackersList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ATTACKERSLIST_OFFSET))(this);
		}

		::System::Void set_AttackersList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ATTACKERSLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>* get_BattleRecordList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_BATTLERECORDLIST_OFFSET))(this);
		}

		::System::Void set_BattleRecordList(::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_BATTLERECORDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* get_BattleReplayList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_BATTLEREPLAYLIST_OFFSET))(this);
		}

		::System::Void set_BattleReplayList(::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_BATTLEREPLAYLIST_OFFSET))(this, value);
		}

		::Class_1_EBB10EC01CCC4716* get_MonsterBasicInfo()
		{
			return ((::Class_1_EBB10EC01CCC4716*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MONSTERBASICINFO_OFFSET))(this);
		}

		::System::Void set_MonsterBasicInfo(::Class_1_EBB10EC01CCC4716* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_MONSTERBASICINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsSummonedBySelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ISSUMMONEDBYSELF_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_CONFIGID_OFFSET))(this);
		}

		::RPG::GameCore::ActivityPunkLordConfigRow* get_PunkLordRow()
		{
			return ((::RPG::GameCore::ActivityPunkLordConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_PUNKLORDROW_OFFSET))(this);
		}

		::RPG::GameCore::RaidConfigRow* get_RaidConfigRow()
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_RAIDCONFIGROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRow* get_MonsterRow()
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MONSTERROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterTemplateRow* get_MonsterTemplateRow()
		{
			return ((::RPG::GameCore::MonsterTemplateRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MONSTERTEMPLATEROW_OFFSET))(this);
		}

		::System::UInt32 get_DisplayMonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_DISPLAYMONSTERID_OFFSET))(this);
		}

		::System::UInt32 get_RaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_RAIDID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_WorldLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_WORLDLV_OFFSET))(this);
		}

		::System::UInt32 get_MaxHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MAXHP_OFFSET))(this);
		}
	};
}
