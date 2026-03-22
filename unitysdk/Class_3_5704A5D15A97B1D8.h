#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"
#include "unitysdk/System/Guid.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_CB8B5340883CE90A;
class Class_2_8A4822A8EF9AFDA6;
class Class_3_6CDB80D69CE03A28;
class Class_3_72B51E713EDE563F;
namespace RPG::Client::MVVM::Model { class LimaoNewsIssueData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyTypeData; }
namespace RPG::Client::MVVM::Service { class LimaoNewsIssueService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsNetworkService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsWindowService; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_BF01A723AB4005C0;

#define CLASS_3_5704A5D15A97B1D8_GET_ALLTABVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xA139AA0)
#define CLASS_3_5704A5D15A97B1D8_GET_ONBTNSELECTLEFT_OFFSET UNITYSDK_OFFSET(0xA139B00)
#define CLASS_3_5704A5D15A97B1D8_GET_ONBTNSELECTRIGHT_OFFSET UNITYSDK_OFFSET(0xA139B20)
#define CLASS_3_5704A5D15A97B1D8_GET_ONBTNSUBMIT_OFFSET UNITYSDK_OFFSET(0xA139AE0)
#define CLASS_3_5704A5D15A97B1D8_GET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0xA139AC0)
#define CLASS_3_5704A5D15A97B1D8_GET_SHOWISSUESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xA139B40)
#define CLASS_3_5704A5D15A97B1D8_GET_SURVEYTYPEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA139B60)
#define CLASS_3_5704A5D15A97B1D8_METHOD_3_08A381A893B9D1F2_OFFSET UNITYSDK_OFFSET(0xA139950)
#define CLASS_3_5704A5D15A97B1D8_METHOD_3_36AA967652EF349E_OFFSET UNITYSDK_OFFSET(0xA139690)
#define CLASS_3_5704A5D15A97B1D8_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xA1395D0)
#define CLASS_3_5704A5D15A97B1D8_METHOD_3_56EAA6BE90C6E50B_OFFSET UNITYSDK_OFFSET(0xA139230)
#define CLASS_3_5704A5D15A97B1D8_METHOD_3_5C466ABEE228060F_OFFSET UNITYSDK_OFFSET(0xA139520)
#define CLASS_3_5704A5D15A97B1D8_METHOD_3_7649655DED4CC511_OFFSET UNITYSDK_OFFSET(0xA1399F0)
#define CLASS_3_5704A5D15A97B1D8_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xA139B80)
#define CLASS_3_5704A5D15A97B1D8_METHOD_3_8A60E5B7958CE1A2_OFFSET UNITYSDK_OFFSET(0xA139420)
#define CLASS_3_5704A5D15A97B1D8_METHOD_3_935B1499BA633FC1_OFFSET UNITYSDK_OFFSET(0xA139750)
#define CLASS_3_5704A5D15A97B1D8_METHOD_3_BF58BAE678CCAF91_OFFSET UNITYSDK_OFFSET(0xA139810)
#define CLASS_3_5704A5D15A97B1D8_METHOD_3_F8974D388F52CD5E_OFFSET UNITYSDK_OFFSET(0xA139490)
#define CLASS_3_5704A5D15A97B1D8_SET_ALLTABVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xA139AB0)
#define CLASS_3_5704A5D15A97B1D8_SET_ONBTNSELECTLEFT_OFFSET UNITYSDK_OFFSET(0xA139B10)
#define CLASS_3_5704A5D15A97B1D8_SET_ONBTNSELECTRIGHT_OFFSET UNITYSDK_OFFSET(0xA139B30)
#define CLASS_3_5704A5D15A97B1D8_SET_ONBTNSUBMIT_OFFSET UNITYSDK_OFFSET(0xA139AF0)
#define CLASS_3_5704A5D15A97B1D8_SET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0xA139AD0)
#define CLASS_3_5704A5D15A97B1D8_SET_SHOWISSUESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xA139B50)
#define CLASS_3_5704A5D15A97B1D8_SET_SURVEYTYPEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA139B70)
#define CLASS_3_5704A5D15A97B1D8__CTOR_OFFSET UNITYSDK_OFFSET(0xA138F00)

inline static constexpr unsigned int Class_3_5704A5D15A97B1D8_TypeDefinitionIndex = 59206;

class Class_3_5704A5D15A97B1D8 : public ::Class_2_3DE15EA7F53A0550
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsIssueData*>* Field_3_8; // 0x18
	::System::Collections::Generic::List_1<::Class_3_72B51E713EDE563F*>* _AllTabViewModels_k__BackingField; // 0x20
	::Class_1_2FDE33CCAE591AA8* _OnBtnSelectLeft_k__BackingField; // 0x28
	::Class_1_2FDE33CCAE591AA8* _OnBtnSubmit_k__BackingField; // 0x30
	::Class_1_2FDE33CCAE591AA8* _ShowIssueSubmitWindow_k__BackingField; // 0x38
	::Class_1_CB8B5340883CE90A* Field_3_12; // 0x40
	::Class_1_2FDE33CCAE591AA8* _OnBtnSelectRight_k__BackingField; // 0x48
	::RPG::Client::MVVM::Service::LimaoNewsWindowService* Field_3_11; // 0x50
	::Class_1_BF01A723AB4005C0<::System::Int32>* _OnBtnTabClick_k__BackingField; // 0x58
	::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* _SurveyTypeViewModel_k__BackingField; // 0x60
	::RPG::Client::MVVM::Service::LimaoNewsNetworkService* Field_3_9; // 0x68
	::RPG::Client::MVVM::Service::LimaoNewsIssueService* Field_3_10; // 0x70
	::System::Int32 Field_3_7; // 0x78

