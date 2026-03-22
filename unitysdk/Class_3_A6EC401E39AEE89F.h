#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_CB8B5340883CE90A;
namespace RPG::Client::MVVM::Model { class LimaoNewsIssueData; }
namespace RPG::Client::MVVM::Service { class LimaoNewsWindowService; }

#define CLASS_3_A6EC401E39AEE89F_GET_ISSUEDATA_OFFSET UNITYSDK_OFFSET(0x8ABC680)
#define CLASS_3_A6EC401E39AEE89F_GET_ISSUEID_OFFSET UNITYSDK_OFFSET(0x8ABC620)
#define CLASS_3_A6EC401E39AEE89F_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x8ABC640)
#define CLASS_3_A6EC401E39AEE89F_GET_ONBTNFORM_OFFSET UNITYSDK_OFFSET(0x8ABC660)
#define CLASS_3_A6EC401E39AEE89F_SET_ISSUEDATA_OFFSET UNITYSDK_OFFSET(0x8ABC690)
#define CLASS_3_A6EC401E39AEE89F_SET_ISSUEID_OFFSET UNITYSDK_OFFSET(0x8ABC630)
#define CLASS_3_A6EC401E39AEE89F_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x8ABC650)
#define CLASS_3_A6EC401E39AEE89F_SET_ONBTNFORM_OFFSET UNITYSDK_OFFSET(0x8ABC670)
#define CLASS_3_A6EC401E39AEE89F__CTOR_OFFSET UNITYSDK_OFFSET(0x8ABC4E0)
#define CLASS_3_A6EC401E39AEE89F___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x8ABC6A0)
#define CLASS_3_A6EC401E39AEE89F___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x8ABC730)

inline static constexpr unsigned int Class_3_A6EC401E39AEE89F_TypeDefinitionIndex = 59195;

class Class_3_A6EC401E39AEE89F : public ::Class_2_3DE15EA7F53A0550
{
public:
	::Class_1_2FDE33CCAE591AA8* _OnBtnClose_k__BackingField; // 0x18
	::RPG::Client::MVVM::Service::LimaoNewsWindowService* Field_3_5; // 0x20
	::Class_1_CB8B5340883CE90A* Field_3_1; // 0x28
	::Class_1_2FDE33CCAE591AA8* _OnBtnForm_k__BackingField; // 0x30
	::RPG::Client::MVVM::Model::LimaoNewsIssueData* _IssueData_k__BackingField; // 0x38
	::System::UInt32 _IssueID_k__BackingField; // 0x40

	::System::Void _ctor(::RPG::Client::MVVM::Service::LimaoNewsWindowService* a1, ::Class_1_CB8B5340883CE90A* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsWindowService*, ::Class_1_CB8B5340883CE90A*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A6EC401E39AEE89F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_IssueID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EC401E39AEE89F_GET_ISSUEID_OFFSET))(this);
	}

	::System::Void set_IssueID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A6EC401E39AEE89F_SET_ISSUEID_OFFSET))(this, value);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnClose()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EC401E39AEE89F_GET_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void set_OnBtnClose(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_A6EC401E39AEE89F_SET_ONBTNCLOSE_OFFSET))(this, value);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnForm()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EC401E39AEE89F_GET_ONBTNFORM_OFFSET))(this);
	}

	::System::Void set_OnBtnForm(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_A6EC401E39AEE89F_SET_ONBTNFORM_OFFSET))(this, value);
	}

	::RPG::Client::MVVM::Model::LimaoNewsIssueData* get_IssueData()
	{
		return ((::RPG::Client::MVVM::Model::LimaoNewsIssueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EC401E39AEE89F_GET_ISSUEDATA_OFFSET))(this);
	}

	::System::Void set_IssueData(::RPG::Client::MVVM::Model::LimaoNewsIssueData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsIssueData*))((::PBYTE)hIl2Cpp + CLASS_3_A6EC401E39AEE89F_SET_ISSUEDATA_OFFSET))(this, value);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EC401E39AEE89F___CTOR_B__0_0_OFFSET))(this);
	}

	::System::Void __ctor_b__0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EC401E39AEE89F___CTOR_B__0_1_OFFSET))(this);
	}
};
