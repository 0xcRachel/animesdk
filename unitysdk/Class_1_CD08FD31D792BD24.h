#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIStateCtrlStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class StateData; }
namespace System { class Action; }

#define CLASS_1_CD08FD31D792BD24_GET_CURRENTPLAYTIME_OFFSET UNITYSDK_OFFSET(0x8633B00)
#define CLASS_1_CD08FD31D792BD24_GET_CURRENTSTATEDATA_OFFSET UNITYSDK_OFFSET(0x8633AC0)
#define CLASS_1_CD08FD31D792BD24_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x8633B20)
#define CLASS_1_CD08FD31D792BD24_GET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET UNITYSDK_OFFSET(0x8633AE0)
#define CLASS_1_CD08FD31D792BD24_GET_PARENTUISTATECTRL_OFFSET UNITYSDK_OFFSET(0x8633B40)
#define CLASS_1_CD08FD31D792BD24_METHOD_1_115AB266A722E835_OFFSET UNITYSDK_OFFSET(0x86338E0)
#define CLASS_1_CD08FD31D792BD24_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8633990)
#define CLASS_1_CD08FD31D792BD24_METHOD_1_482761CB050F1A57_OFFSET UNITYSDK_OFFSET(0x8633940)
#define CLASS_1_CD08FD31D792BD24_METHOD_1_8A1C979A2319B852_OFFSET UNITYSDK_OFFSET(0x86339F0)
#define CLASS_1_CD08FD31D792BD24_METHOD_1_8C637C6318E207AD_OFFSET UNITYSDK_OFFSET(0x8633A40)
#define CLASS_1_CD08FD31D792BD24_METHOD_1_AB459043B728E2A7_OFFSET UNITYSDK_OFFSET(0x86337F0)
#define CLASS_1_CD08FD31D792BD24_SET_CURRENTPLAYTIME_OFFSET UNITYSDK_OFFSET(0x8633B10)
#define CLASS_1_CD08FD31D792BD24_SET_CURRENTSTATEDATA_OFFSET UNITYSDK_OFFSET(0x8633AD0)
#define CLASS_1_CD08FD31D792BD24_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x8633B30)
#define CLASS_1_CD08FD31D792BD24_SET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET UNITYSDK_OFFSET(0x8633AF0)
#define CLASS_1_CD08FD31D792BD24_SET_PARENTUISTATECTRL_OFFSET UNITYSDK_OFFSET(0x8633B50)
#define CLASS_1_CD08FD31D792BD24__CTOR_OFFSET UNITYSDK_OFFSET(0x8633B60)

inline static constexpr unsigned int Class_1_CD08FD31D792BD24_TypeDefinitionIndex = 58980;

class Class_1_CD08FD31D792BD24 : public ::System::Object
{
public:
	::RPG::Client::UIStateCtrl* _ParentUIStateCtrl_k__BackingField; // 0x10
	::System::Action* _OnUIStatePlayCompletedAction_k__BackingField; // 0x18
	::RPG::Client::UI::UIStateCtrl::StateData* _CurrentStateData_k__BackingField; // 0x20
	::System::Single _CurrentPlayTime_k__BackingField; // 0x28
	::RPG::Client::UIStateCtrlStatus _CurrentStatus_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AB459043B728E2A7(::RPG::Client::UIStateCtrlStatus a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrlStatus))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_METHOD_1_AB459043B728E2A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_482761CB050F1A57(::RPG::Client::UI::UIStateCtrl::StateData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::StateData*))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_METHOD_1_482761CB050F1A57_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A1C979A2319B852(::RPG::Client::UIStateCtrl* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_METHOD_1_8A1C979A2319B852_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C637C6318E207AD(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_METHOD_1_8C637C6318E207AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_115AB266A722E835()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_METHOD_1_115AB266A722E835_OFFSET))(this);
	}

	::RPG::Client::UI::UIStateCtrl::StateData* get_CurrentStateData()
	{
		return ((::RPG::Client::UI::UIStateCtrl::StateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_GET_CURRENTSTATEDATA_OFFSET))(this);
	}

	::System::Void set_CurrentStateData(::RPG::Client::UI::UIStateCtrl::StateData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::StateData*))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_SET_CURRENTSTATEDATA_OFFSET))(this, value);
	}

	::System::Action* get_OnUIStatePlayCompletedAction()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_GET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET))(this);
	}

	::System::Void set_OnUIStatePlayCompletedAction(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_SET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET))(this, value);
	}

	::System::Single get_CurrentPlayTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_GET_CURRENTPLAYTIME_OFFSET))(this);
	}

	::System::Void set_CurrentPlayTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_SET_CURRENTPLAYTIME_OFFSET))(this, value);
	}

	::RPG::Client::UIStateCtrlStatus get_CurrentStatus()
	{
		return ((::RPG::Client::UIStateCtrlStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_GET_CURRENTSTATUS_OFFSET))(this);
	}

	::System::Void set_CurrentStatus(::RPG::Client::UIStateCtrlStatus value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrlStatus))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_SET_CURRENTSTATUS_OFFSET))(this, value);
	}

	::RPG::Client::UIStateCtrl* get_ParentUIStateCtrl()
	{
		return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_GET_PARENTUISTATECTRL_OFFSET))(this);
	}

	::System::Void set_ParentUIStateCtrl(::RPG::Client::UIStateCtrl* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + CLASS_1_CD08FD31D792BD24_SET_PARENTUISTATECTRL_OFFSET))(this, value);
	}
};