	::System::Void _ctor(::RPG::Client::MVVM::Service::LimaoNewsNetworkService* a1, ::RPG::Client::MVVM::Service::LimaoNewsIssueService* a2, ::RPG::Client::MVVM::Service::LimaoNewsWindowService* a3, ::Class_1_CB8B5340883CE90A* a4, ::System::Guid a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsNetworkService*, ::RPG::Client::MVVM::Service::LimaoNewsIssueService*, ::RPG::Client::MVVM::Service::LimaoNewsWindowService*, ::Class_1_CB8B5340883CE90A*, ::System::Guid))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_3_6CDB80D69CE03A28* Method_3_56EAA6BE90C6E50B(::System::Int32 a1)
	{
		return ((::Class_3_6CDB80D69CE03A28*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_METHOD_3_56EAA6BE90C6E50B_OFFSET))(this, a1);
	}

	::System::Void Method_3_F8974D388F52CD5E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_METHOD_3_F8974D388F52CD5E_OFFSET))(this, a1);
	}

	::System::Void Method_3_5C466ABEE228060F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_METHOD_3_5C466ABEE228060F_OFFSET))(this, a1);
	}

	::System::Void Method_3_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
	}

	::Class_2_8A4822A8EF9AFDA6* Method_3_36AA967652EF349E()
	{
		return ((::Class_2_8A4822A8EF9AFDA6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_METHOD_3_36AA967652EF349E_OFFSET))(this);
	}

	::System::Boolean Method_3_935B1499BA633FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_METHOD_3_935B1499BA633FC1_OFFSET))(this);
	}

	::System::UInt32 Method_3_BF58BAE678CCAF91()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_METHOD_3_BF58BAE678CCAF91_OFFSET))(this);
	}

	::System::Boolean Method_3_08A381A893B9D1F2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_METHOD_3_08A381A893B9D1F2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_7649655DED4CC511()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_METHOD_3_7649655DED4CC511_OFFSET))(this);
	}

	::RPG::Client::MVVM::Model::LimaoNewsIssueData* Method_3_8A60E5B7958CE1A2()
	{
		return ((::RPG::Client::MVVM::Model::LimaoNewsIssueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_METHOD_3_8A60E5B7958CE1A2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_72B51E713EDE563F*>* get_AllTabViewModels()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_72B51E713EDE563F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_GET_ALLTABVIEWMODELS_OFFSET))(this);
	}

	::System::Void set_AllTabViewModels(::System::Collections::Generic::List_1<::Class_3_72B51E713EDE563F*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_72B51E713EDE563F*>*))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_SET_ALLTABVIEWMODELS_OFFSET))(this, value);
	}

	::Class_1_BF01A723AB4005C0<::System::Int32>* get_OnBtnTabClick()
	{
		return ((::Class_1_BF01A723AB4005C0<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_GET_ONBTNTABCLICK_OFFSET))(this);
	}

	::System::Void set_OnBtnTabClick(::Class_1_BF01A723AB4005C0<::System::Int32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF01A723AB4005C0<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_SET_ONBTNTABCLICK_OFFSET))(this, value);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnSubmit()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_GET_ONBTNSUBMIT_OFFSET))(this);
	}

	::System::Void set_OnBtnSubmit(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_SET_ONBTNSUBMIT_OFFSET))(this, value);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnSelectLeft()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_GET_ONBTNSELECTLEFT_OFFSET))(this);
	}

	::System::Void set_OnBtnSelectLeft(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_SET_ONBTNSELECTLEFT_OFFSET))(this, value);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnSelectRight()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_GET_ONBTNSELECTRIGHT_OFFSET))(this);
	}

	::System::Void set_OnBtnSelectRight(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_SET_ONBTNSELECTRIGHT_OFFSET))(this, value);
	}

	::Class_1_2FDE33CCAE591AA8* get_ShowIssueSubmitWindow()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_GET_SHOWISSUESUBMITWINDOW_OFFSET))(this);
	}

	::System::Void set_ShowIssueSubmitWindow(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_SET_SHOWISSUESUBMITWINDOW_OFFSET))(this, value);
	}

	::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* get_SurveyTypeViewModel()
	{
		return ((::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_GET_SURVEYTYPEVIEWMODEL_OFFSET))(this);
	}

	::System::Void set_SurveyTypeViewModel(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_SET_SURVEYTYPEVIEWMODEL_OFFSET))(this, value);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5704A5D15A97B1D8_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
