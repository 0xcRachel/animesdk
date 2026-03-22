#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_CB8B5340883CE90A;
class Class_3_8D818FB5E43EB76A;
class Class_3_EF768D9135EF985D_1;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define CLASS_2_CD5BE680213AC89D_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x8A6E170)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_1C445AC4C0C0F33D_OFFSET UNITYSDK_OFFSET(0x8A6E4B0)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_20D5AB6FDFA560A6_OFFSET UNITYSDK_OFFSET(0x8A6F0A0)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x8A6E090)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_3EE230755518F80C_OFFSET UNITYSDK_OFFSET(0x8A6E2B0)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_9E5E9518D01FCB25_OFFSET UNITYSDK_OFFSET(0x8A6EBB0)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_A2AF0CC0E6C54833_OFFSET UNITYSDK_OFFSET(0x8A6E550)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x8A6D410)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_B555E07014FDD9D7_OFFSET UNITYSDK_OFFSET(0x8A6EA00)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_D4A8C612F49B404B_OFFSET UNITYSDK_OFFSET(0x8A6E600)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_EE5A48E669E88C75_OFFSET UNITYSDK_OFFSET(0x8A6EF20)
#define CLASS_2_CD5BE680213AC89D__CTOR_OFFSET UNITYSDK_OFFSET(0x8A6CB60)
#define CLASS_2_CD5BE680213AC89D__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8A6D4C0)
#define CLASS_2_CD5BE680213AC89D__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x8A6E790)
#define CLASS_2_CD5BE680213AC89D__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x8A6CC70)
#define CLASS_2_CD5BE680213AC89D__ONTICK_OFFSET UNITYSDK_OFFSET(0x8A6E120)
#define CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8A6F420)
#define CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x8A6F4E0)
#define CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x8A6F3C0)
#define CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x8A6F480)
#define CLASS_2_CD5BE680213AC89D___SUBSCRIBEMESSAGE_B__9_0_OFFSET UNITYSDK_OFFSET(0x8A6F280)

inline static constexpr unsigned int Class_2_CD5BE680213AC89D_TypeDefinitionIndex = 59240;

class Class_2_CD5BE680213AC89D : public ::Sofa::BaseSofaWindow
{
public:
	::SuperScrollView::LoopListView2* Field_2_5; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_1; // 0x48
	::RPG::UINavigation::UINavigationZone* Field_2_2; // 0x50
	::UnityEngine::RectTransform* Field_2_7; // 0x58
	::UnityEngine::RectTransform* Field_2_8; // 0x60
	::RPG::Client::AnimatorButton* Field_2_3; // 0x68
	::Class_1_CB8B5340883CE90A* Field_2_0; // 0x70
	::RPG::Client::AnimatorButton* Field_2_4; // 0x78
	::UnityEngine::RectTransform* Field_2_9; // 0x80
	::UnityEngine::UI::ScrollRect* Field_2_10; // 0x88
	::SuperScrollView::LoopListView2* Field_2_6; // 0x90
	::System::Single Field_2_11; // 0x98

	::System::Void _ctor(::Class_3_8D818FB5E43EB76A* a1, ::Class_1_CB8B5340883CE90A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8D818FB5E43EB76A*, ::Class_1_CB8B5340883CE90A*))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void _OnTick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D__ONTICK_OFFSET))(this);
	}

	::System::Void Method_2_3EE230755518F80C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_3EE230755518F80C_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A2AF0CC0E6C54833(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_A2AF0CC0E6C54833_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_1C445AC4C0C0F33D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_1C445AC4C0C0F33D_OFFSET))(this);
	}

	::System::Boolean Method_2_D4A8C612F49B404B(::SuperScrollView::LoopListViewItem2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_D4A8C612F49B404B_OFFSET))(this, a1);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_B555E07014FDD9D7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_B555E07014FDD9D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E5E9518D01FCB25(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_9E5E9518D01FCB25_OFFSET))(this, a1);
	}

	::SuperScrollView::LoopListViewItem2* Method_2_EE5A48E669E88C75(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
	{
		return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_EE5A48E669E88C75_OFFSET))(this, a1, a2, a3);
	}

	::SuperScrollView::LoopListViewItem2* Method_2_20D5AB6FDFA560A6(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
	{
		return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_20D5AB6FDFA560A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_0E142E3463F30350_OFFSET))(this);
	}

	::Class_3_8D818FB5E43EB76A* Method_2_323F95926A2F616E()
	{
		return ((::Class_3_8D818FB5E43EB76A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_323F95926A2F616E_OFFSET))(this);
	}

	::System::Void __SubscribeMessage_b__9_0(::Class_3_EF768D9135EF985D_1* e)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EF768D9135EF985D_1*))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D___SUBSCRIBEMESSAGE_B__9_0_OFFSET))(this, e);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONTICK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
