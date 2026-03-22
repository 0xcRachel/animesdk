#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_234D295497DE49DD_1;
class Class_1_735612C94F558EAE_89;
class Class_1_E7C4009BCC22497A_79;
class Class_1_FA4F4A67B1C04320_864;
namespace RPG::Client { class SwordTrainProcessActionDataItem; }
namespace RPG::Client { template <typename T> class RandomAccessContainer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9FF1060)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9FF06B0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GETSDKREPORTDATA_OFFSET UNITYSDK_OFFSET(0x9FF1C40)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GET_DOINGACTION_OFFSET UNITYSDK_OFFSET(0x9FF16C0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GET_NEXTACTION_OFFSET UNITYSDK_OFFSET(0x9FF1810)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_SETPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9FF0BC0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_UPDATEPHASE_OFFSET UNITYSDK_OFFSET(0x9FF15C0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF0B00)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA__FETCHONEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9FF1960)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainProcessActionListData_TypeDefinitionIndex = 49168;

	class SwordTrainProcessActionListData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RandomAccessContainer_1<::System::String*>*>* _PrefabPathGetter; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainProcessActionDataItem*>* DataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainProcessActionListData* Create(::Class_1_735612C94F558EAE_89* rsp)
		{
			return ((::RPG::Client::SwordTrainProcessActionListData*(*)(::Class_1_735612C94F558EAE_89*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_OFFSET))(rsp);
		}

		static ::RPG::Client::SwordTrainProcessActionListData* Create_1(::Class_1_234D295497DE49DD_1* turn, ::Class_1_E7C4009BCC22497A_79* actionInfo, ::Class_1_FA4F4A67B1C04320_864* dialog)
		{
			return ((::RPG::Client::SwordTrainProcessActionListData*(*)(::Class_1_234D295497DE49DD_1*, ::Class_1_E7C4009BCC22497A_79*, ::Class_1_FA4F4A67B1C04320_864*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_1_OFFSET))(turn, actionInfo, dialog);
		}

		::System::Void UpdatePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_UPDATEPHASE_OFFSET))(this);
		}

		::System::Void SetPrefabPath(::Class_1_E7C4009BCC22497A_79* actionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_79*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_SETPREFABPATH_OFFSET))(this, actionInfo);
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
