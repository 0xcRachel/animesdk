#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalPermissionDialog; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x157E4450)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_CLOSEPRESSED_OFFSET UNITYSDK_OFFSET(0x157E5660)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_COUNTDOWNCOROUTINE_OFFSET UNITYSDK_OFFSET(0x157E54C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_COOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x157E4410)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x157E4430)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x157E43F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x157E43D0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x157E5220)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x157E5380)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x157E4ED0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SENDEMAILPRESSED_OFFSET UNITYSDK_OFFSET(0x157E4EA0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETEMAIL_OFFSET UNITYSDK_OFFSET(0x157E4F20)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x157E5710)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETMULTILANGUAGETEXT_OFFSET UNITYSDK_OFFSET(0x157E4F60)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_COOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x157E4420)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x157E4440)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x157E4400)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x157E43E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x157E5510)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x157E5450)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x157E4D30)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG__CLOSEPRESSED_G__ONCLOSEPRESSEDROUTINE_40_0_OFFSET UNITYSDK_OFFSET(0x157E56C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x157E5730)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentRequiredDialog_TypeDefinitionIndex = 7527;

	class ConsoleAgeGateParentalConsentRequiredDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentRequiredDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentRequiredDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateParentalConsentRequiredDialog_TypeDefinitionIndex)->GetStaticField(0x16550);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* rightTitleTextPath; // 0x0
		// static const ::System::String* parentEmailTextPath; // 0x0
		// static const ::System::String* countdownSecondsTextPath; // 0x0
		// static const ::System::String* tipsTextPath; // 0x0
		// static const ::System::String* warningTextPath; // 0x0
		::UnityEngine::UI::Text* countDownText; // 0xB0
		::UnityEngine::UI::Text* parentEmailText; // 0xB8
		::System::String* emailTextStr; // 0xC0
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* _OnResendEmail_k__BackingField; // 0xC8
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* _OnClose_k__BackingField; // 0xD0
		::System::Int32 _cooldownTime_k__BackingField; // 0xD8
		::System::Boolean isCountingDown; // 0xDC
		::System::Boolean _Interactable_k__BackingField; // 0xDD
		::MiHoYo::SDK::AgeGateFlowType Type; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* get_OnResendEmail()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONRESENDEMAIL_OFFSET))(this);
		}

		::System::Void set_OnResendEmail(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONRESENDEMAIL_OFFSET))(this, value);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* get_OnClose()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONCLOSE_OFFSET))(this, value);
		}

		::System::Int32 get_cooldownTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_COOLDOWNTIME_OFFSET))(this);
		}

		::System::Void set_cooldownTime(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_COOLDOWNTIME_OFFSET))(this, value);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void SetMultiLanguageText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETMULTILANGUAGETEXT_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		::System::Boolean StartCountdown(::System::Int32 cooldown)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_STARTCOUNTDOWN_OFFSET))(this, cooldown);
		}

		::System::Void SetEmail(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETEMAIL_OFFSET))(this, email);
		}

		static ::System::Void Show(::System::String* email, ::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SHOW_OFFSET))(email, type);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDE_OFFSET))();
		}

		::System::Void SendEmailPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SENDEMAILPRESSED_OFFSET))(this);
		}

		::System::Void ClosePressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_CLOSEPRESSED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETINTERACTABLE_OFFSET))(this, interact);
		}

		::System::Collections::IEnumerator* CountdownCoroutine(::System::Int32 time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_COUNTDOWNCOROUTINE_OFFSET))(this, time);
		}

		::System::Collections::IEnumerator* _ClosePressed_g__OnClosePressedRoutine_40_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG__CLOSEPRESSED_G__ONCLOSEPRESSEDROUTINE_40_0_OFFSET))(this);
		}
	};
}
