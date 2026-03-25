#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_0_16E4307DCC419505_479;
class Class_0_16E4307DCC419505_480;
class Class_0_16E4307DCC419505_484;
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

#define CLASS_1_18B0677ECDC1AEEB_DOFAILED_OFFSET UNITYSDK_OFFSET(0xA9DE470)
#define CLASS_1_18B0677ECDC1AEEB_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0xA9DE430)
#define CLASS_1_18B0677ECDC1AEEB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA9DE3F0)
#define CLASS_1_18B0677ECDC1AEEB_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xA9DE1A0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xA9DE240)
#define CLASS_1_18B0677ECDC1AEEB_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xA9DE220)
#define CLASS_1_18B0677ECDC1AEEB_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xA9DE230)
#define CLASS_1_18B0677ECDC1AEEB_GET_ID_OFFSET UNITYSDK_OFFSET(0xA9DE1F0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONDATAFAILED_OFFSET UNITYSDK_OFFSET(0xA9DE2F0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONDATASTARTING_OFFSET UNITYSDK_OFFSET(0xA9DE2B0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONDATASUCCEED_OFFSET UNITYSDK_OFFSET(0xA9DE2D0)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xA9DE310)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xA9DE330)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xA9DE390)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xA9DE350)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xA9DE370)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xA9DE270)
#define CLASS_1_18B0677ECDC1AEEB_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xA9DE290)
#define CLASS_1_18B0677ECDC1AEEB_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xA9DE250)
#define CLASS_1_18B0677ECDC1AEEB_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xA9DE210)
#define CLASS_1_18B0677ECDC1AEEB_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xA9DE200)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_14AF5D956E81774A_OFFSET UNITYSDK_OFFSET(0xA9DFA00)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA9DE4C0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_2C61108A8DA0AD73_OFFSET UNITYSDK_OFFSET(0xA9DE820)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_39AB6BE86BE284EE_OFFSET UNITYSDK_OFFSET(0xA9DEBE0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_3B018C5CF15BCDF6_OFFSET UNITYSDK_OFFSET(0xA9DED80)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_494D7FA4CA2316AD_OFFSET UNITYSDK_OFFSET(0xA9DE8E0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_6287ACD5750B69E7_OFFSET UNITYSDK_OFFSET(0xA9DEB90)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_7E9C4D81D04C3024_OFFSET UNITYSDK_OFFSET(0xA9DF8E0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0xA9DE7A0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xA9DF5B0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0xA9DE9A0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_D0663CE240A6DAF4_OFFSET UNITYSDK_OFFSET(0xA9DE890)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_DCAED9AAC7431412_OFFSET UNITYSDK_OFFSET(0xA9DECB0)
#define CLASS_1_18B0677ECDC1AEEB_METHOD_1_EB7112936E778817_OFFSET UNITYSDK_OFFSET(0xA9DEA20)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONDATAFAILED_OFFSET UNITYSDK_OFFSET(0xA9DE300)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONDATASTARTING_OFFSET UNITYSDK_OFFSET(0xA9DE2C0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONDATASUCCEED_OFFSET UNITYSDK_OFFSET(0xA9DE2E0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xA9DE320)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xA9DE340)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xA9DE3A0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xA9DE360)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xA9DE380)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xA9DE280)
#define CLASS_1_18B0677ECDC1AEEB_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xA9DE2A0)
#define CLASS_1_18B0677ECDC1AEEB_SET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xA9DE260)
#define CLASS_1_18B0677ECDC1AEEB_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xA9DE3B0)
#define CLASS_1_18B0677ECDC1AEEB__ADDERRORLOG_B__89_0_OFFSET UNITYSDK_OFFSET(0xA9E0860)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_0_OFFSET UNITYSDK_OFFSET(0xA9E17C0)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_1_OFFSET UNITYSDK_OFFSET(0xA9E17D0)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_2_OFFSET UNITYSDK_OFFSET(0xA9E2400)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_3_OFFSET UNITYSDK_OFFSET(0xA9E38F0)
#define CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_4_OFFSET UNITYSDK_OFFSET(0xA9E3BD0)
#define CLASS_1_18B0677ECDC1AEEB__CTOR_OFFSET UNITYSDK_OFFSET(0xA9DE530)

