#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_0_16E4307DCC419505_558;
class Class_0_16E4307DCC419505_559;
class Class_1_280047DF9F661B14;
class Class_1_8C3AC9786B6764EF;
class Class_1_A07F5475BC1DA311_Class_1_AEAE8AF084ADE77B;
class Class_2_2690241A4D35989E;
class Class_2_54CCD44980580DB7;
class Class_3_3B91E9B720B814BB;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A07F5475BC1DA311_DOFAILED_OFFSET UNITYSDK_OFFSET(0xF38AA60)
#define CLASS_1_A07F5475BC1DA311_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0xF38A880)
#define CLASS_1_A07F5475BC1DA311_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF38A0C0)
#define CLASS_1_A07F5475BC1DA311_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xF389A80)
#define CLASS_1_A07F5475BC1DA311_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xF389B20)
#define CLASS_1_A07F5475BC1DA311_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xF389B70)
#define CLASS_1_A07F5475BC1DA311_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xF389B90)
#define CLASS_1_A07F5475BC1DA311_GET_ID_OFFSET UNITYSDK_OFFSET(0xF389AF0)
#define CLASS_1_A07F5475BC1DA311_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xF389BF0)
#define CLASS_1_A07F5475BC1DA311_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xF389C10)
#define CLASS_1_A07F5475BC1DA311_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xF389C70)
#define CLASS_1_A07F5475BC1DA311_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xF389C30)
#define CLASS_1_A07F5475BC1DA311_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xF389C50)
#define CLASS_1_A07F5475BC1DA311_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xF389BB0)
#define CLASS_1_A07F5475BC1DA311_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xF389BD0)
#define CLASS_1_A07F5475BC1DA311_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xF389B10)
#define CLASS_1_A07F5475BC1DA311_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xF389B50)
#define CLASS_1_A07F5475BC1DA311_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xF389B30)
#define CLASS_1_A07F5475BC1DA311_METHOD_1_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0xF38A9F0)
#define CLASS_1_A07F5475BC1DA311_METHOD_1_106A5CB8962E979E_OFFSET UNITYSDK_OFFSET(0xF389E30)
#define CLASS_1_A07F5475BC1DA311_METHOD_1_5496C6D6C29DCFBE_OFFSET UNITYSDK_OFFSET(0xF38AC10)
#define CLASS_1_A07F5475BC1DA311_METHOD_1_EAA2FB756A68BBCB_OFFSET UNITYSDK_OFFSET(0xF389F80)
#define CLASS_1_A07F5475BC1DA311_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xF389B80)
#define CLASS_1_A07F5475BC1DA311_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xF389BA0)
#define CLASS_1_A07F5475BC1DA311_SET_ID_OFFSET UNITYSDK_OFFSET(0xF389B00)
#define CLASS_1_A07F5475BC1DA311_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xF389C00)
#define CLASS_1_A07F5475BC1DA311_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xF389C20)
#define CLASS_1_A07F5475BC1DA311_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xF389C80)
#define CLASS_1_A07F5475BC1DA311_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xF389C40)
#define CLASS_1_A07F5475BC1DA311_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xF389C60)
#define CLASS_1_A07F5475BC1DA311_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xF389BC0)
#define CLASS_1_A07F5475BC1DA311_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xF389BE0)
#define CLASS_1_A07F5475BC1DA311_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xF389B60)
#define CLASS_1_A07F5475BC1DA311_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xF389B40)
#define CLASS_1_A07F5475BC1DA311_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xF38AD10)
#define CLASS_1_A07F5475BC1DA311__CTOR_OFFSET UNITYSDK_OFFSET(0xF389C90)

inline static constexpr unsigned int Class_1_A07F5475BC1DA311_TypeDefinitionIndex = 54930;

class Class_1_A07F5475BC1DA311 : public ::System::Object
{
public:
	::System::String* Field_1_11; // 0x10
	::System::String* Field_1_8; // 0x18
	::Class_1_8C3AC9786B6764EF* Field_1_4; // 0x20
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* _OnSucceed_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::Class_1_A07F5475BC1DA311_Class_1_AEAE8AF084ADE77B*>* Field_1_1; // 0x30
	::Class_2_54CCD44980580DB7* Field_1_13; // 0x38
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x40
	::System::String* Field_1_6; // 0x48
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* _OnStarting_k__BackingField; // 0x50
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x58
	::Class_1_280047DF9F661B14* Field_1_2; // 0x60
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnItemFailed_k__BackingField; // 0x68
	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* _OnFailed_k__BackingField; // 0x70
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x78
	::RPG::Client::TextID Field_1_10; // 0x80
	::System::Int32 _FailureCount_k__BackingField; // 0x90
	::RPG::Client::NotifyType Field_1_9; // 0x94
	::System::Int32 _SuccessCount_k__BackingField; // 0x98
	::System::Int32 _FinishCount_k__BackingField; // 0x9C
	::RPG::Client::TextID Field_1_7; // 0xA0
	::System::Boolean Field_1_3; // 0xB0
	::RPG::Client::ProgressID _ID_k__BackingField; // 0xB4
	::System::Int32 _TotalCount_k__BackingField; // 0xB8
	::RPG::Client::NotifyType Field_1_12; // 0xBC
	::System::Int64 Field_1_5; // 0xC0

	::System::Void _ctor(::RPG::Client::ProgressID a1, ::Class_1_8C3AC9786B6764EF* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_8C3AC9786B6764EF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::RPG::Client::ProgressID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ID_OFFSET))(this, value);
	}

	::Class_1_8C3AC9786B6764EF* get_RootQueue()
	{
		return ((::Class_1_8C3AC9786B6764EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ROOTQUEUE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_558* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_558*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_TOTALCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Void set_SuccessCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_SUCCESSCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Void set_FailureCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_FAILURECOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_FINISHCOUNT_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_557*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONFAILED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONFINISH_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONITEMSTARTING_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONITEMSUCCEED_OFFSET))(this, value);
	}

	::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_2690241A4D35989E*>*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_SET_ONITEMFAILED_OFFSET))(this, value);
	}

	::Class_1_A07F5475BC1DA311* Method_1_106A5CB8962E979E(::System::String* a1, ::Class_0_16E4307DCC419505_559* a2)
	{
		return ((::Class_1_A07F5475BC1DA311*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_559*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_METHOD_1_106A5CB8962E979E_OFFSET))(this, a1, a2);
	}

	::Class_1_A07F5475BC1DA311* Method_1_EAA2FB756A68BBCB(::Class_3_3B91E9B720B814BB* a1, ::Class_0_16E4307DCC419505_559* a2)
	{
		return ((::Class_1_A07F5475BC1DA311*(*)(::PVOID, ::Class_3_3B91E9B720B814BB*, ::Class_0_16E4307DCC419505_559*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_METHOD_1_EAA2FB756A68BBCB_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_METHOD_1_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void DoFailed(::Class_2_2690241A4D35989E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_DOFAILED_OFFSET))(this, a1);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_DOSUCCEED_OFFSET))(this);
	}

	::System::Void UpdateProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_UPDATEPROGRESS_OFFSET))(this);
	}

	::System::Void Method_1_5496C6D6C29DCFBE(::RPG::Client::NotifyType a1, ::System::String* a2, ::RPG::Client::TextID a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_METHOD_1_5496C6D6C29DCFBE_OFFSET))(this, a1, a2, a3);
	}
};
