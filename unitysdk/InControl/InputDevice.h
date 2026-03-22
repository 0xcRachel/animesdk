#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/InputDevice_AnalogSnapshotEntry.h"
#include "unitysdk/InControl/UnknownDeviceControl.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace InControl { class InputControl; }
namespace InControl { class TwoAxisInputControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define INCONTROL_INPUTDEVICE_ADDALIASCONTROLS_OFFSET UNITYSDK_OFFSET(0x15469440)
#define INCONTROL_INPUTDEVICE_ADDCONTROL_1_OFFSET UNITYSDK_OFFSET(0x15469F20)
#define INCONTROL_INPUTDEVICE_ADDCONTROL_OFFSET UNITYSDK_OFFSET(0x15469830)
#define INCONTROL_INPUTDEVICE_CLEARCONTROLS_OFFSET UNITYSDK_OFFSET(0x15469C20)
#define INCONTROL_INPUTDEVICE_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x15469F80)
#define INCONTROL_INPUTDEVICE_COMMITLEFTSTICK_OFFSET UNITYSDK_OFFSET(0x1546ACB0)
#define INCONTROL_INPUTDEVICE_COMMITRIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x1546BCF0)
#define INCONTROL_INPUTDEVICE_COMMIT_OFFSET UNITYSDK_OFFSET(0x1546FD50)
#define INCONTROL_INPUTDEVICE_EXPIRECONTROLCACHE_OFFSET UNITYSDK_OFFSET(0x15469A90)
#define INCONTROL_INPUTDEVICE_GETCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x15469E90)
#define INCONTROL_INPUTDEVICE_GETCONTROL_OFFSET UNITYSDK_OFFSET(0x154612A0)
#define INCONTROL_INPUTDEVICE_GETFIRSTPRESSEDANALOG_OFFSET UNITYSDK_OFFSET(0x154717F0)
#define INCONTROL_INPUTDEVICE_GETFIRSTPRESSEDBUTTON_OFFSET UNITYSDK_OFFSET(0x15471AE0)
#define INCONTROL_INPUTDEVICE_GETINPUTCONTROLTYPEBYNAME_OFFSET UNITYSDK_OFFSET(0x15469D80)
#define INCONTROL_INPUTDEVICE_GET_ACTION1_OFFSET UNITYSDK_OFFSET(0x15471150)
#define INCONTROL_INPUTDEVICE_GET_ACTION2_OFFSET UNITYSDK_OFFSET(0x154711D0)
#define INCONTROL_INPUTDEVICE_GET_ACTION3_OFFSET UNITYSDK_OFFSET(0x15471250)
#define INCONTROL_INPUTDEVICE_GET_ACTION4_OFFSET UNITYSDK_OFFSET(0x154712D0)
#define INCONTROL_INPUTDEVICE_GET_ANALOGSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x15468F40)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTONISPRESSED_OFFSET UNITYSDK_OFFSET(0x15470E30)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTONWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15470ED0)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTONWASRELEASED_OFFSET UNITYSDK_OFFSET(0x15471010)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTON_OFFSET UNITYSDK_OFFSET(0x15470D80)
#define INCONTROL_INPUTDEVICE_GET_ANYCONTROLWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15470F70)
#define INCONTROL_INPUTDEVICE_GET_ANYCONTROLWASRELEASED_OFFSET UNITYSDK_OFFSET(0x154710B0)
#define INCONTROL_INPUTDEVICE_GET_COMMANDISPRESSED_OFFSET UNITYSDK_OFFSET(0x15470B40)
#define INCONTROL_INPUTDEVICE_GET_COMMANDWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15470C00)
#define INCONTROL_INPUTDEVICE_GET_COMMANDWASRELEASED_OFFSET UNITYSDK_OFFSET(0x15470CC0)
#define INCONTROL_INPUTDEVICE_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0x15470630)
#define INCONTROL_INPUTDEVICE_GET_CONTROLSBYTARGET_OFFSET UNITYSDK_OFFSET(0x15468E80)
#define INCONTROL_INPUTDEVICE_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x15468E60)
#define INCONTROL_INPUTDEVICE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x15468D80)
#define INCONTROL_INPUTDEVICE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x15468DA0)
#define INCONTROL_INPUTDEVICE_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x154659D0)
#define INCONTROL_INPUTDEVICE_GET_DPADDOWN_OFFSET UNITYSDK_OFFSET(0x1546FB50)
#define INCONTROL_INPUTDEVICE_GET_DPADLEFT_OFFSET UNITYSDK_OFFSET(0x1546FA50)
#define INCONTROL_INPUTDEVICE_GET_DPADRIGHT_OFFSET UNITYSDK_OFFSET(0x1546FAD0)
#define INCONTROL_INPUTDEVICE_GET_DPADUP_OFFSET UNITYSDK_OFFSET(0x1546FBD0)
#define INCONTROL_INPUTDEVICE_GET_DPADX_OFFSET UNITYSDK_OFFSET(0x1546FC50)
#define INCONTROL_INPUTDEVICE_GET_DPADY_OFFSET UNITYSDK_OFFSET(0x1546FCD0)
#define INCONTROL_INPUTDEVICE_GET_DPAD_OFFSET UNITYSDK_OFFSET(0x15468EE0)
#define INCONTROL_INPUTDEVICE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x15468DC0)
#define INCONTROL_INPUTDEVICE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15468E00)
#define INCONTROL_INPUTDEVICE_GET_ISATTACHED_OFFSET UNITYSDK_OFFSET(0x15468E20)
#define INCONTROL_INPUTDEVICE_GET_ISKNOWN_OFFSET UNITYSDK_OFFSET(0x154708F0)
#define INCONTROL_INPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET UNITYSDK_OFFSET(0x154708E0)
#define INCONTROL_INPUTDEVICE_GET_ISUNKNOWN_OFFSET UNITYSDK_OFFSET(0x15461EB0)
#define INCONTROL_INPUTDEVICE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x15469D10)
#define INCONTROL_INPUTDEVICE_GET_LASTINPUTTICK_OFFSET UNITYSDK_OFFSET(0x15468DE0)
#define INCONTROL_INPUTDEVICE_GET_LEFTBUMPER_OFFSET UNITYSDK_OFFSET(0x15471450)
#define INCONTROL_INPUTDEVICE_GET_LEFTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x15468F00)
#define INCONTROL_INPUTDEVICE_GET_LEFTCOMMAND_OFFSET UNITYSDK_OFFSET(0x154706B0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x15471550)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKDOWN_OFFSET UNITYSDK_OFFSET(0x1546A7C0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKLEFT_OFFSET UNITYSDK_OFFSET(0x1546A640)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKRIGHT_OFFSET UNITYSDK_OFFSET(0x1546A6C0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKUP_OFFSET UNITYSDK_OFFSET(0x1546A740)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKX_OFFSET UNITYSDK_OFFSET(0x1546D470)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKY_OFFSET UNITYSDK_OFFSET(0x1546D4F0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x15468EA0)
#define INCONTROL_INPUTDEVICE_GET_LEFTTRIGGER_OFFSET UNITYSDK_OFFSET(0x15471350)
#define INCONTROL_INPUTDEVICE_GET_MENUISPRESSED_OFFSET UNITYSDK_OFFSET(0x15470900)
#define INCONTROL_INPUTDEVICE_GET_MENUWASPRESSED_OFFSET UNITYSDK_OFFSET(0x154709C0)
#define INCONTROL_INPUTDEVICE_GET_MENUWASRELEASED_OFFSET UNITYSDK_OFFSET(0x15470A80)
#define INCONTROL_INPUTDEVICE_GET_META_OFFSET UNITYSDK_OFFSET(0x15468D40)
#define INCONTROL_INPUTDEVICE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15468D20)
#define INCONTROL_INPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET UNITYSDK_OFFSET(0x15471650)
#define INCONTROL_INPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET UNITYSDK_OFFSET(0x15471660)
#define INCONTROL_INPUTDEVICE_GET_RAWSTICKS_OFFSET UNITYSDK_OFFSET(0x15468E40)
#define INCONTROL_INPUTDEVICE_GET_RIGHTBUMPER_OFFSET UNITYSDK_OFFSET(0x154714D0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x15468F20)
#define INCONTROL_INPUTDEVICE_GET_RIGHTCOMMAND_OFFSET UNITYSDK_OFFSET(0x15470730)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x154715D0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKDOWN_OFFSET UNITYSDK_OFFSET(0x1546B810)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKLEFT_OFFSET UNITYSDK_OFFSET(0x1546B690)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKRIGHT_OFFSET UNITYSDK_OFFSET(0x1546B710)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKUP_OFFSET UNITYSDK_OFFSET(0x1546B790)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKX_OFFSET UNITYSDK_OFFSET(0x1546E720)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKY_OFFSET UNITYSDK_OFFSET(0x1546E7A0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x15468EC0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x154713D0)
#define INCONTROL_INPUTDEVICE_GET_SORTORDER_OFFSET UNITYSDK_OFFSET(0x15468D60)
#define INCONTROL_INPUTDEVICE_HASCONTROL_OFFSET UNITYSDK_OFFSET(0x15461CF0)
#define INCONTROL_INPUTDEVICE_LASTINPUTAFTER_OFFSET UNITYSDK_OFFSET(0x154707B0)
#define INCONTROL_INPUTDEVICE_ONATTACHED_OFFSET UNITYSDK_OFFSET(0x15469430)
#define INCONTROL_INPUTDEVICE_ONDETACHED_OFFSET UNITYSDK_OFFSET(0x154697E0)
#define INCONTROL_INPUTDEVICE_PROCESSDPAD_OFFSET UNITYSDK_OFFSET(0x1546E820)
#define INCONTROL_INPUTDEVICE_PROCESSLEFTSTICK_OFFSET UNITYSDK_OFFSET(0x1546C270)
#define INCONTROL_INPUTDEVICE_PROCESSRIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x1546D570)
#define INCONTROL_INPUTDEVICE_READRAWANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x15471680)
#define INCONTROL_INPUTDEVICE_READRAWBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x15471670)
#define INCONTROL_INPUTDEVICE_REMOVEALIASCONTROLS_OFFSET UNITYSDK_OFFSET(0x154692D0)
#define INCONTROL_INPUTDEVICE_REMOVECONTROL_OFFSET UNITYSDK_OFFSET(0x15469B20)
#define INCONTROL_INPUTDEVICE_REQUESTACTIVATION_OFFSET UNITYSDK_OFFSET(0x154707D0)
#define INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_1_OFFSET UNITYSDK_OFFSET(0x15470870)
#define INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x15470860)
#define INCONTROL_INPUTDEVICE_SETLIGHTFLASH_OFFSET UNITYSDK_OFFSET(0x154708B0)
#define INCONTROL_INPUTDEVICE_SET_ANALOGSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x15468F50)
#define INCONTROL_INPUTDEVICE_SET_CONTROLSBYTARGET_OFFSET UNITYSDK_OFFSET(0x15468E90)
#define INCONTROL_INPUTDEVICE_SET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x15468E70)
#define INCONTROL_INPUTDEVICE_SET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x15468D90)
#define INCONTROL_INPUTDEVICE_SET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x15468DB0)
#define INCONTROL_INPUTDEVICE_SET_DPAD_OFFSET UNITYSDK_OFFSET(0x15468EF0)
#define INCONTROL_INPUTDEVICE_SET_GUID_OFFSET UNITYSDK_OFFSET(0x15468DD0)
#define INCONTROL_INPUTDEVICE_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15468E10)
#define INCONTROL_INPUTDEVICE_SET_ISATTACHED_OFFSET UNITYSDK_OFFSET(0x15468E30)
#define INCONTROL_INPUTDEVICE_SET_LASTINPUTTICK_OFFSET UNITYSDK_OFFSET(0x15468DF0)
#define INCONTROL_INPUTDEVICE_SET_LEFTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x15468F10)
#define INCONTROL_INPUTDEVICE_SET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x15468EB0)
#define INCONTROL_INPUTDEVICE_SET_META_OFFSET UNITYSDK_OFFSET(0x15468D50)
#define INCONTROL_INPUTDEVICE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15468D30)
#define INCONTROL_INPUTDEVICE_SET_RAWSTICKS_OFFSET UNITYSDK_OFFSET(0x15468E50)
#define INCONTROL_INPUTDEVICE_SET_RIGHTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x15468F30)
#define INCONTROL_INPUTDEVICE_SET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x15468ED0)
#define INCONTROL_INPUTDEVICE_SET_SORTORDER_OFFSET UNITYSDK_OFFSET(0x15468D70)
#define INCONTROL_INPUTDEVICE_STOPLIGHTFLASH_OFFSET UNITYSDK_OFFSET(0x154708C0)
#define INCONTROL_INPUTDEVICE_STOPVIBRATION_OFFSET UNITYSDK_OFFSET(0x15469810)
#define INCONTROL_INPUTDEVICE_TAKESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x15471690)
#define INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHRAWVALUE_OFFSET UNITYSDK_OFFSET(0x1546A840)
#define INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHVALUE_OFFSET UNITYSDK_OFFSET(0x1546A1D0)
#define INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHRAWVALUE_OFFSET UNITYSDK_OFFSET(0x1546B890)
#define INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHVALUE_OFFSET UNITYSDK_OFFSET(0x1546B230)
#define INCONTROL_INPUTDEVICE_UPDATEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x1546A080)
#define INCONTROL_INPUTDEVICE_UPDATEWITHVALUE_OFFSET UNITYSDK_OFFSET(0x1546A120)
#define INCONTROL_INPUTDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1546C260)
#define INCONTROL_INPUTDEVICE_VIBRATETRIGGERS_OFFSET UNITYSDK_OFFSET(0x15470850)
#define INCONTROL_INPUTDEVICE_VIBRATE_1_OFFSET UNITYSDK_OFFSET(0x15470830)
#define INCONTROL_INPUTDEVICE_VIBRATE_OFFSET UNITYSDK_OFFSET(0x15470820)
#define INCONTROL_INPUTDEVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15471BB0)
#define INCONTROL_INPUTDEVICE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15469090)
#define INCONTROL_INPUTDEVICE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x154691B0)
#define INCONTROL_INPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x15468F60)

namespace InControl
{
	inline static constexpr unsigned int InputDevice_TypeDefinitionIndex = 30544;

