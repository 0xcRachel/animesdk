#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_CB8B5340883CE90A;
class Class_3_297C2FA2F970FC50;
class Class_3_D7D23702D98A30C5_1;
namespace RPG::Client::MVVM::View { class LimaoNewsPostZoomControl; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_7EE53F037904398F_METHOD_2_189A1787B0797738_OFFSET UNITYSDK_OFFSET(0x10DC7800)
#define CLASS_2_7EE53F037904398F_METHOD_2_1AC2F488F53A3253_1_OFFSET UNITYSDK_OFFSET(0x10DC7790)
#define CLASS_2_7EE53F037904398F_METHOD_2_1AC2F488F53A3253_OFFSET UNITYSDK_OFFSET(0x10DC7720)
#define CLASS_2_7EE53F037904398F_METHOD_2_42713F6676488DE4_1_OFFSET UNITYSDK_OFFSET(0x10DC7900)
#define CLASS_2_7EE53F037904398F_METHOD_2_42713F6676488DE4_2_OFFSET UNITYSDK_OFFSET(0x10DC7980)
#define CLASS_2_7EE53F037904398F_METHOD_2_42713F6676488DE4_3_OFFSET UNITYSDK_OFFSET(0x10DC7A00)
#define CLASS_2_7EE53F037904398F_METHOD_2_42713F6676488DE4_OFFSET UNITYSDK_OFFSET(0x10DC7880)
#define CLASS_2_7EE53F037904398F_METHOD_2_66B8FFFC2F0944D3_OFFSET UNITYSDK_OFFSET(0x10DC7590)
#define CLASS_2_7EE53F037904398F_METHOD_2_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0x10DC7A80)
#define CLASS_2_7EE53F037904398F_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x10DC6A10)
#define CLASS_2_7EE53F037904398F__CTOR_OFFSET UNITYSDK_OFFSET(0x10DC6640)
#define CLASS_2_7EE53F037904398F__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10DC6AC0)
#define CLASS_2_7EE53F037904398F__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x10DC7540)
#define CLASS_2_7EE53F037904398F__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10DC66C0)
#define CLASS_2_7EE53F037904398F___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10DC7BC0)
#define CLASS_2_7EE53F037904398F___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x10DC7C20)
#define CLASS_2_7EE53F037904398F___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10DC7B60)
#define CLASS_2_7EE53F037904398F___SUBSCRIBEMESSAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0x10DC7AF0)

inline static constexpr unsigned int Class_2_7EE53F037904398F_TypeDefinitionIndex = 59274;

class Class_2_7EE53F037904398F : public ::Sofa::BaseSofaWindow
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x40
	::UnityEngine::UI::Button* Field_2_3; // 0x48
	::Class_1_CB8B5340883CE90A* Field_2_0; // 0x50
	::RPG::Client::MVVM::View::LimaoNewsPostZoomControl* Field_2_2; // 0x58
	::RPG::UINavigation::UINavigationZone* Field_2_4; // 0x60

	::System::Void _ctor(::Class_3_297C2FA2F970FC50* a1, ::Class_1_CB8B5340883CE90A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_297C2FA2F970FC50*, ::Class_1_CB8B5340883CE90A*))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_66B8FFFC2F0944D3(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F_METHOD_2_66B8FFFC2F0944D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_1AC2F488F53A3253(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F_METHOD_2_1AC2F488F53A3253_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AC2F488F53A3253_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F_METHOD_2_1AC2F488F53A3253_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_189A1787B0797738(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F_METHOD_2_189A1787B0797738_OFFSET))(this, a1);
	}

	::System::Void Method_2_42713F6676488DE4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F_METHOD_2_42713F6676488DE4_OFFSET))(this, a1);
	}

	::System::Void Method_2_42713F6676488DE4_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F_METHOD_2_42713F6676488DE4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_42713F6676488DE4_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F_METHOD_2_42713F6676488DE4_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_42713F6676488DE4_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F_METHOD_2_42713F6676488DE4_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F_METHOD_2_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void __SubscribeMessage_b__5_0(::Class_3_D7D23702D98A30C5_1* e)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D7D23702D98A30C5_1*))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F___SUBSCRIBEMESSAGE_B__5_0_OFFSET))(this, e);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EE53F037904398F___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
