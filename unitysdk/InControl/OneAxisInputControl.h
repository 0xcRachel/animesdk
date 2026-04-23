#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlState.h"
#include "unitysdk/System/Object.h"

namespace InControl { class InputControl; }

#define INCONTROL_ONEAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x13BCAD70)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSIDES_OFFSET UNITYSDK_OFFSET(0x13BCB290)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSTATE_OFFSET UNITYSDK_OFFSET(0x13BCAE90)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHVALUE_OFFSET UNITYSDK_OFFSET(0x13BCB030)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMIT_OFFSET UNITYSDK_OFFSET(0x13BCADA0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x13BCB700)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x13BCB6D0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x13BCB4A0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_HASINPUT_OFFSET UNITYSDK_OFFSET(0x13BCB460)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALISPRESSED_OFFSET UNITYSDK_OFFSET(0x13BCB600)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASPRESSED_OFFSET UNITYSDK_OFFSET(0x13BCB610)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASRELEASED_OFFSET UNITYSDK_OFFSET(0x13BCB630)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISNULLCONTROL_OFFSET UNITYSDK_OFFSET(0x13BCB6B0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x13BCB500)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISRAWPRESSED_OFFSET UNITYSDK_OFFSET(0x13BCB5A0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTRAWVALUE_OFFSET UNITYSDK_OFFSET(0x13BCB5E0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTSTATE_OFFSET UNITYSDK_OFFSET(0x13BCB3E0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTVALUE_OFFSET UNITYSDK_OFFSET(0x13BCB420)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x13BCB660)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_NEXTRAWVALUE_OFFSET UNITYSDK_OFFSET(0x13BCB440)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x13BCB3A0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x13BCB650)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x13BCB680)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x13BCB3C0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x13BCAA50)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x13BCB670)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x13BCB400)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASPRESSED_OFFSET UNITYSDK_OFFSET(0x13BCB520)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASRELEASED_OFFSET UNITYSDK_OFFSET(0x13BCB550)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASREPEATED_OFFSET UNITYSDK_OFFSET(0x13BCB580)
#define INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x13BCB760)
#define INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x13BCB720)
#define INCONTROL_ONEAXISINPUTCONTROL_PREPAREFORUPDATE_OFFSET UNITYSDK_OFFSET(0x13BCAA70)
#define INCONTROL_ONEAXISINPUTCONTROL_SETVALUE_OFFSET UNITYSDK_OFFSET(0x13BCAD10)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x13BCB6F0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_INTERNALENABLED_OFFSET UNITYSDK_OFFSET(0x13BCB6C0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x13BC5340)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x13BC5320)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x13BCB690)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x13BCAA60)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x13BC5360)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHRAWVALUE_OFFSET UNITYSDK_OFFSET(0x13BCABF0)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x13BCAB20)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHVALUE_OFFSET UNITYSDK_OFFSET(0x13BC6110)
#define INCONTROL_ONEAXISINPUTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCB790)

namespace InControl
{
	inline static constexpr unsigned int OneAxisInputControl_TypeDefinitionIndex = 37132;

	class OneAxisInputControl : public ::System::Object
	{
	public:
		::System::Single lowerDeadZone; // 0x10
		::InControl::InputControlState lastState; // 0x14
		::System::Single upperDeadZone; // 0x20
		::InControl::InputControlState thisState; // 0x24
		::System::Boolean clearInputState; // 0x30
		::System::Boolean wasRepeated; // 0x31
		::System::Boolean isNullControl; // 0x32
		::System::Boolean pendingCommit; // 0x33
		::InControl::InputControlState nextState; // 0x34
		::System::UInt64 pendingTick; // 0x40
		::System::Single nextRepeatTime; // 0x48
		::System::Single stateThreshold; // 0x4C
		::System::Boolean Raw; // 0x50
		::System::Boolean enabled; // 0x51
		::System::Boolean ownerEnabled; // 0x52
		::System::Boolean internalEnabled; // 0x53
		::System::Single FirstRepeatDelay; // 0x54
		::System::UInt64 _UpdateTick_k__BackingField; // 0x58
		::System::Single RepeatDelay; // 0x60
		::System::Single sensitivity; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_UpdateTick()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_UPDATETICK_OFFSET))(this);
		}

		::System::Void set_UpdateTick(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_UPDATETICK_OFFSET))(this, value);
		}

		::System::Void PrepareForUpdate(::System::UInt64 updateTick)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_PREPAREFORUPDATE_OFFSET))(this, updateTick);
		}

		::System::Boolean UpdateWithState(::System::Boolean state, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHSTATE_OFFSET))(this, state, updateTick, deltaTime);
		}

		::System::Boolean UpdateWithValue(::System::Single value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Boolean UpdateWithRawValue(::System::Single value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHRAWVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void SetValue(::System::Single value, ::System::UInt64 updateTick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SETVALUE_OFFSET))(this, value, updateTick);
		}

		::System::Void ClearInputState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET))(this);
		}

		::System::Void Commit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMIT_OFFSET))(this);
		}

		::System::Void CommitWithState(::System::Boolean state, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSTATE_OFFSET))(this, state, updateTick, deltaTime);
		}

		::System::Void CommitWithValue(::System::Single value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void CommitWithSides(::InControl::InputControl* negativeSide, ::InControl::InputControl* positiveSide, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControl*, ::InControl::InputControl*, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSIDES_OFFSET))(this, negativeSide, positiveSide, updateTick, deltaTime);
		}

		::System::Boolean get_State()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_LastState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LASTSTATE_OFFSET))(this);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_VALUE_OFFSET))(this);
		}

		::System::Single get_LastValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LASTVALUE_OFFSET))(this);
		}

		::System::Single get_RawValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_RAWVALUE_OFFSET))(this);
		}

		::System::Single get_NextRawValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_NEXTRAWVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_HASINPUT_OFFSET))(this);
		}

		::System::Boolean get_HasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_HASCHANGED_OFFSET))(this);
		}

		::System::Boolean get_IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_WasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_WASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_WasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_WASRELEASED_OFFSET))(this);
		}

		::System::Boolean get_WasRepeated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_WASREPEATED_OFFSET))(this);
		}

		::System::Boolean get_IsRawPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ISRAWPRESSED_OFFSET))(this);
		}

		::System::Single get_LastRawValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LASTRAWVALUE_OFFSET))(this);
		}

		::System::Boolean get_InternalIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_InternalWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_InternalWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASRELEASED_OFFSET))(this);
		}

		::System::Single get_Sensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_SENSITIVITY_OFFSET))(this);
		}

		::System::Void set_Sensitivity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET))(this, value);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET))(this, value);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET))(this, value);
		}

		::System::Single get_StateThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_StateThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET))(this, value);
		}

		::System::Boolean get_IsNullControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ISNULLCONTROL_OFFSET))(this);
		}

		::System::Void set_InternalEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_INTERNALENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_EnabledInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLEDINHIERARCHY_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::InControl::OneAxisInputControl* instance)
		{
			return ((::System::Boolean(*)(::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_OFFSET))(instance);
		}

		static ::System::Single op_Implicit_1(::InControl::OneAxisInputControl* instance)
		{
			return ((::System::Single(*)(::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET))(instance);
		}
	};
}
