#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleAccountBindingDialog_HighlightableObject.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x15751A30)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x15757810)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CAPTCHACODEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x15756860)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15751460)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x157518F0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CLEARINPUTACCOUNT_OFFSET UNITYSDK_OFFSET(0x157514D0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x15750290)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x157508D0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x157506D0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_MAILINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x157567F0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONAGREEMENTTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x157573A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONBINDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x15757670)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONCAPTCHARESENDCOUNTDOWNEND_OFFSET UNITYSDK_OFFSET(0x15756C40)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15756750)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15755400)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONGETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x15756390)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET UNITYSDK_OFFSET(0x15756F00)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONRFEFRESHQRIMAGE_OFFSET UNITYSDK_OFFSET(0x15756670)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_PHONEINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x15756790)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETBOTTOMBUTTONSENABLE_OFFSET UNITYSDK_OFFSET(0x157503E0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x15755930)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15750370)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x15750780)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET UNITYSDK_OFFSET(0x15750ED0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x15750100)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x157509C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_START_OFFSET UNITYSDK_OFFSET(0x15755BE0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15756B20)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x15755DD0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x157578A0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleAccountBindingDialog_TypeDefinitionIndex = 7484;

	class ConsoleAccountBindingDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleAccountBindingDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleAccountBindingDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAccountBindingDialog_TypeDefinitionIndex)->GetStaticField(0x10AD0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::Int32 CAPTCHA_RESEND_SECONDS = 0x3C; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* ManualBindTitleTextPath; // 0x0
		// static const ::System::String* MailInputPath; // 0x0
		// static const ::System::String* PhoneInputPath; // 0x0
		// static const ::System::String* CodeInputPath; // 0x0
		// static const ::System::String* CaptchaCountdownTextPath; // 0x0
		// static const ::System::String* CaptchaCountdownImagePath; // 0x0
		// static const ::System::String* ViewUserAgreementTextPath; // 0x0
		// static const ::System::String* ViewPrivacyPolicyTextPath; // 0x0
		// static const ::System::String* AgreementCheckboxPath; // 0x0
		// static const ::System::String* AgreementCheckboxTextPath; // 0x0
		// static const ::System::String* BindButtonPath; // 0x0
		// static const ::System::String* BindButtonTextPath; // 0x0
		// static const ::System::String* BindButtonTipsPath; // 0x0
		// static const ::System::String* BindButtonTipsTextPath; // 0x0
		// static const ::System::String* BindButtonOutlinePath; // 0x0
		// static const ::System::String* QRBindTitleTextPath; // 0x0
		// static const ::System::String* QRImagePath; // 0x0
		// static const ::System::String* QRLoadingPanelPath; // 0x0
		// static const ::System::String* QRExpiredPanelPath; // 0x0
		// static const ::System::String* QRRefreshTipsTextPath; // 0x0
		// static const ::System::String* QRStatusTipsTextPath; // 0x0
		// static const ::System::String* ScanInstructionTextPath; // 0x0
		// static const ::System::String* SendCaptchaBtnTextPath; // 0x0
		// static const ::System::String* SendCaptchaBtnImagePath; // 0x0
		::UnityEngine::Color ENABLED_COLOR; // 0xB0
		::UnityEngine::Color DISABLED_COLOR; // 0xC0
		::System::Action* OnUserAgreementClicked; // 0xD0
		::System::Action* OnPrivacyPolicyClicked; // 0xD8
		::System::Action* OnRefreshQRCodeClicked; // 0xE0
		::System::Action_1<::System::String*>* OnGetCaptchaClicked; // 0xE8
		::System::Action_1<::System::String*>* OnBindButtonClicked; // 0xF0
		::System::Action* OnBindingCanceled; // 0xF8
		::UnityEngine::GameObject* MailInputObj; // 0x100
		::UnityEngine::GameObject* PhoneInputObj; // 0x108
		::UnityEngine::GameObject* CaptchaInputObj; // 0x110
		::UnityEngine::GameObject* CaptchaCountdownTextObj; // 0x118
		::UnityEngine::GameObject* CaptchaCountdownImageObj; // 0x120
		::UnityEngine::GameObject* AgreementCheckboxObj; // 0x128
		::UnityEngine::GameObject* BindButtonObj; // 0x130
		::UnityEngine::GameObject* BindButtonTipsObj; // 0x138
		::UnityEngine::GameObject* BindButtonOutline; // 0x140
		::UnityEngine::GameObject* BindButtonTextObj; // 0x148
		::MiHoYo::SDK::Win::QRCode* QRCodeComponent; // 0x150
		::UnityEngine::GameObject* QRImageObj; // 0x158
		::UnityEngine::GameObject* QRLoadingPanelObj; // 0x160
		::UnityEngine::GameObject* QRExpiredPanelObj; // 0x168
		::UnityEngine::GameObject* QRStatusTipsTextObj; // 0x170
		::UnityEngine::GameObject* SendCaptchaBtnImageObj; // 0x178
		::UnityEngine::GameObject* SendCaptchaBtnTextObj; // 0x180
		::System::Single ResendCaptchaCountdownSeconds; // 0x188
		::System::Boolean SendCaptchaBtnEnabled; // 0x18C
		::System::Boolean Interactable; // 0x18D
		::System::Boolean IsQRCodeExpired; // 0x18E
		::UnityEngine::Coroutine* CaptchaCountdownCoroutine; // 0x190
		::MiHoYo::SDK::ReportType SDKReportType; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETINTERACTABLE_OFFSET))(interactable);
		}

		static ::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_LOADINGQRCODE_OFFSET))();
		}

		static ::System::Void SetQRImage(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETQRIMAGE_OFFSET))(url);
		}

		static ::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_INVALIDATEQRCODE_OFFSET))();
		}

		static ::System::Void StartCaptchaCountdown(::System::Boolean start)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET))(start);
		}

		static ::System::Void ClearInputAccount()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CLEARINPUTACCOUNT_OFFSET))();
		}

		static ::System::Void ClearCaptchaCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void SetHighlightedObject(::MiHoYo::SDK::Console::ConsoleAccountBindingDialog_HighlightableObject obj)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleAccountBindingDialog_HighlightableObject))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET))(this, obj);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void PhoneInputValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_PHONEINPUTVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void MailInputValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_MAILINPUTVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void CaptchaCodeValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CAPTCHACODEVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void OnGetCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONGETCAPTCHACODE_OFFSET))(this);
		}

		::System::Void UpdateCaptchaResendCountdown(::System::Single seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET))(this, seconds);
		}

		::System::Collections::IEnumerator* CaptchaResendCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET))(this);
		}

		::System::Void OnCaptchaResendCountdownEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONCAPTCHARESENDCOUNTDOWNEND_OFFSET))(this);
		}

		::System::Void SetSendCaptchaButtonEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET))(this, enable);
		}

		::System::Void OnRfefreshQRImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONRFEFRESHQRIMAGE_OFFSET))(this);
		}

		::System::Void SetBottomButtonsEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETBOTTOMBUTTONSENABLE_OFFSET))(this, enable);
		}

		::System::Void OnHighlightedObjectChanged(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET))(this, obj);
		}

		::System::Void OnAgreementToggleClicked(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONAGREEMENTTOGGLECLICKED_OFFSET))(this, isOn);
		}

		::System::Void OnBindBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONBINDBTNCLICKED_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CANCELDIALOG_OFFSET))(this);
		}
	};
}
