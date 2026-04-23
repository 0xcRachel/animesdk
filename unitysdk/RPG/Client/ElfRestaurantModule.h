#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ElfBehaviorInfo; }
namespace RPG::Client { class ElfEventInfo; }
namespace RPG::Client { class ElfFacilityInfo; }
namespace RPG::Client { class ElfFarmInfo; }
namespace RPG::Client { class ElfGame; }
namespace RPG::Client { class ElfRedDotManager; }
namespace RPG::Client { class ElfRestaurantEmployeeInfo; }
namespace RPG::Client { class ElfRestaurantInfo; }
namespace RPG::Client { class ElfRestaurantModule_TakeOutInfo; }
namespace RPG::Client { class ElfRestaurantProfileInfo; }
namespace RPG::Client { class ElfRestaurantProgressInfo; }
namespace RPG::Client { class ElfShopInfo; }
namespace System { class Object; }

#define RPG_CLIENT_ELFRESTAURANTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15ACAA10)
#define RPG_CLIENT_ELFRESTAURANTMODULE_GETDECORATORLEVEL_OFFSET UNITYSDK_OFFSET(0x15ABAE70)
#define RPG_CLIENT_ELFRESTAURANTMODULE_GET_BEHAVIORINFO_OFFSET UNITYSDK_OFFSET(0x15ACB690)
#define RPG_CLIENT_ELFRESTAURANTMODULE_GET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x15ACB6B0)
#define RPG_CLIENT_ELFRESTAURANTMODULE_GET_FARMINFO_OFFSET UNITYSDK_OFFSET(0x15ACB6D0)
#define RPG_CLIENT_ELFRESTAURANTMODULE_GET_RESTAURANTINFO_OFFSET UNITYSDK_OFFSET(0x15ACB670)
#define RPG_CLIENT_ELFRESTAURANTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x15ACA120)
#define RPG_CLIENT_ELFRESTAURANTMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x15ACA920)
#define RPG_CLIENT_ELFRESTAURANTMODULE_SENDGETDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x15AC6AA0)
#define RPG_CLIENT_ELFRESTAURANTMODULE_SET_BEHAVIORINFO_OFFSET UNITYSDK_OFFSET(0x15ACB6A0)
#define RPG_CLIENT_ELFRESTAURANTMODULE_SET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x15ACB6C0)
#define RPG_CLIENT_ELFRESTAURANTMODULE_SET_FARMINFO_OFFSET UNITYSDK_OFFSET(0x15ACB6E0)
#define RPG_CLIENT_ELFRESTAURANTMODULE_SET_RESTAURANTINFO_OFFSET UNITYSDK_OFFSET(0x15ACB680)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x15ACA870)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x15AC6700)
#define RPG_CLIENT_ELFRESTAURANTMODULE__CANCELREQUESTSONRECONNECT_OFFSET UNITYSDK_OFFSET(0x15AC6A60)
#define RPG_CLIENT_ELFRESTAURANTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x15ACB6F0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONACTIVITYOPEN_OFFSET UNITYSDK_OFFSET(0x15ACB390)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTBUYFIELDSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC8D10)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTBUYSHOPITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC9310)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x15AC7690)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTFINISHTRADEORDERSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC9470)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTHARVESTCROPSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC8DC0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTPLANTSEEDSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC7420)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTRECYCLESEEDSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC9190)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTTAKEVILLAGERREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC99B0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADEEMPLOYEELEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC98A0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADEFACILITYLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC95D0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADERECIPELEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC92B0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDENTERELFRESTAURANTNEXTDAYSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC9230)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDGETELFRESTAURANTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x15AC6BF0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDSETELFRESTAURANTPLAYRECIPESCRSP_OFFSET UNITYSDK_OFFSET(0x15AC9960)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDSETTLEELFRESTAURANTPLAYSCRSP_OFFSET UNITYSDK_OFFSET(0x15AC9900)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x15ACB0B0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__TRYSYNCPLANTVIEW_OFFSET UNITYSDK_OFFSET(0x15AC8A50)
#define RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15ACB8C0)
#define RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x15ACB770)
#define RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x15ACB860)
#define RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x15ACB800)
#define RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x15ACB710)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantModule_TypeDefinitionIndex = 58652;

	class ElfRestaurantModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ElfFarmInfo* _FarmInfo_k__BackingField; // 0x10
		::RPG::Client::ElfRestaurantModule_TakeOutInfo* TakeoutInfo; // 0x18
		::RPG::Client::ElfRedDotManager* RedDotManager; // 0x20
		::RPG::Client::ElfFacilityInfo* FacilityInfo; // 0x28
		::RPG::Client::ElfRestaurantEmployeeInfo* EmployeeInfo; // 0x30
		::RPG::Client::ElfRestaurantProfileInfo* ProfileInfo; // 0x38
		::RPG::Client::ElfEventInfo* _EventInfo_k__BackingField; // 0x40
		::RPG::Client::ElfBehaviorInfo* _BehaviorInfo_k__BackingField; // 0x48
		::RPG::Client::ElfRestaurantProgressInfo* TimeInfo; // 0x50
		::RPG::Client::ElfRestaurantInfo* _RestaurantInfo_k__BackingField; // 0x58
		::RPG::Client::ElfGame* Game; // 0x60
		::RPG::Client::ElfShopInfo* ShopInfo; // 0x68
		::System::Boolean _IsRequestingGetElfRestaurantData; // 0x70
		::System::Boolean IsMustFullRecipeSlot; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CancelRequestsOnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__CANCELREQUESTSONRECONNECT_OFFSET))(this);
		}

		::System::Void SendGetDataRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_SENDGETDATAREQUEST_OFFSET))(this);
		}

		::System::Void _OnCmdGetElfRestaurantDataScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDGETELFRESTAURANTDATASCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantPlantSeedScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTPLANTSEEDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantDataChangeNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTDATACHANGENOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _TrySyncPlantView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__TRYSYNCPLANTVIEW_OFFSET))(this);
		}

		::System::Void _OnCmdElfRestaurantBuyFieldScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTBUYFIELDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantHarvestCropScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTHARVESTCROPSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantRecycleSeedScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTRECYCLESEEDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdEnterElfRestaurantNextDayScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDENTERELFRESTAURANTNEXTDAYSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantUpgradeRecipeLevelScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADERECIPELEVELSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantBuyShopItemScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTBUYSHOPITEMSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantFinishTradeOrderScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTFINISHTRADEORDERSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantUpgradeFacilityLevelScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADEFACILITYLEVELSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantUpgradeEmployeeLevelScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADEEMPLOYEELEVELSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdSettleElfRestaurantPlayScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDSETTLEELFRESTAURANTPLAYSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdSetElfRestaurantPlayRecipeScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDSETELFRESTAURANTPLAYRECIPESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantTakeVillagerRewardScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTTAKEVILLAGERREWARDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void _OnActivityOpen(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONACTIVITYOPEN_OFFSET))(this, param);
		}

		::RPG::Client::ElfRestaurantInfo* get_RestaurantInfo()
		{
			return ((::RPG::Client::ElfRestaurantInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_GET_RESTAURANTINFO_OFFSET))(this);
		}

		::System::Void set_RestaurantInfo(::RPG::Client::ElfRestaurantInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_SET_RESTAURANTINFO_OFFSET))(this, value);
		}

		::RPG::Client::ElfBehaviorInfo* get_BehaviorInfo()
		{
			return ((::RPG::Client::ElfBehaviorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_GET_BEHAVIORINFO_OFFSET))(this);
		}

		::System::Void set_BehaviorInfo(::RPG::Client::ElfBehaviorInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfBehaviorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_SET_BEHAVIORINFO_OFFSET))(this, value);
		}

		::RPG::Client::ElfEventInfo* get_EventInfo()
		{
			return ((::RPG::Client::ElfEventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_GET_EVENTINFO_OFFSET))(this);
		}

		::System::Void set_EventInfo(::RPG::Client::ElfEventInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfEventInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_SET_EVENTINFO_OFFSET))(this, value);
		}

		::RPG::Client::ElfFarmInfo* get_FarmInfo()
		{
			return ((::RPG::Client::ElfFarmInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_GET_FARMINFO_OFFSET))(this);
		}

		::System::Void set_FarmInfo(::RPG::Client::ElfFarmInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_SET_FARMINFO_OFFSET))(this, value);
		}

		::System::UInt32 GetDecoratorLevel(::System::UInt32 decoratorID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_GETDECORATORLEVEL_OFFSET))(this, decoratorID);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
