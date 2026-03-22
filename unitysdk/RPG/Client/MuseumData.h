#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_42.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_68;
class Class_1_146971F22DC780FC_2;
class Class_1_14E02E1F6D70E487_4;
class Class_1_352A8B3482C80E7D_37;
class Class_1_CD010263573232AE_2;
class Class_1_FA4F4A67B1C04320_578;
class Class_1_FA4F4A67B1C04320_585;
class Class_1_FA4F4A67B1C04320_588;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumExhibitItemData; }
namespace RPG::Client { class MuseumPropertyData; }
namespace RPG::Client { class MuseumRandomEventData; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::Client { class MuseumTargetData; }
namespace RPG::GameCore { class MuseumPhaseRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MUSEUMDATA_ADDEXHIBITITEM_OFFSET UNITYSDK_OFFSET(0x98E17A0)
#define RPG_CLIENT_MUSEUMDATA_ADDSTAFF_OFFSET UNITYSDK_OFFSET(0x98E1650)
#define RPG_CLIENT_MUSEUMDATA_CALCULATEANDUPDATEDATA_OFFSET UNITYSDK_OFFSET(0x98DFC60)
#define RPG_CLIENT_MUSEUMDATA_FINISHCURTURN_OFFSET UNITYSDK_OFFSET(0x98E19A0)
#define RPG_CLIENT_MUSEUMDATA_GETAREADATA_OFFSET UNITYSDK_OFFSET(0x98E13D0)
#define RPG_CLIENT_MUSEUMDATA_GETUNLOCKAREANUM_OFFSET UNITYSDK_OFFSET(0x98E1AC0)
#define RPG_CLIENT_MUSEUMDATA_GET_CURFUNDS_OFFSET UNITYSDK_OFFSET(0x98E30C0)
#define RPG_CLIENT_MUSEUMDATA_GET_CURRENEWPOINT_OFFSET UNITYSDK_OFFSET(0x98E30A0)
#define RPG_CLIENT_MUSEUMDATA_GET_CURTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x98E30F0)
#define RPG_CLIENT_MUSEUMDATA_GET_EXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0x98E3150)
#define RPG_CLIENT_MUSEUMDATA_GET_FINISHTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x98E3110)
#define RPG_CLIENT_MUSEUMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x98DEFB0)
#define RPG_CLIENT_MUSEUMDATA_GET_MUSEUMAREADATAS_OFFSET UNITYSDK_OFFSET(0x98E3050)
#define RPG_CLIENT_MUSEUMDATA_GET_MUSEUMRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0x98E3170)
#define RPG_CLIENT_MUSEUMDATA_GET_MUSEUMTARGETDATA_OFFSET UNITYSDK_OFFSET(0x98E3190)
#define RPG_CLIENT_MUSEUMDATA_GET_RENEWPOINTDATA_OFFSET UNITYSDK_OFFSET(0x98E3070)
#define RPG_CLIENT_MUSEUMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x98E3090)
#define RPG_CLIENT_MUSEUMDATA_GET_STAFFS_OFFSET UNITYSDK_OFFSET(0x98E3130)
#define RPG_CLIENT_MUSEUMDATA_GET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0x98E30D0)
#define RPG_CLIENT_MUSEUMDATA_ISALLAREAGOTFULLRENEWPOINT_OFFSET UNITYSDK_OFFSET(0x98E1B60)
#define RPG_CLIENT_MUSEUMDATA_ISPHASELOCK_OFFSET UNITYSDK_OFFSET(0x98E14D0)
#define RPG_CLIENT_MUSEUMDATA_SETSTAFF_OFFSET UNITYSDK_OFFSET(0x98E1540)
#define RPG_CLIENT_MUSEUMDATA_SET_CURFUNDS_OFFSET UNITYSDK_OFFSET(0x98E1D50)
#define RPG_CLIENT_MUSEUMDATA_SET_CURRENEWPOINT_OFFSET UNITYSDK_OFFSET(0x98E30B0)
#define RPG_CLIENT_MUSEUMDATA_SET_CURTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x98E3100)
#define RPG_CLIENT_MUSEUMDATA_SET_EXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0x98E3160)
#define RPG_CLIENT_MUSEUMDATA_SET_FINISHTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x98E3120)
#define RPG_CLIENT_MUSEUMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x98E1E30)
#define RPG_CLIENT_MUSEUMDATA_SET_MUSEUMAREADATAS_OFFSET UNITYSDK_OFFSET(0x98E3060)
#define RPG_CLIENT_MUSEUMDATA_SET_MUSEUMRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0x98E3180)
#define RPG_CLIENT_MUSEUMDATA_SET_RENEWPOINTDATA_OFFSET UNITYSDK_OFFSET(0x98E3080)
#define RPG_CLIENT_MUSEUMDATA_SET_STAFFS_OFFSET UNITYSDK_OFFSET(0x98E3140)
#define RPG_CLIENT_MUSEUMDATA_SET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0x98E30E0)
#define RPG_CLIENT_MUSEUMDATA_SYNCFINISHCURTURN_OFFSET UNITYSDK_OFFSET(0x98E2BC0)
#define RPG_CLIENT_MUSEUMDATA_SYNCFUNDSCHANGE_OFFSET UNITYSDK_OFFSET(0x98E2B60)
#define RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_1_OFFSET UNITYSDK_OFFSET(0x98E2A10)
#define RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_OFFSET UNITYSDK_OFFSET(0x98E1C00)
#define RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREASTAT_OFFSET UNITYSDK_OFFSET(0x98E2D00)
#define RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREA_OFFSET UNITYSDK_OFFSET(0x98E2C10)
#define RPG_CLIENT_MUSEUMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98E0F80)
#define RPG_CLIENT_MUSEUMDATA__GETINDEXBYAREAID_OFFSET UNITYSDK_OFFSET(0x98E1480)
#define RPG_CLIENT_MUSEUMDATA__RESETAREASSTATE_OFFSET UNITYSDK_OFFSET(0x98E2E10)
#define RPG_CLIENT_MUSEUMDATA__SYNCAREADATAS_OFFSET UNITYSDK_OFFSET(0x98E25D0)
#define RPG_CLIENT_MUSEUMDATA__SYNCEXHIBITITEMS_OFFSET UNITYSDK_OFFSET(0x98E22C0)
#define RPG_CLIENT_MUSEUMDATA__SYNCSTAFFS_OFFSET UNITYSDK_OFFSET(0x98E1F20)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumData_TypeDefinitionIndex = 52814;

