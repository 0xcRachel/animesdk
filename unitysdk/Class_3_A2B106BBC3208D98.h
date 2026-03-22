#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"
#include "unitysdk/System/Guid.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_CB8B5340883CE90A;
class Class_3_5704A5D15A97B1D8;
class Class_3_5D7F408520274939;
class Class_3_D975C797957E43FF;
namespace RPG::Client::MVVM::Service { class LimaoNewsIssueService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsNetworkService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsPostService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsWindowService; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsWebsiteViewModelParam; }
namespace System { class String; }

#define CLASS_3_A2B106BBC3208D98_GET_DEFAULTPARAM_OFFSET UNITYSDK_OFFSET(0x10DD1770)
#define CLASS_3_A2B106BBC3208D98_GET_FORUMVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10DD17B0)
#define CLASS_3_A2B106BBC3208D98_GET_GUID_OFFSET UNITYSDK_OFFSET(0x10DD18C0)
#define CLASS_3_A2B106BBC3208D98_GET_ISSUEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10DD1790)
#define CLASS_3_A2B106BBC3208D98_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x10DD1710)
#define CLASS_3_A2B106BBC3208D98_GET_ONBTNFORM_OFFSET UNITYSDK_OFFSET(0x10DD1750)
#define CLASS_3_A2B106BBC3208D98_GET_ONBTNISSUE_OFFSET UNITYSDK_OFFSET(0x10DD1730)
#define CLASS_3_A2B106BBC3208D98_GET_SPONSORVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10DD17D0)
#define CLASS_3_A2B106BBC3208D98_METHOD_3_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x10DD1620)
#define CLASS_3_A2B106BBC3208D98_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x10DD1700)
#define CLASS_3_A2B106BBC3208D98_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10DD1690)
#define CLASS_3_A2B106BBC3208D98_METHOD_3_2720CE40EEFCCE64_OFFSET UNITYSDK_OFFSET(0x10DD17F0)
#define CLASS_3_A2B106BBC3208D98_SET_DEFAULTPARAM_OFFSET UNITYSDK_OFFSET(0x10DD1780)
#define CLASS_3_A2B106BBC3208D98_SET_FORUMVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10DD17C0)
#define CLASS_3_A2B106BBC3208D98_SET_GUID_OFFSET UNITYSDK_OFFSET(0x10DD18D0)
#define CLASS_3_A2B106BBC3208D98_SET_ISSUEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10DD17A0)
#define CLASS_3_A2B106BBC3208D98_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x10DD1720)
#define CLASS_3_A2B106BBC3208D98_SET_ONBTNFORM_OFFSET UNITYSDK_OFFSET(0x10DD1760)
#define CLASS_3_A2B106BBC3208D98_SET_ONBTNISSUE_OFFSET UNITYSDK_OFFSET(0x10DD1740)
#define CLASS_3_A2B106BBC3208D98_SET_SPONSORVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10DD17E0)
#define CLASS_3_A2B106BBC3208D98__CTOR_OFFSET UNITYSDK_OFFSET(0x10DD11B0)
#define CLASS_3_A2B106BBC3208D98___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x10DD18E0)
#define CLASS_3_A2B106BBC3208D98___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x10DD19E0)
#define CLASS_3_A2B106BBC3208D98___CTOR_B__0_2_OFFSET UNITYSDK_OFFSET(0x10DD1AE0)

inline static constexpr unsigned int Class_3_A2B106BBC3208D98_TypeDefinitionIndex = 59215;

