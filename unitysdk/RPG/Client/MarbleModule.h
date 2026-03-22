#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_2E87F4599236B73D;
class Class_1_594023CBCBC95203;
class Class_2_BCBF56C391A9F038;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class MarbleBall; }
namespace RPG::Client { class MarbleBattleResult; }
namespace RPG::Client { class MarbleBattleSealData; }
namespace RPG::Client { class MarbleHexInfo; }
namespace RPG::Client::ActivityMarble { class IMarblePlayer; }
namespace RPG::Client::ActivityMarble { class MarbleMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePVPManager; }
namespace RPG::Client::ActivityMarble { class MarblePlayerManager; }
namespace RPG::Client::ActivityMarble { class MarblePlayerProgressInfo; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::ActivityMarble { class MarbleSealManager; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace RPG::GameCore { class MarbleEmojiRow; }
namespace RPG::GameCore { class MarbleMatchInfoConfigRow; }
namespace RPG::GameCore { class MarbleMatchLevelConfigRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MARBLEMODULE_ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x9643E00)
#define RPG_CLIENT_MARBLEMODULE_CHANGEDISPLAYMARBLESEALLIST_OFFSET UNITYSDK_OFFSET(0x96446E0)
#define RPG_CLIENT_MARBLEMODULE_CLEARCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x96422B0)
#define RPG_CLIENT_MARBLEMODULE_DEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x9643E90)
#define RPG_CLIENT_MARBLEMODULE_DISPOSEPVEGAME_OFFSET UNITYSDK_OFFSET(0x96443F0)
#define RPG_CLIENT_MARBLEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9643970)
#define RPG_CLIENT_MARBLEMODULE_ENTERMARBLEMATCH_OFFSET UNITYSDK_OFFSET(0x9645290)
#define RPG_CLIENT_MARBLEMODULE_EXITMARBLEMATCH_OFFSET UNITYSDK_OFFSET(0x96453F0)
#define RPG_CLIENT_MARBLEMODULE_FORCEUNLOADGAMEAREA_OFFSET UNITYSDK_OFFSET(0x9643FC0)
#define RPG_CLIENT_MARBLEMODULE_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x96445A0)
#define RPG_CLIENT_MARBLEMODULE_GETALLYBATTLESEALS_OFFSET UNITYSDK_OFFSET(0x9637EF0)
#define RPG_CLIENT_MARBLEMODULE_GETALLYSUBSEALS_OFFSET UNITYSDK_OFFSET(0x9641CF0)
#define RPG_CLIENT_MARBLEMODULE_GETALLYTEAMINDEXBYENTITYID_OFFSET UNITYSDK_OFFSET(0x963BDD0)
#define RPG_CLIENT_MARBLEMODULE_GETAREAGROUPID_OFFSET UNITYSDK_OFFSET(0x9644E20)
#define RPG_CLIENT_MARBLEMODULE_GETBALL_OFFSET UNITYSDK_OFFSET(0x963FAF0)
#define RPG_CLIENT_MARBLEMODULE_GETBATTLESEAL_OFFSET UNITYSDK_OFFSET(0x963BEB0)
#define RPG_CLIENT_MARBLEMODULE_GETCURRENTBATTLEHEXINFO_OFFSET UNITYSDK_OFFSET(0x96427D0)
#define RPG_CLIENT_MARBLEMODULE_GETDISPLAYMARBLESEALIDLIST_OFFSET UNITYSDK_OFFSET(0x9644CF0)
#define RPG_CLIENT_MARBLEMODULE_GETEARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x96466F0)
#define RPG_CLIENT_MARBLEMODULE_GETEMOJIS_OFFSET UNITYSDK_OFFSET(0x9642930)
#define RPG_CLIENT_MARBLEMODULE_GETEMOJI_OFFSET UNITYSDK_OFFSET(0x9642AC0)
#define RPG_CLIENT_MARBLEMODULE_GETENEMYBATTLESEALS_OFFSET UNITYSDK_OFFSET(0x9642020)
#define RPG_CLIENT_MARBLEMODULE_GETENEMYSUBSEALS_OFFSET UNITYSDK_OFFSET(0x9641DD0)
#define RPG_CLIENT_MARBLEMODULE_GETENTITYIDBYALLYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x963B880)
#define RPG_CLIENT_MARBLEMODULE_GETFIRSTALLYBATTLESEAL_OFFSET UNITYSDK_OFFSET(0x9641B70)
#define RPG_CLIENT_MARBLEMODULE_GETFIRSTENEMYBATTLESEAL_OFFSET UNITYSDK_OFFSET(0x9641C30)
#define RPG_CLIENT_MARBLEMODULE_GETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x963EF70)
#define RPG_CLIENT_MARBLEMODULE_GETISMARBLELIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x96467B0)
#define RPG_CLIENT_MARBLEMODULE_GETMULTIPLAYACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9644640)
#define RPG_CLIENT_MARBLEMODULE_GETMULTIPLAYEARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x9646750)
#define RPG_CLIENT_MARBLEMODULE_GETSIMULATINGENTITYID_OFFSET UNITYSDK_OFFSET(0x96420C0)
#define RPG_CLIENT_MARBLEMODULE_GET_ALLYSCORE_OFFSET UNITYSDK_OFFSET(0x9642670)
#define RPG_CLIENT_MARBLEMODULE_GET_BATTLEGAMEMODE_OFFSET UNITYSDK_OFFSET(0x9642860)
#define RPG_CLIENT_MARBLEMODULE_GET_BATTLINGALLYPLAYER_OFFSET UNITYSDK_OFFSET(0x96470A0)
#define RPG_CLIENT_MARBLEMODULE_GET_BATTLINGENEMYPLAYER_OFFSET UNITYSDK_OFFSET(0x9647100)
#define RPG_CLIENT_MARBLEMODULE_GET_BATTLINGMATCHINFO_OFFSET UNITYSDK_OFFSET(0x9647040)
#define RPG_CLIENT_MARBLEMODULE_GET_COINITEMROW_OFFSET UNITYSDK_OFFSET(0x9647210)
#define RPG_CLIENT_MARBLEMODULE_GET_COUNTDOWNENDTIME_OFFSET UNITYSDK_OFFSET(0x9642840)
#define RPG_CLIENT_MARBLEMODULE_GET_CURLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x9647160)
#define RPG_CLIENT_MARBLEMODULE_GET_CURMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x96471F0)
#define RPG_CLIENT_MARBLEMODULE_GET_ENEMYSCORE_OFFSET UNITYSDK_OFFSET(0x96426F0)
#define RPG_CLIENT_MARBLEMODULE_GET_FUNDS_OFFSET UNITYSDK_OFFSET(0x9647390)
#define RPG_CLIENT_MARBLEMODULE_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9641B50)
#define RPG_CLIENT_MARBLEMODULE_GET_ISALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0x9647490)
#define RPG_CLIENT_MARBLEMODULE_GET_ISCOUNTINGDOWN_OFFSET UNITYSDK_OFFSET(0x9642820)
#define RPG_CLIENT_MARBLEMODULE_GET_ISCURRENTBATTLEPVP_OFFSET UNITYSDK_OFFSET(0x963FB50)
#define RPG_CLIENT_MARBLEMODULE_GET_ISINPVEPROGRESS_OFFSET UNITYSDK_OFFSET(0x9647470)
#define RPG_CLIENT_MARBLEMODULE_GET_MAINSUBPVPMGR_OFFSET UNITYSDK_OFFSET(0x9647020)
#define RPG_CLIENT_MARBLEMODULE_GET_MARBLESEALMGR_OFFSET UNITYSDK_OFFSET(0x9646FC0)
#define RPG_CLIENT_MARBLEMODULE_GET_PLAYERMANAGER_OFFSET UNITYSDK_OFFSET(0x9646FE0)
#define RPG_CLIENT_MARBLEMODULE_GET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x9646FB0)
#define RPG_CLIENT_MARBLEMODULE_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0x9647000)
#define RPG_CLIENT_MARBLEMODULE_GET_WINNINGSCORELINE_OFFSET UNITYSDK_OFFSET(0x9642880)
#define RPG_CLIENT_MARBLEMODULE_GET__FUNDSITEMID_OFFSET UNITYSDK_OFFSET(0x9647280)
#define RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMAINPAGE_OFFSET UNITYSDK_OFFSET(0x96371F0)
#define RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x9646620)
#define RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMULTIPLAYERPAGE_OFFSET UNITYSDK_OFFSET(0x9637320)
#define RPG_CLIENT_MARBLEMODULE_HIDEGAMEAREA_OFFSET UNITYSDK_OFFSET(0x9644080)
#define RPG_CLIENT_MARBLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9643710)
#define RPG_CLIENT_MARBLEMODULE_ISENEMY_OFFSET UNITYSDK_OFFSET(0x963A6E0)
#define RPG_CLIENT_MARBLEMODULE_ISINENEMYPHASE_OFFSET UNITYSDK_OFFSET(0x9640720)
#define RPG_CLIENT_MARBLEMODULE_ISINGAMEAREA_OFFSET UNITYSDK_OFFSET(0x9646550)
#define RPG_CLIENT_MARBLEMODULE_ISINPVEGAME_OFFSET UNITYSDK_OFFSET(0x9644540)
#define RPG_CLIENT_MARBLEMODULE_ISNEXTROUNDENEMY_OFFSET UNITYSDK_OFFSET(0x9642110)
#define RPG_CLIENT_MARBLEMODULE_ISUSEMULTIPLAYGROUPID_OFFSET UNITYSDK_OFFSET(0x9644FA0)
#define RPG_CLIENT_MARBLEMODULE_LOADGAMEAREA_OFFSET UNITYSDK_OFFSET(0x9643F10)
#define RPG_CLIENT_MARBLEMODULE_ONBATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0x9642770)
#define RPG_CLIENT_MARBLEMODULE_ONENTERMARBLEBATTLE_OFFSET UNITYSDK_OFFSET(0x9646250)
#define RPG_CLIENT_MARBLEMODULE_ONEXITMARBLEBATTLE_OFFSET UNITYSDK_OFFSET(0x9646370)
#define RPG_CLIENT_MARBLEMODULE_ONGAMEAREASTREAMINGFINISH_OFFSET UNITYSDK_OFFSET(0x9644170)
#define RPG_CLIENT_MARBLEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9643AF0)
#define RPG_CLIENT_MARBLEMODULE_ONTECHUICLOSE_OFFSET UNITYSDK_OFFSET(0x96454C0)
#define RPG_CLIENT_MARBLEMODULE_RANDOMLAUNCH_OFFSET UNITYSDK_OFFSET(0x9646200)
#define RPG_CLIENT_MARBLEMODULE_REMOVEGAMEAREAUSAGE_OFFSET UNITYSDK_OFFSET(0x9643F70)
#define RPG_CLIENT_MARBLEMODULE_RESUMEGAMEAREA_OFFSET UNITYSDK_OFFSET(0x9644110)
#define RPG_CLIENT_MARBLEMODULE_RESUMEPVEGAME_OFFSET UNITYSDK_OFFSET(0x9644470)
#define RPG_CLIENT_MARBLEMODULE_SAVEPVEGAME_OFFSET UNITYSDK_OFFSET(0x9643CC0)
#define RPG_CLIENT_MARBLEMODULE_SENDEMOJI_OFFSET UNITYSDK_OFFSET(0x9642B30)
#define RPG_CLIENT_MARBLEMODULE_SETALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0x9646490)
#define RPG_CLIENT_MARBLEMODULE_SETDYNAMICFLOATINGPARAMID_OFFSET UNITYSDK_OFFSET(0x9644390)
#define RPG_CLIENT_MARBLEMODULE_SETISINPVE_OFFSET UNITYSDK_OFFSET(0x9646440)
#define RPG_CLIENT_MARBLEMODULE_SETMARBLELIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x9646990)
#define RPG_CLIENT_MARBLEMODULE_SETMARBLEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x9643C70)
#define RPG_CLIENT_MARBLEMODULE_SETWATERSURFACE_OFFSET UNITYSDK_OFFSET(0x96441D0)
#define RPG_CLIENT_MARBLEMODULE_SETWAVEENABLE_OFFSET UNITYSDK_OFFSET(0x96465C0)
#define RPG_CLIENT_MARBLEMODULE_SET_COUNTDOWNENDTIME_OFFSET UNITYSDK_OFFSET(0x9642850)
#define RPG_CLIENT_MARBLEMODULE_SET_CURMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x9647200)
#define RPG_CLIENT_MARBLEMODULE_SET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9641B60)
#define RPG_CLIENT_MARBLEMODULE_SET_ISALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0x9646500)
#define RPG_CLIENT_MARBLEMODULE_SET_ISCOUNTINGDOWN_OFFSET UNITYSDK_OFFSET(0x9642830)
#define RPG_CLIENT_MARBLEMODULE_SET_ISINPVEPROGRESS_OFFSET UNITYSDK_OFFSET(0x9647480)
#define RPG_CLIENT_MARBLEMODULE_SET_MAINSUBPVPMGR_OFFSET UNITYSDK_OFFSET(0x9647030)
#define RPG_CLIENT_MARBLEMODULE_SET_MARBLESEALMGR_OFFSET UNITYSDK_OFFSET(0x9646FD0)
#define RPG_CLIENT_MARBLEMODULE_SET_PLAYERMANAGER_OFFSET UNITYSDK_OFFSET(0x9646FF0)
#define RPG_CLIENT_MARBLEMODULE_SET_PVPMGR_OFFSET UNITYSDK_OFFSET(0x9647010)
#define RPG_CLIENT_MARBLEMODULE_SHOWBATTLESCORERESULT_OFFSET UNITYSDK_OFFSET(0x9642300)
#define RPG_CLIENT_MARBLEMODULE_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x9642240)
#define RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_1_OFFSET UNITYSDK_OFFSET(0x9645900)
#define RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_2_OFFSET UNITYSDK_OFFSET(0x9645F00)
#define RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_OFFSET UNITYSDK_OFFSET(0x9645550)
#define RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVPGAME_OFFSET UNITYSDK_OFFSET(0x9645C00)
#define RPG_CLIENT_MARBLEMODULE_TRIGGERADVENTUREMARBLEGROUPCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x96450F0)
#define RPG_CLIENT_MARBLEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9646E10)
#define RPG_CLIENT_MARBLEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9642B90)
#define RPG_CLIENT_MARBLEMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9647540)
#define RPG_CLIENT_MARBLEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x96474A0)
#define RPG_CLIENT_MARBLEMODULE__ENTITYIDS2BATTLESEALS_OFFSET UNITYSDK_OFFSET(0x9641EB0)
#define RPG_CLIENT_MARBLEMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x9646C10)
#define RPG_CLIENT_MARBLEMODULE__GETPVPMGR_OFFSET UNITYSDK_OFFSET(0x9643520)
#define RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMAINPAGE_B__93_0_OFFSET UNITYSDK_OFFSET(0x96476B0)
#define RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_0_OFFSET UNITYSDK_OFFSET(0x9647CD0)
#define RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_1_OFFSET UNITYSDK_OFFSET(0x9647D30)
#define RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_2_OFFSET UNITYSDK_OFFSET(0x9647F90)
#define RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERPAGE_B__94_0_OFFSET UNITYSDK_OFFSET(0x96479C0)
#define RPG_CLIENT_MARBLEMODULE__INIT_B__54_0_OFFSET UNITYSDK_OFFSET(0x9647580)
#define RPG_CLIENT_MARBLEMODULE__ONMARBLEGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9642D50)
#define RPG_CLIENT_MARBLEMODULE__ONMARBLEPVPDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9643090)
#define RPG_CLIENT_MARBLEMODULE__ONMARBLESHOPBUYSCRSP_OFFSET UNITYSDK_OFFSET(0x9642FA0)
#define RPG_CLIENT_MARBLEMODULE__ONMARBLEUNLOCKSEALSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9642F20)
#define RPG_CLIENT_MARBLEMODULE__ONMARBLEUPDATESHOWNSEALSCRSP_OFFSET UNITYSDK_OFFSET(0x9643020)
#define RPG_CLIENT_MARBLEMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x96469F0)
#define RPG_CLIENT_MARBLEMODULE__ONMULTIPLAYERGETMATCHPLAYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9643160)
#define RPG_CLIENT_MARBLEMODULE__ONMULTIPLAYERMATCHPLAYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9643580)
#define RPG_CLIENT_MARBLEMODULE__ONSTARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x9642180)
#define RPG_CLIENT_MARBLEMODULE__REQUESTMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9646B20)
#define RPG_CLIENT_MARBLEMODULE__RESUMEPVEGAME_B__69_0_OFFSET UNITYSDK_OFFSET(0x9647660)
#define RPG_CLIENT_MARBLEMODULE__UPDATEDISPLAYMARBLESEALIDS_OFFSET UNITYSDK_OFFSET(0x9642E40)
#define RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96481C0)
#define RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9648130)
#define RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x96481D0)
#define RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9648230)
#define RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x96480D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleModule_TypeDefinitionIndex = 52309;