	class MuseumData : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_AREA_COUNT = 0x4; // 0x0
		::RPG::Client::MuseumPropertyData* _RenewPointData_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* _ExhibitStuffs_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* _Staffs_k__BackingField; // 0x20
		::RPG::Client::MuseumRandomEventData* _MuseumRandomEventData_k__BackingField; // 0x28
		::RPG::Client::MuseumTargetData* _MuseumTargetData_k__BackingField; // 0x30
		::Il2CppArray<::RPG::Client::MuseumAreaData*>* _MuseumAreaDatas_k__BackingField; // 0x38
		::RPG::GameCore::MuseumPhaseRow* _Row; // 0x40
		::System::UInt32 _CurTurnCount_k__BackingField; // 0x48
		::System::UInt32 _CurFunds; // 0x4C
		::System::UInt32 _FinishTurnCount_k__BackingField; // 0x50
		::System::UInt32 _TurnCount_k__BackingField; // 0x54
		::System::UInt32 _CurRenewPoint_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__CTOR_OFFSET))(this);
		}

		::System::Void CalculateAndUpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_CALCULATEANDUPDATEDATA_OFFSET))(this);
		}

		::RPG::Client::MuseumAreaData* GetAreaData(::System::UInt32 areaID)
		{
			return ((::RPG::Client::MuseumAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GETAREADATA_OFFSET))(this, areaID);
		}

		::System::Boolean IsPhaseLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ISPHASELOCK_OFFSET))(this);
		}

		::System::Void SetStaff(::RPG::Client::MuseumStaffData* museumStaffData, ::Enum_3_DB663931210BBC27_42 pos)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*, ::Enum_3_DB663931210BBC27_42))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SETSTAFF_OFFSET))(this, museumStaffData, pos);
		}

		::System::Void AddStaff(::RPG::Client::MuseumStaffData* museumStaffData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ADDSTAFF_OFFSET))(this, museumStaffData);
		}

		::System::Void AddExhibitItem(::RPG::Client::MuseumExhibitItemData* exhibitItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumExhibitItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ADDEXHIBITITEM_OFFSET))(this, exhibitItem);
		}

		::System::Void FinishCurTurn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_FINISHCURTURN_OFFSET))(this);
		}

		::System::Int32 GetUnlockAreaNum(::System::UInt32 skipAreaID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GETUNLOCKAREANUM_OFFSET))(this, skipAreaID);
		}

		::System::Boolean IsAllAreaGotFullRenewPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ISALLAREAGOTFULLRENEWPOINT_OFFSET))(this);
		}

		::System::Void SyncMuseumData(::Class_1_14E02E1F6D70E487_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_OFFSET))(this, rsp);
		}

		::System::Void SyncMuseumData_1(::Class_1_CD010263573232AE_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_1_OFFSET))(this, notify);
		}

		::System::Void SyncFundsChange(::Class_1_FA4F4A67B1C04320_588* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_588*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCFUNDSCHANGE_OFFSET))(this, notify);
		}

		::System::Void SyncFinishCurTurn(::Class_1_FA4F4A67B1C04320_585* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_585*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCFINISHCURTURN_OFFSET))(this, rsp);
		}

		::System::Void SyncUpgradeArea(::Class_1_120319518E6F6581_68* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_68*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREA_OFFSET))(this, rsp);
		}

		::System::Void SyncUpgradeAreaStat(::Class_1_352A8B3482C80E7D_37* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREASTAT_OFFSET))(this, rsp);
		}

		::System::Void _SyncAreaDatas(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_146971F22DC780FC_2*>* areaList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_146971F22DC780FC_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__SYNCAREADATAS_OFFSET))(this, areaList);
		}

		::System::Void _ResetAreasState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__RESETAREASSTATE_OFFSET))(this);
		}

		::System::Void _SyncStaffs(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_578*>* staffList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_578*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__SYNCSTAFFS_OFFSET))(this, staffList);
		}

		::System::Void _SyncExhibitItems(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* exhibitItemList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__SYNCEXHIBITITEMS_OFFSET))(this, exhibitItemList);
		}

		::System::Int32 _GetIndexByAreaID(::System::UInt32 areaID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__GETINDEXBYAREAID_OFFSET))(this, areaID);
		}

		::Il2CppArray<::RPG::Client::MuseumAreaData*>* get_MuseumAreaDatas()
		{
			return ((::Il2CppArray<::RPG::Client::MuseumAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_MUSEUMAREADATAS_OFFSET))(this);
		}

		::System::Void set_MuseumAreaDatas(::Il2CppArray<::RPG::Client::MuseumAreaData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MuseumAreaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_MUSEUMAREADATAS_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::RPG::Client::MuseumPropertyData* get_RenewPointData()
		{
			return ((::RPG::Client::MuseumPropertyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_RENEWPOINTDATA_OFFSET))(this);
		}

		::System::Void set_RenewPointData(::RPG::Client::MuseumPropertyData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumPropertyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_RENEWPOINTDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::MuseumPhaseRow* get_Row()
		{
			return ((::RPG::GameCore::MuseumPhaseRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_CurRenewPoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_CURRENEWPOINT_OFFSET))(this);
		}

		::System::Void set_CurRenewPoint(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_CURRENEWPOINT_OFFSET))(this, value);
		}

		::System::UInt32 get_CurFunds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_CURFUNDS_OFFSET))(this);
		}

		::System::Void set_CurFunds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_CURFUNDS_OFFSET))(this, value);
		}

		::System::UInt32 get_TurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_TURNCOUNT_OFFSET))(this);
		}

		::System::Void set_TurnCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_TURNCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_CurTurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_CURTURNCOUNT_OFFSET))(this);
		}

		::System::Void set_CurTurnCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_CURTURNCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishTurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_FINISHTURNCOUNT_OFFSET))(this);
		}

		::System::Void set_FinishTurnCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_FINISHTURNCOUNT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* get_Staffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_STAFFS_OFFSET))(this);
		}

		::System::Void set_Staffs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_STAFFS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* get_ExhibitStuffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_EXHIBITSTUFFS_OFFSET))(this);
		}

		::System::Void set_ExhibitStuffs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_EXHIBITSTUFFS_OFFSET))(this, value);
		}

		::RPG::Client::MuseumRandomEventData* get_MuseumRandomEventData()
		{
			return ((::RPG::Client::MuseumRandomEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_MUSEUMRANDOMEVENTDATA_OFFSET))(this);
		}

		::System::Void set_MuseumRandomEventData(::RPG::Client::MuseumRandomEventData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_MUSEUMRANDOMEVENTDATA_OFFSET))(this, value);
		}

		::RPG::Client::MuseumTargetData* get_MuseumTargetData()
		{
			return ((::RPG::Client::MuseumTargetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_MUSEUMTARGETDATA_OFFSET))(this);
		}
	};
}
