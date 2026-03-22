#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/InControl/KeyCombo.h"
#include "unitysdk/InControl/Mouse.h"
#include "unitysdk/InControl/OneAxisInputControl.h"

namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class BindingSourceListener; }
namespace InControl { class DeviceBindingSource; }
namespace InControl { class InputDevice; }
namespace InControl { class PlayerActionSet; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_PLAYERACTION_ADDBINDING_OFFSET UNITYSDK_OFFSET(0x154FE420)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_1_OFFSET UNITYSDK_OFFSET(0x154FE200)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_2_OFFSET UNITYSDK_OFFSET(0x154FE330)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_3_OFFSET UNITYSDK_OFFSET(0x154FE380)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_4_OFFSET UNITYSDK_OFFSET(0x154FE3B0)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_OFFSET UNITYSDK_OFFSET(0x154FE090)
#define INCONTROL_PLAYERACTION_ADDDEVICEBINDING_OFFSET UNITYSDK_OFFSET(0x15500BB0)
#define INCONTROL_PLAYERACTION_ADD_ONBINDINGSCHANGED_OFFSET UNITYSDK_OFFSET(0x154FDAB0)
#define INCONTROL_PLAYERACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x154FD9F0)
#define INCONTROL_PLAYERACTION_CLEARBINDINGS_OFFSET UNITYSDK_OFFSET(0x154FF060)
#define INCONTROL_PLAYERACTION_COUNTBINDINGSOFTYPE_OFFSET UNITYSDK_OFFSET(0x154FEE00)
#define INCONTROL_PLAYERACTION_DETECTBINDINGS_OFFSET UNITYSDK_OFFSET(0x15500130)
#define INCONTROL_PLAYERACTION_FINDBINDING_OFFSET UNITYSDK_OFFSET(0x154FE9F0)
#define INCONTROL_PLAYERACTION_GETDEVICEBINDINGSOURCE_OFFSET UNITYSDK_OFFSET(0x15500C10)
#define INCONTROL_PLAYERACTION_GET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x15500810)
#define INCONTROL_PLAYERACTION_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x154FF440)
#define INCONTROL_PLAYERACTION_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x155007C0)
#define INCONTROL_PLAYERACTION_GET_ISCOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x15500CC0)
#define INCONTROL_PLAYERACTION_GET_ISINLEAVINGCOMBO_OFFSET UNITYSDK_OFFSET(0x15500CE0)
#define INCONTROL_PLAYERACTION_GET_ISLISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x154FF410)
#define INCONTROL_PLAYERACTION_GET_LASTINPUTTYPEISDEVICE_OFFSET UNITYSDK_OFFSET(0x15500700)
#define INCONTROL_PLAYERACTION_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15500850)
#define INCONTROL_PLAYERACTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x154FD9B0)
#define INCONTROL_PLAYERACTION_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x154FD9D0)
#define INCONTROL_PLAYERACTION_GET_UNFILTEREDBINDINGS_OFFSET UNITYSDK_OFFSET(0x154FF450)
#define INCONTROL_PLAYERACTION_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15500870)
#define INCONTROL_PLAYERACTION_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x154FDB90)
#define INCONTROL_PLAYERACTION_HARDREMOVEBINDING_OFFSET UNITYSDK_OFFSET(0x154FEAD0)
#define INCONTROL_PLAYERACTION_HASBINDING_OFFSET UNITYSDK_OFFSET(0x154FE9C0)
#define INCONTROL_PLAYERACTION_INDEXOFFIRSTINVALIDBINDING_OFFSET UNITYSDK_OFFSET(0x154FEFD0)
#define INCONTROL_PLAYERACTION_INSERTBINDINGAT_OFFSET UNITYSDK_OFFSET(0x154FE510)
#define INCONTROL_PLAYERACTION_LISTENFORBINDINGREPLACING_OFFSET UNITYSDK_OFFSET(0x154FF250)
#define INCONTROL_PLAYERACTION_LISTENFORBINDING_OFFSET UNITYSDK_OFFSET(0x154FF240)
#define INCONTROL_PLAYERACTION_LOAD_OFFSET UNITYSDK_OFFSET(0x15500890)
#define INCONTROL_PLAYERACTION_REMOVEBINDINGAT_OFFSET UNITYSDK_OFFSET(0x154FED50)
#define INCONTROL_PLAYERACTION_REMOVEBINDING_OFFSET UNITYSDK_OFFSET(0x154FED10)
#define INCONTROL_PLAYERACTION_REMOVEFIRSTBINDINGOFTYPE_OFFSET UNITYSDK_OFFSET(0x154FEEA0)
#define INCONTROL_PLAYERACTION_REMOVEORPHANEDBINDINGS_OFFSET UNITYSDK_OFFSET(0x154FF460)
#define INCONTROL_PLAYERACTION_REMOVE_ONBINDINGSCHANGED_OFFSET UNITYSDK_OFFSET(0x154FDB20)
#define INCONTROL_PLAYERACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x154FDA50)
#define INCONTROL_PLAYERACTION_REPLACEBINDING_OFFSET UNITYSDK_OFFSET(0x154FE750)
#define INCONTROL_PLAYERACTION_RESETBINDINGS_OFFSET UNITYSDK_OFFSET(0x154FF110)
#define INCONTROL_PLAYERACTION_SAVE_OFFSET UNITYSDK_OFFSET(0x15500AB0)
#define INCONTROL_PLAYERACTION_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x154FF640)
#define INCONTROL_PLAYERACTION_SET_ISCOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x15500CD0)
#define INCONTROL_PLAYERACTION_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15500860)
#define INCONTROL_PLAYERACTION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x154FD9C0)
#define INCONTROL_PLAYERACTION_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x154FD9E0)
#define INCONTROL_PLAYERACTION_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15500880)
#define INCONTROL_PLAYERACTION_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x154FDBA0)
#define INCONTROL_PLAYERACTION_STOPLISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x154FF3D0)
#define INCONTROL_PLAYERACTION_UPDATEBINDINGS_OFFSET UNITYSDK_OFFSET(0x154FF660)
#define INCONTROL_PLAYERACTION_UPDATEVISIBLEBINDINGS_OFFSET UNITYSDK_OFFSET(0x154FEC30)
#define INCONTROL_PLAYERACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x154FF540)
#define INCONTROL_PLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x154FDBB0)
#define INCONTROL_PLAYERACTION__UPDATECOMBO_OFFSET UNITYSDK_OFFSET(0x154FFF00)

namespace InControl
{
	inline static constexpr unsigned int PlayerAction_TypeDefinitionIndex = 30515;

