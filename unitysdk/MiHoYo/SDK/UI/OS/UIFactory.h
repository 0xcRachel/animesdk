#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAccountListDialog; }
namespace MiHoYo::SDK::UI::OS { class IAccountListLogoutConfirmDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalPermissionDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateVerificationDialog; }
namespace MiHoYo::SDK::UI::OS { class IAlertDialog; }
namespace MiHoYo::SDK::UI::OS { class IConfirmDialog; }
namespace MiHoYo::SDK::UI::OS { class IGooglePCOAuthDialog; }
namespace MiHoYo::SDK::UI::OS { class ILoginByAccountDialog; }
namespace MiHoYo::SDK::UI::OS { class IThirdPartyOAuthDialog; }
namespace MiHoYo::SDK::UI::OS { class ITipsBar; }
namespace MiHoYo::SDK::UI::OS { class IToast; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentDetailsDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentSentDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalDenyDialog; }
namespace System { class String; }

#define MIHOYO_SDK_UI_OS_UIFACTORY_CLOSEALL_OFFSET UNITYSDK_OFFSET(0x1595B9D0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEACCOUNTLISTDIALOG_OFFSET UNITYSDK_OFFSET(0x1595B5E0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEACCOUNTLISTEXITCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1595B550)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1595BC90)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTDETAILSDIALOG_OFFSET UNITYSDK_OFFSET(0x1595B8D0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1595BC40)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1595BC60)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET UNITYSDK_OFFSET(0x1595BC80)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1595BC50)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPAYPARENTCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1595B950)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPAYPARENTDENYDIALOG_OFFSET UNITYSDK_OFFSET(0x1595B990)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEVERIFICATIONDIALOG_OFFSET UNITYSDK_OFFSET(0x1595BC70)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEALERTDIALOG_OFFSET UNITYSDK_OFFSET(0x1595B430)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATECONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1595B4C0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEGOOGLEPCOAUTHDIALOG_OFFSET UNITYSDK_OFFSET(0x1595B6E0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATELOGINBYACCOUNTDIALOG_OFFSET UNITYSDK_OFFSET(0x1595B3A0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEPAYPARENTCONSENTSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1595B910)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATETHIRDPARTYOAUTHDIALOG_OFFSET UNITYSDK_OFFSET(0x1595B840)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATETIPSBAR_OFFSET UNITYSDK_OFFSET(0x1595B7B0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATETOAST_OFFSET UNITYSDK_OFFSET(0x1595B720)
#define MIHOYO_SDK_UI_OS_UIFACTORY_ONHIDENATIVEUI_OFFSET UNITYSDK_OFFSET(0x1595BC20)
#define MIHOYO_SDK_UI_OS_UIFACTORY_ONSHOWNATIVEUI_OFFSET UNITYSDK_OFFSET(0x1595BC00)
#define MIHOYO_SDK_UI_OS_UIFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1595BCA0)

namespace MiHoYo::SDK::UI::OS
{
	inline static constexpr unsigned int UIFactory_TypeDefinitionIndex = 7293;

	class UIFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::UI::OS::ILoginByAccountDialog* CreateLoginByAccountDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::ILoginByAccountDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATELOGINBYACCOUNTDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IAlertDialog* CreateAlertDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IAlertDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEALERTDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IConfirmDialog* CreateConfirmDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IConfirmDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATECONFIRMDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IAccountListLogoutConfirmDialog* CreateAccountListExitConfirmDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IAccountListLogoutConfirmDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEACCOUNTLISTEXITCONFIRMDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IAccountListDialog* CreateAccountListDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IAccountListDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEACCOUNTLISTDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IGooglePCOAuthDialog* CreateGooglePCOAuthDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IGooglePCOAuthDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEGOOGLEPCOAUTHDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IToast* CreateToast()
		{
			return ((::MiHoYo::SDK::UI::OS::IToast*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATETOAST_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::ITipsBar* CreateTipsBar()
		{
			return ((::MiHoYo::SDK::UI::OS::ITipsBar*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATETIPSBAR_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IThirdPartyOAuthDialog* CreateThirdPartyOAuthDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IThirdPartyOAuthDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATETHIRDPARTYOAUTHDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDetailsDialog* CreateAgeGateParentalConsentDetailsDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDetailsDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTDETAILSDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog* CreatePayParentConsentSentDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEPAYPARENTCONSENTSENTDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDialog* CreateAgeGatePayParentConsentDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPAYPARENTCONSENTDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalDenyDialog* CreateAgeGatePayParentDenyDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IWinAgeGateParentalDenyDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPAYPARENTDENYDIALOG_OFFSET))();
		}

		static ::System::Void CloseAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CLOSEALL_OFFSET))();
		}

		::System::Void OnShowNativeUI(::System::String* strUIName, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_ONSHOWNATIVEUI_OFFSET))(this, strUIName, strParams);
		}

		::System::Void OnHideNativeUI(::System::String* strUIName, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_ONHIDENATIVEUI_OFFSET))(this, strUIName, strParams);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* CreateAgeGateParentalConsentDialog(::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTDIALOG_OFFSET))(type);
		}

		static ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog* CreateAgeGateParentalConsentSentDialog(::System::String* email, ::System::String* date, ::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog*(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET))(email, date, type);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* CreateAgeGateParentalConsentProcessDialog(::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET))(type);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* CreateAgeGateVerificationDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEVERIFICATIONDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* CreateAgeGateParentalConsentRequiredDialog(::System::String* email, ::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*(*)(::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET))(email, type);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* CreateAgeGateErrorDialog(::System::String* title, ::System::String* desc, ::System::String* sub_message)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEERRORDIALOG_OFFSET))(title, desc, sub_message);
		}
	};
}
