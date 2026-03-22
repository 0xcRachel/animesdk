#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/InControl/Mouse.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActionSettingRow; }
namespace RPG::GameCore { class InControlActionMapRow; }
namespace System { class String; }

#define RPG_CLIENT_INCONTROLACTIONDATA_GETCONFLICTACTIONDATA_OFFSET UNITYSDK_OFFSET(0x94C97C0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GETGAMEPADTIPICON_OFFSET UNITYSDK_OFFSET(0x94C7EC0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GETKEYBOARDTIPTEXTID_OFFSET UNITYSDK_OFFSET(0x94C7C90)
#define RPG_CLIENT_INCONTROLACTIONDATA_GETMOUSETIPICON_OFFSET UNITYSDK_OFFSET(0x94C7BF0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x94C7B90)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONSETTINGROW_OFFSET UNITYSDK_OFFSET(0x94C7B80)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONTYPELIST_OFFSET UNITYSDK_OFFSET(0x94C7BD0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDCONTROLTYPEINDEX_OFFSET UNITYSDK_OFFSET(0x94C8D80)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDCONTROLTYPES_OFFSET UNITYSDK_OFFSET(0x94C8190)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDKEYBOARD_OFFSET UNITYSDK_OFFSET(0x94C7D60)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDMOUSE_OFFSET UNITYSDK_OFFSET(0x94C87A0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBINDGAMEPAD_OFFSET UNITYSDK_OFFSET(0x94C79E0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBINDKEYBOARD_OFFSET UNITYSDK_OFFSET(0x94C7970)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBIND_OFFSET UNITYSDK_OFFSET(0x94C7890)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_GOTOIDLIST_OFFSET UNITYSDK_OFFSET(0x94C7BB0)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_INCONTROLACTIONMAPROW_OFFSET UNITYSDK_OFFSET(0x94C7B70)
#define RPG_CLIENT_INCONTROLACTIONDATA_GET_ISSUBMITORCANCELACTION_OFFSET UNITYSDK_OFFSET(0x94C8CB0)
#define RPG_CLIENT_INCONTROLACTIONDATA_ISBINDKEYBOARDCONFLICT_OFFSET UNITYSDK_OFFSET(0x94C9DD0)
#define RPG_CLIENT_INCONTROLACTIONDATA_ISBINDKEYBOARDINBLACKLIST_OFFSET UNITYSDK_OFFSET(0x94C9390)
#define RPG_CLIENT_INCONTROLACTIONDATA_ISSAMEBINDKEYBOARD_OFFSET UNITYSDK_OFFSET(0x94C9660)
#define RPG_CLIENT_INCONTROLACTIONDATA_SWITCHDEFAULTSUBMITANDCANCEL_OFFSET UNITYSDK_OFFSET(0x94C8F40)
#define RPG_CLIENT_INCONTROLACTIONDATA_TRYSAVEGAMEPADACTIONBIND_OFFSET UNITYSDK_OFFSET(0x94CA9A0)
#define RPG_CLIENT_INCONTROLACTIONDATA_TRYSAVEKEYBOARDACTIONBIND_OFFSET UNITYSDK_OFFSET(0x94CA2B0)
#define RPG_CLIENT_INCONTROLACTIONDATA__CHECKCONTROLKEYCONFLICT_OFFSET UNITYSDK_OFFSET(0x94C9D60)
#define RPG_CLIENT_INCONTROLACTIONDATA__CHECKMODIFIABLEBYSWITCHAB_OFFSET UNITYSDK_OFFSET(0x94C7A50)
#define RPG_CLIENT_INCONTROLACTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x94C6E90)
#define RPG_CLIENT_INCONTROLACTIONDATA__GETNONDEFAULTBINDCONTROLTYPES_OFFSET UNITYSDK_OFFSET(0x94C8A10)
#define RPG_CLIENT_INCONTROLACTIONDATA__GETPS4BINDCONTROLTYPES_OFFSET UNITYSDK_OFFSET(0x94C87B0)
#define RPG_CLIENT_INCONTROLACTIONDATA__ISHASINPUTCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x94C86F0)
#define RPG_CLIENT_INCONTROLACTIONDATA__UPDATEOTHERACTIONGAMEPADBIND_OFFSET UNITYSDK_OFFSET(0x94CAC40)
#define RPG_CLIENT_INCONTROLACTIONDATA__UPDATEOTHERACTIONKEYBOARDBIND_OFFSET UNITYSDK_OFFSET(0x94CA500)

namespace RPG::Client
{
	inline static constexpr unsigned int InControlActionData_TypeDefinitionIndex = 48607;

	class InControlActionData : public ::System::Object
	{
	public:
		// static const ::System::String* _ConfirmActionName; // 0x0
		// static const ::System::String* _CancelActionName; // 0x0
		// static const ::System::String* _UnChangeActionStr; // 0x0
		::RPG::GameCore::InControlActionMapRow* _InControlActionMapRow; // 0x10
		::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>* _DefaultControlTypes; // 0x18
		::RPG::GameCore::ActionSettingRow* _ActionSettingRow; // 0x20
		::InControl::Mouse _DefaultMouse; // 0x28
		::InControl::Key _DefaultKey; // 0x2C

