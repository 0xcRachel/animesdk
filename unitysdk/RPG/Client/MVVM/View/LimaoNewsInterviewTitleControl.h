#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x95C6DA0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x95C6C00)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x95C6AE0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x95C6E10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x95C6DB0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewTitleControl_TypeDefinitionIndex = 59246;

	class LimaoNewsInterviewTitleControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Text* Field_6_0; // 0x30
		::UnityEngine::UI::Text* Field_6_1; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
