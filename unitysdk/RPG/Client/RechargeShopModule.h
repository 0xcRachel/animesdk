#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_AED1B98FD9AB0418_1;
namespace RPG::Client { class PayModule; }
namespace RPG::Client { class Product; }
namespace RPG::Client { class RechargeGiftData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECHARGESHOPMODULE_BUYGIFT_OFFSET UNITYSDK_OFFSET(0x16014C50)
#define RPG_CLIENT_RECHARGESHOPMODULE_CLAIMGIFTREWARD_OFFSET UNITYSDK_OFFSET(0x16014DF0)
#define RPG_CLIENT_RECHARGESHOPMODULE_GETGIFTDATABYREWARDID_OFFSET UNITYSDK_OFFSET(0x160136D0)
#define RPG_CLIENT_RECHARGESHOPMODULE_GETGIFTDATA_OFFSET UNITYSDK_OFFSET(0x16013670)
#define RPG_CLIENT_RECHARGESHOPMODULE_GETSHOPGIFTSBYSHOPID_OFFSET UNITYSDK_OFFSET(0x16015160)
#define RPG_CLIENT_RECHARGESHOPMODULE_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x16011B50)
#define RPG_CLIENT_RECHARGESHOPMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x16013250)
#define RPG_CLIENT_RECHARGESHOPMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x160135F0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTCLEARSEENGIFTRECORDS_OFFSET UNITYSDK_OFFSET(0x16013150)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNEWINSHOP_OFFSET UNITYSDK_OFFSET(0x16012C10)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNEW_OFFSET UNITYSDK_OFFSET(0x16011A50)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNORMAL_OFFSET UNITYSDK_OFFSET(0x16011BB0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTNEW_OFFSET UNITYSDK_OFFSET(0x16012440)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTREWARDING_OFFSET UNITYSDK_OFFSET(0x160126F0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTSETGIFTSEEN_OFFSET UNITYSDK_OFFSET(0x160128D0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REDDOTVISITREWARDINGGIFTPACKS_OFFSET UNITYSDK_OFFSET(0x16011CB0)
#define RPG_CLIENT_RECHARGESHOPMODULE_REQUESTDATA_OFFSET UNITYSDK_OFFSET(0x16013E30)
#define RPG_CLIENT_RECHARGESHOPMODULE_REQUESTGIFTDATAONLY_OFFSET UNITYSDK_OFFSET(0x16013530)
#define RPG_CLIENT_RECHARGESHOPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x16013390)
#define RPG_CLIENT_RECHARGESHOPMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x16013430)
#define RPG_CLIENT_RECHARGESHOPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x16015530)
#define RPG_CLIENT_RECHARGESHOPMODULE__GETDISPLAYPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x16013D00)
#define RPG_CLIENT_RECHARGESHOPMODULE__GETPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x16013C50)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONDAILYREFRESHNOTIFY_OFFSET UNITYSDK_OFFSET(0x160146D0)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONGETRECHARGEGIFTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x16014720)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x160134E0)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONPRODUCTDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x160145E0)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONREQUESTDATACOMPLETED_OFFSET UNITYSDK_OFFSET(0x160149D0)
#define RPG_CLIENT_RECHARGESHOPMODULE__ONTAKERECHARGEGIFTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x16014FE0)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTDATA_OFFSET UNITYSDK_OFFSET(0x16013F70)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATAONLY_B__25_0_OFFSET UNITYSDK_OFFSET(0x160155C0)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATA_OFFSET UNITYSDK_OFFSET(0x16014200)
#define RPG_CLIENT_RECHARGESHOPMODULE__REQUESTPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x16014460)
#define RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x16015710)
#define RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x16015860)
#define RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x160157A0)
#define RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x16015800)
#define RPG_CLIENT_RECHARGESHOPMODULE___REQUESTDATA_B__26_0_OFFSET UNITYSDK_OFFSET(0x16015600)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopModule_TypeDefinitionIndex = 61512;

