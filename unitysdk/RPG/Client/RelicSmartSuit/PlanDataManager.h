#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_33;
class Class_1_FA4F4A67B1C04320_689;
class Class_1_FA60E9866DBA97E8_25;
class Class_1_FA60E9866DBA97E8_26;
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::RelicSmartSuit { class PinInfoRecorder; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x9D93680)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_CREATE_OFFSET UNITYSDK_OFFSET(0x9D92150)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_GET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0x9D9C160)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTADDPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D9C9B0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTDELETEPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D9CC00)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTRELICSMARTSUITPLANDATAS_OFFSET UNITYSDK_OFFSET(0x9D9C320)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTUPDATEPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D9CAC0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_1_OFFSET UNITYSDK_OFFSET(0x9D93BC0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_2_OFFSET UNITYSDK_OFFSET(0x9D93E40)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_3_OFFSET UNITYSDK_OFFSET(0x9D940C0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D93980)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETCUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D9C080)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETHIGHLYUSEDPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D9BFA0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETSYSTEMPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D9BEC0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__ADDCUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D9DAE0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D9C1C0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REJECTPROMISE_OFFSET UNITYSDK_OFFSET(0x9D9D5B0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REMOVECUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D9DE20)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0x9D9D8F0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATEHIGHLYUSEDPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D9CFE0)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATESYSTEMPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D9CCF0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PlanDataManager_TypeDefinitionIndex = 59417;

	class PlanDataManager : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _UpdatePlanDataPromise; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*>* _HighlyUsedPlanDataDict; // 0x18
		::RPG::Client::Promises::Promise* _AddPlanDataPromise; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*>* _CustomPlanDataDict; // 0x28
		::RPG::Client::Promises::Promise* _DeletePlanDataPromise; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* _SystemPlanDataDict; // 0x38
		::RPG::Client::Promises::Promise* _GetPlanDataPromise; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::PinInfoRecorder* get_PinInfoRecorder()
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfoRecorder*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_GET_PININFORECORDER_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::PlanDataManager* Create()
		{
			return ((::RPG::Client::RelicSmartSuit::PlanDataManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_CREATE_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_CLEAR_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RequestRelicSmartSuitPlanDatas(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTRELICSMARTSUITPLANDATAS_OFFSET))(this, avatarRealID);
		}

		::RPG::Client::Promises::Promise* RequestAddPlanData(::System::UInt32 avatarID, ::System::UInt32 outerSetID1, ::System::UInt32 outerSetID2, ::System::UInt32 innerSetID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTADDPLANDATA_OFFSET))(this, avatarID, outerSetID1, outerSetID2, innerSetID);
		}

		::RPG::Client::Promises::Promise* RequestUpdatePlanData(::System::UInt32 uniqueID, ::System::UInt32 avatarID, ::System::UInt32 outerSetID1, ::System::UInt32 outerSetID2, ::System::UInt32 innerSetID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTUPDATEPLANDATA_OFFSET))(this, uniqueID, avatarID, outerSetID1, outerSetID2, innerSetID);
		}

		::RPG::Client::Promises::Promise* RequestDeletePlanData(::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_REQUESTDELETEPLANDATA_OFFSET))(this, uniqueID);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* TryGetSystemPlanData(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETSYSTEMPLANDATA_OFFSET))(this, avatarID);
		}

		::System::Void _UpdateSystemPlanData(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATESYSTEMPLANDATA_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* TryGetHighlyUsedPlanData(::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETHIGHLYUSEDPLANDATA_OFFSET))(this, avatarID);
		}

		::System::Void _UpdateHighlyUsedPlanData(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__UPDATEHIGHLYUSEDPLANDATA_OFFSET))(this, avatarID);
		}

		::System::Void SyncPlanData(::Class_1_3C58D309C7A040F5_33* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_OFFSET))(this, rsp);
		}

		::System::Void SyncPlanData_1(::Class_1_FA60E9866DBA97E8_25* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_1_OFFSET))(this, rsp);
		}

		::System::Void SyncPlanData_2(::Class_1_FA60E9866DBA97E8_26* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_2_OFFSET))(this, rsp);
		}

		::System::Void SyncPlanData_3(::Class_1_FA4F4A67B1C04320_689* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_689*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_SYNCPLANDATA_3_OFFSET))(this, rsp);
		}

		::System::Void _ResolvePromise(::RPG::Client::Promises::Promise*& promise)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__RESOLVEPROMISE_OFFSET))(this, promise);
		}

		::System::Void _RejectPromise(::RPG::Client::Promises::Promise*& promise, ::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REJECTPROMISE_OFFSET))(this, promise, exception);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* TryGetCustomPlanData(::System::UInt32 avatarRealID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER_TRYGETCUSTOMPLANDATA_OFFSET))(this, avatarRealID);
		}

		::System::Void _AddCustomPlanData(::System::UInt32 avatarRealID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* planData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__ADDCUSTOMPLANDATA_OFFSET))(this, avatarRealID, planData);
		}

		::System::Void _RemoveCustomPlanData(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER__REMOVECUSTOMPLANDATA_OFFSET))(this, uniqueID);
		}
	};
}
