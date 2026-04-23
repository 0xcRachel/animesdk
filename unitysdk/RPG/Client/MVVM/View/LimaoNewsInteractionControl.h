#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x122DE8A0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x122DE2D0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x122DE100)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x122DE910)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x122DE8B0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInteractionControl_TypeDefinitionIndex = 68429;

	class LimaoNewsInteractionControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* Field_6_0; // 0x30
		::UnityEngine::Animator* Field_6_1; // 0x38
		::UnityEngine::UI::Text* Field_6_2; // 0x40
		::UnityEngine::UI::Text* Field_6_3; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