	class RechargeShopModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>* _GiftDataOfType; // 0x10
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _IsWaitingForProductData; // 0x18
		::RPG::Client::PayModule* _PayModule; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AED1B98FD9AB0418_1*>* _ServerGiftData; // 0x28
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _IsWaitingForGiftData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean ReddotHasAnythingNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNEW_OFFSET))(this);
		}

		::System::Boolean ReddotHasAnythingNormal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNORMAL_OFFSET))(this);
		}

		::System::Void ReddotVisitRewardingGiftPacks(::System::Action_1<::System::UInt32>* visitor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTVISITREWARDINGGIFTPACKS_OFFSET))(this, visitor);
		}

		::System::Boolean ReddotIsGiftNew(::System::UInt32 giftType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTNEW_OFFSET))(this, giftType);
		}

		::System::Boolean ReddotIsGiftRewarding(::System::UInt32 giftType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTISGIFTREWARDING_OFFSET))(this, giftType);
		}

		::System::Void ReddotSetGiftSeen(::System::UInt32 giftType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTSETGIFTSEEN_OFFSET))(this, giftType);
		}

		::System::Boolean ReddotHasAnythingNewInShop(::System::UInt32 shopID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTHASANYTHINGNEWINSHOP_OFFSET))(this, shopID);
		}

		::System::Void ReddotClearSeenGiftRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REDDOTCLEARSEENGIFTRECORDS_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::RechargeGiftData* GetGiftData(::System::UInt32 giftType)
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_GETGIFTDATA_OFFSET))(this, giftType);
		}

		::RPG::Client::RechargeGiftData* GetGiftDataByRewardID(::System::UInt32 giftID)
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_GETGIFTDATABYREWARDID_OFFSET))(this, giftID);
		}

		::RPG::Client::Product* _GetProductData(::System::UInt32 giftType)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__GETPRODUCTDATA_OFFSET))(this, giftType);
		}

		::RPG::Client::Product* _GetdisplayProductData(::System::UInt32 giftType)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__GETDISPLAYPRODUCTDATA_OFFSET))(this, giftType);
		}

		::System::Void RequestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REQUESTDATA_OFFSET))(this);
		}

		::System::Void RequestGiftDataOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_REQUESTGIFTDATAONLY_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _RequestData()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__REQUESTDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Boolean>* _RequestProductData()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__REQUESTPRODUCTDATA_OFFSET))(this);
		}

		::System::Void _OnProductDataUpdated(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONPRODUCTDATAUPDATED_OFFSET))(this, o);
		}

		::System::Void _OnDailyRefreshNotify(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONDAILYREFRESHNOTIFY_OFFSET))(this, _);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _RequestGiftData()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATA_OFFSET))(this);
		}

		::System::Void _OnGetRechargeGiftInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONGETRECHARGEGIFTINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnRequestDataCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONREQUESTDATACOMPLETED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Boolean>* BuyGift(::System::UInt32 giftType)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_BUYGIFT_OFFSET))(this, giftType);
		}

		::System::Void ClaimGiftReward(::System::UInt32 giftType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_CLAIMGIFTREWARD_OFFSET))(this, giftType);
		}

		::System::Void _OnTakeRechargeGiftRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__ONTAKERECHARGEGIFTREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RechargeGiftData*>* GetShopGiftsByShopID(::System::UInt32 shopID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RechargeGiftData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE_GETSHOPGIFTSBYSHOPID_OFFSET))(this, shopID);
		}

		::System::Void _RequestGiftDataOnly_b__25_0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE__REQUESTGIFTDATAONLY_B__25_0_OFFSET))(this, success);
		}

		::System::Boolean __RequestData_b__26_0(::System::Collections::Generic::IEnumerable_1<::System::Boolean>* results)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___REQUESTDATA_B__26_0_OFFSET))(this, results);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
