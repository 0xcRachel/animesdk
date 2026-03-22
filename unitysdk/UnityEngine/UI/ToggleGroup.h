#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_UI_TOGGLEGROUP_ACTIVETOGGLES_OFFSET UNITYSDK_OFFSET(0x18364D00)
#define UNITYENGINE_UI_TOGGLEGROUP_ANYTOGGLESON_OFFSET UNITYSDK_OFFSET(0x18364690)
#define UNITYENGINE_UI_TOGGLEGROUP_ENSUREVALIDSTATE_OFFSET UNITYSDK_OFFSET(0x18363EF0)
#define UNITYENGINE_UI_TOGGLEGROUP_GET_ALLOWSWITCHOFF_OFFSET UNITYSDK_OFFSET(0x18364BA0)
#define UNITYENGINE_UI_TOGGLEGROUP_NOTIFYTOGGLEON_OFFSET UNITYSDK_OFFSET(0x18364490)
#define UNITYENGINE_UI_TOGGLEGROUP_REGISTERTOGGLE_OFFSET UNITYSDK_OFFSET(0x18364410)
#define UNITYENGINE_UI_TOGGLEGROUP_SETALLTOGGLESOFF_OFFSET UNITYSDK_OFFSET(0x18364E00)
#define UNITYENGINE_UI_TOGGLEGROUP_SET_ALLOWSWITCHOFF_OFFSET UNITYSDK_OFFSET(0x18364BB0)
#define UNITYENGINE_UI_TOGGLEGROUP_START_OFFSET UNITYSDK_OFFSET(0x18364C00)
#define UNITYENGINE_UI_TOGGLEGROUP_UNREGISTERTOGGLE_OFFSET UNITYSDK_OFFSET(0x18364390)
#define UNITYENGINE_UI_TOGGLEGROUP_VALIDATETOGGLEISINGROUP_OFFSET UNITYSDK_OFFSET(0x18364C10)
#define UNITYENGINE_UI_TOGGLEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18364BC0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ToggleGroup_TypeDefinitionIndex = 5636;

	class ToggleGroup : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Boolean m_AllowSwitchOff; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UI::Toggle*>* m_Toggles; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_allowSwitchOff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_GET_ALLOWSWITCHOFF_OFFSET))(this);
		}

		::System::Void set_allowSwitchOff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_SET_ALLOWSWITCHOFF_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_START_OFFSET))(this);
		}

		::System::Void ValidateToggleIsInGroup(::UnityEngine::UI::Toggle* toggle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_VALIDATETOGGLEISINGROUP_OFFSET))(this, toggle);
		}

		::System::Void NotifyToggleOn(::UnityEngine::UI::Toggle* toggle, ::System::Boolean sendCallback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_NOTIFYTOGGLEON_OFFSET))(this, toggle, sendCallback);
		}

		::System::Void UnregisterToggle(::UnityEngine::UI::Toggle* toggle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_UNREGISTERTOGGLE_OFFSET))(this, toggle);
		}

		::System::Void RegisterToggle(::UnityEngine::UI::Toggle* toggle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_REGISTERTOGGLE_OFFSET))(this, toggle);
		}

		::System::Void EnsureValidState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_ENSUREVALIDSTATE_OFFSET))(this);
		}

		::System::Boolean AnyTogglesOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_ANYTOGGLESON_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Toggle*>* ActiveToggles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Toggle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_ACTIVETOGGLES_OFFSET))(this);
		}

		::System::Void SetAllTogglesOff(::System::Boolean sendCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_SETALLTOGGLESOFF_OFFSET))(this, sendCallback);
		}
	};
}