		::System::Void _ctor(::RPG::GameCore::InControlActionMapRow* inControlActionMapRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InControlActionMapRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__CTOR_OFFSET))(this, inControlActionMapRow);
		}

		::System::Boolean get_EnableBind()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBIND_OFFSET))(this);
		}

		::System::Boolean get_EnableBindKeyboard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBINDKEYBOARD_OFFSET))(this);
		}

		::System::Boolean get_EnableBindGamepad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ENABLEBINDGAMEPAD_OFFSET))(this);
		}

		::RPG::GameCore::InControlActionMapRow* get_InControlActionMapRow()
		{
			return ((::RPG::GameCore::InControlActionMapRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_INCONTROLACTIONMAPROW_OFFSET))(this);
		}

		::RPG::GameCore::ActionSettingRow* get_ActionSettingRow()
		{
			return ((::RPG::GameCore::ActionSettingRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONSETTINGROW_OFFSET))(this);
		}

		::System::String* get_ActionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_GotoIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_GOTOIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ActionTypeList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ACTIONTYPELIST_OFFSET))(this);
		}

		::System::String* GetMouseTipIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GETMOUSETIPICON_OFFSET))(this);
		}

		::RPG::Client::TextID GetKeyboardTipTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GETKEYBOARDTIPTEXTID_OFFSET))(this);
		}

		::System::String* GetGamepadTipIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GETGAMEPADTIPICON_OFFSET))(this);
		}

		::InControl::Key get_BindKeyboard()
		{
			return ((::InControl::Key(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDKEYBOARD_OFFSET))(this);
		}

		::InControl::Mouse get_BindMouse()
		{
			return ((::InControl::Mouse(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDMOUSE_OFFSET))(this);
		}

		::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>* get_BindControlTypes()
		{
			return ((::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDCONTROLTYPES_OFFSET))(this);
		}

		::System::Boolean get_IsSubmitOrCancelAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_ISSUBMITORCANCELACTION_OFFSET))(this);
		}

		::System::Int32 get_BindControlTypeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GET_BINDCONTROLTYPEINDEX_OFFSET))(this);
		}

		::System::Void SwitchDefaultSubmitAndCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_SWITCHDEFAULTSUBMITANDCANCEL_OFFSET))(this);
		}

		::System::Boolean IsBindKeyboardInBlackList(::System::String* bindKeyboard)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_ISBINDKEYBOARDINBLACKLIST_OFFSET))(this, bindKeyboard);
		}

		::System::Boolean IsSameBindKeyboard(::System::String* bindKeyboard)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_ISSAMEBINDKEYBOARD_OFFSET))(this, bindKeyboard);
		}

		::RPG::Client::InControlActionData* GetConflictActionData(::System::String* bindKeyboard)
		{
			return ((::RPG::Client::InControlActionData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_GETCONFLICTACTIONDATA_OFFSET))(this, bindKeyboard);
		}

		::System::Boolean IsBindKeyboardConflict(::System::String* bindKeyboard)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_ISBINDKEYBOARDCONFLICT_OFFSET))(this, bindKeyboard);
		}

		::System::Boolean TrySaveKeyboardActionBind(::System::String* bindKeyboard)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_TRYSAVEKEYBOARDACTIONBIND_OFFSET))(this, bindKeyboard);
		}

		::System::Boolean TrySaveGamepadActionBind(::System::String* bindInControlType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA_TRYSAVEGAMEPADACTIONBIND_OFFSET))(this, bindInControlType);
		}

		::System::Boolean _UpdateOtherActionKeyboardBind(::InControl::Key sourceBindKey, ::InControl::Key targetBindKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Key, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__UPDATEOTHERACTIONKEYBOARDBIND_OFFSET))(this, sourceBindKey, targetBindKey);
		}

		::System::Boolean _CheckControlKeyConflict(::InControl::Key left, ::InControl::Key right)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Key, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__CHECKCONTROLKEYCONFLICT_OFFSET))(this, left, right);
		}

		::System::Boolean _UpdateOtherActionGamepadBind(::InControl::InputControlType sourceBindControlType, ::InControl::InputControlType targetBindControlType)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__UPDATEOTHERACTIONGAMEPADBIND_OFFSET))(this, sourceBindControlType, targetBindControlType);
		}

		::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>* _GetPS4BindControlTypes()
		{
			return ((::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__GETPS4BINDCONTROLTYPES_OFFSET))(this);
		}

		::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>* _GetNonDefaultBindControlTypes()
		{
			return ((::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__GETNONDEFAULTBINDCONTROLTYPES_OFFSET))(this);
		}

		::System::Boolean _CheckModifiableBySwitchAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__CHECKMODIFIABLEBYSWITCHAB_OFFSET))(this);
		}

		::System::Boolean _IsHasInputControlType(::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>* controlTypes, ::InControl::InputControlType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::InControl::InputControlType>*>*, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONDATA__ISHASINPUTCONTROLTYPE_OFFSET))(this, controlTypes, type);
		}
	};
}
