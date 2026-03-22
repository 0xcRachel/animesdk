#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/KeyCombo.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class InputDevice; }

#define INCONTROL_KEYBINDINGSOURCELISTENER_LISTEN_OFFSET UNITYSDK_OFFSET(0x15478EE0)
#define INCONTROL_KEYBINDINGSOURCELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x15478E90)
#define INCONTROL_KEYBINDINGSOURCELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x15479000)

namespace InControl
{
	inline static constexpr unsigned int KeyBindingSourceListener_TypeDefinitionIndex = 30510;

	class KeyBindingSourceListener : public ::System::Object
	{
	public:
		::InControl::KeyCombo detectFound; // 0x10
		::System::Int32 detectPhase; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCELISTENER_RESET_OFFSET))(this);
		}

		::InControl::BindingSource* Listen(::InControl::BindingListenOptions* listenOptions, ::InControl::InputDevice* device)
		{
			return ((::InControl::BindingSource*(*)(::PVOID, ::InControl::BindingListenOptions*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCELISTENER_LISTEN_OFFSET))(this, listenOptions, device);
		}
	};
}
