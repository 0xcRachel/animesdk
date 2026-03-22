#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_595;
class Class_1_789872D6523A4E58;
class Class_1_7A26D3FC0FA90BCA;
class Class_1_D2924896099E0408;
class Class_1_DF43B7EB585E1585;
class Class_2_FD0167EB507B9435_1;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightShopAutoRefreshModifier; }
namespace RPG::Client { class GridFightShopGood; }
namespace RPG::Client { class GridFightShopRole; }
namespace RPG::Client { class GridFightShopSpecialGood; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_1_OFFSET UNITYSDK_OFFSET(0x93E71D0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_OFFSET UNITYSDK_OFFSET(0x93E6FC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_CHECKROLELEVELUP_OFFSET UNITYSDK_OFFSET(0x93E6610)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ENTERPREPAREREPORT_OFFSET UNITYSDK_OFFSET(0x93E98F0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETCURRARITYWEIGHT_OFFSET UNITYSDK_OFFSET(0x93E74E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETRARITYWEIGHT_OFFSET UNITYSDK_OFFSET(0x93E7840)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLEBUYPRICE_OFFSET UNITYSDK_OFFSET(0x93E7930)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLELEVELUP_OFFSET UNITYSDK_OFFSET(0x93E7340)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLESELLPRICE_OFFSET UNITYSDK_OFFSET(0x93E7B80)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLEBYINDEX_OFFSET UNITYSDK_OFFSET(0x93E80F0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYIDANDSTAR_OFFSET UNITYSDK_OFFSET(0x93E6720)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYID_OFFSET UNITYSDK_OFFSET(0x93E6810)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHEDTIMES_OFFSET UNITYSDK_OFFSET(0x93E9240)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHENDTIMEMS_OFFSET UNITYSDK_OFFSET(0x93E8AB0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x93E8EC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHLEFTSEC_OFFSET UNITYSDK_OFFSET(0x93E9410)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHSTARTTIMEMS_OFFSET UNITYSDK_OFFSET(0x93E8D50)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHTIMERATIO_OFFSET UNITYSDK_OFFSET(0x93E92F0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x93E90E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFTRATIO_OFFSET UNITYSDK_OFFSET(0x93E8690)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFTSECS_OFFSET UNITYSDK_OFFSET(0x93E8860)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFT_OFFSET UNITYSDK_OFFSET(0x93E8990)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHSTARTTIME_OFFSET UNITYSDK_OFFSET(0x93E8530)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x93E84D0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_FREEREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x93E84B0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_INAUTOREFRESH_OFFSET UNITYSDK_OFFSET(0x93E9030)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_INCLEARREFRESHCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x93E8590)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISFREEREFRESH_OFFSET UNITYSDK_OFFSET(0x93E8350)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x93E8330)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISREFRESHGOLDCHANGED_OFFSET UNITYSDK_OFFSET(0x93E8360)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x93E8160)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_NEEDSHOWREFRESH_OFFSET UNITYSDK_OFFSET(0x93E9730)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_RARITYWEIGHTS_OFFSET UNITYSDK_OFFSET(0x93E8310)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_UNSOLDSHOPROLES_OFFSET UNITYSDK_OFFSET(0x93E81D0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET__SHOPROLES_OFFSET UNITYSDK_OFFSET(0x93E5A60)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET__SHOPSPECIAL_OFFSET UNITYSDK_OFFSET(0x93E9530)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_INIT_OFFSET UNITYSDK_OFFSET(0x93E54E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ISRARITYWEIGHTENHANCED_OFFSET UNITYSDK_OFFSET(0x93E7670)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ISROLERECOMMAND_OFFSET UNITYSDK_OFFSET(0x93E7490)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_LOCKSHOP_OFFSET UNITYSDK_OFFSET(0x93E8060)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0x93E58C0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0x93E5680)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0x93E57A0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSHOPGOODS_OFFSET UNITYSDK_OFFSET(0x93E7D00)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SELLROLE_OFFSET UNITYSDK_OFFSET(0x93E7EF0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x93E5C80)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SET_FREEREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x93E84C0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x93E8340)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SET_RARITYWEIGHTS_OFFSET UNITYSDK_OFFSET(0x93E8320)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SYNC_OFFSET UNITYSDK_OFFSET(0x93E5ED0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_TRYBUYROLE_OFFSET UNITYSDK_OFFSET(0x93E68F0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATESHOPROLES_OFFSET UNITYSDK_OFFSET(0x93E6080)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATE_OFFSET UNITYSDK_OFFSET(0x93E6390)
#define RPG_CLIENT_GRIDFIGHTROLESHOP__CCTOR_OFFSET UNITYSDK_OFFSET(0x93E9A80)
#define RPG_CLIENT_GRIDFIGHTROLESHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x93E9A00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_TypeDefinitionIndex = 51829;

	class GridFightRoleShop : public ::Sofa::Core::ObservableObject
	{
	public:
		static ::System::Int32* StaticGet_ShopSlotNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop_TypeDefinitionIndex)->GetStaticField(0x2C50);
		}
		static ::System::Int32* StaticGet_ShopRefreshGold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop_TypeDefinitionIndex)->GetStaticField(0x2C54);
		}
		::Il2CppArray<::RPG::Client::GridFightShopGood*>* _ShopGoods; // 0x18
		::RPG::Client::GridFightShopAutoRefreshModifier* _AutoRefreshModifier; // 0x20
		::Il2CppArray<::System::UInt32>* _RarityWeights_k__BackingField; // 0x28
		::Class_2_FD0167EB507B9435_1* _ClearRefreshModifier; // 0x30
		::System::UInt32 _FreeRefreshTimes_k__BackingField; // 0x38
		::System::Boolean _IsLocked_k__BackingField; // 0x3C
		::System::Boolean _EnterNodeRefresh; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP__CCTOR_OFFSET))();
		}

