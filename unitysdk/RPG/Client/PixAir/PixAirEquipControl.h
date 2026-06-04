#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::PixAir { class PixAirEquipViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1993C3F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1993C920)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1993AC60)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL__ONGHOSTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1993C4C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1993A340)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL__UPDATESTARS_OFFSET UNITYSDK_OFFSET(0x1993C200)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1993C9B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1993C950)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipControl_TypeDefinitionIndex = 73565;

	class PixAirEquipControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* _Icon; // 0x38
		::UnityEngine::UI::Slider* _CDBar; // 0x40
		::UnityEngine::UI::Text* _TextDamagePower; // 0x48
		::UnityEngine::UI::Text* _TextShieldPower; // 0x50
		::UnityEngine::UI::Text* _TextBurnPower; // 0x58
		::UnityEngine::GameObject* _TextDamageRoot; // 0x60
		::UnityEngine::GameObject* _TextShieldRoot; // 0x68
		::UnityEngine::GameObject* _TextBurnRoot; // 0x70
		::UnityEngine::UI::Button* _ClickBtn; // 0x78
		::Il2CppArray<::UnityEngine::Transform*>* _StarNodes; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnGhostPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL__ONGHOSTPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateStars()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL__UPDATESTARS_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirEquipViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
