#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_7A8F7ACF0C7369F4;
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace RPG::Client::ActivityIdleLive { class SpSlotUiData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_CANCELPREREPLACEDEQUIPS_OFFSET UNITYSDK_OFFSET(0x17313D40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_CLEARALLSPEQUIPS_OFFSET UNITYSDK_OFFSET(0x173127D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLEQUIPPEDSLOTS_OFFSET UNITYSDK_OFFSET(0x173126A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLEQUIPPEDSPEQUIPS_OFFSET UNITYSDK_OFFSET(0x17312980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLSLOTSEQUPPEDBYAVATAR_OFFSET UNITYSDK_OFFSET(0x17312120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLSPEQUIPSLOTUIDATAS_OFFSET UNITYSDK_OFFSET(0x17312D00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETEQUIPBELONGEDONEBASEDINDEX_OFFSET UNITYSDK_OFFSET(0x173130B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETEQUIPMENTMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0x17313F80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETSLOTIDBYTEAMSLOT_OFFSET UNITYSDK_OFFSET(0x173122C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x17312030)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_HASUNLOCKEDSLOT_OFFSET UNITYSDK_OFFSET(0x173124A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_ISEQUIPWORN_OFFSET UNITYSDK_OFFSET(0x17310690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_ISSLOTALLEQUIPPED_OFFSET UNITYSDK_OFFSET(0x17310F90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_PREREPLACEEQUIP_OFFSET UNITYSDK_OFFSET(0x17313830)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x17312040)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETEMPTYSLOTID_OFFSET UNITYSDK_OFFSET(0x17313490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETEQUIPBELONGEDSLOT_OFFSET UNITYSDK_OFFSET(0x17312FA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSLOTBYID_OFFSET UNITYSDK_OFFSET(0x173123C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSPEQUIPSTATUSIFTAKEOFFEQUIP_OFFSET UNITYSDK_OFFSET(0x173114E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSPEQUIPSTATUSIFWEAREQUIP_OFFSET UNITYSDK_OFFSET(0x17311260)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETWORNEQUIPBYAVATAR_OFFSET UNITYSDK_OFFSET(0x17313690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETWORNEQUIPBYEQUIPID_OFFSET UNITYSDK_OFFSET(0x17312EA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYREPLACEEQUIPBYLIST_OFFSET UNITYSDK_OFFSET(0x17313A80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYREPLACEEQUIP_OFFSET UNITYSDK_OFFSET(0x173139A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_WEAREQUIP_OFFSET UNITYSDK_OFFSET(0x17313C50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CANTAKEOFFEQUIP_OFFSET UNITYSDK_OFFSET(0x17313290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CANWEARNEWEQUIP_OFFSET UNITYSDK_OFFSET(0x173132F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17312090)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__GETFIRSTEMPTYSLOT_OFFSET UNITYSDK_OFFSET(0x17313360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__INCREASEVERSION_OFFSET UNITYSDK_OFFSET(0x17312050)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipSlotInfo_TypeDefinitionIndex = 69296;

	class SpEquipSlotInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>* _SpEquipSlots; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>* _PreUpdatedEquips; // 0x18
		::System::UInt32 _Version_k__BackingField; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>* spEquipSlots)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CTOR_OFFSET))(this, spEquipSlots);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_SET_VERSION_OFFSET))(this, value);
		}

		::System::Void _IncreaseVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__INCREASEVERSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>* GetAllSlotsEquppedByAvatar(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* teamInfo)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLSLOTSEQUPPEDBYAVATAR_OFFSET))(this, teamInfo);
		}

		::System::UInt32 GetSlotIdByTeamSlot(::System::UInt32 teamSlotId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETSLOTIDBYTEAMSLOT_OFFSET))(this, teamSlotId);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotData* TryGetSlotById(::System::UInt32 slotId)
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSLOTBYID_OFFSET))(this, slotId);
		}

		::System::Boolean HasUnlockedSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_HASUNLOCKEDSLOT_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>* GetAllEquippedSlots()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLEQUIPPEDSLOTS_OFFSET))(this);
		}

		::System::Void ClearAllSpEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_CLEARALLSPEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* GetAllEquippedSpEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLEQUIPPEDSPEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>* GetAllSpEquipSlotUiDatas(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* teamInfo)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLSPEQUIPSLOTUIDATAS_OFFSET))(this, teamInfo);
		}

		::RPG::Client::ActivityIdleLive::SpecialEquip* TryGetWornEquipByEquipId(::System::UInt32 equipId)
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETWORNEQUIPBYEQUIPID_OFFSET))(this, equipId);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotData* TryGetEquipBelongedSlot(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotData*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETEQUIPBELONGEDSLOT_OFFSET))(this, equip);
		}

		::System::Boolean IsEquipWorn(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_ISEQUIPWORN_OFFSET))(this, equip);
		}

		::System::Int32 GetEquipBelongedOneBasedIndex(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETEQUIPBELONGEDONEBASEDINDEX_OFFSET))(this, equip);
		}

		::System::Boolean _CanTakeOffEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CANTAKEOFFEQUIP_OFFSET))(this, equip);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* TryGetSpEquipStatusIfTakeOffEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSPEQUIPSTATUSIFTAKEOFFEQUIP_OFFSET))(this, equip);
		}

		::System::Boolean _CanWearNewEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CANWEARNEWEQUIP_OFFSET))(this, equip);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* TryGetSpEquipStatusIfWearEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSPEQUIPSTATUSIFWEAREQUIP_OFFSET))(this, equip);
		}

		::System::UInt32 TryGetEmptySlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETEMPTYSLOTID_OFFSET))(this);
		}

		::System::Boolean IsSlotAllEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_ISSLOTALLEQUIPPED_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotData* _GetFirstEmptySlot()
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__GETFIRSTEMPTYSLOT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpecialEquip* TryGetWornEquipByAvatar(::System::UInt32 avatarId, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* teamInfo)
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETWORNEQUIPBYAVATAR_OFFSET))(this, avatarId, teamInfo);
		}

		::System::Void PreReplaceEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* newEquip)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_PREREPLACEEQUIP_OFFSET))(this, newEquip);
		}

		::System::Void TryReplaceEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* newEquip)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYREPLACEEQUIP_OFFSET))(this, newEquip);
		}

		::System::Void TryReplaceEquipByList(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* equipList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYREPLACEEQUIPBYLIST_OFFSET))(this, equipList);
		}

		::System::Void WearEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* spEquip, ::System::UInt32 slotId)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_WEAREQUIP_OFFSET))(this, spEquip, slotId);
		}

		::System::Void CancelPreReplacedEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_CANCELPREREPLACEDEQUIPS_OFFSET))(this);
		}

		::Class_2_7A8F7ACF0C7369F4* GetEquipmentModifierSource(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* avatar, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* teamInfo)
		{
			return ((::Class_2_7A8F7ACF0C7369F4*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETEQUIPMENTMODIFIERSOURCE_OFFSET))(this, avatar, teamInfo);
		}
	};
}
