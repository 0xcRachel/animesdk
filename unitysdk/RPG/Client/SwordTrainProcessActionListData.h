#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_92;
class Class_1_4B36FD1EE6E3FE27_2;
class Class_1_D17272E82AE804C2_932;
class Class_1_D40936EF3BF54118_84;
namespace RPG::Client { class SwordTrainProcessActionDataItem; }
namespace RPG::Client { template <typename T> class RandomAccessContainer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x16FDF1A0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x16FDE7F0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GETSDKREPORTDATA_OFFSET UNITYSDK_OFFSET(0x16FDFD80)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GET_DOINGACTION_OFFSET UNITYSDK_OFFSET(0x16FDF800)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GET_NEXTACTION_OFFSET UNITYSDK_OFFSET(0x16FDF950)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_SETPREFABPATH_OFFSET UNITYSDK_OFFSET(0x16FDED00)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_UPDATEPHASE_OFFSET UNITYSDK_OFFSET(0x16FDF700)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FDEC40)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA__FETCHONEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x16FDFAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainProcessActionListData_TypeDefinitionIndex = 57163;

	class SwordTrainProcessActionListData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RandomAccessContainer_1<::System::String*>*>* _PrefabPathGetter; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainProcessActionDataItem*>* DataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainProcessActionListData* Create(::Class_1_45BB92167AED63A0_92* rsp)
		{
			return ((::RPG::Client::SwordTrainProcessActionListData*(*)(::Class_1_45BB92167AED63A0_92*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_OFFSET))(rsp);
		}

		static ::RPG::Client::SwordTrainProcessActionListData* Create_1(::Class_1_4B36FD1EE6E3FE27_2* turn, ::Class_1_D40936EF3BF54118_84* actionInfo, ::Class_1_D17272E82AE804C2_932* dialog)
		{
			return ((::RPG::Client::SwordTrainProcessActionListData*(*)(::Class_1_4B36FD1EE6E3FE27_2*, ::Class_1_D40936EF3BF54118_84*, ::Class_1_D17272E82AE804C2_932*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_1_OFFSET))(turn, actionInfo, dialog);
		}

		::System::Void UpdatePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_UPDATEPHASE_OFFSET))(this);
		}

		::System::Void SetPrefabPath(::Class_1_D40936EF3BF54118_84* actionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_SETPREFABPATH_OFFSET))(this, actionInfo);
		}

		::System::String* _FetchOnePrefabPath(::System::UInt32 id, ::System::UInt32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA__FETCHONEPREFABPATH_OFFSET))(this, id, level);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetSDKReportData()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GETSDKREPORTDATA_OFFSET))(this);
		}

		::RPG::Client::SwordTrainProcessActionDataItem* get_DoingAction()
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GET_DOINGACTION_OFFSET))(this);
		}

		::RPG::Client::SwordTrainProcessActionDataItem* get_NextAction()
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GET_NEXTACTION_OFFSET))(this);
		}
	};
}
