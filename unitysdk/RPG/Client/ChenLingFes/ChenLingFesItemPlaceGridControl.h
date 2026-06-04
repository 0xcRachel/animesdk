#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridViewModel; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1884B530)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1884B5B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1884B360)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1884B1E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1884B640)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1884B5E0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemPlaceGridControl_TypeDefinitionIndex = 73993;

	class ChenLingFesItemPlaceGridControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _Node1; // 0x38
		::UnityEngine::Transform* _Node2; // 0x40
		::UnityEngine::Transform* _Node3; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