	class InputDevice : public ::System::Object
	{
	public:
		static ::InControl::InputDevice** StaticGet_Null()
		{
			return (::InControl::InputDevice**)Il2CppClass::FromTypeDefinitionIndex(InputDevice_TypeDefinitionIndex)->GetStaticField(0x2FD00);
		}
		::InControl::InputControl* cachedLeftCommand; // 0x10
		::InControl::InputControl* cachedAction3; // 0x18
		::InControl::InputControl* cachedRightStickButton; // 0x20
		::InControl::InputControl* cachedDPadX; // 0x28
		::InControl::InputControl* cachedRightStickY; // 0x30
		::InControl::InputControl* cachedCommand; // 0x38
		::InControl::TwoAxisInputControl* _LeftStick_k__BackingField; // 0x40
		::Il2CppArray<::InControl::InputControl*>* _ControlsByTarget_k__BackingField; // 0x48
		::InControl::InputControl* cachedRightStickUp; // 0x50
		::InControl::TwoAxisInputControl* _DPad_k__BackingField; // 0x58
		::InControl::InputControl* leftCommandSource; // 0x60
		::InControl::InputControl* cachedLeftStickX; // 0x68
		::InControl::InputControl* cachedLeftTrigger; // 0x70
		::InControl::InputControl* cachedRightStickRight; // 0x78
		::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>* _AnalogSnapshot_k__BackingField; // 0x80
		::System::String* _Meta_k__BackingField; // 0x88
		::InControl::InputControl* cachedLeftStickY; // 0x90
		::InControl::InputControl* cachedDPadUp; // 0x98
		::InControl::InputControl* cachedRightBumper; // 0xA0
		::InControl::InputControl* cachedRightStickX; // 0xA8
		::System::Collections::Generic::List_1<::InControl::InputControl*>* controls; // 0xB0
		::InControl::InputControl* cachedAction1; // 0xB8
		::InControl::InputControl* cachedLeftBumper; // 0xC0
		::InControl::InputControl* cachedAction2; // 0xC8
		::InControl::InputControl* cachedLeftStickLeft; // 0xD0
		::InControl::InputControl* cachedDPadLeft; // 0xD8
		::InControl::InputControl* cachedRightTrigger; // 0xE0
		::InControl::InputControl* cachedDPadY; // 0xE8
		::InControl::InputControl* cachedLeftStickDown; // 0xF0
		::InControl::InputControl* cachedLeftStickButton; // 0xF8
		::InControl::InputControl* cachedRightCommand; // 0x100
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>* _Controls_k__BackingField; // 0x108
		::InControl::InputControl* cachedLeftStickRight; // 0x110
		::InControl::TwoAxisInputControl* _RightStick_k__BackingField; // 0x118
		::InControl::InputControl* cachedRightStickDown; // 0x120
		::InControl::InputControl* cachedLeftStickUp; // 0x128
		::InControl::InputControl* rightCommandSource; // 0x130
		::InControl::InputControl* cachedDPadRight; // 0x138
		::System::String* _Name_k__BackingField; // 0x140
		::InControl::InputControl* cachedDPadDown; // 0x148
		::InControl::InputControl* cachedRightStickLeft; // 0x150
		::InControl::InputControl* cachedAction4; // 0x158
		::InControl::InputControlType _RightCommandControl_k__BackingField; // 0x160
		::InControl::InputDeviceStyle _DeviceStyle_k__BackingField; // 0x164
		::System::Int32 _SortOrder_k__BackingField; // 0x168
		::InControl::InputControlType _LeftCommandControl_k__BackingField; // 0x16C
		::System::UInt64 _LastInputTick_k__BackingField; // 0x170
		::System::Boolean hasLeftCommandControl; // 0x178
		::System::Boolean _IsAttached_k__BackingField; // 0x179
		::System::Boolean hasRightCommandControl; // 0x17A
		::System::Boolean _RawSticks_k__BackingField; // 0x17B
		::System::Boolean _IsActive_k__BackingField; // 0x17C
		::System::Boolean Passive; // 0x17D
		::System::Guid _GUID_k__BackingField; // 0x180
		::InControl::InputDeviceClass _DeviceClass_k__BackingField; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CTOR_1_OFFSET))(this, name);
		}

		::System::Void _ctor_2(::System::String* name, ::System::Boolean rawSticks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CTOR_2_OFFSET))(this, name, rawSticks);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Meta()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_META_OFFSET))(this);
		}

		::System::Void set_Meta(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_META_OFFSET))(this, value);
		}

		::System::Int32 get_SortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_SORTORDER_OFFSET))(this);
		}

		::System::Void set_SortOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_SORTORDER_OFFSET))(this, value);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DEVICECLASS_OFFSET))(this);
		}

		::System::Void set_DeviceClass(::InControl::InputDeviceClass value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_DEVICECLASS_OFFSET))(this, value);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Void set_DeviceStyle(::InControl::InputDeviceStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_DEVICESTYLE_OFFSET))(this, value);
		}

		::System::Guid get_GUID()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_GUID_OFFSET))(this);
		}

		::System::Void set_GUID(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_GUID_OFFSET))(this, value);
		}

		::System::UInt64 get_LastInputTick()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LASTINPUTTICK_OFFSET))(this);
		}

		::System::Void set_LastInputTick(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_LASTINPUTTICK_OFFSET))(this, value);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_ISACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_IsAttached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISATTACHED_OFFSET))(this);
		}

		::System::Void set_IsAttached(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_ISATTACHED_OFFSET))(this, value);
		}

		::System::Boolean get_RawSticks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RAWSTICKS_OFFSET))(this);
		}

		::System::Void set_RawSticks(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_RAWSTICKS_OFFSET))(this, value);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>* get_Controls()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_CONTROLS_OFFSET))(this);
		}

		::System::Void set_Controls(::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_CONTROLS_OFFSET))(this, value);
		}

		::Il2CppArray<::InControl::InputControl*>* get_ControlsByTarget()
		{
			return ((::Il2CppArray<::InControl::InputControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_CONTROLSBYTARGET_OFFSET))(this);
		}

		::System::Void set_ControlsByTarget(::Il2CppArray<::InControl::InputControl*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControl*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_CONTROLSBYTARGET_OFFSET))(this, value);
		}

		::InControl::TwoAxisInputControl* get_LeftStick()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICK_OFFSET))(this);
		}

		::System::Void set_LeftStick(::InControl::TwoAxisInputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_LEFTSTICK_OFFSET))(this, value);
		}

		::InControl::TwoAxisInputControl* get_RightStick()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICK_OFFSET))(this);
		}

		::System::Void set_RightStick(::InControl::TwoAxisInputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_RIGHTSTICK_OFFSET))(this, value);
		}

		::InControl::TwoAxisInputControl* get_DPad()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPAD_OFFSET))(this);
		}

		::System::Void set_DPad(::InControl::TwoAxisInputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_DPAD_OFFSET))(this, value);
		}

		::InControl::InputControlType get_LeftCommandControl()
		{
			return ((::InControl::InputControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTCOMMANDCONTROL_OFFSET))(this);
		}

		::System::Void set_LeftCommandControl(::InControl::InputControlType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_LEFTCOMMANDCONTROL_OFFSET))(this, value);
		}

		::InControl::InputControlType get_RightCommandControl()
		{
			return ((::InControl::InputControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTCOMMANDCONTROL_OFFSET))(this);
		}

		::System::Void set_RightCommandControl(::InControl::InputControlType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_RIGHTCOMMANDCONTROL_OFFSET))(this, value);
		}

		::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>* get_AnalogSnapshot()
		{
			return ((::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANALOGSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_AnalogSnapshot(::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_ANALOGSNAPSHOT_OFFSET))(this, value);
		}

		::System::Void OnAttached()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ONATTACHED_OFFSET))(this);
		}

		::System::Void OnDetached()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ONDETACHED_OFFSET))(this);
		}

		::System::Void AddAliasControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ADDALIASCONTROLS_OFFSET))(this);
		}

		::System::Void RemoveAliasControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_REMOVEALIASCONTROLS_OFFSET))(this);
		}

		::System::Void ClearControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_CLEARCONTROLS_OFFSET))(this);
		}

		::System::Boolean HasControl(::InControl::InputControlType controlType)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_HASCONTROL_OFFSET))(this, controlType);
		}

		::InControl::InputControl* GetControl(::InControl::InputControlType controlType)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETCONTROL_OFFSET))(this, controlType);
		}

		::InControl::InputControl* get_Item(::InControl::InputControlType controlType)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ITEM_OFFSET))(this, controlType);
		}

		static ::InControl::InputControlType GetInputControlTypeByName(::System::String* inputControlName)
		{
			return ((::InControl::InputControlType(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETINPUTCONTROLTYPEBYNAME_OFFSET))(inputControlName);
		}

		::InControl::InputControl* GetControlByName(::System::String* controlName)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETCONTROLBYNAME_OFFSET))(this, controlName);
		}

		::InControl::InputControl* AddControl(::InControl::InputControlType controlType, ::System::String* handle)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ADDCONTROL_OFFSET))(this, controlType, handle);
		}

		::InControl::InputControl* AddControl_1(::InControl::InputControlType controlType, ::System::String* handle, ::System::Single lowerDeadZone, ::System::Single upperDeadZone)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ADDCONTROL_1_OFFSET))(this, controlType, handle, lowerDeadZone, upperDeadZone);
		}

		::System::Void RemoveControl(::InControl::InputControlType controlType)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_REMOVECONTROL_OFFSET))(this, controlType);
		}

		::System::Void ClearInputState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_CLEARINPUTSTATE_OFFSET))(this);
		}

		::System::Void UpdateWithState(::InControl::InputControlType controlType, ::System::Boolean state, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATEWITHSTATE_OFFSET))(this, controlType, state, updateTick, deltaTime);
		}

		::System::Void UpdateWithValue(::InControl::InputControlType controlType, ::System::Single value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATEWITHVALUE_OFFSET))(this, controlType, value, updateTick, deltaTime);
		}

		::System::Void UpdateLeftStickWithValue(::UnityEngine::Vector2 value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void UpdateLeftStickWithRawValue(::UnityEngine::Vector2 value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHRAWVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void CommitLeftStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_COMMITLEFTSTICK_OFFSET))(this);
		}

		::System::Void UpdateRightStickWithValue(::UnityEngine::Vector2 value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void UpdateRightStickWithRawValue(::UnityEngine::Vector2 value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHRAWVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void CommitRightStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_COMMITRIGHTSTICK_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void ProcessLeftStick(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_PROCESSLEFTSTICK_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void ProcessRightStick(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_PROCESSRIGHTSTICK_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void ProcessDPad(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_PROCESSDPAD_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void Commit(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_COMMIT_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Boolean LastInputAfter(::InControl::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_LASTINPUTAFTER_OFFSET))(this, device);
		}

		::System::Void RequestActivation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_REQUESTACTIVATION_OFFSET))(this);
		}

		::System::Void Vibrate(::System::Single leftMotor, ::System::Single rightMotor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_VIBRATE_OFFSET))(this, leftMotor, rightMotor);
		}

		::System::Void Vibrate_1(::System::Single intensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_VIBRATE_1_OFFSET))(this, intensity);
		}

		::System::Void VibrateTriggers(::System::Single leftTrigger, ::System::Single rightTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_VIBRATETRIGGERS_OFFSET))(this, leftTrigger, rightTrigger);
		}

		::System::Void StopVibration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_STOPVIBRATION_OFFSET))(this);
		}

		::System::Void SetLightColor(::System::Single red, ::System::Single green, ::System::Single blue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_OFFSET))(this, red, green, blue);
		}

		::System::Void SetLightColor_1(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_1_OFFSET))(this, color);
		}

		::System::Void SetLightFlash(::System::Single flashOnDuration, ::System::Single flashOffDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SETLIGHTFLASH_OFFSET))(this, flashOnDuration, flashOffDuration);
		}

		::System::Void StopLightFlash()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_STOPLIGHTFLASH_OFFSET))(this);
		}

		::System::Boolean get_IsSupportedOnThisPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET))(this);
		}

		::System::Boolean get_IsKnown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISKNOWN_OFFSET))(this);
		}

		::System::Boolean get_IsUnknown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISUNKNOWN_OFFSET))(this);
		}

		::System::Boolean get_MenuIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_MENUISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_MenuWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_MENUWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_MenuWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_MENUWASRELEASED_OFFSET))(this);
		}

		::System::Boolean get_CommandIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_COMMANDISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_CommandWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_COMMANDWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_CommandWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_COMMANDWASRELEASED_OFFSET))(this);
		}

		::InControl::InputControl* get_AnyButton()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYBUTTON_OFFSET))(this);
		}

		::System::Boolean get_AnyButtonIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYBUTTONISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_AnyButtonWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYBUTTONWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_AnyControlWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYCONTROLWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_AnyButtonWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYBUTTONWASRELEASED_OFFSET))(this);
		}

		::System::Boolean get_AnyControlWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYCONTROLWASRELEASED_OFFSET))(this);
		}

		::InControl::TwoAxisInputControl* get_Direction()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DIRECTION_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickUp()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKUP_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickDown()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKDOWN_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickLeft()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKLEFT_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickRight()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKRIGHT_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickUp()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKUP_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickDown()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKDOWN_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickLeft()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKLEFT_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickRight()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKRIGHT_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadUp()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADUP_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadDown()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADDOWN_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadLeft()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADLEFT_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadRight()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADRIGHT_OFFSET))(this);
		}

		::InControl::InputControl* get_Action1()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ACTION1_OFFSET))(this);
		}

		::InControl::InputControl* get_Action2()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ACTION2_OFFSET))(this);
		}

		::InControl::InputControl* get_Action3()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ACTION3_OFFSET))(this);
		}

		::InControl::InputControl* get_Action4()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ACTION4_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftTrigger()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTTRIGGER_OFFSET))(this);
		}

		::InControl::InputControl* get_RightTrigger()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTTRIGGER_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftBumper()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTBUMPER_OFFSET))(this);
		}

		::InControl::InputControl* get_RightBumper()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTBUMPER_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickButton()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKBUTTON_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickButton()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKBUTTON_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickX()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKX_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickY()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKY_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickX()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKX_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickY()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKY_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadX()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADX_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadY()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADY_OFFSET))(this);
		}

		::InControl::InputControl* get_Command()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_COMMAND_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftCommand()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTCOMMAND_OFFSET))(this);
		}

		::InControl::InputControl* get_RightCommand()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTCOMMAND_OFFSET))(this);
		}

		::System::Void ExpireControlCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_EXPIRECONTROLCACHE_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownAnalogs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownButtons()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET))(this);
		}

		::System::Boolean ReadRawButtonState(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_READRAWBUTTONSTATE_OFFSET))(this, index);
		}

		::System::Single ReadRawAnalogValue(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_READRAWANALOGVALUE_OFFSET))(this, index);
		}

		::System::Void TakeSnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_TAKESNAPSHOT_OFFSET))(this);
		}

		::InControl::UnknownDeviceControl GetFirstPressedAnalog()
		{
			return ((::InControl::UnknownDeviceControl(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETFIRSTPRESSEDANALOG_OFFSET))(this);
		}

		::InControl::UnknownDeviceControl GetFirstPressedButton()
		{
			return ((::InControl::UnknownDeviceControl(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETFIRSTPRESSEDBUTTON_OFFSET))(this);
		}
	};
}
