#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ItemComposeFuncType.h"

namespace RPG::Client { class ComposeItemData; }
namespace RPG::Client { class RelicComposeContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEDATALISTBYITEMIDFUNCTYPE_OFFSET UNITYSDK_OFFSET(0x94F4340)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEKEYSBYTYPE_OFFSET UNITYSDK_OFFSET(0x94F3CF0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETMAINTYPES_OFFSET UNITYSDK_OFFSET(0x94F3C00)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETREMAINCOMPOSENUM_OFFSET UNITYSDK_OFFSET(0x94F4270)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETSUBTYPESBYMAINTYPE_OFFSET UNITYSDK_OFFSET(0x94F3C40)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSENEWMAINTYPEUNLOCKLIST_OFFSET UNITYSDK_OFFSET(0x94F4DA0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSEONFORMULAUNLOCKMAINTYPEISNEWLIST_OFFSET UNITYSDK_OFFSET(0x94F4DB0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_MODULELIMITCOMPOSEDATAS_OFFSET UNITYSDK_OFFSET(0x94F4DC0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_RELICCOMPOSECONTEXT_OFFSET UNITYSDK_OFFSET(0x94F1520)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_UNLOCKEDFORMULALIST_OFFSET UNITYSDK_OFFSET(0x94F4D90)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_INITMAP_OFFSET UNITYSDK_OFFSET(0x94F1990)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x94F1900)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_SETCOMPOSEITEMISNEW_OFFSET UNITYSDK_OFFSET(0x94F34C0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_SETEQUIVALENTEXCHANGEREAD_OFFSET UNITYSDK_OFFSET(0x94F41E0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_1_OFFSET UNITYSDK_OFFSET(0x94F4000)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_OFFSET UNITYSDK_OFFSET(0x94F3E90)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATA_OFFSET UNITYSDK_OFFSET(0x94F3AA0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x94F24E0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x94F2320)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x94F2680)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSESELECTEDRELICSCRSP_OFFSET UNITYSDK_OFFSET(0x94F28A0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x94F1530)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__INITTYPEUNLOCKLIST_OFFSET UNITYSDK_OFFSET(0x94F4990)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDGETBAGSCRSP_OFFSET UNITYSDK_OFFSET(0x94F2AC0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x94F2CC0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDUSEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x94F2BD0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMCOMPLETESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x94F35C0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x94F3DA0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONDELETECOMPOSEFORMULAUNLOCKTABREDDOTREFRESHED_OFFSET UNITYSDK_OFFSET(0x94F4CF0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKMAINTYPEVIEWED_OFFSET UNITYSDK_OFFSET(0x94F4BF0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKNEWTYPE_OFFSET UNITYSDK_OFFSET(0x94F4AB0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x94F4DD0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x94F4EC0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x94F4E60)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeModule_TypeDefinitionIndex = 52257;

	class ItemComposeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* moduleLimitComposeDatas; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*>* composeItemMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* typeMap; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedFormulaList; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemComposeAllMainTypeUnlockList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ItemComposeLimitDict; // 0x38
		::RPG::Client::RelicComposeContext* _RelicComposeContext_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemComposeOnFormulaUnlockMainTypeIsNewList; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* mainTypes; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemComposeNewMainTypeUnlockList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::RelicComposeContext* get_RelicComposeContext()
		{
			return ((::RPG::Client::RelicComposeContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GET_RELICCOMPOSECONTEXT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_INIT_OFFSET))(this);
		}

		::System::Void InitMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_INITMAP_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdComposeItemScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSEITEMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdComposeSelectedRelicScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSESELECTEDRELICSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetBagScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDGETBAGSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdUseItemScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDUSEITEMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnComposeLimitNumCompleteScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMCOMPLETESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnComposeLimitNumUpdateScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMUPDATESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* GetComposeKeysByType(::System::UInt32 ComposeType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEKEYSBYTYPE_OFFSET))(this, ComposeType);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSubTypesByMainType(::System::UInt32 mainType)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETSUBTYPESBYMAINTYPE_OFFSET))(this, mainType);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMainTypes()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETMAINTYPES_OFFSET))(this);
		}

		::RPG::Client::ComposeItemData* TryGetComposeItemData(::System::UInt32 composeItemID)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATA_OFFSET))(this, composeItemID);
		}

		::RPG::Client::ComposeItemData* TryGetComposeItemDataByItemID(::System::UInt32 itemConfigID, ::System::UInt32 subType)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_OFFSET))(this, itemConfigID, subType);
		}

		::RPG::Client::ComposeItemData* TryGetComposeItemDataByItemID_1(::System::UInt32 itemConfigID, ::System::UInt32 subType, ::System::UInt32 limitType)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_1_OFFSET))(this, itemConfigID, subType, limitType);
		}

		::System::Void SetComposeItemIsNew(::RPG::Client::ComposeItemData* composeItemData, ::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_SETCOMPOSEITEMISNEW_OFFSET))(this, composeItemData, isNew);
		}

		::System::Void SetEquivalentExchangeRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_SETEQUIVALENTEXCHANGEREAD_OFFSET))(this);
		}

		::System::UInt32 GetRemainComposeNum(::System::UInt32 composeId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETREMAINCOMPOSENUM_OFFSET))(this, composeId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* GetComposeDataListByItemIDFuncType(::System::UInt32 itemID, ::RPG::GameCore::ItemComposeFuncType funcType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ItemComposeFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEDATALISTBYITEMIDFUNCTYPE_OFFSET))(this, itemID, funcType);
		}

		::System::Void _InitTypeUnlockList(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__INITTYPEUNLOCKLIST_OFFSET))(this, arg);
		}

		::System::Void _RefreshUnlockNewType(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKNEWTYPE_OFFSET))(this, arg);
		}

		::System::Void _RefreshUnlockMainTypeViewed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKMAINTYPEVIEWED_OFFSET))(this, arg);
		}

		::System::Void _OnDeleteComposeFormulaUnlockTabRedDotRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONDELETECOMPOSEFORMULAUNLOCKTABREDDOTREFRESHED_OFFSET))(this, arg);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedFormulaList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GET_UNLOCKEDFORMULALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ItemComposeNewMainTypeUnlockList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSENEWMAINTYPEUNLOCKLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ItemComposeOnFormulaUnlockMainTypeIsNewList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSEONFORMULAUNLOCKMAINTYPEISNEWLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* get_ModuleLimitComposeDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GET_MODULELIMITCOMPOSEDATAS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
