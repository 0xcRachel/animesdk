#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirPlaneStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASEHP_OFFSET UNITYSDK_OFFSET(0x18CF95C0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASELIFE_OFFSET UNITYSDK_OFFSET(0x18CF95A0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0x18CF96C0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_EQUIPIDLIST_OFFSET UNITYSDK_OFFSET(0x18CF96E0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18CF9620)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ISSELECTABLE_OFFSET UNITYSDK_OFFSET(0x18CF9940)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_LARGEPLANEICONPATH_OFFSET UNITYSDK_OFFSET(0x18CF9640)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x18CF95E0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18CF9600)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERDESC_OFFSET UNITYSDK_OFFSET(0x18CF96A0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERICONPATH_OFFSET UNITYSDK_OFFSET(0x18CF9660)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0x18CF9680)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0x18CF9560)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x18CF9830)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMID_OFFSET UNITYSDK_OFFSET(0x18CF9720)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x18CF9580)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0x18CF9700)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETNOTOBTAINED_OFFSET UNITYSDK_OFFSET(0x18CF2710)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x18CF5040)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASEHP_OFFSET UNITYSDK_OFFSET(0x18CF95D0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASELIFE_OFFSET UNITYSDK_OFFSET(0x18CF95B0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0x18CF96D0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_EQUIPIDLIST_OFFSET UNITYSDK_OFFSET(0x18CF96F0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18CF9630)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ISSELECTABLE_OFFSET UNITYSDK_OFFSET(0x18CF9950)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_LARGEPLANEICONPATH_OFFSET UNITYSDK_OFFSET(0x18CF9650)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x18CF95F0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18CF9610)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERDESC_OFFSET UNITYSDK_OFFSET(0x18CF96B0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERICONPATH_OFFSET UNITYSDK_OFFSET(0x18CF9670)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0x18CF9690)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0x18CF9570)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x18CF9590)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0x18CF9710)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x18CF92E0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF94E0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneData_TypeDefinitionIndex = 73693;

	class PixAirPlaneData : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::String* _ModelPath_k__BackingField; // 0x18
		::System::String* _OwnerIconPath_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _EquipIDList_k__BackingField; // 0x28
		::System::String* _LargePlaneIconPath_k__BackingField; // 0x30
		::RPG::Client::PixAir::PixAirPlaneStatus _Status_k__BackingField; // 0x38
		::System::UInt32 _UnLockScore_k__BackingField; // 0x3C
		::RPG::Client::TextID _OwnerName_k__BackingField; // 0x40
		::System::UInt32 _PlaneID_k__BackingField; // 0x50
		::System::UInt32 _CoreEquipID_k__BackingField; // 0x54
		::System::Int32 _BaseLife_k__BackingField; // 0x58
		::System::Boolean _IsSelectable_k__BackingField; // 0x5C
		::RPG::Client::TextID _Name_k__BackingField; // 0x60
		::RPG::Client::TextID _OwnerDesc_k__BackingField; // 0x70
		::RPG::GameCore::FixPoint _BaseHP_k__BackingField; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirPlaneData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirPlaneData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_TRYCREATE_OFFSET))(a1);
		}

		::System::Void SetNotObtained()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETNOTOBTAINED_OFFSET))(this);
		}

		::System::Void SetUnlocked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_PLANEID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirPlaneStatus get_Status()
		{
			return ((::RPG::Client::PixAir::PixAirPlaneStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::PixAir::PixAirPlaneStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirPlaneStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Int32 get_BaseLife()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASELIFE_OFFSET))(this);
		}

		::System::Void set_BaseLife(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASELIFE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BaseHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASEHP_OFFSET))(this);
		}

		::System::Void set_BaseHP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASEHP_OFFSET))(this, a1);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_MODELPATH_OFFSET))(this);
		}

		::System::Void set_ModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_MODELPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_LargePlaneIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_LARGEPLANEICONPATH_OFFSET))(this);
		}

		::System::Void set_LargePlaneIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_LARGEPLANEICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_OwnerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERICONPATH_OFFSET))(this);
		}

		::System::Void set_OwnerIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OwnerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERNAME_OFFSET))(this);
		}

		::System::Void set_OwnerName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OwnerDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERDESC_OFFSET))(this);
		}

		::System::Void set_OwnerDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERDESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoreEquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_COREEQUIPID_OFFSET))(this);
		}

		::System::Void set_CoreEquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_COREEQUIPID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_EquipIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_EQUIPIDLIST_OFFSET))(this);
		}

		::System::Void set_EquipIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_EQUIPIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnLockScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_UNLOCKSCORE_OFFSET))(this);
		}

		::System::Void set_UnLockScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_UNLOCKSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PurchaseItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMID_OFFSET))(this);
		}

		::System::UInt32 get_PurchaseItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSelectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ISSELECTABLE_OFFSET))(this);
		}

		::System::Void set_IsSelectable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ISSELECTABLE_OFFSET))(this, a1);
		}
	};
}
