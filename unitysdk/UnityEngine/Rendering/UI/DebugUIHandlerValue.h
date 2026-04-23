#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_Value; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x198DC2F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x198DC200)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x198DC210)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x198DA9D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_UPDATE_OFFSET UNITYSDK_OFFSET(0x198DC3E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x198DC4A0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerValue_TypeDefinitionIndex = 33610;

	class DebugUIHandlerValue : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Text* valueLabel; // 0x60
		::UnityEngine::Rendering::DebugUI_Value* m_Field; // 0x68
		::System::Single m_Timer; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONENABLE_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_SETWIDGET_OFFSET))(this, widget);
		}

		::System::Boolean OnSelection(::System::Boolean fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONSELECTION_OFFSET))(this, fromNext, previous);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONDESELECTION_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_UPDATE_OFFSET))(this);
		}
	};
}
