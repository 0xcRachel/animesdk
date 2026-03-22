#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConfirmDialogContext_DialogBtnMode.h"
#include "unitysdk/RPG/Client/ConfirmDialogContext_OnClickType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"

class Class_2_A48F3719AA1CF200_28;
namespace RPG::Client { class LocalizedText; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_CUSTOMEXIT_OFFSET UNITYSDK_OFFSET(0x8FD10A0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_DISABLETOGGLE_OFFSET UNITYSDK_OFFSET(0x8FD1920)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ENABLETOGGLE_OFFSET UNITYSDK_OFFSET(0x8FD1770)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCANCEL_OFFSET UNITYSDK_OFFSET(0x8FD1570)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCONTENT_OFFSET UNITYSDK_OFFSET(0x8FD1500)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTOK_OFFSET UNITYSDK_OFFSET(0x8FD15E0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTTITLE_OFFSET UNITYSDK_OFFSET(0x8FD1490)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x8FD07E0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNBGCLICK_OFFSET UNITYSDK_OFFSET(0x8FD12E0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0x8FD11A0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCLOSECLICK_OFFSET UNITYSDK_OFFSET(0x8FD1240)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNOKCLICK_OFFSET UNITYSDK_OFFSET(0x8FD1100)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNTOGGLECLICK_OFFSET UNITYSDK_OFFSET(0x8FD1380)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNBGINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x8FD0C50)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNMODE_OFFSET UNITYSDK_OFFSET(0x8FD1440)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETCONTENT_OFFSET UNITYSDK_OFFSET(0x8FD16E0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTITLE_OFFSET UNITYSDK_OFFSET(0x8FD1650)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTOGGLETIPS_OFFSET UNITYSDK_OFFSET(0x8FD1880)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_BGDISPATCH_OFFSET UNITYSDK_OFFSET(0x8FD1D60)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_CLOSEDISPATCH_OFFSET UNITYSDK_OFFSET(0x8FD1D70)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x8FD1D80)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCANCEL_OFFSET UNITYSDK_OFFSET(0x8FD1CA0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCONTENT_OFFSET UNITYSDK_OFFSET(0x8FD19D0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDOK_OFFSET UNITYSDK_OFFSET(0x8FD1BE0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDTITLE_OFFSET UNITYSDK_OFFSET(0x8FD1A90)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD04B0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8FD0530)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x8FD0EF0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__PROCESSEXITDISPATCH_OFFSET UNITYSDK_OFFSET(0x8FD0F80)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPINCONTROLBTN_OFFSET UNITYSDK_OFFSET(0x8FD0CD0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPMODEBTN_OFFSET UNITYSDK_OFFSET(0x8FD09E0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPTILELAYOUT_OFFSET UNITYSDK_OFFSET(0x8FD0E40)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x8FD0810)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8FD0B90)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8FD1DE0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x8FD1F00)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x8FD1E40)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8FD1EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogContext_TypeDefinitionIndex = 57959;

	class ConfirmDialogContext : public ::RPG::Client::UIController
	{
	public:
		::System::Action_1<::System::Boolean>* OkOrCancelDispatch; // 0x180
		::System::Action* ExitAction; // 0x188
		::System::Action* _CloseDispatch; // 0x190
		::System::Action_1<::System::Boolean>* _ToggleDispatch; // 0x198
		::System::Action* NoneDispatch; // 0x1A0
		::System::Action* _BgDispatch; // 0x1A8
		::System::Boolean _IsToggleSelected; // 0x1B0
		::System::Boolean CallDispatchBeforeExit; // 0x1B1
		::RPG::Client::ConfirmDialogContext_OnClickType _ClickType; // 0x1B4
		::RPG::Client::ConfirmDialogContext_DialogBtnMode _Mode; // 0x1B8

		::System::Void _ctor(::RPG::Client::UILayer layer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__CTOR_OFFSET))(this, layer);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupModeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPMODEBTN_OFFSET))(this);
		}

		::System::Void _SetupIncontrolBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPINCONTROLBTN_OFFSET))(this);
		}

		::System::Void _SetupTileLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPTILELAYOUT_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _ProcessExitDispatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__PROCESSEXITDISPATCH_OFFSET))(this);
		}

		::System::Void CustomExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_CUSTOMEXIT_OFFSET))(this);
		}

		::System::Void OnBtnOkClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNOKCLICK_OFFSET))(this, param);
		}

		::System::Void OnBtnCancelClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCANCELCLICK_OFFSET))(this, param);
		}

		::System::Void OnBtnCloseClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCLOSECLICK_OFFSET))(this, param);
		}

		::System::Void OnBtnBgClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNBGCLICK_OFFSET))(this, param);
		}

		::System::Void OnBtnToggleClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNTOGGLECLICK_OFFSET))(this, param);
		}

		::System::Void SetBtnBgInteractable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNBGINTERACTABLE_OFFSET))(this, enable);
		}

		::System::Void SetBtnMode(::RPG::Client::ConfirmDialogContext_DialogBtnMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNMODE_OFFSET))(this, mode);
		}

		::RPG::Client::LocalizedText* GetComponentTitle()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTTITLE_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* GetComponentContent()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCONTENT_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* GetComponentCancel()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCANCEL_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* GetComponentOK()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTOK_OFFSET))(this);
		}

		::System::Void SetTitle(::RPG::Client::TextID title, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTITLE_OFFSET))(this, title, param);
		}

		::System::Void SetContent(::RPG::Client::TextID content, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETCONTENT_OFFSET))(this, content, param);
		}

		::System::Void EnableToggle(::System::Boolean isSelected, ::System::Action_1<::System::Boolean>* despatch, ::RPG::Client::TextID toggleTips, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action_1<::System::Boolean>*, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ENABLETOGGLE_OFFSET))(this, isSelected, despatch, toggleTips, param);
		}

		::System::Void DisableToggle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_DISABLETOGGLE_OFFSET))(this);
		}

		::System::Void SetToggleTips(::RPG::Client::TextID toggleTips, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTOGGLETIPS_OFFSET))(this, toggleTips, param);
		}

		::System::Void set_TextIDContent(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCONTENT_OFFSET))(this, value);
		}

		::System::Void set_TextIDTitle(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDTITLE_OFFSET))(this, value);
		}

		::System::Void set_TextIDOK(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDOK_OFFSET))(this, value);
		}

		::System::Void set_TextIDCancel(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCANCEL_OFFSET))(this, value);
		}

		::System::Void set_BgDispatch(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_BGDISPATCH_OFFSET))(this, value);
		}

		::System::Void set_CloseDispatch(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_CLOSEDISPATCH_OFFSET))(this, value);
		}

		::System::Void set_Mode(::RPG::Client::ConfirmDialogContext_DialogBtnMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_MODE_OFFSET))(this, value);
		}

		::Class_2_A48F3719AA1CF200_28* get_View()
		{
			return ((::Class_2_A48F3719AA1CF200_28*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GET_VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
		}
	};
}