	class MarbleModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::String** StaticGet_ICE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule_TypeDefinitionIndex)->GetStaticField(0x2BE60);
		}
		static ::System::String** StaticGet_WATER_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule_TypeDefinitionIndex)->GetStaticField(0x2BE68);
		}
		static ::System::String** StaticGet_BLOCK_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule_TypeDefinitionIndex)->GetStaticField(0x2BE70);
		}
		// static const ::System::Int32 RESIDENT_ACTIVITY_ID = 0xC36D; // 0x0
		// static const ::System::Int32 MULTIPLAY_ACTIVITY_ID = 0xC393; // 0x0
		// static const ::System::Int32 OFFERING_ID = 0x7; // 0x0
		::RPG::Client::ActivityMarble::MarbleSealManager* _MarbleSealMgr_k__BackingField; // 0x10
		::Class_1_2E87F4599236B73D* _GameArea; // 0x18
		::RPG::Client::ActivityMarble::MarblePVPManager* _PVPMgr_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MarbleBattleSealData*>* AllSealData; // 0x28
		::Class_2_BCBF56C391A9F038* _GameInstance_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _DisplayMarbleSealIDs; // 0x38
		::RPG::Client::ActivityMarble::MarblePVPManager* _MainSubPVPMgr_k__BackingField; // 0x40
		::Class_1_594023CBCBC95203* BattleData; // 0x48
		::RPG::Client::ActivityMarble::MarblePlayerManager* _PlayerManager_k__BackingField; // 0x50
		::RPG::Client::ActivityMarble::MarbleMatchContext* _CurMatchContext_k__BackingField; // 0x58
		::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* _ProgressInfo; // 0x60
		::System::Nullable_1<::System::Boolean> _IsMarbleLimitRewardSeen; // 0x68
		::System::Boolean _IsCountingDown_k__BackingField; // 0x6A
		::System::Boolean _IsInPVEProgress_k__BackingField; // 0x6B
		::System::Single _CountDownEndTime_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__CCTOR_OFFSET))();
		}

		::Class_2_BCBF56C391A9F038* get_GameInstance()
		{
			return ((::Class_2_BCBF56C391A9F038*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_GAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_GameInstance(::Class_2_BCBF56C391A9F038* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BCBF56C391A9F038*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_GAMEINSTANCE_OFFSET))(this, value);
		}

		::System::Int32 GetAllyTeamIndexByEntityID(::System::UInt32 entityID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETALLYTEAMINDEXBYENTITYID_OFFSET))(this, entityID);
		}

		::System::UInt32 GetEntityIDByAllyTeamIndex(::System::UInt32 teamIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETENTITYIDBYALLYTEAMINDEX_OFFSET))(this, teamIndex);
		}

		::RPG::Client::MarbleBattleSealData* GetBattleSeal(::System::UInt32 entityId)
		{
			return ((::RPG::Client::MarbleBattleSealData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETBATTLESEAL_OFFSET))(this, entityId);
		}

		::RPG::Client::MarbleBattleSealData* GetFirstAllyBattleSeal()
		{
			return ((::RPG::Client::MarbleBattleSealData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETFIRSTALLYBATTLESEAL_OFFSET))(this);
		}

		::RPG::Client::MarbleBattleSealData* GetFirstEnemyBattleSeal()
		{
			return ((::RPG::Client::MarbleBattleSealData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETFIRSTENEMYBATTLESEAL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllySubSeals()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETALLYSUBSEALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEnemySubSeals()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETENEMYSUBSEALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>* GetAllyBattleSeals()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETALLYBATTLESEALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>* GetEnemyBattleSeals()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETENEMYBATTLESEALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>* _EntityIds2BattleSeals(::Il2CppArray<::System::UInt32>* entityIds)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ENTITYIDS2BATTLESEALS_OFFSET))(this, entityIds);
		}

		::System::Boolean IsEnemy(::System::UInt32 entityId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISENEMY_OFFSET))(this, entityId);
		}

		::UnityEngine::GameObject* GetGameObject(::System::UInt32 entityId)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETGAMEOBJECT_OFFSET))(this, entityId);
		}

		::System::Boolean IsInEnemyPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISINENEMYPHASE_OFFSET))(this);
		}

		::System::UInt32 GetSimulatingEntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETSIMULATINGENTITYID_OFFSET))(this);
		}

		::System::Boolean IsNextRoundEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISNEXTROUNDENEMY_OFFSET))(this);
		}

		::System::Void _OnStartCountDown(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONSTARTCOUNTDOWN_OFFSET))(this, param);
		}

		::System::Void StartCountDown(::System::Single seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_STARTCOUNTDOWN_OFFSET))(this, seconds);
		}

		::System::Void ClearCountDown(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_CLEARCOUNTDOWN_OFFSET))(this, param);
		}

		::System::Void ShowBattleScoreResult(::System::UInt32 scoreA, ::System::UInt32 scoreB, ::System::Action* onShowFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SHOWBATTLESCORERESULT_OFFSET))(this, scoreA, scoreB, onShowFinish);
		}

		::System::Void OnBattleFinished(::RPG::Client::MarbleBattleResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONBATTLEFINISHED_OFFSET))(this, result);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MarbleHexInfo*>* GetCurrentBattleHexInfo()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MarbleHexInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETCURRENTBATTLEHEXINFO_OFFSET))(this);
		}

		::System::Boolean get_IsCountingDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ISCOUNTINGDOWN_OFFSET))(this);
		}

		::System::Void set_IsCountingDown(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_ISCOUNTINGDOWN_OFFSET))(this, value);
		}

		::System::Single get_CountDownEndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_COUNTDOWNENDTIME_OFFSET))(this);
		}

		::System::Void set_CountDownEndTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_COUNTDOWNENDTIME_OFFSET))(this, value);
		}

		::Enum_3_F80BFD5B986D5503_4 get_BattleGameMode()
		{
			return ((::Enum_3_F80BFD5B986D5503_4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_BATTLEGAMEMODE_OFFSET))(this);
		}

		::System::UInt32 get_AllyScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ALLYSCORE_OFFSET))(this);
		}

		::System::UInt32 get_EnemyScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ENEMYSCORE_OFFSET))(this);
		}

		::System::UInt32 get_WinningScoreLine()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_WINNINGSCORELINE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MarbleEmojiRow*>* GetEmojis(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MarbleEmojiRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETEMOJIS_OFFSET))(this, groupID);
		}

		::RPG::GameCore::MarbleEmojiRow* GetEmoji(::System::UInt32 emojiID)
		{
			return ((::RPG::GameCore::MarbleEmojiRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETEMOJI_OFFSET))(this, emojiID);
		}

		::System::Void SendEmoji(::System::UInt32 emojiID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SENDEMOJI_OFFSET))(this, emojiID);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMarbleGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMARBLEGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMarbleUnlockSealScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMARBLEUNLOCKSEALSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMarbleShopBuyScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMARBLESHOPBUYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMarbleUpdateShownSealScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMARBLEUPDATESHOWNSEALSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMarblePvpDataUpdateScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMARBLEPVPDATAUPDATESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMultiplayerGetMatchPlayDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMULTIPLAYERGETMATCHPLAYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMultiplayerMatchPlayDataChangeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMULTIPLAYERMATCHPLAYDATACHANGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void ActiveCamera(::RPG::GameCore::LevelAreaManager* mgr, ::System::String* areaName, ::System::String* camName, ::System::Boolean cut)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ACTIVECAMERA_OFFSET))(this, mgr, areaName, camName, cut);
		}

		::System::Void DeactiveCamera(::RPG::GameCore::LevelAreaManager* mgr, ::System::String* areaName, ::System::String* camName)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_DEACTIVECAMERA_OFFSET))(this, mgr, areaName, camName);
		}

		::System::Void LoadGameArea(::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_LOADGAMEAREA_OFFSET))(this, onFinish);
		}

		::System::Void RemoveGameAreaUsage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_REMOVEGAMEAREAUSAGE_OFFSET))(this);
		}

		::System::Void ForceUnloadGameArea(::System::Action* onFinish, ::System::String* customTriggerGroupName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_FORCEUNLOADGAMEAREA_OFFSET))(this, onFinish, customTriggerGroupName);
		}

		::System::Void HideGameArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_HIDEGAMEAREA_OFFSET))(this);
		}

		::System::Void ResumeGameArea(::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_RESUMEGAMEAREA_OFFSET))(this, onFinish);
		}

		::System::Void OnGameAreaStreamingFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONGAMEAREASTREAMINGFINISH_OFFSET))(this);
		}

		::System::Void SetWaterSurface(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETWATERSURFACE_OFFSET))(this, value);
		}

		::System::Void SetDynamicFloatingParamID(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETDYNAMICFLOATINGPARAMID_OFFSET))(this, id);
		}

		::System::Void DisposePVEGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_DISPOSEPVEGAME_OFFSET))(this);
		}

		::System::Void SavePVEGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SAVEPVEGAME_OFFSET))(this);
		}

		::System::Void ResumePVEGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_RESUMEPVEGAME_OFFSET))(this);
		}

		::System::Boolean IsInPVEGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISINPVEGAME_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetMultiplayActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETMULTIPLAYACTIVITYDATA_OFFSET))(this);
		}

		::System::Void ChangeDisplayMarbleSealList(::System::Collections::Generic::IList_1<::RPG::Client::ActivityMarble::MarbleSealData*>* displaySeals)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::ActivityMarble::MarbleSealData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_CHANGEDISPLAYMARBLESEALLIST_OFFSET))(this, displaySeals);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDisplayMarbleSealIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETDISPLAYMARBLESEALIDLIST_OFFSET))(this);
		}

		::RPG::Client::MarbleBall* GetBall(::System::UInt32 ballID)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETBALL_OFFSET))(this, ballID);
		}

		::System::Void SetMarbleMatchContext(::RPG::Client::ActivityMarble::MarbleMatchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleMatchContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETMARBLEMATCHCONTEXT_OFFSET))(this, context);
		}

		::System::UInt32 GetAreaGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETAREAGROUPID_OFFSET))(this);
		}

		::System::Void TriggerAdventureMarbleGroupCustomEvent(::System::String* eventMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_TRIGGERADVENTUREMARBLEGROUPCUSTOMEVENT_OFFSET))(this, eventMsg);
		}

		::System::Void EnterMarbleMatch(::RPG::Client::ActivityMarble::MarbleMatchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleMatchContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ENTERMARBLEMATCH_OFFSET))(this, context);
		}

		::System::Void ExitMarbleMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_EXITMARBLEMATCH_OFFSET))(this);
		}

		::System::Void OnTechUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONTECHUICLOSE_OFFSET))(this);
		}

		::System::Void StartMarblePveGame(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* teamA, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* teamB, ::System::Boolean playerFirst, ::System::UInt32 aiRank, ::System::UInt32 levelId)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_OFFSET))(this, teamA, teamB, playerFirst, aiRank, levelId);
		}

		::System::Void StartMarblePveGame_1(::Il2CppArray<::System::UInt32>* teamA, ::Il2CppArray<::System::UInt32>* teamB, ::System::Boolean playerFirst, ::System::UInt32 aiRank, ::System::UInt32 levelId)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_1_OFFSET))(this, teamA, teamB, playerFirst, aiRank, levelId);
		}

		::System::Void StartMarblePvpGame(::System::Collections::Generic::List_1<::System::UInt32>* teamA, ::System::Collections::Generic::List_1<::System::UInt32>* teamB, ::System::Boolean playerFirst, ::System::UInt32 aiRank, ::System::UInt32 levelId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVPGAME_OFFSET))(this, teamA, teamB, playerFirst, aiRank, levelId);
		}

		::System::Void StartMarblePveGame_2(::System::Collections::Generic::List_1<::System::UInt32>* teamA, ::System::Collections::Generic::List_1<::System::UInt32>* teamB, ::System::Boolean playerFirst, ::System::UInt32 aiRank, ::System::UInt32 levelId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_2_OFFSET))(this, teamA, teamB, playerFirst, aiRank, levelId);
		}

		::System::Void RandomLaunch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_RANDOMLAUNCH_OFFSET))(this);
		}

		::System::Void OnEnterMarbleBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONENTERMARBLEBATTLE_OFFSET))(this);
		}

		::System::Void OnExitMarbleBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONEXITMARBLEBATTLE_OFFSET))(this);
		}

		::System::Void SetIsInPVE(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETISINPVE_OFFSET))(this, value);
		}

		::System::Void SetAllowPVPInvitation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETALLOWPVPINVITATION_OFFSET))(this, value);
		}

		::System::Boolean IsInGameArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISINGAMEAREA_OFFSET))(this);
		}

		::System::Void SetWaveEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETWAVEENABLE_OFFSET))(this, enable);
		}

		::System::Void GotoActivityMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMAINPAGE_OFFSET))(this);
		}

		::System::Void GotoActivityMultiPlayerPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMULTIPLAYERPAGE_OFFSET))(this);
		}

		::System::Void GotoActivityMultiPlayerFreeMatchPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_OFFSET))(this);
		}

		::System::UInt32 GetEarlyAccessContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETEARLYACCESSCONTENTID_OFFSET))(this);
		}

		::System::UInt32 GetMultiplayEarlyAccessContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETMULTIPLAYEARLYACCESSCONTENTID_OFFSET))(this);
		}

		::System::Boolean GetIsMarbleLimitRewardSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETISMARBLELIMITREWARDSEEN_OFFSET))(this);
		}

		::System::Void SetMarbleLimitRewardSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETMARBLELIMITREWARDSEEN_OFFSET))(this);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void _RequestMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__REQUESTMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetDependantSubMissionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Void _UpdateDisplayMarbleSealIDs(::System::Collections::Generic::IList_1<::System::UInt32>* sealIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__UPDATEDISPLAYMARBLESEALIDS_OFFSET))(this, sealIDs);
		}

		::RPG::Client::ActivityMarble::MarblePVPManager* _GetPvpMgr(::Enum_3_F80BFD5B986D5503_4 mode)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPManager*(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GETPVPMGR_OFFSET))(this, mode);
		}

		::System::Boolean IsUseMultiplayGroupID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISUSEMULTIPLAYGROUPID_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* get_ProgressInfo()
		{
			return ((::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_PROGRESSINFO_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarbleSealManager* get_MarbleSealMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_MARBLESEALMGR_OFFSET))(this);
		}

		::System::Void set_MarbleSealMgr(::RPG::Client::ActivityMarble::MarbleSealManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_MARBLESEALMGR_OFFSET))(this, value);
		}

		::RPG::Client::ActivityMarble::MarblePlayerManager* get_PlayerManager()
		{
			return ((::RPG::Client::ActivityMarble::MarblePlayerManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_PLAYERMANAGER_OFFSET))(this);
		}

		::System::Void set_PlayerManager(::RPG::Client::ActivityMarble::MarblePlayerManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_PLAYERMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::ActivityMarble::MarblePVPManager* get_PVPMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_PVPMGR_OFFSET))(this);
		}

		::System::Void set_PVPMgr(::RPG::Client::ActivityMarble::MarblePVPManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_PVPMGR_OFFSET))(this, value);
		}

		::RPG::Client::ActivityMarble::MarblePVPManager* get_MainSubPVPMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_MAINSUBPVPMGR_OFFSET))(this);
		}

		::System::Void set_MainSubPVPMgr(::RPG::Client::ActivityMarble::MarblePVPManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_MAINSUBPVPMGR_OFFSET))(this, value);
		}

		::System::Boolean get_IsCurrentBattlePVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ISCURRENTBATTLEPVP_OFFSET))(this);
		}

		::RPG::GameCore::MarbleMatchInfoConfigRow* get_BattlingMatchInfo()
		{
			return ((::RPG::GameCore::MarbleMatchInfoConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_BATTLINGMATCHINFO_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::IMarblePlayer* get_BattlingAllyPlayer()
		{
			return ((::RPG::Client::ActivityMarble::IMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_BATTLINGALLYPLAYER_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::IMarblePlayer* get_BattlingEnemyPlayer()
		{
			return ((::RPG::Client::ActivityMarble::IMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_BATTLINGENEMYPLAYER_OFFSET))(this);
		}

		::RPG::GameCore::MarbleMatchLevelConfigRow* get_CurLevelConfig()
		{
			return ((::RPG::GameCore::MarbleMatchLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_CURLEVELCONFIG_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarbleMatchContext* get_CurMatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarbleMatchContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_CURMATCHCONTEXT_OFFSET))(this);
		}

		::System::Void set_CurMatchContext(::RPG::Client::ActivityMarble::MarbleMatchContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleMatchContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_CURMATCHCONTEXT_OFFSET))(this, value);
		}

		::RPG::GameCore::ItemRow* get_CoinItemRow()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_COINITEMROW_OFFSET))(this);
		}

		::System::UInt32 get_Funds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_FUNDS_OFFSET))(this);
		}

		::System::Boolean get_IsInPVEProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ISINPVEPROGRESS_OFFSET))(this);
		}

		::System::Void set_IsInPVEProgress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_ISINPVEPROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllowPVPInvitation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ISALLOWPVPINVITATION_OFFSET))(this);
		}

		::System::Void set_IsAllowPVPInvitation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_ISALLOWPVPINVITATION_OFFSET))(this, value);
		}

		::System::UInt32 get__FundsItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET__FUNDSITEMID_OFFSET))(this);
		}

		::System::Void _Init_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__INIT_B__54_0_OFFSET))(this);
		}

		::System::Void _ResumePVEGame_b__69_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__RESUMEPVEGAME_B__69_0_OFFSET))(this);
		}

		::System::Void _GotoActivityMainPage_b__93_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMAINPAGE_B__93_0_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerPage_b__94_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERPAGE_B__94_0_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerFreeMatchPage_b__95_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_0_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerFreeMatchPage_b__95_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_1_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerFreeMatchPage_b__95_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_2_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
