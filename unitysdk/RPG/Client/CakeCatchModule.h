#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_2D9E2FEEDBD521AF;
class Class_1_35C4631AD9C32CA1;
class Class_1_3ED5A82F1CC73B98;
class Class_1_45BB92167AED63A0_96;
class Class_1_4B4510A819B29A3F;
class Class_1_70D2E0F3216AAE0C_1;
class Class_1_902742FEC03162EB;
class Class_1_D17272E82AE804C2_48;
class Class_1_D17272E82AE804C2_971;
class Class_1_EBBBBA0DC51A7D8C;
namespace RPG::Client { class CakeCatchArrangeContext; }
namespace RPG::Client { class CakeCatchCatData; }
namespace RPG::Client { class CakeCatchCatGodData; }
namespace RPG::Client { class CakeCatchDIYHistory; }
namespace RPG::Client { class CakeCatchPerformanceData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHMODULE_CANSEARCHCAKESLOT_OFFSET UNITYSDK_OFFSET(0x15FD5240)
#define RPG_CLIENT_CAKECATCHMODULE_DISPOSEARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0x15FCFF90)
#define RPG_CLIENT_CAKECATCHMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FD12E0)
#define RPG_CLIENT_CAKECATCHMODULE_FAKEALLCATPOINTS_OFFSET UNITYSDK_OFFSET(0x15FD4DB0)
#define RPG_CLIENT_CAKECATCHMODULE_GETALLCAKEDATA_OFFSET UNITYSDK_OFFSET(0x15FD59F0)
#define RPG_CLIENT_CAKECATCHMODULE_GETALLCAUGHTCAKECOUNT_OFFSET UNITYSDK_OFFSET(0x15FD6E10)
#define RPG_CLIENT_CAKECATCHMODULE_GETALLPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0x15FD5B80)
#define RPG_CLIENT_CAKECATCHMODULE_GETARRANGEDPOSITIONINFOLIST_OFFSET UNITYSDK_OFFSET(0x15FCF940)
#define RPG_CLIENT_CAKECATCHMODULE_GETCAKECATCHCOUNTHISTORY_OFFSET UNITYSDK_OFFSET(0x15FC9D00)
#define RPG_CLIENT_CAKECATCHMODULE_GETCAKECAUGHTCOUNTINROOM_OFFSET UNITYSDK_OFFSET(0x15FD69E0)
#define RPG_CLIENT_CAKECATCHMODULE_GETCATGODATLASDATA_OFFSET UNITYSDK_OFFSET(0x15FD71A0)
#define RPG_CLIENT_CAKECATCHMODULE_GETCAUGHTCAKEDATA_OFFSET UNITYSDK_OFFSET(0x15FC9A40)
#define RPG_CLIENT_CAKECATCHMODULE_GETCURRENTROOMCAKECATCHPROGRESS_OFFSET UNITYSDK_OFFSET(0x15FD6F30)
#define RPG_CLIENT_CAKECATCHMODULE_GETLOCALCAKEDATA_OFFSET UNITYSDK_OFFSET(0x15FD64E0)
#define RPG_CLIENT_CAKECATCHMODULE_GETPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0x15FD5D50)
#define RPG_CLIENT_CAKECATCHMODULE_GETRANDOMCAKEDATAS_OFFSET UNITYSDK_OFFSET(0x15FD7610)
#define RPG_CLIENT_CAKECATCHMODULE_GETRUNTIMEIDBYPOSITIONINFO_OFFSET UNITYSDK_OFFSET(0x15FCB240)
#define RPG_CLIENT_CAKECATCHMODULE_GETSLOTINFO_OFFSET UNITYSDK_OFFSET(0x15FCBA60)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0x15FD04D0)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGELAYOUTHISTORY_OFFSET UNITYSDK_OFFSET(0x15FD04C0)
#define RPG_CLIENT_CAKECATCHMODULE_GET_BOXVALIDTIMESTRING_OFFSET UNITYSDK_OFFSET(0x15FD7980)
#define RPG_CLIENT_CAKECATCHMODULE_GET_DIYLIKECOUNT_OFFSET UNITYSDK_OFFSET(0x15FD7950)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ISARRANGING_OFFSET UNITYSDK_OFFSET(0x15FD04B0)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ISBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0x15FD7930)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ISLOCALBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0x15FD7940)
#define RPG_CLIENT_CAKECATCHMODULE_GET_PENDINGCAKEID_OFFSET UNITYSDK_OFFSET(0x15FD7970)
#define RPG_CLIENT_CAKECATCHMODULE_GET_WEEKLYSEARCHCOUNT_OFFSET UNITYSDK_OFFSET(0x15FD7960)
#define RPG_CLIENT_CAKECATCHMODULE_HASANYCAKESTORYNEW_OFFSET UNITYSDK_OFFSET(0x15FD6370)
#define RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCECANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x15FD5E10)
#define RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCENEW_OFFSET UNITYSDK_OFFSET(0x15FD60D0)
#define RPG_CLIENT_CAKECATCHMODULE_HASATLASHUDREDDOT_OFFSET UNITYSDK_OFFSET(0x15FC2BE0)
#define RPG_CLIENT_CAKECATCHMODULE_INITARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0x15FCFF00)
#define RPG_CLIENT_CAKECATCHMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x15FD04F0)
#define RPG_CLIENT_CAKECATCHMODULE_INTERRUPALLDIALOGUE_OFFSET UNITYSDK_OFFSET(0x15FC6FF0)
#define RPG_CLIENT_CAKECATCHMODULE_ISALLPOSSIBLECAKECAUGHT_OFFSET UNITYSDK_OFFSET(0x15FD5460)
#define RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHTINROOM_OFFSET UNITYSDK_OFFSET(0x15FD68E0)
#define RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHT_OFFSET UNITYSDK_OFFSET(0x15FD6BF0)
#define RPG_CLIENT_CAKECATCHMODULE_ISCAKELOCALAVAILABLE_OFFSET UNITYSDK_OFFSET(0x15FD6C90)
#define RPG_CLIENT_CAKECATCHMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x15FD1290)
#define RPG_CLIENT_CAKECATCHMODULE_OPENCAKEBOXRESULTPAGE_OFFSET UNITYSDK_OFFSET(0x15FD6680)
#define RPG_CLIENT_CAKECATCHMODULE_PLAYSCENERANDOMDIALOGUELOOP_OFFSET UNITYSDK_OFFSET(0x15FC7210)
#define RPG_CLIENT_CAKECATCHMODULE_REGISTERWAITPERFORMANCEBACKTOADVENTURE_OFFSET UNITYSDK_OFFSET(0x15FD7250)
#define RPG_CLIENT_CAKECATCHMODULE_SETISPLAYERINDIALOGUERANGE_OFFSET UNITYSDK_OFFSET(0x15FD78D0)
#define RPG_CLIENT_CAKECATCHMODULE_SET_ARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0x15FD04E0)
#define RPG_CLIENT_CAKECATCHMODULE_SYNCARRANGECONTEXTWITHSCENE_OFFSET UNITYSDK_OFFSET(0x15FCEBE0)
#define RPG_CLIENT_CAKECATCHMODULE_SYNCORIGINALDATAWITHSCENE_OFFSET UNITYSDK_OFFSET(0x15FCED70)
#define RPG_CLIENT_CAKECATCHMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x15FD4B30)
#define RPG_CLIENT_CAKECATCHMODULE_TRYOPENCAKEBOX_OFFSET UNITYSDK_OFFSET(0x15FD4F80)
#define RPG_CLIENT_CAKECATCHMODULE_TRYSEARCHSLOT_OFFSET UNITYSDK_OFFSET(0x15FD5770)
#define RPG_CLIENT_CAKECATCHMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x15FD11C0)
#define RPG_CLIENT_CAKECATCHMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x15FD0FE0)
#define RPG_CLIENT_CAKECATCHMODULE__CREATECAKEDIALOGUEMANAGER_OFFSET UNITYSDK_OFFSET(0x15FD0F80)
#define RPG_CLIENT_CAKECATCHMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD7A40)
#define RPG_CLIENT_CAKECATCHMODULE__DATAREFRESHREQ_OFFSET UNITYSDK_OFFSET(0x15FD4A50)
#define RPG_CLIENT_CAKECATCHMODULE__GETARRANGEAREAINTERACTPROP_OFFSET UNITYSDK_OFFSET(0x15FD03B0)
#define RPG_CLIENT_CAKECATCHMODULE__GETWEEKLYSEARCHCOUNT_OFFSET UNITYSDK_OFFSET(0x15FD5300)
#define RPG_CLIENT_CAKECATCHMODULE__INIT_B__22_0_OFFSET UNITYSDK_OFFSET(0x15FD7E60)
#define RPG_CLIENT_CAKECATCHMODULE__ISBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0x15FD70F0)
#define RPG_CLIENT_CAKECATCHMODULE__ISLOCALBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0x15FD7570)
#define RPG_CLIENT_CAKECATCHMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x15FD49D0)
#define RPG_CLIENT_CAKECATCHMODULE__ONENTERSCENESCRSP_OFFSET UNITYSDK_OFFSET(0x15FD4810)
#define RPG_CLIENT_CAKECATCHMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x15FD2E30)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0x15FD4760)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDIYSCRSP_OFFSET UNITYSDK_OFFSET(0x15FCFFF0)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x15FD1340)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHOPENBOXSCRSP_OFFSET UNITYSDK_OFFSET(0x15FD38C0)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHSEARCHSCRSP_OFFSET UNITYSDK_OFFSET(0x15FD4050)
#define RPG_CLIENT_CAKECATCHMODULE__OPENCAKEBOXRESULTPAGE_B__51_0_OFFSET UNITYSDK_OFFSET(0x15FD7E70)
#define RPG_CLIENT_CAKECATCHMODULE__PREPAREPERFORMANCES_OFFSET UNITYSDK_OFFSET(0x15FD0D50)
#define RPG_CLIENT_CAKECATCHMODULE__PREPARESLOTS_OFFSET UNITYSDK_OFFSET(0x15FD0650)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGEAREAINTERACTPROP_OFFSET UNITYSDK_OFFSET(0x15FD01E0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGELAYOUTSTATUS_OFFSET UNITYSDK_OFFSET(0x15FD0130)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHBOXVALIDTIME_OFFSET UNITYSDK_OFFSET(0x15FD23E0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHCOUNTHISTORY_OFFSET UNITYSDK_OFFSET(0x15FD1950)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHRECORDHISTORY_OFFSET UNITYSDK_OFFSET(0x15FD1C70)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHTEXTJOIN_OFFSET UNITYSDK_OFFSET(0x15FD7490)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKESTATUS_OFFSET UNITYSDK_OFFSET(0x15FD25B0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCATGODSTATE_OFFSET UNITYSDK_OFFSET(0x15FD3670)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCURRENTCATGODSATE_OFFSET UNITYSDK_OFFSET(0x15FD72F0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHDIYLIKECOUNT_OFFSET UNITYSDK_OFFSET(0x15FD3820)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALARRANGELAYOUTSTATUS_OFFSET UNITYSDK_OFFSET(0x15FD0070)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALBOXVALIDTIME_OFFSET UNITYSDK_OFFSET(0x15FD2DE0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCAKESTATUS_OFFSET UNITYSDK_OFFSET(0x15FD2AB0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCATGODSTATE_OFFSET UNITYSDK_OFFSET(0x15FD7360)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALDIYLIKECOUNT_OFFSET UNITYSDK_OFFSET(0x15FD3870)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHUNLOCKEDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15FD1560)
#define RPG_CLIENT_CAKECATCHMODULE__SYNCWITHSCENE_OFFSET UNITYSDK_OFFSET(0x15FCEDC0)
#define RPG_CLIENT_CAKECATCHMODULE__TRYREFRESHCAKESTATUS_OFFSET UNITYSDK_OFFSET(0x15FD2160)
#define RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FD8120)
#define RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x15FD7F70)
#define RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x15FD80C0)
#define RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x15FD8060)
#define RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x15FD8000)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchModule_TypeDefinitionIndex = 57998;

