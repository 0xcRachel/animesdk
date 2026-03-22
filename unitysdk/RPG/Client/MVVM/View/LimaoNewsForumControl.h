#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_3_D975C797957E43FF;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::MVVM::View { class LimaoNewsPostInfoRowControl; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsPostViewModel; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_05FE1FA8BF53E27A_OFFSET UNITYSDK_OFFSET(0x95C3360)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x95C2DD0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_26223E9EB82539E8_OFFSET UNITYSDK_OFFSET(0x95C3260)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_394DCF9DA306E923_OFFSET UNITYSDK_OFFSET(0x95C34D0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_REFRESHREDDOTNODE_OFFSET UNITYSDK_OFFSET(0x95C3310)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_TRYMOVETONEWPOST_OFFSET UNITYSDK_OFFSET(0x95C30B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_TRYMOVETO_OFFSET UNITYSDK_OFFSET(0x95C2EB0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x95C3A80)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x95C3AE0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x95C2C10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x95C2A20)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x95C3B70)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x95C3B10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___TRYPLAYPOSTROWANIMATION_B__7_0_OFFSET UNITYSDK_OFFSET(0x95C3AF0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsForumControl_TypeDefinitionIndex = 59249;

	class LimaoNewsForumControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Int32 Field_6_0; // 0x30
		::UnityEngine::Transform* Field_6_1; // 0x38
		::SuperScrollView::LoopListView2* Field_6_2; // 0x40
		::RPG::Client::AnimatorButton* Field_6_3; // 0x48
		::UnityEngine::Transform* Field_6_4; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void Method_6_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void TryMoveTo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_TRYMOVETO_OFFSET))(this, a1);
		}

		::System::Void TryMoveToNewPost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_TRYMOVETONEWPOST_OFFSET))(this);
		}

		::System::Void RefreshRedDotNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_REFRESHREDDOTNODE_OFFSET))(this);
		}

		::SuperScrollView::LoopListViewItem2* Method_6_05FE1FA8BF53E27A(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_05FE1FA8BF53E27A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_394DCF9DA306E923(::RPG::Client::MVVM::View::LimaoNewsPostInfoRowControl* a1, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::View::LimaoNewsPostInfoRowControl*, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_394DCF9DA306E923_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_UPDATE_OFFSET))(this);
		}

		::Class_3_D975C797957E43FF* Method_6_26223E9EB82539E8()
		{
			return ((::Class_3_D975C797957E43FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_26223E9EB82539E8_OFFSET))(this);
		}

		::System::Void __TryPlayPostRowAnimation_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___TRYPLAYPOSTROWANIMATION_B__7_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
