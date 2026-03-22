#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK::Console { class SDKUIController; }
namespace MiHoYo::SDK::Console { class SDKUIDialog; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x15754E80)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_CANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1575D880)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_CONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1575D950)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_GET_CANCELBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1575D6A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_GET_CONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1575D5C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_HIGHLIGHTEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1575DA20)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x1575DA40)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15755420)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_REVERTPS4BUTTONIMAGES_OFFSET UNITYSDK_OFFSET(0x1575D780)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x157514B0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SET_CANCELBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x15755320)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SET_CONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x15755240)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x15757920)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleDialogBase_TypeDefinitionIndex = 7495;

	class ConsoleDialogBase : public ::MiHoYo::SDK::UIElement
	{
	public:
		// static const ::System::String* AgreeButtonPath; // 0x0
		// static const ::System::String* AgreeTextPath; // 0x0
		// static const ::System::String* AgreeRevertedImagePath; // 0x0
		// static const ::System::String* RefuseButtonPath; // 0x0
		// static const ::System::String* RefuseTextPath; // 0x0
		// static const ::System::String* RefuseRevertedImagePath; // 0x0
		::System::Action* OnDialogConfirmed; // 0x58
		::System::Action* OnDialogCanceled; // 0x60
		::System::Action_1<::UnityEngine::GameObject*>* OnDialogHighlightedChanged; // 0x68
		::UnityEngine::GameObject* ConfirmButtonObject; // 0x70
		::UnityEngine::GameObject* CancelButtonObject; // 0x78
		::MiHoYo::SDK::Console::SDKUIController* controller; // 0x80
		::MiHoYo::SDK::Console::SDKUIDialog* dialog; // 0x88
		::UnityEngine::GameObject* ConfirmButtonTextObj; // 0x90
		::UnityEngine::GameObject* ConfirmButtonRevertedImageObj; // 0x98
		::UnityEngine::GameObject* CancelButtonTextObj; // 0xA0
		::UnityEngine::GameObject* CancelButtonRevertedImageObj; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE__CTOR_OFFSET))(this);
		}

		::System::Void set_ConfirmButtonText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SET_CONFIRMBUTTONTEXT_OFFSET))(this, value);
		}

		::System::String* get_ConfirmButtonText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_GET_CONFIRMBUTTONTEXT_OFFSET))(this);
		}

		::System::Void set_CancelButtonText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SET_CANCELBUTTONTEXT_OFFSET))(this, value);
		}

		::System::String* get_CancelButtonText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_GET_CANCELBUTTONTEXT_OFFSET))(this);
		}

		::System::Void SetHighlightedObject(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SETHIGHLIGHTEDOBJECT_OFFSET))(this, obj);
		}

		::System::Void RevertPS4ButtonImages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_REVERTPS4BUTTONIMAGES_OFFSET))(this);
		}

		::System::Void CancelButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_CANCELBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void ConfirmButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_CONFIRMBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void HighlightedChanged(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_HIGHLIGHTEDCHANGED_OFFSET))(this, obj);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_ONENABLE_OFFSET))(this);
		}

		::System::Boolean isFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_ISFOCUS_OFFSET))(this);
		}
	};
}
