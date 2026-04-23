#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace InControl { class KeyboardLayoutChanged; }
namespace System::Threading { class Timer; }

#define INCONTROL_KEYBOARDLAYOUTWATCHER_CHECKKEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1641B500)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1641B5C0)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1641B670)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_GETCURRENTKEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1641B370)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_GETFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x1641B1E0)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_GETKEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1641B2F0)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_GETWINDOWTHREADPROCESSID_OFFSET UNITYSDK_OFFSET(0x1641B260)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_RELEASEUNMANAGEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1641B540)
#define INCONTROL_KEYBOARDLAYOUTWATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1641B160)

namespace InControl
{
	inline static constexpr unsigned int KeyboardLayoutWatcher_TypeDefinitionIndex = 37166;

	class KeyboardLayoutWatcher : public ::System::Object
	{
	public:
		::System::Threading::Timer* _timer; // 0x10
		::InControl::KeyboardLayoutChanged* KeyboardLayoutChanged; // 0x18
		::System::Int32 _currentLayout; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr GetForegroundWindow()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_GETFOREGROUNDWINDOW_OFFSET))();
		}

		static ::System::UInt32 GetWindowThreadProcessId(::System::IntPtr hwnd, ::System::IntPtr proccess)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_GETWINDOWTHREADPROCESSID_OFFSET))(hwnd, proccess);
		}

		static ::System::IntPtr GetKeyboardLayout(::System::UInt32 thread)
		{
			return ((::System::IntPtr(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_GETKEYBOARDLAYOUT_OFFSET))(thread);
		}

		::System::Int32 GetCurrentKeyboardLayout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_GETCURRENTKEYBOARDLAYOUT_OFFSET))(this);
		}

		::System::Void CheckKeyboardLayout(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_CHECKKEYBOARDLAYOUT_OFFSET))(this, sender);
		}

		::System::Void ReleaseUnmanagedResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_RELEASEUNMANAGEDRESOURCES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_FINALIZE_OFFSET))(this);
		}
	};
}