inline static constexpr unsigned int Class_1_18B0677ECDC1AEEB_TypeDefinitionIndex = 48192;

class Class_1_18B0677ECDC1AEEB : public ::System::Object
{
public:
	::Class_1_C530CE1C0A4E2133* Field_1_4; // 0x10
	::Class_1_C530CE1C0A4E2133* Field_1_1; // 0x18
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnFailed_k__BackingField; // 0x20
	::System::String* Field_1_18; // 0x28
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* _OnStarting_k__BackingField; // 0x30
	::System::String* Field_1_19; // 0x38
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* _OnSucceed_k__BackingField; // 0x40
	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* _OnDataSucceed_k__BackingField; // 0x48
	::Class_1_8C3AC9786B6764EF* _RootQueue_k__BackingField; // 0x50
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x58
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnItemFailed_k__BackingField; // 0x60
	::System::String* Field_1_16; // 0x68
	::Class_1_C530CE1C0A4E2133* Field_1_3; // 0x70
	::Class_1_C530CE1C0A4E2133* Field_1_5; // 0x78
	::Class_1_C530CE1C0A4E2133* Field_1_2; // 0x80
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x88
	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* _OnDataStarting_k__BackingField; // 0x90
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x98
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnDataFailed_k__BackingField; // 0xA0
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

	::Class_0_16E4307DCC419505_479* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_479*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::Class_1_8C3AC9786B6764EF* get_RootQueue()
	{
		return ((::Class_1_8C3AC9786B6764EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ROOTQUEUE_OFFSET))(this);
	}

	::System::Void set_RootQueue(::Class_1_8C3AC9786B6764EF* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8C3AC9786B6764EF*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ROOTQUEUE_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_478*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* get_OnDataStarting()
	{
		return ((::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONDATASTARTING_OFFSET))(this);
	}

	::System::Void set_OnDataStarting(::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONDATASTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* get_OnDataSucceed()
	{
		return ((::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONDATASUCCEED_OFFSET))(this);
	}

	::System::Void set_OnDataSucceed(::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONDATASUCCEED_OFFSET))(this, value);
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

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONFINISH_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_SET_ONITEMSUCCEED_OFFSET))(this, value);
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

	::System::String* Method_1_EB7112936E778817(::Class_0_16E4307DCC419505_478* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_EB7112936E778817_OFFSET))(this, a1);
	}

	::System::IDisposable* Method_1_6287ACD5750B69E7(::System::Delegate* a1, ::Class_0_16E4307DCC419505_484* a2)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::System::Delegate*, ::Class_0_16E4307DCC419505_484*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_6287ACD5750B69E7_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerable* Method_1_39AB6BE86BE284EE(::System::Delegate* a1, ::Class_0_16E4307DCC419505_484* a2)
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::Delegate*, ::Class_0_16E4307DCC419505_484*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_39AB6BE86BE284EE_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_14AF5D956E81774A(::Class_0_16E4307DCC419505_480* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_480*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB_METHOD_1_14AF5D956E81774A_OFFSET))(this, a1);
	}

	::System::Void _AddErrorLog_b__89_0(::Class_2_2690241A4D35989E* ax)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDERRORLOG_B__89_0_OFFSET))(this, ax);
	}

	::System::Void _AddProgressLog_b__90_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_0_OFFSET))(this);
	}

	::System::Void _AddProgressLog_b__90_1(::Class_0_16E4307DCC419505_478* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_1_OFFSET))(this, progress);
	}

	::System::Void _AddProgressLog_b__90_2(::Class_0_16E4307DCC419505_478* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_2_OFFSET))(this, progress);
	}

	::System::Void _AddProgressLog_b__90_3(::Class_0_16E4307DCC419505_478* progress, ::Class_0_16E4307DCC419505_480* data, ::System::Object* item, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_3_OFFSET))(this, progress, data, item, code);
	}

	::System::Void _AddProgressLog_b__90_4(::Class_0_16E4307DCC419505_478* progress, ::Class_0_16E4307DCC419505_480* data)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB__ADDPROGRESSLOG_B__90_4_OFFSET))(this, progress, data);
	}
};