		::System::Void Init(::Class_1_789872D6523A4E58* gameModifier)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_789872D6523A4E58*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_INIT_OFFSET))(this, gameModifier);
		}

		::System::Void OnModifierAdd(::RPG::Client::GridFightGameModifier* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERADD_OFFSET))(this, modifier);
		}

		::System::Void OnModifierRemove(::RPG::Client::GridFightGameModifier* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERREMOVE_OFFSET))(this, modifier);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 avatarRealID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ONAVATARDATACHANGED_OFFSET))(this, avatarRealID);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_595* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_595*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void Sync(::Class_1_7A26D3FC0FA90BCA* shopInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A26D3FC0FA90BCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SYNC_OFFSET))(this, shopInfo);
		}

		::System::Void Update(::Class_1_DF43B7EB585E1585* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DF43B7EB585E1585*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATE_OFFSET))(this, update);
		}

		::System::Boolean CheckRoleLevelUp(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_CHECKROLELEVELUP_OFFSET))(this, id, star);
		}

		::System::UInt32 GetShopRoleCountByIDAndStar(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYIDANDSTAR_OFFSET))(this, id, star);
		}

		::System::UInt32 GetShopRoleCountByID(::System::UInt32 id)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYID_OFFSET))(this, id);
		}

		::System::Boolean TryBuyRole(::System::UInt32 goodIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_TRYBUYROLE_OFFSET))(this, goodIndex);
		}

		::System::UInt32 GetRoleLevelUp(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLELEVELUP_OFFSET))(this, id, star);
		}

		::System::Boolean IsRoleRecommand(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ISROLERECOMMAND_OFFSET))(this, id);
		}

		::System::UInt32 GetCurRarityWeight(::System::UInt32 rarity)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETCURRARITYWEIGHT_OFFSET))(this, rarity);
		}

		::System::Boolean IsRarityWeightEnhanced(::System::UInt32 rarity)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ISRARITYWEIGHTENHANCED_OFFSET))(this, rarity);
		}

		::System::UInt32 GetRarityWeight(::System::UInt32 level, ::System::UInt32 rarity)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETRARITYWEIGHT_OFFSET))(this, level, rarity);
		}

		::System::UInt32 GetRoleBuyPrice(::RPG::Client::GridFightShopRole* shopRole)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLEBUYPRICE_OFFSET))(this, shopRole);
		}

		::System::UInt32 GetRoleSellPrice(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLESELLPRICE_OFFSET))(this, id, star);
		}

		::System::Void RefreshShopGoods()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSHOPGOODS_OFFSET))(this);
		}

		::System::Void BuyRole(::System::UInt32 goodIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_OFFSET))(this, goodIndex);
		}

		::System::Void BuyRole_1(::System::Collections::Generic::List_1<::System::UInt32>* goodIndexs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_1_OFFSET))(this, goodIndexs);
		}

		::System::Void SellRole(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SELLROLE_OFFSET))(this, uid);
		}

		::System::Void LockShop(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_LOCKSHOP_OFFSET))(this, isLock);
		}

		::RPG::Client::GridFightShopGood* GetShopRoleByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightShopGood*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLEBYINDEX_OFFSET))(this, index);
		}

		::RPG::Client::GridFightShopGood* get_Item(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightShopGood*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ITEM_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightShopGood*>* get_UnsoldShopRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightShopGood*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_UNSOLDSHOPROLES_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RarityWeights()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_RARITYWEIGHTS_OFFSET))(this);
		}

		::System::Void set_RarityWeights(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SET_RARITYWEIGHTS_OFFSET))(this, value);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SET_ISLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_IsFreeRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISFREEREFRESH_OFFSET))(this);
		}

		::System::Boolean get_IsRefreshGoldChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISREFRESHGOLDCHANGED_OFFSET))(this);
		}

		::System::UInt32 get_FreeRefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_FREEREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_FreeRefreshTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SET_FREEREFRESHTIMES_OFFSET))(this, value);
		}

		::System::Int64 get_ClearRefreshTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHTIME_OFFSET))(this);
		}

		::System::Int64 get_ClearRefreshStartTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHSTARTTIME_OFFSET))(this);
		}

		::System::Boolean get_InClearRefreshCountDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_INCLEARREFRESHCOUNTDOWN_OFFSET))(this);
		}

		::System::Single get_ClearRefreshLeftRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFTRATIO_OFFSET))(this);
		}

		::System::Int32 get_ClearRefreshLeftSecs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFTSECS_OFFSET))(this);
		}

		::System::Single get_ClearRefreshLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFT_OFFSET))(this);
		}

		::System::UInt64 get_AutoRefreshEndTimeMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHENDTIMEMS_OFFSET))(this);
		}

		::System::UInt64 get_AutoRefreshStartTimeMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHSTARTTIMEMS_OFFSET))(this);
		}

		::System::UInt32 get_AutoRefreshInterval()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHINTERVAL_OFFSET))(this);
		}

		::System::Boolean get_InAutoRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_INAUTOREFRESH_OFFSET))(this);
		}

		::System::UInt32 get_AutoRefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHTIMES_OFFSET))(this);
		}

		::System::UInt32 get_AutoRefreshedTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHEDTIMES_OFFSET))(this);
		}

		::System::Single get_AutoRefreshTimeRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHTIMERATIO_OFFSET))(this);
		}

		::System::Int32 get_AutoRefreshLeftSec()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHLEFTSEC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightShopRole*>* get__ShopRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightShopRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET__SHOPROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightShopSpecialGood*>* get__ShopSpecial()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightShopSpecialGood*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET__SHOPSPECIAL_OFFSET))(this);
		}

		::System::Boolean get_NeedShowRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_NEEDSHOWREFRESH_OFFSET))(this);
		}

		::System::Void UpdateShopRoles(::System::Collections::Generic::IList_1<::Class_1_D2924896099E0408*>* shopGoods)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D2924896099E0408*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATESHOPROLES_OFFSET))(this, shopGoods);
		}

		::System::Void EnterPrepareReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ENTERPREPAREREPORT_OFFSET))(this);
		}
	};
}
