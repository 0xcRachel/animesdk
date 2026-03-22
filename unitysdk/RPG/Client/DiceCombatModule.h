#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_123C88940E7A8432;
class Class_1_3C58D309C7A040F5_16;
class Class_1_495E445F847601E8;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }
namespace RPG::Client::DiceCombat { class DiceCombatFriendData; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }
namespace RPG::Client::DiceCombat { class DiceCombatRedDot; }
namespace RPG::Client::DiceCombat { class DiceCombatShopData; }
namespace RPG::Client::DiceCombat { class DiceCombatShopGoodData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleData; }
namespace RPG::Client::DiceCombat { class DiceCombatStageInfo; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBATMODULE_BUYMULTISHOPGOODS_OFFSET UNITYSDK_OFFSET(0x904D550)
#define RPG_CLIENT_DICECOMBATMODULE_BUYSHOPGOOD_OFFSET UNITYSDK_OFFSET(0x904D1E0)
#define RPG_CLIENT_DICECOMBATMODULE_CANBUYAVATARSHOPGOODBYAVATARID_OFFSET UNITYSDK_OFFSET(0x904DF80)
#define RPG_CLIENT_DICECOMBATMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x904A210)
#define RPG_CLIENT_DICECOMBATMODULE_GETALLDICESCOUNT_OFFSET UNITYSDK_OFFSET(0x904C330)
#define RPG_CLIENT_DICECOMBATMODULE_GETAVATARCONFIGINFOLIST_OFFSET UNITYSDK_OFFSET(0x903B810)
#define RPG_CLIENT_DICECOMBATMODULE_GETAVATARGOODDATABYID_OFFSET UNITYSDK_OFFSET(0x904B5B0)
#define RPG_CLIENT_DICECOMBATMODULE_GETCOMMUNICATEDATA_OFFSET UNITYSDK_OFFSET(0x904C830)
#define RPG_CLIENT_DICECOMBATMODULE_GETCONFIGAVATARINFO_OFFSET UNITYSDK_OFFSET(0x903C630)
#define RPG_CLIENT_DICECOMBATMODULE_GETCURRENTPURCHASABLEDICESET_OFFSET UNITYSDK_OFFSET(0x903C760)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICECOMBATBATCHBUYMODE_OFFSET UNITYSDK_OFFSET(0x904DFF0)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGDATA_OFFSET UNITYSDK_OFFSET(0x903CC50)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGINFOLIST_OFFSET UNITYSDK_OFFSET(0x903BE00)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICEGOODDATABYID_OFFSET UNITYSDK_OFFSET(0x9040590)
#define RPG_CLIENT_DICECOMBATMODULE_GETFRIENDDATALIST_OFFSET UNITYSDK_OFFSET(0x904E430)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLISTBYREF_OFFSET UNITYSDK_OFFSET(0x904B130)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLIST_OFFSET UNITYSDK_OFFSET(0x904B0C0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLISTBYREF_OFFSET UNITYSDK_OFFSET(0x904AFC0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLIST_OFFSET UNITYSDK_OFFSET(0x904AED0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9048D30)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFOLIST_OFFSET UNITYSDK_OFFSET(0x904BB50)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFO_OFFSET UNITYSDK_OFFSET(0x904BFA0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICESCOUNT_OFFSET UNITYSDK_OFFSET(0x904C180)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVESAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0x904A8F0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVPSAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0x904ABE0)
#define RPG_CLIENT_DICECOMBATMODULE_GETSHOPDATA_OFFSET UNITYSDK_OFFSET(0x904C960)
#define RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATABYGOODID_OFFSET UNITYSDK_OFFSET(0x904CB90)
#define RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATA_OFFSET UNITYSDK_OFFSET(0x904CA60)
#define RPG_CLIENT_DICECOMBATMODULE_GETSPECIALRULEDATA_OFFSET UNITYSDK_OFFSET(0x904BC40)
#define RPG_CLIENT_DICECOMBATMODULE_GETSTAGEIDBYENTITYCONFIGKEY_OFFSET UNITYSDK_OFFSET(0x904A850)
#define RPG_CLIENT_DICECOMBATMODULE_GETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x904A710)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYAVATARREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x9042260)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9042B00)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9042180)
#define RPG_CLIENT_DICECOMBATMODULE_GET_DICECOMBATREDDOT_OFFSET UNITYSDK_OFFSET(0x904FAF0)
#define RPG_CLIENT_DICECOMBATMODULE_GET_FINISHEDSTAGES_OFFSET UNITYSDK_OFFSET(0x904FAC0)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ISALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0x904FAE0)
#define RPG_CLIENT_DICECOMBATMODULE_GET_OFFERINGID_OFFSET UNITYSDK_OFFSET(0x9039970)
#define RPG_CLIENT_DICECOMBATMODULE_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0x904FA80)
#define RPG_CLIENT_DICECOMBATMODULE_GET_SORTEDSHOPDATALIST_OFFSET UNITYSDK_OFFSET(0x904FAA0)
#define RPG_CLIENT_DICECOMBATMODULE_HASORCANBUYRECOMMENDCOLORDICEFORAVATAR_OFFSET UNITYSDK_OFFSET(0x904BD80)
#define RPG_CLIENT_DICECOMBATMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9049DE0)
#define RPG_CLIENT_DICECOMBATMODULE_ISACTIVITYINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9042640)
#define RPG_CLIENT_DICECOMBATMODULE_ISDICERECOMMENDFORAVATAR_OFFSET UNITYSDK_OFFSET(0x904C080)
#define RPG_CLIENT_DICECOMBATMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x904A320)
#define RPG_CLIENT_DICECOMBATMODULE_PREPAREMISSIONDATABEFORELOADING_OFFSET UNITYSDK_OFFSET(0x904A5B0)
#define RPG_CLIENT_DICECOMBATMODULE_SENDDICECOMBATFINISHPVESTAGECSREQ_OFFSET UNITYSDK_OFFSET(0x904C770)
#define RPG_CLIENT_DICECOMBATMODULE_SETALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0x904E470)
#define RPG_CLIENT_DICECOMBATMODULE_SETDICECOMBATBATCHBUYMODE_OFFSET UNITYSDK_OFFSET(0x904E0A0)
#define RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVESAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0x904AB30)
#define RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVPSAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0x904AE20)
#define RPG_CLIENT_DICECOMBATMODULE_SET_DICECOMBATREDDOT_OFFSET UNITYSDK_OFFSET(0x904FB00)
#define RPG_CLIENT_DICECOMBATMODULE_SET_FINISHEDSTAGES_OFFSET UNITYSDK_OFFSET(0x904FAD0)
#define RPG_CLIENT_DICECOMBATMODULE_SET_ISALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0x904E4E0)
#define RPG_CLIENT_DICECOMBATMODULE_SET_PVPMGR_OFFSET UNITYSDK_OFFSET(0x904FA90)
#define RPG_CLIENT_DICECOMBATMODULE_SET_SORTEDSHOPDATALIST_OFFSET UNITYSDK_OFFSET(0x904FAB0)
#define RPG_CLIENT_DICECOMBATMODULE_TRIGGERADVENTUREDICECOMBATGROUPCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x904C5B0)
#define RPG_CLIENT_DICECOMBATMODULE_UPDATEFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x904E150)
#define RPG_CLIENT_DICECOMBATMODULE_UPDATESHOPDATA_OFFSET UNITYSDK_OFFSET(0x904CF70)
#define RPG_CLIENT_DICECOMBATMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x904A270)
#define RPG_CLIENT_DICECOMBATMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9047220)
#define RPG_CLIENT_DICECOMBATMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x904FB10)
#define RPG_CLIENT_DICECOMBATMODULE__GENSHOWADDITEMDIALOGDELEGATE_OFFSET UNITYSDK_OFFSET(0x904DCB0)
#define RPG_CLIENT_DICECOMBATMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x904EA20)
#define RPG_CLIENT_DICECOMBATMODULE__GETFLOORCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x904EE70)
#define RPG_CLIENT_DICECOMBATMODULE__INIT_B__16_0_OFFSET UNITYSDK_OFFSET(0x904FBB0)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDAVATAR_OFFSET UNITYSDK_OFFSET(0x9047F00)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDDICE_OFFSET UNITYSDK_OFFSET(0x9048010)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSPFORMULTIBUYSHOPGOODS_OFFSET UNITYSDK_OFFSET(0x9048A40)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSP_OFFSET UNITYSDK_OFFSET(0x90481D0)
#define RPG_CLIENT_DICECOMBATMODULE__ONADVENTUREPHASEMAPCREATED_OFFSET UNITYSDK_OFFSET(0x904EB40)
#define RPG_CLIENT_DICECOMBATMODULE__ONBUYSHOPGOODSCRSP_OFFSET UNITYSDK_OFFSET(0x9049B20)
#define RPG_CLIENT_DICECOMBATMODULE__ONFINISHPVESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x9049D00)
#define RPG_CLIENT_DICECOMBATMODULE__ONGETSHOPDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9049400)
#define RPG_CLIENT_DICECOMBATMODULE__ONGETSYSTEMDATARSP_OFFSET UNITYSDK_OFFSET(0x9047440)
#define RPG_CLIENT_DICECOMBATMODULE__ONMODIFYAVATARDICERSP_OFFSET UNITYSDK_OFFSET(0x9048AF0)
#define RPG_CLIENT_DICECOMBATMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x904E530)
#define RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERGETMATCHPLAYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9048FF0)
#define RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERMATCHPLAYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9049320)
#define RPG_CLIENT_DICECOMBATMODULE__ONUPGRADEAVATARRSP_OFFSET UNITYSDK_OFFSET(0x9048DF0)
#define RPG_CLIENT_DICECOMBATMODULE__REQUESTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x904E580)
#define RPG_CLIENT_DICECOMBATMODULE__REQUESTMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x904E930)
#define RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDAVATAR_OFFSET UNITYSDK_OFFSET(0x9048540)
#define RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDDICE_OFFSET UNITYSDK_OFFSET(0x90487B0)
#define RPG_CLIENT_DICECOMBATMODULE__SORTFRIENDDATALIST_OFFSET UNITYSDK_OFFSET(0x904F520)
#define RPG_CLIENT_DICECOMBATMODULE__SYNCFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x904EF00)
#define RPG_CLIENT_DICECOMBATMODULE__UPDATESHOPDATALIST_OFFSET UNITYSDK_OFFSET(0x9049590)
#define RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x904FE60)
#define RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x904FDD0)
#define RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x904FED0)
#define RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x904FE70)
#define RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x904FD70)
#define RPG_CLIENT_DICECOMBATMODULE___REQUESTACTIVITYDATA_B__63_0_OFFSET UNITYSDK_OFFSET(0x904FC90)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatModule_TypeDefinitionIndex = 50470;