	class CakeCatchModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_48*>* _LocalCakeHideList; // 0x10
		::RPG::Client::Promises::Promise_1<::System::UInt32>* _TrySearchSlotPromise; // 0x18
		::RPG::Client::CakeCatchDIYHistory* _LocalArrangeLayoutHistory; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _CakeCatchCountHistory; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeCatchPerformanceData*>* _PerformanceDatas; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4B4510A819B29A3F*>* _SlotInfos; // 0x38
		::RPG::Client::CakeCatchArrangeContext* _ArrangeContext_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* _OpenBoxRspCakeList; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EBBBBA0DC51A7D8C*>* _CakeCatchWeekRecord; // 0x50
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*>* _TryOpenCakeBoxPromise; // 0x58
		::Class_1_3ED5A82F1CC73B98* _CakeDialogueManager; // 0x60
		::RPG::Client::CakeCatchDIYHistory* _ArrangeLayoutHistory; // 0x68
		::System::Boolean _HasCurrentBoxValidTime; // 0x70
		::System::UInt32 _PendingCakeID; // 0x74
		::System::UInt64 _LocalBoxValidTime; // 0x78
		::System::UInt32 _DIYLikeCount; // 0x80
		::System::UInt32 _LocalDIYLikeCount; // 0x84
		::System::UInt64 _CurrentBoxValidTime; // 0x88
		::System::UInt32 _PendingPerformanceID; // 0x90
		::System::Int32 _CountDownTimerID; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__CTOR_OFFSET))(this);
		}

		::System::Void SyncArrangeContextWithScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SYNCARRANGECONTEXTWITHSCENE_OFFSET))(this);
		}

		::System::Void SyncOriginalDataWithScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SYNCORIGINALDATAWITHSCENE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>* GetArrangedPositionInfoList(::System::UInt32 cakeID)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETARRANGEDPOSITIONINFOLIST_OFFSET))(this, cakeID);
		}

		::System::UInt32 GetRuntimeIDByPositionInfo(::Class_1_902742FEC03162EB* positionInfo)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_902742FEC03162EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETRUNTIMEIDBYPOSITIONINFO_OFFSET))(this, positionInfo);
		}

		::System::Void InitArrangeContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_INITARRANGECONTEXT_OFFSET))(this);
		}

		::System::Void DisposeArrangeContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_DISPOSEARRANGECONTEXT_OFFSET))(this);
		}

		::System::Void _OnTrainCakeCatchDiyScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDIYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _RefreshArrangeLayoutStatus(::Class_1_35C4631AD9C32CA1* diyInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35C4631AD9C32CA1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGELAYOUTSTATUS_OFFSET))(this, diyInfo);
		}

		::System::Void _RefreshLocalArrangeLayoutStatus(::Class_1_35C4631AD9C32CA1* diyInfo, ::System::Boolean needSyncWithScene)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35C4631AD9C32CA1*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALARRANGELAYOUTSTATUS_OFFSET))(this, diyInfo, needSyncWithScene);
		}

		::System::Void _SyncWithScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__SYNCWITHSCENE_OFFSET))(this);
		}

		::System::Void _RefreshArrangeAreaInteractProp(::System::Boolean isInSelfRoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGEAREAINTERACTPROP_OFFSET))(this, isInSelfRoom);
		}

		::RPG::GameCore::GameEntity* _GetArrangeAreaInteractProp()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__GETARRANGEAREAINTERACTPROP_OFFSET))(this);
		}

		::System::Boolean get_IsArranging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ISARRANGING_OFFSET))(this);
		}

		::RPG::Client::CakeCatchDIYHistory* get_ArrangeLayoutHistory()
		{
			return ((::RPG::Client::CakeCatchDIYHistory*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGELAYOUTHISTORY_OFFSET))(this);
		}

		::RPG::Client::CakeCatchArrangeContext* get_ArrangeContext()
		{
			return ((::RPG::Client::CakeCatchArrangeContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGECONTEXT_OFFSET))(this);
		}

		::System::Void set_ArrangeContext(::RPG::Client::CakeCatchArrangeContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchArrangeContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SET_ARRANGECONTEXT_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnTrainCakeCatchGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSocialPlayGameplayOperationScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnTrainCakeCatchOpenBoxScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHOPENBOXSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTrainCakeCatchSearchScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHSEARCHSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTrainCakeCatchDataScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDATASCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnEnterSceneScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONENTERSCENESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::Class_1_4B4510A819B29A3F* GetSlotInfo(::System::UInt32 slotID)
		{
			return ((::Class_1_4B4510A819B29A3F*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETSLOTINFO_OFFSET))(this, slotID);
		}

		::System::Void FakeAllCatPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_FAKEALLCATPOINTS_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*>* TryOpenCakeBox()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_TRYOPENCAKEBOX_OFFSET))(this);
		}

		::System::Boolean CanSearchCakeSlot(::System::UInt32 slotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_CANSEARCHCAKESLOT_OFFSET))(this, slotID);
		}

		::System::Boolean IsAllPossibleCakeCaught()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISALLPOSSIBLECAKECAUGHT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::UInt32>* TrySearchSlot(::System::UInt32 cakeID)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_TRYSEARCHSLOT_OFFSET))(this, cakeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetAllCakeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETALLCAKEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchPerformanceData*>* GetAllPerformanceData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchPerformanceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETALLPERFORMANCEDATA_OFFSET))(this);
		}

		::RPG::Client::CakeCatchPerformanceData* GetPerformanceData(::System::UInt32 performanceID)
		{
			return ((::RPG::Client::CakeCatchPerformanceData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETPERFORMANCEDATA_OFFSET))(this, performanceID);
		}

		::System::Boolean HasAnyPerformanceCanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCECANTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean HasAnyPerformanceNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCENEW_OFFSET))(this);
		}

		::System::Boolean HasAnyCakeStoryNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASANYCAKESTORYNEW_OFFSET))(this);
		}

		::System::Boolean HasAtlasHUDReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASATLASHUDREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetLocalCakeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETLOCALCAKEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetCaughtCakeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCAUGHTCAKEDATA_OFFSET))(this);
		}

		::System::UInt32 GetCakeCatchCountHistory(::System::UInt32 cakeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCAKECATCHCOUNTHISTORY_OFFSET))(this, cakeID);
		}

		::System::Void OpenCakeBoxResultPage(::System::Action* onEnterCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_OPENCAKEBOXRESULTPAGE_OFFSET))(this, onEnterCallback);
		}

		::System::Boolean IsCakeCaughtInRoom(::System::UInt32 cakeID, ::System::UInt32 roomOwnerUID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHTINROOM_OFFSET))(this, cakeID, roomOwnerUID);
		}

		::System::UInt32 GetCakeCaughtCountInRoom(::System::UInt32 roomOwnerUID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCAKECAUGHTCOUNTINROOM_OFFSET))(this, roomOwnerUID);
		}

		::System::Boolean IsCakeCaught(::System::UInt32 cakeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHT_OFFSET))(this, cakeID);
		}

		::System::Boolean IsCakeLocalAvailable(::System::UInt32 cakeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISCAKELOCALAVAILABLE_OFFSET))(this, cakeID);
		}

		::System::UInt32 GetAllCaughtCakeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETALLCAUGHTCAKECOUNT_OFFSET))(this);
		}

		::System::UInt32 GetCurrentRoomCakeCatchProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCURRENTROOMCAKECATCHPROGRESS_OFFSET))(this);
		}

		::RPG::Client::CakeCatchCatGodData* GetCatGodAtlasData()
		{
			return ((::RPG::Client::CakeCatchCatGodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCATGODATLASDATA_OFFSET))(this);
		}

		::System::Void RegisterWaitPerformanceBackToAdventure(::System::UInt32 performanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_REGISTERWAITPERFORMANCEBACKTOADVENTURE_OFFSET))(this, performanceID);
		}

		::System::Void _DataRefreshReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__DATAREFRESHREQ_OFFSET))(this);
		}

		::System::Void _PrepareSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__PREPARESLOTS_OFFSET))(this);
		}

		::System::Void _PreparePerformances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__PREPAREPERFORMANCES_OFFSET))(this);
		}

		::System::Void _CreateCakeDialogueManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__CREATECAKEDIALOGUEMANAGER_OFFSET))(this);
		}

		::System::Void _TryRefreshCakeStatus(::Class_1_70D2E0F3216AAE0C_1* roomInfo, ::System::UInt32 roomOwnerUid)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__TRYREFRESHCAKESTATUS_OFFSET))(this, roomInfo, roomOwnerUid);
		}

		::System::Void _RefreshCatGodState(::System::UInt64 validTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCATGODSTATE_OFFSET))(this, validTime);
		}

		::System::Void _RefreshCurrentCatGodSate(::Class_1_2D9E2FEEDBD521AF* catGodService, ::System::UInt64 validTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D9E2FEEDBD521AF*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCURRENTCATGODSATE_OFFSET))(this, catGodService, validTime);
		}

		::System::Void _RefreshLocalCatGodState(::Class_1_2D9E2FEEDBD521AF* catGodService, ::System::UInt64 validTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D9E2FEEDBD521AF*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCATGODSTATE_OFFSET))(this, catGodService, validTime);
		}

		::System::Void _RefreshCakeStatus(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_48*>* cakeHideList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_48*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKESTATUS_OFFSET))(this, cakeHideList);
		}

		::System::Void _RefreshUnlockedPerformance(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* performanceIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHUNLOCKEDPERFORMANCE_OFFSET))(this, performanceIdList);
		}

		::System::Void _RefreshCakeCatchCountHistory(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_971*>* cakeRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_971*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHCOUNTHISTORY_OFFSET))(this, cakeRecordList);
		}

		::System::Void _RefreshCakeCatchRecordHistory(::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_96*>* cakeRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_96*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHRECORDHISTORY_OFFSET))(this, cakeRecordList);
		}

		::System::Void _RefreshLocalCakeStatus(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_48*>* cakeHideList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_48*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCAKESTATUS_OFFSET))(this, cakeHideList);
		}

		::System::Void _RefreshBoxValidTime(::System::UInt64 boxValidTime, ::System::Boolean needNotify)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHBOXVALIDTIME_OFFSET))(this, boxValidTime, needNotify);
		}

		::System::Void _RefreshLocalBoxValidTime(::System::UInt64 boxValidTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALBOXVALIDTIME_OFFSET))(this, boxValidTime);
		}

		::System::Void _RefreshDIYLikeCount(::System::UInt32 diyLikeCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHDIYLIKECOUNT_OFFSET))(this, diyLikeCount);
		}

		::System::Void _RefreshLocalDIYLikeCount(::System::UInt32 diyLikeCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALDIYLIKECOUNT_OFFSET))(this, diyLikeCount);
		}

		::System::Void _RefreshCakeCatchTextJoin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHTEXTJOIN_OFFSET))(this);
		}

		::System::Boolean _IsBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ISBOXOPENABLE_OFFSET))(this);
		}

		::System::Boolean _IsLocalBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ISLOCALBOXOPENABLE_OFFSET))(this);
		}

		::System::UInt32 _GetWeeklySearchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__GETWEEKLYSEARCHCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetRandomCakeDatas(::System::Int32 count)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETRANDOMCAKEDATAS_OFFSET))(this, count);
		}

		::System::Void SetIsPlayerInDialogueRange(::System::Boolean isPlayerInRange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SETISPLAYERINDIALOGUERANGE_OFFSET))(this, isPlayerInRange);
		}

		::System::Void PlaySceneRandomDialogueLoop(::System::Single delayTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_PLAYSCENERANDOMDIALOGUELOOP_OFFSET))(this, delayTime);
		}

		::System::Void InterrupAllDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_INTERRUPALLDIALOGUE_OFFSET))(this);
		}

		::System::Boolean get_IsBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ISBOXOPENABLE_OFFSET))(this);
		}

		::System::Boolean get_IsLocalBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ISLOCALBOXOPENABLE_OFFSET))(this);
		}

		::System::UInt32 get_DIYLikeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_DIYLIKECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_WeeklySearchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_WEEKLYSEARCHCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_PendingCakeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_PENDINGCAKEID_OFFSET))(this);
		}

		::System::String* get_BoxValidTimeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_BOXVALIDTIMESTRING_OFFSET))(this);
		}

		::System::Void _Init_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__INIT_B__22_0_OFFSET))(this);
		}

		::System::Void _OpenCakeBoxResultPage_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__OPENCAKEBOXRESULTPAGE_B__51_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
