#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_0_16E4307DCC419505_451;
class Class_0_16E4307DCC419505_452;
class Class_0_16E4307DCC419505_456;
class Class_1_8C3AC9786B6764EF;
class Class_1_C530CE1C0A4E2133;
class Class_2_2690241A4D35989E;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T1, typename T2> class ActionEvent_2; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class Delegate; }
namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define CLASS_1_18B0677ECDC1AEEB_DOFAILED_OFFSET UNITYSDK_OFFSET(0x10F44820)
#define CLASS_1_18B0677ECDC1AEEB_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x10F447E0)
#define CLASS_1_18B0677ECDC1AEEB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10F447A0)
#define CLASS_1_18B0677ECDC1AEEB_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x10F44550)
#define CLASS_1_18B0677ECDC1AEEB_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x10F445F0)
#define CLASS_1_18B0677ECDC1AEEB_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x10F445D0)
#define CLASS_1_18B0677ECDC1AEEB_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x10F445E0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ID_OFFSET UNITYSDK_OFFSET(0x10F445A0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONDATAFAILED_OFFSET UNITYSDK_OFFSET(0x10F446A0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONDATASTARTING_OFFSET UNITYSDK_OFFSET(0x10F44660)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONDATASUCCEED_OFFSET UNITYSDK_OFFSET(0x10F44680)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x10F446C0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x10F446E0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x10F44740)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x10F44700)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x10F44720)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x10F44620)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x10F44640)
#define CLASS_1_18B0677ECDC1AEEB_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x10F44600)
#define CLASS_1_18B0677ECDC1AEEB_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x10F445C0)
#define CLASS_1_18B0677ECDC1AEEB_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x10F445B0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_14AF5D956E81774A_OFFSET UNITYSDK_OFFSET(0x10F45DB0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10F44870)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_2C61108A8DA0AD73_OFFSET UNITYSDK_OFFSET(0x10F44BD0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_39AB6BE86BE284EE_OFFSET UNITYSDK_OFFSET(0x10F44F90)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_3B018C5CF15BCDF6_OFFSET UNITYSDK_OFFSET(0x10F45130)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_494D7FA4CA2316AD_OFFSET UNITYSDK_OFFSET(0x10F44C90)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_6287ACD5750B69E7_OFFSET UNITYSDK_OFFSET(0x10F44F40)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_7E9C4D81D04C3024_OFFSET UNITYSDK_OFFSET(0x10F45C90)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x10F44B50)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x10F45960)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0x10F44D50)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_D0663CE240A6DAF4_OFFSET UNITYSDK_OFFSET(0x10F44C40)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_DCAED9AAC7431412_OFFSET UNITYSDK_OFFSET(0x10F45060)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_EB7112936E778817_OFFSET UNITYSDK_OFFSET(0x10F44DD0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONDATAFAILED_OFFSET UNITYSDK_OFFSET(0x10F446B0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONDATASTARTING_OFFSET UNITYSDK_OFFSET(0x10F44670)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONDATASUCCEED_OFFSET UNITYSDK_OFFSET(0x10F44690)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x10F446D0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x10F446F0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x10F44750)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x10F44710)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x10F44730)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x10F44630)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x10F44650)
#define CLASS_1_18B0677ECDC1AEEB_SET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x10F44610)
#define CLASS_1_18B0677ECDC1AEEB_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x10F44760)
#define CLASS_1_18B0677ECDC1AEEB__ADDERRORLOG_B__89_0_OFFSET UNITYSDK_OFFSET(0x10F46C10)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_0_OFFSET UNITYSDK_OFFSET(0x10F47B70)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_1_OFFSET UNITYSDK_OFFSET(0x10F47B80)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_2_OFFSET UNITYSDK_OFFSET(0x10F487B0)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_3_OFFSET UNITYSDK_OFFSET(0x10F49CA0)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_4_OFFSET UNITYSDK_OFFSET(0x10F49F80)
#define CLASS_1_18B0677ECDC1AEEB__CTOR_OFFSET UNITYSDK_OFFSET(0x10F448E0)

inline static constexpr unsigned int Class_1_18B0677ECDC1AEEB_TypeDefinitionIndex = 47110;

class Class_1_18B0677ECDC1AEEB : public ::System::Object
{
public:
	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>* _OnDataSucceed_k__BackingField; // 0x10
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x18
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_450*>* _OnStarting_k__BackingField; // 0x20
	::Class_1_8C3AC9786B6764EF* _RootQueue_k__BackingField; // 0x28
	::Class_1_C530CE1C0A4E2133* Field_1_4; // 0x30
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnItemFailed_k__BackingField; // 0x38
	::Class_1_C530CE1C0A4E2133* Field_1_1; // 0x40
	::Class_1_C530CE1C0A4E2133* Field_1_3; // 0x48
	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>* _OnDataStarting_k__BackingField; // 0x50
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnDataFailed_k__BackingField; // 0x58
	::Class_1_C530CE1C0A4E2133* Field_1_2; // 0x60
	::System::String* Field_1_18; // 0x68
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnFailed_k__BackingField; // 0x70
	::System::String* Field_1_16; // 0x78
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_450*>* _OnSucceed_k__BackingField; // 0x80
	::Class_1_C530CE1C0A4E2133* Field_1_5; // 0x88
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x90
	::System::String* Field_1_19; // 0x98
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0xA0
	::System::Int32 Field_1_17; // 0xA8