	class PlayerAction : public ::InControl::OneAxisInputControl
	{
	public:
		::System::Object* _UserData_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::InControl::BindingSource*>* visibleBindings; // 0x70
		::System::Action_1<::InControl::BindingSourceType>* OnLastInputTypeChanged; // 0x78
		::InControl::InputDevice* activeDevice; // 0x80
		::InControl::BindingListenOptions* ListenOptions; // 0x88
		::InControl::InputDevice* device; // 0x90
		::InControl::PlayerActionSet* _Owner_k__BackingField; // 0x98
		::System::String* _Name_k__BackingField; // 0xA0
		::System::Action* OnBindingsChanged; // 0xA8
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* bindings; // 0xB0
		::System::Collections::Generic::List_1<::InControl::BindingSource*>* regularBindings; // 0xB8
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* unfilteredBindings; // 0xC0
		::Il2CppArray<::InControl::BindingSourceListener*>* bindingSourceListeners; // 0xC8
		::System::Collections::Generic::List_1<::InControl::BindingSource*>* defaultBindings; // 0xD0
		::System::UInt64 LastInputTypeChangedTick; // 0xD8
		::System::Boolean triggerBindingEnded; // 0xE0
		::System::Boolean _IsComboDuringReleased; // 0xE1
		::System::Boolean triggerBindingChanged; // 0xE2
		::System::Boolean _IsComboControl_k__BackingField; // 0xE3
		::InControl::BindingSourceType LastInputType; // 0xE4
		::InControl::InputDeviceStyle LastDeviceStyle; // 0xE8
		::InControl::InputDeviceClass LastDeviceClass; // 0xEC
		::System::UInt64 _ComboReleasedEndFrame; // 0xF0

