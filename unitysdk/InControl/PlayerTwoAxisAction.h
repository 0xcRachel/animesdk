#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/TwoAxisInputControl.h"

namespace InControl { class PlayerAction; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define INCONTROL_PLAYERTWOAXISACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x15C1CEF0)
#define INCONTROL_PLAYERTWOAXISACTION_GET_INVERTXAXIS_OFFSET UNITYSDK_OFFSET(0x15C1CEB0)
#define INCONTROL_PLAYERTWOAXISACTION_GET_INVERTYAXIS_OFFSET UNITYSDK_OFFSET(0x15C1CED0)
#define INCONTROL_PLAYERTWOAXISACTION_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C1D050)
#define INCONTROL_PLAYERTWOAXISACTION_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C1D070)
#define INCONTROL_PLAYERTWOAXISACTION_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x15C1CFD0)
#define INCONTROL_PLAYERTWOAXISACTION_PROCESSACTIONUPDATE_OFFSET UNITYSDK_OFFSET(0x15C1CFF0)
#define INCONTROL_PLAYERTWOAXISACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x15C1CF60)
#define INCONTROL_PLAYERTWOAXISACTION_SET_INVERTXAXIS_OFFSET UNITYSDK_OFFSET(0x15C1CEC0)
#define INCONTROL_PLAYERTWOAXISACTION_SET_INVERTYAXIS_OFFSET UNITYSDK_OFFSET(0x15C1CEE0)
#define INCONTROL_PLAYERTWOAXISACTION_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C1D060)
#define INCONTROL_PLAYERTWOAXISACTION_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C1D080)
#define INCONTROL_PLAYERTWOAXISACTION_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x15C1CFE0)
#define INCONTROL_PLAYERTWOAXISACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x15C1BBA0)
#define INCONTROL_PLAYERTWOAXISACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15C1B530)

namespace InControl
{
	inline static constexpr unsigned int PlayerTwoAxisAction_TypeDefinitionIndex = 31393;

	class PlayerTwoAxisAction : public ::InControl::TwoAxisInputControl
	{
	public:
		::System::Object* _UserData_k__BackingField; // 0x70
		::InControl::PlayerAction* negativeYAction; // 0x78
		::System::Action_1<::InControl::BindingSourceType>* OnLastInputTypeChanged; // 0x80
		::InControl::PlayerAction* positiveYAction; // 0x88
		::InControl::PlayerAction* negativeXAction; // 0x90
		::InControl::PlayerAction* positiveXAction; // 0x98
		::System::Boolean _InvertYAxis_k__BackingField; // 0xA0
		::System::Boolean _InvertXAxis_k__BackingField; // 0xA1
		::InControl::BindingSourceType LastInputType; // 0xA4

		::System::Void _ctor(::InControl::PlayerAction* negativeXAction, ::InControl::PlayerAction* positiveXAction, ::InControl::PlayerAction* negativeYAction, ::InControl::PlayerAction* positiveYAction)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::PlayerAction*, ::InControl::PlayerAction*, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION__CTOR_OFFSET))(this, negativeXAction, positiveXAction, negativeYAction, positiveYAction);
		}

		::System::Boolean get_InvertXAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_GET_INVERTXAXIS_OFFSET))(this);
		}

		::System::Void set_InvertXAxis(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_SET_INVERTXAXIS_OFFSET))(this, value);
		}

		::System::Boolean get_InvertYAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_GET_INVERTYAXIS_OFFSET))(this);
		}

		::System::Void set_InvertYAxis(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_SET_INVERTYAXIS_OFFSET))(this, value);
		}

		::System::Void add_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET))(this, value);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_SET_USERDATA_OFFSET))(this, value);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void ProcessActionUpdate(::InControl::PlayerAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_PROCESSACTIONUPDATE_OFFSET))(this, action);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_SET_LOWERDEADZONE_OFFSET))(this, value);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_SET_UPPERDEADZONE_OFFSET))(this, value);
		}
	};
}
