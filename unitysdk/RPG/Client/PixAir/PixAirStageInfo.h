#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_963E317C37FB5E9A_45;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::PixAir { class PixAirStageData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_CLEARDOINGSTAGEID_OFFSET UNITYSDK_OFFSET(0x18CF4DE0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18D01E60)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GETALLSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x18CEE740)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GETMAXUNLOCKSTAGE_OFFSET UNITYSDK_OFFSET(0x18D02780)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GETSORTEDNORMALSTAGELIST_OFFSET UNITYSDK_OFFSET(0x18D02380)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GETSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x18CF4B10)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GETUNLOCKCHALLENGESTAGEDATA_OFFSET UNITYSDK_OFFSET(0x18D02050)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18D01D40)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGCOREEQUIPID_OFFSET UNITYSDK_OFFSET(0x18D01D20)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGPLANEID_OFFSET UNITYSDK_OFFSET(0x18D01D00)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGSTAGEAREA_OFFSET UNITYSDK_OFFSET(0x18D01CA0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGSTAGECOIN_OFFSET UNITYSDK_OFFSET(0x18D01CE0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGSTAGEID_OFFSET UNITYSDK_OFFSET(0x18D01C80)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGSTAGELIFE_OFFSET UNITYSDK_OFFSET(0x18D01CC0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x18CF6380)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_ISCHALLENGESTAGEPREMISSIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x18D01EF0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGCOREEQUIPID_OFFSET UNITYSDK_OFFSET(0x18D01D30)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGPLANEID_OFFSET UNITYSDK_OFFSET(0x18D01D10)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGSTAGEAREA_OFFSET UNITYSDK_OFFSET(0x18D01CB0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGSTAGECOIN_OFFSET UNITYSDK_OFFSET(0x18D01CF0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGSTAGEID_OFFSET UNITYSDK_OFFSET(0x18D01C90)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGSTAGELIFE_OFFSET UNITYSDK_OFFSET(0x18D01CD0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SYNCDOINGSTAGEID_OFFSET UNITYSDK_OFFSET(0x18CF52D0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SYNCFINISHEDSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0x18CF1EB0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SYNCFINISHEDSTAGEID_OFFSET UNITYSDK_OFFSET(0x18CF4D60)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x18CF1B80)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_TRYGETSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x18D01D90)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF6370)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirStageInfo_TypeDefinitionIndex = 73699;

	class PixAirStageInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PixAir::PixAirStageData*>* _stageDataMap; // 0x10
		::System::UInt32 _DoingCoreEquipID_k__BackingField; // 0x18
		::System::UInt32 _DoingStageID_k__BackingField; // 0x1C
		::System::UInt32 _DoingStageLife_k__BackingField; // 0x20
		::System::UInt32 _DoingStageArea_k__BackingField; // 0x24
		::System::UInt32 _DoingStageCoin_k__BackingField; // 0x28
		::System::UInt32 _DoingPlaneID_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DoingStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGSTAGEID_OFFSET))(this);
		}

		::System::Void set_DoingStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGSTAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DoingStageArea()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGSTAGEAREA_OFFSET))(this);
		}

		::System::Void set_DoingStageArea(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGSTAGEAREA_OFFSET))(this, a1);
		}

		::System::UInt32 get_DoingStageLife()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGSTAGELIFE_OFFSET))(this);
		}

		::System::Void set_DoingStageLife(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGSTAGELIFE_OFFSET))(this, a1);
		}

		::System::UInt32 get_DoingStageCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGSTAGECOIN_OFFSET))(this);
		}

		::System::Void set_DoingStageCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGSTAGECOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_DoingPlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGPLANEID_OFFSET))(this);
		}

		::System::Void set_DoingPlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGPLANEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DoingCoreEquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_DOINGCOREEQUIPID_OFFSET))(this);
		}

		::System::Void set_DoingCoreEquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SET_DOINGCOREEQUIPID_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirStageData* GetStageData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GETSTAGEDATA_OFFSET))(this, a1);
		}

		::System::Boolean TryGetStageData(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirStageData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::PixAir::PixAirStageData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_TRYGETSTAGEDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean Contains(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_CONTAINS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::PixAir::PixAirStageData*>* GetAllStageData()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::PixAir::PixAirStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GETALLSTAGEDATA_OFFSET))(this);
		}

		::System::Boolean IsChallengeStagePreMissionUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_ISCHALLENGESTAGEPREMISSIONUNLOCK_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirStageData* GetUnlockChallengeStageData()
		{
			return ((::RPG::Client::PixAir::PixAirStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GETUNLOCKCHALLENGESTAGEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirStageData*>* GetSortedNormalStageList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GETSORTEDNORMALSTAGELIST_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirStageData* GetMaxUnlockStage(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirStageData*>* a2)
		{
			return ((::RPG::Client::PixAir::PixAirStageData*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_GETMAXUNLOCKSTAGE_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_INIT_OFFSET))(this);
		}

		::System::Void SyncFinishedStageIDList(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SYNCFINISHEDSTAGEIDLIST_OFFSET))(this, a1);
		}

		::System::Void SyncFinishedStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SYNCFINISHEDSTAGEID_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_963E317C37FB5E9A_45* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncDoingStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_SYNCDOINGSTAGEID_OFFSET))(this, a1);
		}

		::System::Void ClearDoingStageID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO_CLEARDOINGSTAGEID_OFFSET))(this);
		}
	};
}