		::System::Void _ctor(::System::String* name, ::InControl::PlayerActionSet* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::InControl::PlayerActionSet*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION__CTOR_OFFSET))(this, name, owner);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_NAME_OFFSET))(this, value);
		}

		::InControl::PlayerActionSet* get_Owner()
		{
			return ((::InControl::PlayerActionSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::InControl::PlayerActionSet* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerActionSet*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_OWNER_OFFSET))(this, value);
		}

		::System::Void add_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET))(this, value);
		}

		::System::Void add_OnBindingsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADD_ONBINDINGSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnBindingsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVE_ONBINDINGSCHANGED_OFFSET))(this, value);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_USERDATA_OFFSET))(this, value);
		}

		::System::Void AddDefaultBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_OFFSET))(this, binding);
		}

		::System::Void AddDefaultBinding_1(::Il2CppArray<::InControl::Key>* keys)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_1_OFFSET))(this, keys);
		}

		::System::Void AddDefaultBinding_2(::InControl::KeyCombo keyCombo)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::KeyCombo))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_2_OFFSET))(this, keyCombo);
		}

		::System::Void AddDefaultBinding_3(::InControl::Mouse control)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_3_OFFSET))(this, control);
		}

		::System::Void AddDefaultBinding_4(::InControl::InputControlType control)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_4_OFFSET))(this, control);
		}

		::System::Boolean AddBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDBINDING_OFFSET))(this, binding);
		}

		::System::Boolean InsertBindingAt(::System::Int32 index, ::InControl::BindingSource* binding)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_INSERTBINDINGAT_OFFSET))(this, index, binding);
		}

		::System::Boolean ReplaceBinding(::InControl::BindingSource* findBinding, ::InControl::BindingSource* withBinding)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REPLACEBINDING_OFFSET))(this, findBinding, withBinding);
		}

		::System::Boolean HasBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_HASBINDING_OFFSET))(this, binding);
		}

		::InControl::BindingSource* FindBinding(::InControl::BindingSource* binding)
		{
			return ((::InControl::BindingSource*(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_FINDBINDING_OFFSET))(this, binding);
		}

		::System::Void HardRemoveBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_HARDREMOVEBINDING_OFFSET))(this, binding);
		}

		::System::Void RemoveBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEBINDING_OFFSET))(this, binding);
		}

		::System::Void RemoveBindingAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEBINDINGAT_OFFSET))(this, index);
		}

		::System::Int32 CountBindingsOfType(::InControl::BindingSourceType bindingSourceType)
		{
			return ((::System::Int32(*)(::PVOID, ::InControl::BindingSourceType))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_COUNTBINDINGSOFTYPE_OFFSET))(this, bindingSourceType);
		}

		::System::Void RemoveFirstBindingOfType(::InControl::BindingSourceType bindingSourceType)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSourceType))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEFIRSTBINDINGOFTYPE_OFFSET))(this, bindingSourceType);
		}

		::System::Int32 IndexOfFirstInvalidBinding()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_INDEXOFFIRSTINVALIDBINDING_OFFSET))(this);
		}

		::System::Void ClearBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_CLEARBINDINGS_OFFSET))(this);
		}

		::System::Void ResetBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_RESETBINDINGS_OFFSET))(this);
		}

		::System::Void ListenForBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_LISTENFORBINDING_OFFSET))(this);
		}

		::System::Void ListenForBindingReplacing(::InControl::BindingSource* binding)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_LISTENFORBINDINGREPLACING_OFFSET))(this, binding);
		}

		::System::Void StopListeningForBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_STOPLISTENINGFORBINDING_OFFSET))(this);
		}

		::System::Boolean get_IsListeningForBinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ISLISTENINGFORBINDING_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* get_Bindings()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_BINDINGS_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* get_UnfilteredBindings()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_UNFILTEREDBINDINGS_OFFSET))(this);
		}

		::System::Void RemoveOrphanedBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEORPHANEDBINDINGS_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime, ::InControl::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_UPDATE_OFFSET))(this, updateTick, deltaTime, device);
		}

		::System::Void UpdateBindings(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_UPDATEBINDINGS_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void DetectBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_DETECTBINDINGS_OFFSET))(this);
		}

		::System::Void UpdateVisibleBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_UPDATEVISIBLEBINDINGS_OFFSET))(this);
		}

		::InControl::InputDevice* get_Device()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_DEVICE_OFFSET))(this);
		}

		::System::Void set_Device(::InControl::InputDevice* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_DEVICE_OFFSET))(this, value);
		}

		::InControl::InputDevice* get_ActiveDevice()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ACTIVEDEVICE_OFFSET))(this);
		}

		::System::Boolean get_LastInputTypeIsDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_LASTINPUTTYPEISDEVICE_OFFSET))(this);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_LOWERDEADZONE_OFFSET))(this, value);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_UPPERDEADZONE_OFFSET))(this, value);
		}

		::System::Void Load(::System::IO::BinaryReader* reader, ::System::UInt16 dataFormatVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_LOAD_OFFSET))(this, reader, dataFormatVersion);
		}

		::System::Void Save(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SAVE_OFFSET))(this, writer);
		}

		::System::Void AddDeviceBinding(::Il2CppArray<::InControl::InputControlType>* controls)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControlType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEVICEBINDING_OFFSET))(this, controls);
		}

		::InControl::DeviceBindingSource* GetDeviceBindingSource()
		{
			return ((::InControl::DeviceBindingSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GETDEVICEBINDINGSOURCE_OFFSET))(this);
		}

		::System::Void _UpdateCombo(::System::UInt64 updateTick, ::InControl::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION__UPDATECOMBO_OFFSET))(this, updateTick, device);
		}

		::System::Boolean get_IsComboControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ISCOMBOCONTROL_OFFSET))(this);
		}

		::System::Void set_IsComboControl(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_ISCOMBOCONTROL_OFFSET))(this, value);
		}

		::System::Boolean get_IsInLeavingCombo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ISINLEAVINGCOMBO_OFFSET))(this);
		}
	};
}
