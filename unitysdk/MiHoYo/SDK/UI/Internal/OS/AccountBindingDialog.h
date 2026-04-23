#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x183FCA10)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_CLEARINPUTACCOUNT_OFFSET UNITYSDK_OFFSET(0x183FC9C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC550)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONBINDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC5F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC570)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONGETCAPTCHABTNCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC590)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONQRREFRESHBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC610)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONSHOWPRIVACYPROTOCOLCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC5D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONSHOWUSERAGREEMENTCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC5B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x183FCB80)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x183FC690)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x183FC6F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x183FC630)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC560)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONBINDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC600)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC580)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONGETCAPTCHABTNCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC5A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONQRREFRESHBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC620)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONSHOWPRIVACYPROTOCOLCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC5E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONSHOWUSERAGREEMENTCLICKED_OFFSET UNITYSDK_OFFSET(0x183FC5C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x183FCA60)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STARTBINDRESULTQUERYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x183FC7E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x183FC900)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STOPBINDRESULTQUERYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x183FC8A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STOPCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x183FC960)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x183FCBF0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountBindingDialog_TypeDefinitionIndex = 7442;

	class AccountBindingDialog : public ::System::Object
	{
	public:
		::System::Action* _OnQRRefreshBtnClicked_k__BackingField; // 0x10
		::System::Action_1<::System::String*>* _OnGetCaptchaBtnClicked_k__BackingField; // 0x18
		::System::Action* _OnShowPrivacyProtocolClicked_k__BackingField; // 0x20
		::System::Action_1<::System::String*>* _OnBindBtnClicked_k__BackingField; // 0x28
		::System::Action* _OnBackBtnClicked_k__BackingField; // 0x30
		::System::Action* _OnShowUserAgreementClicked_k__BackingField; // 0x38
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnBackBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONBACKBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnBackBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONBACKBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_OnGetCaptchaBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONGETCAPTCHABTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnGetCaptchaBtnClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONGETCAPTCHABTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnShowUserAgreementClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONSHOWUSERAGREEMENTCLICKED_OFFSET))(this);
		}

		::System::Void set_OnShowUserAgreementClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONSHOWUSERAGREEMENTCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnShowPrivacyProtocolClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONSHOWPRIVACYPROTOCOLCLICKED_OFFSET))(this);
		}

		::System::Void set_OnShowPrivacyProtocolClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONSHOWPRIVACYPROTOCOLCLICKED_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_OnBindBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONBINDBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnBindBtnClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONBINDBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnQRRefreshBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONQRREFRESHBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnQRRefreshBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONQRREFRESHBTNCLICKED_OFFSET))(this, value);
		}

		::System::Void SetQRImage(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SETQRIMAGE_OFFSET))(this, url);
		}

		::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_INVALIDATEQRCODE_OFFSET))(this);
		}

		::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_LOADINGQRCODE_OFFSET))(this);
		}

		::UnityEngine::Coroutine* StartBindResultQueryCoroutine(::System::Int32 queryInterval, ::System::Action* func)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STARTBINDRESULTQUERYCOROUTINE_OFFSET))(this, queryInterval, func);
		}

		::System::Void StopBindResultQueryCoroutine(::UnityEngine::Coroutine* coroutine)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STOPBINDRESULTQUERYCOROUTINE_OFFSET))(this, coroutine);
		}

		::System::Void StartCaptchaCountdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET))(this);
		}

		::System::Void StopCaptchaCountdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STOPCAPTCHACOUNTDOWN_OFFSET))(this);
		}

		::System::Void ClearInputAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_CLEARINPUTACCOUNT_OFFSET))(this);
		}

		::System::Void ClearCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET))(this);
		}

		::System::Void Show(::System::String* gamertag, ::System::Boolean showAgreement)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SHOW_OFFSET))(this, gamertag, showAgreement);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_HIDE_OFFSET))(this);
		}
	};
}
