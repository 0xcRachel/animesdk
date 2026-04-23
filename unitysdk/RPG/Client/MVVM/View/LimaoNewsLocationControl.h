#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::MVVM::Model { class LimaoNewsLocationData; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x122EB0B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x122EB120)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x122EAFF0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x122EAF30)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x122EB190)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x122EB130)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsLocationControl_TypeDefinitionIndex = 68432;

	class LimaoNewsLocationControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Text* _Text; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsLocationData* get__ViewModel()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsLocationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSLOCATIONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