	class DiceCombatModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatShopData*>* _ShopDatas; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>* _SortedShopDataList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatFriendData*>* _FriendDatas; // 0x20
		::RPG::Client::Promises::Promise* _WaitGetShopDataRspPromise; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _LeftGetItemIDList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombatDiceConfigData*>* _DiceDatas; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*>* _SpecialRuleDatas; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* _PlayerAvatarInfos; // 0x48
		::RPG::Client::DiceCombat::DiceCombatPVPManager* _PVPMgr_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_495E445F847601E8*>* _PlayerDiceDatas; // 0x58
		::RPG::Client::Promises::Promise* _WaitGetItemNotifyPromise; // 0x60
		::RPG::Client::DiceCombat::DiceCombatRedDot* _DiceCombatRedDot_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatStageInfo*>* _StageInfos; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* _CurFloorEntityConfigKeyToStageID; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* _AvatarConfigInfos; // 0x80
		::RPG::Client::Promises::Promise* _WaitMultiGetItemPromise; // 0x88
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedStages_k__BackingField; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*>* _CommunicateDatas; // 0x98
		::RPG::Client::Promises::Promise* _WaitMultiBuyShopGoodRspPromise; // 0xA0
		::RPG::Client::Promises::Promise* _WaitBuyShopGoodRspPromise; // 0xA8
		::System::Int32 _LeftBuyShopGoodRspCount; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetSystemDataRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONGETSYSTEMDATARSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAddItemRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAddItemRspForMultiBuyShopGoods(::System::Nullable_1<::System::UInt32> itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSPFORMULTIBUYSHOPGOODS_OFFSET))(this, itemID);
		}

		::System::Void _OnModifyAvatarDiceRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMODIFYAVATARDICERSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnUpgradeAvatarRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONUPGRADEAVATARRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAddAvatar(::System::UInt32 avatarID, ::Class_1_123C88940E7A8432* protoAvatar, ::System::Int64 unlockTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_123C88940E7A8432*, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDAVATAR_OFFSET))(this, avatarID, protoAvatar, unlockTime);
		}

		::System::Void _OnAddDice(::System::UInt32 diceID, ::System::Int64 unlockTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDDICE_OFFSET))(this, diceID, unlockTime);
		}

		::System::Void _ShowGetItemDialogOnAddAvatar(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void _ShowGetItemDialogOnAddDice(::System::UInt32 diceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDDICE_OFFSET))(this, diceID);
		}

		::System::Void _OnMultiplayerGetMatchPlayDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERGETMATCHPLAYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMultiplayerMatchPlayDataChangeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERMATCHPLAYDATACHANGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetShopDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONGETSHOPDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnBuyShopGoodScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONBUYSHOPGOODSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFinishPveStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONFINISHPVESTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _UpdateShopDataList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_16*>* shopDataList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_16*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__UPDATESHOPDATALIST_OFFSET))(this, shopDataList);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void PrepareMissionDataBeforeLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_PREPAREMISSIONDATABEFORELOADING_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatStageInfo* GetStageInfo(::System::UInt32 stageID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatStageInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSTAGEINFO_OFFSET))(this, stageID);
		}

		::System::Boolean IsActivityInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISACTIVITYINSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 GetStageIDByEntityConfigKey(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSTAGEIDBYENTITYCONFIGKEY_OFFSET))(this, groupID, instanceID);
		}

		::System::UInt32 GetPlayerPVESavedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVESAVEDAVATARID_OFFSET))(this);
		}

		::System::Void SetPlayerPVESavedAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVESAVEDAVATARID_OFFSET))(this, avatarID);
		}

		::System::UInt32 GetPlayerPVPSavedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVPSAVEDAVATARID_OFFSET))(this);
		}

		::System::Void SetPlayerPVPSavedAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVPSAVEDAVATARID_OFFSET))(this, avatarID);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* GetPlayerAvatarInfo(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFO_OFFSET))(this, avatarID);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* GetConfigAvatarInfo(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETCONFIGAVATARINFO_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* GetPlayerAvatarInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLIST_OFFSET))(this);
		}

		::System::Void GetPlayerAvatarInfoListByRef(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* avatarInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLISTBYREF_OFFSET))(this, avatarInfoList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* GetPlayerAndCanBuyAvatarInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLIST_OFFSET))(this);
		}

		::System::Void GetPlayerAndCanBuyAvatarInfoListByRef(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* avatarInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLISTBYREF_OFFSET))(this, avatarInfoList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* GetAvatarConfigInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETAVATARCONFIGINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_495E445F847601E8*>* GetPlayerDiceInfoList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_495E445F847601E8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFOLIST_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatSpecialRuleData* GetSpecialRuleData(::System::UInt32 ruleID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSPECIALRULEDATA_OFFSET))(this, ruleID);
		}

		::System::Boolean HasOrCanBuyRecommendColorDiceForAvatar(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_HASORCANBUYRECOMMENDCOLORDICEFORAVATAR_OFFSET))(this, avatarID);
		}

		::System::Boolean IsDiceRecommendForAvatar(::System::UInt32 avatarID, ::System::UInt32 diceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISDICERECOMMENDFORAVATAR_OFFSET))(this, avatarID, diceID);
		}

		::RPG::Client::DiceCombatDiceConfigData* GetDiceConfigData(::System::UInt32 diceID)
		{
			return ((::RPG::Client::DiceCombatDiceConfigData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGDATA_OFFSET))(this, diceID);
		}

		::Class_1_495E445F847601E8* GetPlayerDiceInfo(::System::UInt32 diceID)
		{
			return ((::Class_1_495E445F847601E8*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFO_OFFSET))(this, diceID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>* GetDiceConfigInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGINFOLIST_OFFSET))(this);
		}

		::System::Int32 GetPlayerDicesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICESCOUNT_OFFSET))(this);
		}

		::System::Int32 GetAllDicesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETALLDICESCOUNT_OFFSET))(this);
		}

		::System::Void TriggerAdventureDiceCombatGroupCustomEvent(::System::UInt32 groupID, ::System::String* eventMsg, ::System::Action* groupEntityNullCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_TRIGGERADVENTUREDICECOMBATGROUPCUSTOMEVENT_OFFSET))(this, groupID, eventMsg, groupEntityNullCallBack);
		}

		::System::Void SendDiceCombatFinishPveStageCsReq(::System::UInt32 stageID, ::System::Boolean isWin, ::System::Boolean isFullHp, ::System::UInt32 damage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SENDDICECOMBATFINISHPVESTAGECSREQ_OFFSET))(this, stageID, isWin, isFullHp, damage);
		}

		::RPG::Client::DiceCombat::DiceCombatCommunicateData* GetCommunicateData(::System::UInt32 communicateConfigID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatCommunicateData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETCOMMUNICATEDATA_OFFSET))(this, communicateConfigID);
		}

		::RPG::Client::DiceCombat::DiceCombatShopData* GetShopData(::System::UInt32 shopID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSHOPDATA_OFFSET))(this, shopID);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetShopGoodData(::System::UInt32 shopID, ::System::UInt32 goodID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATA_OFFSET))(this, shopID, goodID);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetShopGoodDataByGoodID(::System::UInt32 goodID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATABYGOODID_OFFSET))(this, goodID);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetDiceGoodDataByID(::System::UInt32 diceID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICEGOODDATABYID_OFFSET))(this, diceID);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetAvatarGoodDataByID(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETAVATARGOODDATABYID_OFFSET))(this, avatarID);
		}

		::RPG::Client::Promises::IPromise* UpdateShopData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_UPDATESHOPDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* BuyShopGood(::System::UInt32 shopID, ::System::UInt32 goodID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_BUYSHOPGOOD_OFFSET))(this, shopID, goodID);
		}

		::RPG::Client::Promises::IPromise* BuyMultiShopGoods(::System::UInt32 shopID, ::System::Collections::Generic::List_1<::System::UInt32>* goodIDs)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_BUYMULTISHOPGOODS_OFFSET))(this, shopID, goodIDs);
		}

		::System::Boolean CanBuyAvatarShopGoodByAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_CANBUYAVATARSHOPGOODBYAVATARID_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetCurrentPurchasableDiceSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETCURRENTPURCHASABLEDICESET_OFFSET))(this);
		}

		::System::Boolean GetDiceCombatBatchBuyMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICECOMBATBATCHBUYMODE_OFFSET))(this);
		}

		::System::Void SetDiceCombatBatchBuyMode(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETDICECOMBATBATCHBUYMODE_OFFSET))(this, enable);
		}

		::RPG::Client::Promises::IPromise* UpdateFriendData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_UPDATEFRIENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatFriendData*>* GetFriendDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatFriendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETFRIENDDATALIST_OFFSET))(this);
		}

		::System::Void SetAllowPVPInvitation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETALLOWPVPINVITATION_OFFSET))(this, value);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void _RequestActivityData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__REQUESTACTIVITYDATA_OFFSET))(this);
		}

		::System::Void _RequestMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__REQUESTMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetDependantSubMissionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseMapCreated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADVENTUREPHASEMAPCREATED_OFFSET))(this, arg);
		}

		::System::String* _GetFloorConfigPath(::System::UInt32 floorID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__GETFLOORCONFIGPATH_OFFSET))(this, floorID);
		}

		::System::Void _SyncFriendData(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* friendDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SYNCFRIENDDATA_OFFSET))(this, friendDataList);
		}

		::System::Int32 _SortFriendDataList(::RPG::Client::DiceCombat::DiceCombatFriendData* a, ::RPG::Client::DiceCombat::DiceCombatFriendData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatFriendData*, ::RPG::Client::DiceCombat::DiceCombatFriendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SORTFRIENDDATALIST_OFFSET))(this, a, b);
		}

		::System::Action* _GenShowAddItemDialogDelegate(::System::UInt32 goodID)
		{
			return ((::System::Action*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__GENSHOWADDITEMDIALOGDELEGATE_OFFSET))(this, goodID);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::UInt32 get_OfferingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_OFFERINGID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityAvatarRewardQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYAVATARREWARDQUESTID_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatPVPManager* get_PVPMgr()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatPVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_PVPMGR_OFFSET))(this);
		}

		::System::Void set_PVPMgr(::RPG::Client::DiceCombat::DiceCombatPVPManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_PVPMGR_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>* get_SortedShopDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_SORTEDSHOPDATALIST_OFFSET))(this);
		}

		::System::Void set_SortedShopDataList(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_SORTEDSHOPDATALIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_FinishedStages()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_FINISHEDSTAGES_OFFSET))(this);
		}

		::System::Void set_FinishedStages(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_FINISHEDSTAGES_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllowPVPInvitation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ISALLOWPVPINVITATION_OFFSET))(this);
		}

		::System::Void set_IsAllowPVPInvitation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_ISALLOWPVPINVITATION_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatRedDot* get_DiceCombatRedDot()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatRedDot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_DICECOMBATREDDOT_OFFSET))(this);
		}

		::System::Void set_DiceCombatRedDot(::RPG::Client::DiceCombat::DiceCombatRedDot* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRedDot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_DICECOMBATREDDOT_OFFSET))(this, value);
		}

		::System::Void _Init_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__INIT_B__16_0_OFFSET))(this);
		}

		::System::Void __RequestActivityData_b__63_0(::RPG::Client::ScheduleData* _)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___REQUESTACTIVITYDATA_B__63_0_OFFSET))(this, _);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
