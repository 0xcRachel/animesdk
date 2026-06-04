#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CDB6C405C8FD68.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/PixAirLockActionName.h"

class Class_1_0C4B3F375A5A884B;
class Class_1_0E9EED74A778662A_2;
class Class_1_1C4138E8422654D8;
class Class_1_4AF9832A6EE2A67F_2;
class Class_1_4BC858D7C27E10ED_52;
class Class_1_586F431A68BBA8E1;
class Class_1_5CFFA593A88CE0E6;
class Class_1_61E0AF8862853482;
class Class_1_C9A9817DF40FA696;
class Class_1_D1E0AD3915BCCF29_90;
class Class_1_D40936EF3BF54118_64;
class Class_1_D40936EF3BF54118_65;
class Class_1_DB57B006CFFCF00A_2;
class Class_2_658B22B1CB3FAE7F;
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::PixAir { class PixAirAreaInfo; }
namespace RPG::Client::PixAir { class PixAirEnterNewAreaAction; }
namespace RPG::Client::PixAir { class PixAirEquipInfo; }
namespace RPG::Client::PixAir { class PixAirEquipShopData; }
namespace RPG::Client::PixAir { class PixAirEquipShopManager; }
namespace RPG::Client::PixAir { class PixAirGameSession; }
namespace RPG::Client::PixAir { class PixAirNodeInfo; }
namespace RPG::Client::PixAir { class PixAirPlaneInfo; }
namespace RPG::Client::PixAir { class PixAirSlot; }
namespace RPG::Client::PixAir { class PixAirStageInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CF6A90)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GETCONSTMAXSCORE_OFFSET UNITYSDK_OFFSET(0x18CF70D0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GETRESIDENTREWARDQUESTS_OFFSET UNITYSDK_OFFSET(0x18CF6C40)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GETTIMELIMITREWARDID_OFFSET UNITYSDK_OFFSET(0x18CF6AF0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GETTIMELIMITREWARDSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x18CF6BE0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_AREAINFO_OFFSET UNITYSDK_OFFSET(0x18CF6090)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_EQUIPINFO_OFFSET UNITYSDK_OFFSET(0x18CF60D0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_EQUIPSHOPMANAGER_OFFSET UNITYSDK_OFFSET(0x18CF6110)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0x18CF6150)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_ISINGAME_OFFSET UNITYSDK_OFFSET(0x18CF6170)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_NODEINFO_OFFSET UNITYSDK_OFFSET(0x18CF60B0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_PLANEINFO_OFFSET UNITYSDK_OFFSET(0x18CF60F0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_PROMISENETSERVICE_OFFSET UNITYSDK_OFFSET(0x18CEF980)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x18CF6130)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x18CF6070)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET__NET_OFFSET UNITYSDK_OFFSET(0x18CF04B0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_HASRESIDENTREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x18CF6F50)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x18CF6180)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_ISSHOWTIMELIMITREWARDNEW_OFFSET UNITYSDK_OFFSET(0x18CF6FF0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_REQUESTSELECTCONTENT_OFFSET UNITYSDK_OFFSET(0x18CF0100)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_REQUESTSELLEQUIP_OFFSET UNITYSDK_OFFSET(0x18CF1520)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_REQUESTSWAPEQUIP_OFFSET UNITYSDK_OFFSET(0x18CF0CD0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SENDPIXAIRBUYGOODSCSREQ_OFFSET UNITYSDK_OFFSET(0x18CF07D0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SENDPIXAIRREFRESHSHOPCSREQ_OFFSET UNITYSDK_OFFSET(0x18CF0540)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SETTIMELIMITREWARDNEWSEEN_OFFSET UNITYSDK_OFFSET(0x18CF7070)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_AREAINFO_OFFSET UNITYSDK_OFFSET(0x18CF60A0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_EQUIPINFO_OFFSET UNITYSDK_OFFSET(0x18CF60E0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_EQUIPSHOPMANAGER_OFFSET UNITYSDK_OFFSET(0x18CF6120)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0x18CF6160)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_NODEINFO_OFFSET UNITYSDK_OFFSET(0x18CF60C0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_PLANEINFO_OFFSET UNITYSDK_OFFSET(0x18CF6100)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_PROMISENETSERVICE_OFFSET UNITYSDK_OFFSET(0x18CEF990)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x18CF6140)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x18CF6080)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x18CEF9A0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CF7200)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF71C0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEBASICCHANGE_OFFSET UNITYSDK_OFFSET(0x18CF4180)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEBEFOREENTERGAMESETTLE_OFFSET UNITYSDK_OFFSET(0x18CF44C0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEENTERNEWNODE_OFFSET UNITYSDK_OFFSET(0x18CF4050)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEEQUIPCHANGE_OFFSET UNITYSDK_OFFSET(0x18CF41F0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEEQUIPREMOVE_OFFSET UNITYSDK_OFFSET(0x18CF4260)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEPENDINGACTIONFINISH_OFFSET UNITYSDK_OFFSET(0x18CF4330)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEPENDINGACTION_OFFSET UNITYSDK_OFFSET(0x18CF42C0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEPIXAIRCHANGE_OFFSET UNITYSDK_OFFSET(0x18CF3040)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLESHOPUPDATE_OFFSET UNITYSDK_OFFSET(0x18CF43F0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLESLOTNUMUPDATE_OFFSET UNITYSDK_OFFSET(0x18CF4450)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLESTAGESETTLE_OFFSET UNITYSDK_OFFSET(0x18CF3790)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEUNLOCKEDPLANE_OFFSET UNITYSDK_OFFSET(0x18CF36F0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ISBUYBLOCKEDBYSLOTSFULL_OFFSET UNITYSDK_OFFSET(0x18CF0B40)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRBUYGOODSSCRSP_OFFSET UNITYSDK_OFFSET(0x18CF5E00)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRCHANGEPOSSCRSP_OFFSET UNITYSDK_OFFSET(0x18CF5890)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x18CF1930)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRHANDLEPENDINGACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x18CF5820)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRQUITSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x18CF5480)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRREENTERSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x18CF5590)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRREFRESHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0x18CF5E50)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRSELLEQUIPSCRSP_OFFSET UNITYSDK_OFFSET(0x18CF5B70)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRSTARTSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x18CF5090)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRSWAPEQUIPSCRSP_OFFSET UNITYSDK_OFFSET(0x18CF5CD0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRSYNCCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x18CF2950)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRUNLOCKPLANESCRSP_OFFSET UNITYSDK_OFFSET(0x18CF5FA0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__PREPAREMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x18CF2760)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__SHOULDSKIPPIXAIRLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x18CF5320)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__SHOWLOCKACTIONTOAST_OFFSET UNITYSDK_OFFSET(0x18CF0430)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__TRYCREATEENTERNEWAREAACTION_OFFSET UNITYSDK_OFFSET(0x18CF2C60)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE__TRYMOVETOEMPTY_OFFSET UNITYSDK_OFFSET(0x18CF1150)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CF7360)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x18CF72E0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x18CF7280)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirModule_TypeDefinitionIndex = 73687;

	class PixAirModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::Class_1_61E0AF8862853482** StaticGet__crossContainerExecutor()
		{
			return (::Class_1_61E0AF8862853482**)Il2CppClass::FromTypeDefinitionIndex(PixAirModule_TypeDefinitionIndex)->GetStaticField(0x79A0);
		}
		static ::Class_1_C9A9817DF40FA696** StaticGet__sameContainerExecutor()
		{
			return (::Class_1_C9A9817DF40FA696**)Il2CppClass::FromTypeDefinitionIndex(PixAirModule_TypeDefinitionIndex)->GetStaticField(0x79A8);
		}
		static ::Class_1_586F431A68BBA8E1** StaticGet__sameContainerChecker()
		{
			return (::Class_1_586F431A68BBA8E1**)Il2CppClass::FromTypeDefinitionIndex(PixAirModule_TypeDefinitionIndex)->GetStaticField(0x79B0);
		}
		static ::Class_1_0C4B3F375A5A884B** StaticGet__crossContainerChecker()
		{
			return (::Class_1_0C4B3F375A5A884B**)Il2CppClass::FromTypeDefinitionIndex(PixAirModule_TypeDefinitionIndex)->GetStaticField(0x79B8);
		}
		::RPG::Client::PixAir::PixAirStageInfo* _StageInfo_k__BackingField; // 0x10
		::Class_2_658B22B1CB3FAE7F* _PromiseNetService_k__BackingField; // 0x18
		::RPG::Client::PixAir::PixAirEquipShopManager* _EquipShopManager_k__BackingField; // 0x20
		::RPG::Client::PixAir::PixAirAreaInfo* _AreaInfo_k__BackingField; // 0x28
		::RPG::Client::PixAir::PixAirEquipInfo* _EquipInfo_k__BackingField; // 0x30
		::RPG::Client::PixAir::PixAirNodeInfo* _NodeInfo_k__BackingField; // 0x38
		::RPG::Client::PixAir::PixAirPlaneInfo* _PlaneInfo_k__BackingField; // 0x40
		::RPG::Client::PixAir::PixAirGameSession* _GameSession_k__BackingField; // 0x48
		::System::UInt32 _Score_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__CCTOR_OFFSET))();
		}

		::Class_2_658B22B1CB3FAE7F* get_PromiseNetService()
		{
			return ((::Class_2_658B22B1CB3FAE7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_PROMISENETSERVICE_OFFSET))(this);
		}

		::System::Void set_PromiseNetService(::Class_2_658B22B1CB3FAE7F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_658B22B1CB3FAE7F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_PROMISENETSERVICE_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Boolean RequestSelectContent(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_REQUESTSELECTCONTENT_OFFSET))(this, a1, a2);
		}

		::System::Void SendPixAirRefreshShopCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SENDPIXAIRREFRESHSHOPCSREQ_OFFSET))(this);
		}

		::System::Void SendPixAirBuyGoodsCsReq(::RPG::Client::PixAir::PixAirEquipShopData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipShopData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SENDPIXAIRBUYGOODSCSREQ_OFFSET))(this, a1);
		}

		::System::Boolean _IsBuyBlockedBySlotsFull(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ISBUYBLOCKEDBYSLOTSFULL_OFFSET))(this, a1);
		}

		::System::Boolean RequestSwapEquip(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_REQUESTSWAPEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryMoveToEmpty(::Class_1_1C4138E8422654D8* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1C4138E8422654D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__TRYMOVETOEMPTY_OFFSET))(this, a1);
		}

		::System::Void RequestSellEquip(::RPG::Client::PixAir::PixAirSlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_REQUESTSELLEQUIP_OFFSET))(this, a1);
		}

		::System::Void _ShowLockActionToast(::RPG::GameCore::PixAirLockActionName a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PixAirLockActionName))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__SHOWLOCKACTIONTOAST_OFFSET))(this, a1);
		}

		::System::Void _OnPixAirGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPixAirSyncChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRSYNCCHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PixAir::PixAirEnterNewAreaAction* _TryCreateEnterNewAreaAction(::Class_1_D40936EF3BF54118_65* a1)
		{
			return ((::RPG::Client::PixAir::PixAirEnterNewAreaAction*(*)(::PVOID, ::Class_1_D40936EF3BF54118_65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__TRYCREATEENTERNEWAREAACTION_OFFSET))(this, a1);
		}

		::System::Void _HandlePixAirChange(::Class_1_0E9EED74A778662A_2* a1, ::RPG::Client::PixAir::PixAirEnterNewAreaAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0E9EED74A778662A_2*, ::RPG::Client::PixAir::PixAirEnterNewAreaAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEPIXAIRCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _HandleEnterNewNode(::Class_1_D1E0AD3915BCCF29_90* a1, ::RPG::Client::PixAir::PixAirEnterNewAreaAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_90*, ::RPG::Client::PixAir::PixAirEnterNewAreaAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEENTERNEWNODE_OFFSET))(this, a1, a2);
		}

		::System::Void _HandleBasicChange(::Class_1_4AF9832A6EE2A67F_2* a1, ::Enum_3_63CDB6C405C8FD68 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_2*, ::Enum_3_63CDB6C405C8FD68))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEBASICCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _HandleEquipChange(::Class_1_D40936EF3BF54118_64* a1, ::Enum_3_63CDB6C405C8FD68 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_64*, ::Enum_3_63CDB6C405C8FD68))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEEQUIPCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _HandleEquipRemove(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEEQUIPREMOVE_OFFSET))(this, a1);
		}

		::System::Void _HandlePendingAction(::Class_1_5CFFA593A88CE0E6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CFFA593A88CE0E6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEPENDINGACTION_OFFSET))(this, a1);
		}

		::System::Void _HandlePendingActionFinish(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEPENDINGACTIONFINISH_OFFSET))(this, a1);
		}

		::System::Void _HandleBeforeEnterGameSettle(::Class_1_DB57B006CFFCF00A_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEBEFOREENTERGAMESETTLE_OFFSET))(this, a1);
		}

		::System::Void _HandleStageSettle(::Class_1_DB57B006CFFCF00A_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLESTAGESETTLE_OFFSET))(this, a1);
		}

		::System::Void _HandleShopUpdate(::Class_1_4BC858D7C27E10ED_52* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_52*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLESHOPUPDATE_OFFSET))(this, a1);
		}

		::System::Void _HandleSlotNumUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLESLOTNUMUPDATE_OFFSET))(this, a1);
		}

		::System::Void _HandleUnlockedPlane(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__HANDLEUNLOCKEDPLANE_OFFSET))(this, a1);
		}

		::System::Void _OnPixAirStartStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRSTARTSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ShouldSkipPixAirLoadingPage(::RPG::Client::PixAir::PixAirGameSession* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__SHOULDSKIPPIXAIRLOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnPixAirQuitStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRQUITSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPixAirReenterStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRREENTERSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPixAirHandlePendingActionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRHANDLEPENDINGACTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPixAirChangePosScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRCHANGEPOSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPixAirSellEquipScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRSELLEQUIPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPixAirSwapEquipScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRSWAPEQUIPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPixAirBuyGoodsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRBUYGOODSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPixAirRefreshShopScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRREFRESHSHOPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPixAirUnlockPlaneScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__ONPIXAIRUNLOCKPLANESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _PrepareMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE__PREPAREMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::NetworkManager* get__Net()
		{
			return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET__NET_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirStageInfo* get_StageInfo()
		{
			return ((::RPG::Client::PixAir::PixAirStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_STAGEINFO_OFFSET))(this);
		}

		::System::Void set_StageInfo(::RPG::Client::PixAir::PixAirStageInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirStageInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_STAGEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirAreaInfo* get_AreaInfo()
		{
			return ((::RPG::Client::PixAir::PixAirAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_AREAINFO_OFFSET))(this);
		}

		::System::Void set_AreaInfo(::RPG::Client::PixAir::PixAirAreaInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_AREAINFO_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirNodeInfo* get_NodeInfo()
		{
			return ((::RPG::Client::PixAir::PixAirNodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_NODEINFO_OFFSET))(this);
		}

		::System::Void set_NodeInfo(::RPG::Client::PixAir::PixAirNodeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirNodeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_NODEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInfo* get_EquipInfo()
		{
			return ((::RPG::Client::PixAir::PixAirEquipInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_EQUIPINFO_OFFSET))(this);
		}

		::System::Void set_EquipInfo(::RPG::Client::PixAir::PixAirEquipInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_EQUIPINFO_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirPlaneInfo* get_PlaneInfo()
		{
			return ((::RPG::Client::PixAir::PixAirPlaneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_PLANEINFO_OFFSET))(this);
		}

		::System::Void set_PlaneInfo(::RPG::Client::PixAir::PixAirPlaneInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirPlaneInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_PLANEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipShopManager* get_EquipShopManager()
		{
			return ((::RPG::Client::PixAir::PixAirEquipShopManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_EQUIPSHOPMANAGER_OFFSET))(this);
		}

		::System::Void set_EquipShopManager(::RPG::Client::PixAir::PixAirEquipShopManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipShopManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_EQUIPSHOPMANAGER_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_SCORE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirGameSession* get_GameSession()
		{
			return ((::RPG::Client::PixAir::PixAirGameSession*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_GAMESESSION_OFFSET))(this);
		}

		::System::Void set_GameSession(::RPG::Client::PixAir::PixAirGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SET_GAMESESSION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GET_ISINGAME_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 GetTimeLimitRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GETTIMELIMITREWARDID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* GetTimeLimitRewardScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GETTIMELIMITREWARDSCHEDULEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetResidentRewardQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GETRESIDENTREWARDQUESTS_OFFSET))(this);
		}

		::System::Boolean HasResidentRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_HASRESIDENTREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean IsShowTimeLimitRewardNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_ISSHOWTIMELIMITREWARDNEW_OFFSET))(this);
		}

		::System::Void SetTimeLimitRewardNewSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_SETTIMELIMITREWARDNEWSEEN_OFFSET))(this);
		}

		::System::UInt32 GetConstMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE_GETCONSTMAXSCORE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
