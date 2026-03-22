#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSLIMAOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x95C9980)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSLIMAOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x95C9890)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSLIMAOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x95C9770)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSLIMAOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x95C99F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSLIMAOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x95C9990)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsLimaoControl_TypeDefinitionIndex = 59226;

	class LimaoNewsLimaoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* _Image; // 0x30
		::UnityEngine::UI::Text* _Text; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSLIMAOCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSLIMAOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSLIMAOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSLIMAOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSLIMAOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
