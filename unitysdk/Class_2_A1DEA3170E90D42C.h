#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_54254A0D4D720717.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"

class Class_1_3A7B270FE0BE90AE_4;
class Class_1_FF220487FAB45279_1;
namespace Proto { class ItemList; }
namespace RPG::Client { class RogueTournSettleData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_A1DEA3170E90D42C_METHOD_2_068C83AB47D11AB0_OFFSET UNITYSDK_OFFSET(0x8F53FF0)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_1B7AB0E5CFBE1088_OFFSET UNITYSDK_OFFSET(0x8F54260)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8F53570)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_55E9461434144E52_OFFSET UNITYSDK_OFFSET(0x8F540B0)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_1_OFFSET UNITYSDK_OFFSET(0x8F53BE0)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_2_OFFSET UNITYSDK_OFFSET(0x8F53F10)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_3_OFFSET UNITYSDK_OFFSET(0x8F53B00)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_4_OFFSET UNITYSDK_OFFSET(0x8F53C50)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_5_OFFSET UNITYSDK_OFFSET(0x8F53F80)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_6_OFFSET UNITYSDK_OFFSET(0x8F53DC0)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_7_OFFSET UNITYSDK_OFFSET(0x8F53E30)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_8_OFFSET UNITYSDK_OFFSET(0x8F53EA0)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_OFFSET UNITYSDK_OFFSET(0x8F53B70)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_71915706CE77067A_1_OFFSET UNITYSDK_OFFSET(0x8F54440)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_71915706CE77067A_OFFSET UNITYSDK_OFFSET(0x8F543A0)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_B05EAA7C00233EC5_OFFSET UNITYSDK_OFFSET(0x8F53CC0)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_E71EC9F9EFFCA71F_OFFSET UNITYSDK_OFFSET(0x8F54170)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x8F54060)
#define CLASS_2_A1DEA3170E90D42C_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x8F535D0)
#define CLASS_2_A1DEA3170E90D42C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F53530)
#define CLASS_2_A1DEA3170E90D42C___NOTIFYFLOWDISPOSE_B__12_0_OFFSET UNITYSDK_OFFSET(0x8F54C70)
#define CLASS_2_A1DEA3170E90D42C___SHOWROGUETOURNENTRANCEPAGE_B__8_0_OFFSET UNITYSDK_OFFSET(0x8F54950)
#define CLASS_2_A1DEA3170E90D42C___SHOWROGUETOURNSETTLEPAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0x8F546D0)
#define CLASS_2_A1DEA3170E90D42C___TRYDELAYFORREWARDDIALOG_B__13_0_OFFSET UNITYSDK_OFFSET(0x8F54CD0)
#define CLASS_2_A1DEA3170E90D42C___TRYSHOWDIVISIONCHANGEUI_B__6_0_OFFSET UNITYSDK_OFFSET(0x8F544E0)
#define CLASS_2_A1DEA3170E90D42C___TRYSHOWFIRSTREWARDDIALOG_B__14_0_OFFSET UNITYSDK_OFFSET(0x8F55040)
#define CLASS_2_A1DEA3170E90D42C___TRYSHOWWEEKCHALLENGEREWARDDIALOG_B__15_0_OFFSET UNITYSDK_OFFSET(0x8F55300)
#define CLASS_2_A1DEA3170E90D42C___TRYTELEPORTFAILED_B__9_0_OFFSET UNITYSDK_OFFSET(0x8F54AD0)
#define CLASS_2_A1DEA3170E90D42C___TRYTELEPORTWIN_B__10_0_OFFSET UNITYSDK_OFFSET(0x8F54BA0)

inline static constexpr unsigned int Class_2_A1DEA3170E90D42C_TypeDefinitionIndex = 53807;

class Class_2_A1DEA3170E90D42C : public ::Class_1_54254A0D4D720717
{
public:
	// static const ::System::Single Field_2_5; // 0x0
	::Class_1_3A7B270FE0BE90AE_4* Field_2_3; // 0x18
	::RPG::Client::RogueTournSettleData* Field_2_0; // 0x20
	::RPG::Client::Promises::Promise* Field_2_4; // 0x28
	::RPG::Client::Promises::Promise* Field_2_1; // 0x30
	::System::Boolean Field_2_2; // 0x38

	::System::Void _ctor(::Class_1_FF220487FAB45279_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_1*))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_068C83AB47D11AB0(::Proto::ItemList* a1, ::Proto::ItemList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_068C83AB47D11AB0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3A7B270FE0BE90AE_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_4*))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_55E9461434144E52(::RPG::Client::MongoObjectId a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_55E9461434144E52_OFFSET))(this, a1);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_6DC085804D9F2AA5()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_6DC085804D9F2AA5_1()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_1_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_6DC085804D9F2AA5_2()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_2_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_6DC085804D9F2AA5_3()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_3_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_6DC085804D9F2AA5_4()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_4_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_B05EAA7C00233EC5()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_B05EAA7C00233EC5_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_6DC085804D9F2AA5_5()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_5_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_6DC085804D9F2AA5_6()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_6_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_6DC085804D9F2AA5_7()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_7_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_6DC085804D9F2AA5_8()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_6DC085804D9F2AA5_8_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_E71EC9F9EFFCA71F()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_E71EC9F9EFFCA71F_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_2_1B7AB0E5CFBE1088()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_1B7AB0E5CFBE1088_OFFSET))(this);
	}

	::System::Void Method_2_71915706CE77067A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_71915706CE77067A_OFFSET))(this, a1);
	}

	::System::Void Method_2_71915706CE77067A_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C_METHOD_2_71915706CE77067A_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* __TryShowDivisionChangeUI_b__6_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___TRYSHOWDIVISIONCHANGEUI_B__6_0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ShowRogueTournSettlePage_b__7_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___SHOWROGUETOURNSETTLEPAGE_B__7_0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ShowRogueTournEntrancePage_b__8_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___SHOWROGUETOURNENTRANCEPAGE_B__8_0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __TryTeleportFailed_b__9_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___TRYTELEPORTFAILED_B__9_0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __TryTeleportWin_b__10_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___TRYTELEPORTWIN_B__10_0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __NotifyFlowDispose_b__12_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___NOTIFYFLOWDISPOSE_B__12_0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __TryDelayForRewardDialog_b__13_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___TRYDELAYFORREWARDDIALOG_B__13_0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __TryShowFirstRewardDialog_b__14_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___TRYSHOWFIRSTREWARDDIALOG_B__14_0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __TryShowWeekChallengeRewardDialog_b__15_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___TRYSHOWWEEKCHALLENGEREWARDDIALOG_B__15_0_OFFSET))(this);
	}
};
