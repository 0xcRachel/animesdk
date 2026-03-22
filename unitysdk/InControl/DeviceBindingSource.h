#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSource.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"

namespace InControl { class InputDevice; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_DEVICEBINDINGSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x154618E0)
#define INCONTROL_DEVICEBINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x15461860)
#define INCONTROL_DEVICEBINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15461960)
#define INCONTROL_DEVICEBINDINGSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x15461310)
#define INCONTROL_DEVICEBINDINGSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x15461030)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x154619A0)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x15461780)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x154616C0)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x154617F0)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_INCLUDECONTROLS_OFFSET UNITYSDK_OFFSET(0x15460F60)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x15461B40)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15461480)
#define INCONTROL_DEVICEBINDINGSOURCE_ISCOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x15461D30)
#define INCONTROL_DEVICEBINDINGSOURCE_ISSINGLECONTROL_OFFSET UNITYSDK_OFFSET(0x15461D50)
#define INCONTROL_DEVICEBINDINGSOURCE_LOAD_OFFSET UNITYSDK_OFFSET(0x15461A80)
#define INCONTROL_DEVICEBINDINGSOURCE_SAVE_OFFSET UNITYSDK_OFFSET(0x154619B0)
#define INCONTROL_DEVICEBINDINGSOURCE_SET_INCLUDECONTROLS_OFFSET UNITYSDK_OFFSET(0x15460F70)
#define INCONTROL_DEVICEBINDINGSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15460FB0)
#define INCONTROL_DEVICEBINDINGSOURCE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15460FD0)
#define INCONTROL_DEVICEBINDINGSOURCE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x15460FE0)
#define INCONTROL_DEVICEBINDINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15460F80)

namespace InControl
{
	inline static constexpr unsigned int DeviceBindingSource_TypeDefinitionIndex = 30506;

	class DeviceBindingSource : public ::InControl::BindingSource
	{
	public:
		::Il2CppArray<::InControl::InputControlType>* _IncludeControls_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::InControl::DeviceBindingSource* otherSource)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::DeviceBindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE__CTOR_1_OFFSET))(this, otherSource);
		}

		::System::Void _ctor_2(::Il2CppArray<::InControl::InputControlType>* controls)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControlType>*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE__CTOR_2_OFFSET))(this, controls);
		}

		::System::Void _ctor_3(::InControl::InputControlType control)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE__CTOR_3_OFFSET))(this, control);
		}

		::Il2CppArray<::InControl::InputControlType>* get_IncludeControls()
		{
			return ((::Il2CppArray<::InControl::InputControlType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_INCLUDECONTROLS_OFFSET))(this);
		}

		::System::Void set_IncludeControls(::Il2CppArray<::InControl::InputControlType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControlType>*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_SET_INCLUDECONTROLS_OFFSET))(this, value);
		}

		::System::Single GetValue(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GETVALUE_OFFSET))(this, inputDevice);
		}

		::System::Boolean GetState(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GETSTATE_OFFSET))(this, inputDevice);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICENAME_OFFSET))(this);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICECLASS_OFFSET))(this);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Boolean Equals(::InControl::BindingSource* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::InControl::BindingSourceType get_BindingSourceType()
		{
			return ((::InControl::BindingSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET))(this);
		}

		::System::Void Save(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_SAVE_OFFSET))(this, writer);
		}

		::System::Void Load(::System::IO::BinaryReader* reader, ::System::UInt16 dataFormatVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_LOAD_OFFSET))(this, reader, dataFormatVersion);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsComboControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_ISCOMBOCONTROL_OFFSET))(this);
		}

		::System::Boolean IsSingleControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_ISSINGLECONTROL_OFFSET))(this);
		}
	};
}
