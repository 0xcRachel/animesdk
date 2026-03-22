#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MaterialSubmissionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_509;
namespace RPG::Client { class MaterialSubmitter; }
namespace RPG::GameCore { class MaterialSubmitterGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKCANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x96E08A0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASENDED_OFFSET UNITYSDK_OFFSET(0x96E37F0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASNEWSUBMITTER_OFFSET UNITYSDK_OFFSET(0x96E09C0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x96E2300)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISFIRST_OFFSET UNITYSDK_OFFSET(0x96E2780)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISLAST_OFFSET UNITYSDK_OFFSET(0x96E2890)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CONTAINS_OFFSET UNITYSDK_OFFSET(0x96E3A90)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x96E33B0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERIDSTO_OFFSET UNITYSDK_OFFSET(0x96E36D0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERSTO_OFFSET UNITYSDK_OFFSET(0x96E19B0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETPRESUBMITTERID_OFFSET UNITYSDK_OFFSET(0x96E3910)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTEDCOUNT_OFFSET UNITYSDK_OFFSET(0x96E3580)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTERIDS_OFFSET UNITYSDK_OFFSET(0x96E3640)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTER_OFFSET UNITYSDK_OFFSET(0x96E1200)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x96E3290)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x96E32F0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x96E1990)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_SUBMITTERIDS_OFFSET UNITYSDK_OFFSET(0x96E3270)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96E01F0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_INDEXOF_OFFSET UNITYSDK_OFFSET(0x96E39D0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP__CREATESUBMITTERS_OFFSET UNITYSDK_OFFSET(0x96E3AF0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x96E34D0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP__INIT_OFFSET UNITYSDK_OFFSET(0x96E3530)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSubmitterGroup_TypeDefinitionIndex = 49020;

	class MaterialSubmitterGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MaterialSubmitter*>* _Submitters; // 0x10
		::RPG::GameCore::MaterialSubmitterGroupRow* _Meta; // 0x18

		::System::Void _ctor(::RPG::GameCore::MaterialSubmitterGroupRow* meta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MaterialSubmitterGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP__CTOR_OFFSET))(this, meta);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SubmitterIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_SUBMITTERIDS_OFFSET))(this);
		}

		::RPG::GameCore::MaterialSubmissionType get_Type()
		{
			return ((::RPG::GameCore::MaterialSubmissionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_TYPE_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_COUNT_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		static ::RPG::Client::MaterialSubmitterGroup* Create(::RPG::GameCore::MaterialSubmitterGroupRow* meta, ::Class_0_16E4307DCC419505_509* serverAgent)
		{
			return ((::RPG::Client::MaterialSubmitterGroup*(*)(::RPG::GameCore::MaterialSubmitterGroupRow*, ::Class_0_16E4307DCC419505_509*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CREATE_OFFSET))(meta, serverAgent);
		}

		::System::Int32 GetSubmittedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTEDCOUNT_OFFSET))(this);
		}

		::RPG::Client::MaterialSubmitter* GetSubmitter(::System::UInt32 id)
		{
			return ((::RPG::Client::MaterialSubmitter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTER_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSubmitterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTERIDS_OFFSET))(this);
		}

		::System::Boolean CheckHasEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASENDED_OFFSET))(this);
		}

		::System::Boolean CheckCanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKCANTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean CheckHasNewSubmitter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASNEWSUBMITTER_OFFSET))(this);
		}

		::System::Void FillSubmitterIDsTo(::System::Collections::Generic::List_1<::System::UInt32>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERIDSTO_OFFSET))(this, buffer);
		}

		::System::Void FillSubmittersTo(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MaterialSubmitter*>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MaterialSubmitter*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERSTO_OFFSET))(this, buffer);
		}

		::System::UInt32 GetPreSubmitterID(::System::UInt32 id)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETPRESUBMITTERID_OFFSET))(this, id);
		}

		::System::Boolean CheckHasUnlocked(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASUNLOCKED_OFFSET))(this, id);
		}

		::System::Boolean Contains(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CONTAINS_OFFSET))(this, id);
		}

		::System::Int32 IndexOf(::System::UInt32 id)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_INDEXOF_OFFSET))(this, id);
		}

		::System::Boolean CheckIsFirst(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISFIRST_OFFSET))(this, id);
		}

		::System::Boolean CheckIsLast(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISLAST_OFFSET))(this, id);
		}

		::System::Void _Init(::Class_0_16E4307DCC419505_509* serverAgent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_509*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP__INIT_OFFSET))(this, serverAgent);
		}

		::System::Void _CreateSubmitters(::Class_0_16E4307DCC419505_509* serverAgent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_509*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP__CREATESUBMITTERS_OFFSET))(this, serverAgent);
		}
	};
}