class Class_3_A2B106BBC3208D98 : public ::Class_2_3DE15EA7F53A0550
{
public:
	// static const ::System::String* Field_3_8; // 0x0
	// static const ::System::String* Field_3_9; // 0x0
	::Class_1_2FDE33CCAE591AA8* _OnBtnForm_k__BackingField; // 0x18
	::RPG::Client::MVVM::Service::LimaoNewsNetworkService* Field_3_10; // 0x20
	::RPG::Client::MVVM::Service::LimaoNewsIssueService* Field_3_11; // 0x28
	::Class_3_5704A5D15A97B1D8* _IssueViewModel_k__BackingField; // 0x30
	::Class_1_2FDE33CCAE591AA8* _OnBtnClose_k__BackingField; // 0x38
	::Class_3_5D7F408520274939* _SponsorViewModel_k__BackingField; // 0x40
	::System::String* Field_3_15; // 0x48
	::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* _DefaultParam_k__BackingField; // 0x50
	::RPG::Client::MVVM::Service::LimaoNewsPostService* Field_3_12; // 0x58
	::Class_1_CB8B5340883CE90A* Field_3_14; // 0x60
	::Class_1_2FDE33CCAE591AA8* _OnBtnIssue_k__BackingField; // 0x68
	::Class_3_D975C797957E43FF* _ForumViewModel_k__BackingField; // 0x70
	::RPG::Client::MVVM::Service::LimaoNewsWindowService* Field_3_13; // 0x78
	::System::Guid _Guid_k__BackingField; // 0x80

	::System::Void _ctor(::RPG::Client::MVVM::Service::LimaoNewsNetworkService* a1, ::RPG::Client::MVVM::Service::LimaoNewsIssueService* a2, ::RPG::Client::MVVM::Service::LimaoNewsPostService* a3, ::RPG::Client::MVVM::Service::LimaoNewsWindowService* a4, ::Class_1_CB8B5340883CE90A* a5, ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsNetworkService*, ::RPG::Client::MVVM::Service::LimaoNewsIssueService*, ::RPG::Client::MVVM::Service::LimaoNewsPostService*, ::RPG::Client::MVVM::Service::LimaoNewsWindowService*, ::Class_1_CB8B5340883CE90A*, ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_METHOD_3_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnClose()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_GET_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void set_OnBtnClose(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_SET_ONBTNCLOSE_OFFSET))(this, value);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnIssue()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_GET_ONBTNISSUE_OFFSET))(this);
	}

	::System::Void set_OnBtnIssue(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_SET_ONBTNISSUE_OFFSET))(this, value);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnForm()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_GET_ONBTNFORM_OFFSET))(this);
	}

	::System::Void set_OnBtnForm(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_SET_ONBTNFORM_OFFSET))(this, value);
	}

	::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* get_DefaultParam()
	{
		return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_GET_DEFAULTPARAM_OFFSET))(this);
	}

	::System::Void set_DefaultParam(::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_SET_DEFAULTPARAM_OFFSET))(this, value);
	}

	::Class_3_5704A5D15A97B1D8* get_IssueViewModel()
	{
		return ((::Class_3_5704A5D15A97B1D8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_GET_ISSUEVIEWMODEL_OFFSET))(this);
	}

	::System::Void set_IssueViewModel(::Class_3_5704A5D15A97B1D8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5704A5D15A97B1D8*))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_SET_ISSUEVIEWMODEL_OFFSET))(this, value);
	}

	::Class_3_D975C797957E43FF* get_ForumViewModel()
	{
		return ((::Class_3_D975C797957E43FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_GET_FORUMVIEWMODEL_OFFSET))(this);
	}

	::System::Void set_ForumViewModel(::Class_3_D975C797957E43FF* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D975C797957E43FF*))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_SET_FORUMVIEWMODEL_OFFSET))(this, value);
	}

	::Class_3_5D7F408520274939* get_SponsorViewModel()
	{
		return ((::Class_3_5D7F408520274939*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_GET_SPONSORVIEWMODEL_OFFSET))(this);
	}

	::System::Void set_SponsorViewModel(::Class_3_5D7F408520274939* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5D7F408520274939*))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_SET_SPONSORVIEWMODEL_OFFSET))(this, value);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::String* Method_3_2720CE40EEFCCE64()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_METHOD_3_2720CE40EEFCCE64_OFFSET))(this);
	}

	::System::Guid get_Guid()
	{
		return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_GET_GUID_OFFSET))(this);
	}

	::System::Void set_Guid(::System::Guid value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98_SET_GUID_OFFSET))(this, value);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98___CTOR_B__0_0_OFFSET))(this);
	}

	::System::Void __ctor_b__0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98___CTOR_B__0_1_OFFSET))(this);
	}

	::System::Void __ctor_b__0_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2B106BBC3208D98___CTOR_B__0_2_OFFSET))(this);
	}
};
