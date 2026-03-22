#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_73;
namespace RPG::Client { class RogueMiracleShopItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x9E261F0)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_GET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0x9E26650)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDBUYROGUESHOPMIRACLECSREQ_OFFSET UNITYSDK_OFFSET(0x9E260D0)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDGETROGUESHOPMIRACLEINFOCSREQ_OFFSET UNITYSDK_OFFSET(0x9E25FD0)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0x9E26660)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9E25BD0)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E26670)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA__SYNCITEMS_OFFSET UNITYSDK_OFFSET(0x9E25C30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleShopData_TypeDefinitionIndex = 53505;

	class RogueMiracleShopData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>* _InShopItems_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_E7C4009BCC22497A_73* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_73*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SYNC_OFFSET))(this, info);
		}

		::System::Void SendGetRogueShopMiracleInfoCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDGETROGUESHOPMIRACLEINFOCSREQ_OFFSET))(this);
		}

		::System::Void SendBuyRogueShopMiracleCsReq(::System::UInt32 miracleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDBUYROGUESHOPMIRACLECSREQ_OFFSET))(this, miracleID);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_CLEAR_OFFSET))(this);
		}

		::System::Void _SyncItems(::Class_1_E7C4009BCC22497A_73* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_73*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA__SYNCITEMS_OFFSET))(this, info);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>* get_InShopItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_GET_INSHOPITEMS_OFFSET))(this);
		}

		::System::Void set_InShopItems(::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SET_INSHOPITEMS_OFFSET))(this, value);
		}
	};
}
