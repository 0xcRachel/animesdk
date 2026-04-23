#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSource.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/Mouse.h"

namespace InControl { class InputDevice; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_MOUSEBINDINGSOURCE_BUTTONISPRESSED_OFFSET UNITYSDK_OFFSET(0x1641B890)
#define INCONTROL_MOUSEBINDINGSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1641BFB0)
#define INCONTROL_MOUSEBINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1641BF70)
#define INCONTROL_MOUSEBINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1641BFF0)
#define INCONTROL_MOUSEBINDINGSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1641BEA0)
#define INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1641BE70)
#define INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1641BA50)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1641C000)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x1641B850)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x1641BF50)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1641BF40)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x1641BF60)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1641BEF0)
#define INCONTROL_MOUSEBINDINGSOURCE_LOAD_OFFSET UNITYSDK_OFFSET(0x1641C040)
#define INCONTROL_MOUSEBINDINGSOURCE_NEGATIVESCROLLWHEELISACTIVE_OFFSET UNITYSDK_OFFSET(0x1641B910)
#define INCONTROL_MOUSEBINDINGSOURCE_POSITIVESCROLLWHEELISACTIVE_OFFSET UNITYSDK_OFFSET(0x1641B9B0)
#define INCONTROL_MOUSEBINDINGSOURCE_SAVE_OFFSET UNITYSDK_OFFSET(0x1641C010)
#define INCONTROL_MOUSEBINDINGSOURCE_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0x1641B860)
#define INCONTROL_MOUSEBINDINGSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1641C070)
#define INCONTROL_MOUSEBINDINGSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1641B880)
#define INCONTROL_MOUSEBINDINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1641B870)

namespace InControl
{
	inline static constexpr unsigned int MouseBindingSource_TypeDefinitionIndex = 37108;

	class MouseBindingSource : public ::InControl::BindingSource
	{
	public:
		static ::System::Single* StaticGet_ScaleY()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MouseBindingSource_TypeDefinitionIndex)->GetStaticField(0x5510);
		}
		static ::System::Single* StaticGet_ScaleZ()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MouseBindingSource_TypeDefinitionIndex)->GetStaticField(0x5514);
		}
		static ::System::Single* StaticGet_JitterThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MouseBindingSource_TypeDefinitionIndex)->GetStaticField(0x5518);
		}
		static ::System::Single* StaticGet_ScaleX()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MouseBindingSource_TypeDefinitionIndex)->GetStaticField(0x551C);
		}
		::InControl::Mouse _Control_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::InControl::Mouse mouseControl)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE__CTOR_1_OFFSET))(this, mouseControl);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE__CCTOR_OFFSET))();
		}

		::InControl::Mouse get_Control()
		{
			return ((::InControl::Mouse(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_CONTROL_OFFSET))(this);
		}

		::System::Void set_Control(::InControl::Mouse value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_SET_CONTROL_OFFSET))(this, value);
		}

		static ::System::Boolean ButtonIsPressed(::InControl::Mouse control)
		{
			return ((::System::Boolean(*)(::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_BUTTONISPRESSED_OFFSET))(control);
		}

		static ::System::Boolean NegativeScrollWheelIsActive(::System::Single threshold)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_NEGATIVESCROLLWHEELISACTIVE_OFFSET))(threshold);
		}

		static ::System::Boolean PositiveScrollWheelIsActive(::System::Single threshold)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_POSITIVESCROLLWHEELISACTIVE_OFFSET))(threshold);
		}

		static ::System::Single GetValue(::InControl::Mouse mouseControl)
		{
			return ((::System::Single(*)(::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_OFFSET))(mouseControl);
		}

		::System::Single GetValue_1(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_1_OFFSET))(this, inputDevice);
		}

		::System::Boolean GetState(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETSTATE_OFFSET))(this, inputDevice);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICENAME_OFFSET))(this);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICECLASS_OFFSET))(this);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Boolean Equals(::InControl::BindingSource* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::InControl::BindingSourceType get_BindingSourceType()
		{
			return ((::InControl::BindingSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET))(this);
		}

		::System::Void Save(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_SAVE_OFFSET))(this, writer);
		}

		::System::Void Load(::System::IO::BinaryReader* reader, ::System::UInt16 dataFormatVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_LOAD_OFFSET))(this, reader, dataFormatVersion);
		}
	};
}
