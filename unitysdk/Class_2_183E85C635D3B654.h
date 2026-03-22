#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_CB8B5340883CE90A;
class Class_3_A2B106BBC3208D98;
class Class_3_D7D23702D98A30C5;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace RPG::Client { class UIMeta; }
namespace RPG::Client::MVVM::View { class LimaoNewsForumControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsIssueControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsSponsorControl; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_183E85C635D3B654_METHOD_2_012F5209D5FA3F65_OFFSET UNITYSDK_OFFSET(0xFE33870)
#define CLASS_2_183E85C635D3B654_METHOD_2_0ABEB23FF62F8B8F_OFFSET UNITYSDK_OFFSET(0xFE33AF0)
#define CLASS_2_183E85C635D3B654_METHOD_2_26223E9EB82539E8_OFFSET UNITYSDK_OFFSET(0xFE33360)
#define CLASS_2_183E85C635D3B654_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xFE33590)
#define CLASS_2_183E85C635D3B654_METHOD_2_635445A7258F7A25_OFFSET UNITYSDK_OFFSET(0xFE33730)
#define CLASS_2_183E85C635D3B654_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xFE33B40)
#define CLASS_2_183E85C635D3B654_METHOD_2_80636C50D3C9D19C_OFFSET UNITYSDK_OFFSET(0xFE337A0)
#define CLASS_2_183E85C635D3B654_METHOD_2_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0xFE338C0)
#define CLASS_2_183E85C635D3B654_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xFE33D40)
#define CLASS_2_183E85C635D3B654_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0xFE33200)
#define CLASS_2_183E85C635D3B654_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xFE31E20)
#define CLASS_2_183E85C635D3B654_METHOD_2_B3BC933000085B6A_OFFSET UNITYSDK_OFFSET(0xFE32BC0)
#define CLASS_2_183E85C635D3B654_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xFE33F00)
#define CLASS_2_183E85C635D3B654__CTOR_OFFSET UNITYSDK_OFFSET(0xFE31350)
#define CLASS_2_183E85C635D3B654__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xFE31ED0)
#define CLASS_2_183E85C635D3B654__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xFE333B0)
#define CLASS_2_183E85C635D3B654__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xFE336A0)
#define CLASS_2_183E85C635D3B654__ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xFE33540)
#define CLASS_2_183E85C635D3B654__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFE313C0)
#define CLASS_2_183E85C635D3B654___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xFE34060)
#define CLASS_2_183E85C635D3B654___IFIXBASEPROXY__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xFE340C0)
#define CLASS_2_183E85C635D3B654___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xFE34150)
#define CLASS_2_183E85C635D3B654___IFIXBASEPROXY__ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xFE34140)
#define CLASS_2_183E85C635D3B654___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFE34000)
#define CLASS_2_183E85C635D3B654___SUBSCRIBEMESSAGE_B__8_0_OFFSET UNITYSDK_OFFSET(0xFE33F90)

inline static constexpr unsigned int Class_2_183E85C635D3B654_TypeDefinitionIndex = 59269;

class Class_2_183E85C635D3B654 : public ::Sofa::BaseSofaWindow
{
public:
	::UnityEngine::Transform* Field_2_10; // 0x40
	::UnityEngine::Transform* Field_2_12; // 0x48
	::RPG::Client::AnimatorButton* Field_2_5; // 0x50
	::RPG::Client::MVVM::View::LimaoNewsIssueControl* Field_2_7; // 0x58
	::RPG::Client::MVVM::View::LimaoNewsSponsorControl* Field_2_9; // 0x60
	::UnityEngine::Transform* Field_2_15; // 0x68
	::RPG::UINavigation::UINavigationZone* Field_2_2; // 0x70
	::UnityEngine::Transform* Field_2_14; // 0x78
	::UnityEngine::Transform* Field_2_13; // 0x80
	::RPG::Client::MonoPrefabSwitcher* Field_2_4; // 0x88
	::RPG::Client::UIMeta* Field_2_1; // 0x90
	::Class_1_CB8B5340883CE90A* Field_2_0; // 0x98
	::RPG::Client::AnimatorButton* Field_2_6; // 0xA0
	::UnityEngine::Transform* Field_2_11; // 0xA8
	::RPG::Client::MVVM::View::LimaoNewsForumControl* Field_2_8; // 0xB0
	::RPG::Client::AnimatorButton* Field_2_3; // 0xB8

	::System::Void _ctor(::Class_3_A2B106BBC3208D98* a1, ::Class_1_CB8B5340883CE90A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A2B106BBC3208D98*, ::Class_1_CB8B5340883CE90A*))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void _OnEntranceAnimEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654__ONENTRANCEANIMEND_OFFSET))(this);
	}

	::System::Void _OnInControlExit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654__ONINCONTROLEXIT_OFFSET))(this);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_635445A7258F7A25(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_635445A7258F7A25_OFFSET))(this, a1);
	}

	::System::Void Method_2_80636C50D3C9D19C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_80636C50D3C9D19C_OFFSET))(this, a1);
	}

	::System::Void Method_2_012F5209D5FA3F65(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_012F5209D5FA3F65_OFFSET))(this, a1);
	}

	::System::Void Method_2_80B76CA3BC860A58(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_80B76CA3BC860A58_OFFSET))(this, a1);
	}

	::System::Void Method_2_0ABEB23FF62F8B8F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_0ABEB23FF62F8B8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_B3BC933000085B6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_B3BC933000085B6A_OFFSET))(this, a1);
	}

	::Class_3_A2B106BBC3208D98* Method_2_26223E9EB82539E8()
	{
		return ((::Class_3_A2B106BBC3208D98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654_METHOD_2_26223E9EB82539E8_OFFSET))(this);
	}

	::System::Void __SubscribeMessage_b__8_0(::Class_3_D7D23702D98A30C5* e)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D7D23702D98A30C5*))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654___SUBSCRIBEMESSAGE_B__8_0_OFFSET))(this, e);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnEntranceAnimEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654___IFIXBASEPROXY__ONENTRANCEANIMEND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInControlExit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654___IFIXBASEPROXY__ONINCONTROLEXIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E85C635D3B654___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