	::System::Void _ctor(::Class_1_8C3AC9786B6764EF* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8C3AC9786B6764EF*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ID_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_FINISHCOUNT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_451* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_451*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::Class_1_8C3AC9786B6764EF* get_RootQueue()
	{
		return ((::Class_1_8C3AC9786B6764EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ROOTQUEUE_OFFSET))(this);
	}

	::System::Void set_RootQueue(::Class_1_8C3AC9786B6764EF* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8C3AC9786B6764EF*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ROOTQUEUE_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_450*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_450*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_450*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_450*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_450*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_450*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_450*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_450*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>* get_OnDataStarting()
	{
		return ((::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONDATASTARTING_OFFSET))(this);
	}

	::System::Void set_OnDataStarting(::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONDATASTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>* get_OnDataSucceed()
	{
		return ((::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONDATASUCCEED_OFFSET))(this);
	}

	::System::Void set_OnDataSucceed(::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONDATASUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnDataFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONDATAFAILED_OFFSET))(this);
	}

	::System::Void set_OnDataFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONDATAFAILED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONFAILED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONFINISH_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONITEMFAILED_OFFSET))(this, value);
	}

	::System::Void UpdateProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_UPDATEPROGRESS_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_EXECUTE_OFFSET))(this);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_DOSUCCEED_OFFSET))(this);
	}

	::System::Void DoFailed(::Class_2_2690241A4D35989E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_DOFAILED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::String* Method_1_2C61108A8DA0AD73(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_2C61108A8DA0AD73_OFFSET))(this, a1);
	}

	::System::IDisposable* Method_1_D0663CE240A6DAF4(::Class_1_C530CE1C0A4E2133* a1)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::Class_1_C530CE1C0A4E2133*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_D0663CE240A6DAF4_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerable* Method_1_494D7FA4CA2316AD(::Class_1_C530CE1C0A4E2133* a1)
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID, ::Class_1_C530CE1C0A4E2133*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_494D7FA4CA2316AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C6E14CE377D03CE0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_C6E14CE377D03CE0_OFFSET))(this, a1);
	}

	::System::String* Method_1_EB7112936E778817(::Class_0_16E4307DCC419505_450* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_EB7112936E778817_OFFSET))(this, a1);
	}

	::System::IDisposable* Method_1_6287ACD5750B69E7(::System::Delegate* a1, ::Class_0_16E4307DCC419505_456* a2)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::System::Delegate*, ::Class_0_16E4307DCC419505_456*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_6287ACD5750B69E7_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerable* Method_1_39AB6BE86BE284EE(::System::Delegate* a1, ::Class_0_16E4307DCC419505_456* a2)
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::Delegate*, ::Class_0_16E4307DCC419505_456*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_39AB6BE86BE284EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCAED9AAC7431412(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_DCAED9AAC7431412_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B018C5CF15BCDF6(::Class_2_2690241A4D35989E* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_3B018C5CF15BCDF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_7E9C4D81D04C3024()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_7E9C4D81D04C3024_OFFSET))(this);
	}

	::System::Void Method_1_14AF5D956E81774A(::Class_0_16E4307DCC419505_452* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_452*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_14AF5D956E81774A_OFFSET))(this, a1);
	}

	::System::Void _AddErrorLog_b__89_0(::Class_2_2690241A4D35989E* ax)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDERRORLOG_B__89_0_OFFSET))(this, ax);
	}

	::System::Void _AddProgressLog_b__90_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_0_OFFSET))(this);
	}

	::System::Void _AddProgressLog_b__90_1(::Class_0_16E4307DCC419505_450* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_1_OFFSET))(this, progress);
	}

	::System::Void _AddProgressLog_b__90_2(::Class_0_16E4307DCC419505_450* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_2_OFFSET))(this, progress);
	}

	::System::Void _AddProgressLog_b__90_3(::Class_0_16E4307DCC419505_450* progress, ::Class_0_16E4307DCC419505_452* data, ::System::Object* item, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_3_OFFSET))(this, progress, data, item, code);
	}

	::System::Void _AddProgressLog_b__90_4(::Class_0_16E4307DCC419505_450* progress, ::Class_0_16E4307DCC419505_452* data)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_4_OFFSET))(this, progress, data);
	}
};
