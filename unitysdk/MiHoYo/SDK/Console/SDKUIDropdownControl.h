#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CHANGEDROPDOWNVALUE_OFFSET UNITYSDK_OFFSET(0x18EAAF60)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CLOSEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x18EAAFF0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_FIREDROPDOWN_OFFSET UNITYSDK_OFFSET(0x18EA9FB0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x18EAA930)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNREPEATRATE_OFFSET UNITYSDK_OFFSET(0x18EAABB0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_FOCUSEDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x18EAAB70)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_ISWRAPAROUND_OFFSET UNITYSDK_OFFSET(0x18EAAB90)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_INITIALIZEDROPDOWNITEMS_OFFSET UNITYSDK_OFFSET(0x18EAA180)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SCROLLTOSELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x18EAABD0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_FOCUSEDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x18EAAB80)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_ISWRAPAROUND_OFFSET UNITYSDK_OFFSET(0x18EAABA0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_UPDATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x18EAA1D0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA9F80)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIDropdownControl_TypeDefinitionIndex = 8615;

	class SDKUIDropdownControl : public ::System::Object
	{
	public:
		// static const ::System::Single inputRepeatDelay; // 0x0
		// static const ::System::Single inputRepeatRate; // 0x0
		// static const ::System::Single accelerationInterval; // 0x0
		::UnityEngine::UI::ScrollRect* dropdownScrollRect; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::UI::Toggle*>* dropdownItems; // 0x18
		::UnityEngine::UI::Dropdown* _focusedDropdown_k__BackingField; // 0x20
		::System::Int32 focusedDropdownValue; // 0x28
		::System::Boolean _IsWrapAround_k__BackingField; // 0x2C
		::System::Boolean justOpenDropDown; // 0x2D
		::System::Boolean isTransitioning; // 0x2E
		::System::Single lastInputTime; // 0x30
		::System::Int32 maxStep; // 0x34
		::System::Int32 step; // 0x38
		::System::Int32 lastInputDirection; // 0x3C
		::System::Single inputHoldTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Dropdown* get_focusedDropdown()
		{
			return ((::UnityEngine::UI::Dropdown*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_FOCUSEDDROPDOWN_OFFSET))(this);
		}

		::System::Void set_focusedDropdown(::UnityEngine::UI::Dropdown* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Dropdown*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_FOCUSEDDROPDOWN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWrapAround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_ISWRAPAROUND_OFFSET))(this);
		}

		::System::Void set_IsWrapAround(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_ISWRAPAROUND_OFFSET))(this, a1);
		}

		static ::System::Single GetDropdownRepeatRate(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNREPEATRATE_OFFSET))(a1);
		}

		::System::Void ScrollToSelectedItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SCROLLTOSELECTEDITEM_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::GameObject* GetDropDownList(::UnityEngine::UI::Dropdown* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::Dropdown*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNLIST_OFFSET))(a1);
		}

		::System::Collections::IEnumerator* InitializeDropdownItems()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_INITIALIZEDROPDOWNITEMS_OFFSET))(this);
		}

		::System::Void ChangeDropdownValue(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CHANGEDROPDOWNVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean FireDropdown(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_FIREDROPDOWN_OFFSET))(this, a1);
		}

		::System::Void CloseDropdown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CLOSEDROPDOWN_OFFSET))(this, a1);
		}

		::System::Boolean UpdateDropdown(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_UPDATEDROPDOWN_OFFSET))(this, a1);
		}
	};
}
