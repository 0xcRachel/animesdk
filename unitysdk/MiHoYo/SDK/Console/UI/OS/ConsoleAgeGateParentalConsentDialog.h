#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x157E0150)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x157E0130)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x157E0110)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x157E0090)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x157E00B0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x157E00D0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x157E00F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x157E15F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x157E1750)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_NEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x157E1BE0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONCLOSEDBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x157E1C50)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x157E1B30)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONINPUTFIELDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x157E1C10)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONSETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x157E1D20)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x157E1B90)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETMULTILANGUAGETEXT_OFFSET UNITYSDK_OFFSET(0x157E1820)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETPARENTSEMAILWITHININPUTFIELD_OFFSET UNITYSDK_OFFSET(0x157E13F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x157E0140)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x157E0120)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x157E00A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x157E00C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x157E00E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x157E0100)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x157E15B0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x157E19F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x157E1430)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_VALIDATEEMAIL_OFFSET UNITYSDK_OFFSET(0x157E12C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x157E1F40)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG__ONCLOSEDBUTTONPRESSED_G__ONCLOSEPRESSEDROUTINE_56_0_OFFSET UNITYSDK_OFFSET(0x157E1CD0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentDialog_TypeDefinitionIndex = 7521;

	class ConsoleAgeGateParentalConsentDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateParentalConsentDialog_TypeDefinitionIndex)->GetStaticField(0x16310);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::Int32 EMAIL_MAX_LENGTH = 0x32; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* inputTitleTextPath; // 0x0
		// static const ::System::String* inputPlaceholderTextPath; // 0x0
		// static const ::System::String* inputFieldPath; // 0x0
		// static const ::System::String* TipsPath; // 0x0
		// static const ::System::String* TipsTextPath; // 0x0
		// static const ::System::String* TipsOutlinePath; // 0x0
		// static const ::System::String* inputConfirmButton; // 0x0
		// static const ::System::String* inputConfirmButtonText; // 0x0
		// static const ::System::String* helpButtonTextPath; // 0x0
		::UnityEngine::UI::InputField* inputField; // 0xB0
		::UnityEngine::UI::Button* confirmInputButton; // 0xB8
		::UnityEngine::UI::Image* BtnOutline; // 0xC0
		::UnityEngine::GameObject* TipsObject; // 0xC8
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* _OnInputCompleted_k__BackingField; // 0xD0
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* _OnInputValueChanged_k__BackingField; // 0xD8
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* _OnNextButtonPressed_k__BackingField; // 0xE0
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* _OnShowParentalControlProcessButtonPressed_k__BackingField; // 0xE8
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* _OnClosed_k__BackingField; // 0xF0
		::System::String* parentsEmail; // 0xF8
		::MiHoYo::SDK::AgeGateFlowType Type; // 0x100
		::System::Boolean _Interactable_k__BackingField; // 0x104
		::System::Boolean HasInput; // 0x105

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* get_OnInputCompleted()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTCOMPLETED_OFFSET))(this);
		}

		::System::Void set_OnInputCompleted(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTCOMPLETED_OFFSET))(this, value);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* get_OnInputValueChanged()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_OnInputValueChanged(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTVALUECHANGED_OFFSET))(this, value);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* get_OnNextButtonPressed()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONNEXTBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnNextButtonPressed(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONNEXTBUTTONPRESSED_OFFSET))(this, value);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* get_OnShowParentalControlProcessButtonPressed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnShowParentalControlProcessButtonPressed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this, value);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* get_OnClosed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONCLOSED_OFFSET))(this);
		}

		::System::Void set_OnClosed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONCLOSED_OFFSET))(this, value);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void SetParentsEmailWithinInputField(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETPARENTSEMAILWITHININPUTFIELD_OFFSET))(this, email);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		::System::Void SetMultiLanguageText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETMULTILANGUAGETEXT_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SHOW_OFFSET))(type);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_HIDE_OFFSET))();
		}

		::System::Void NextButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_NEXTBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void OnInputFieldValueChanged(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONINPUTFIELDVALUECHANGED_OFFSET))(this, input);
		}

		::System::Void ShowParentalControlProcessButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void OnClosedButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONCLOSEDBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void ValidateEmail(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_VALIDATEEMAIL_OFFSET))(this, input);
		}

		::System::Void SetInteractable(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETINTERACTABLE_OFFSET))(this, interact);
		}

		::System::Void OnSetHighlightedObject(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONSETHIGHLIGHTEDOBJECT_OFFSET))(this, gameObject);
		}

		::System::Collections::IEnumerator* _OnClosedButtonPressed_g__OnClosePressedRoutine_56_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG__ONCLOSEDBUTTONPRESSED_G__ONCLOSEPRESSEDROUTINE_56_0_OFFSET))(this);
		}
	};
}
