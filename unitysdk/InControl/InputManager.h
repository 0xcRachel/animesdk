#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/VersionInfo.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace InControl { class IKeyboardProvider; }
namespace InControl { class IMouseProvider; }
namespace InControl { class InputDevice; }
namespace InControl { class InputDeviceManager; }
namespace InControl { class PlayerActionSet; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define INCONTROL_INPUTMANAGER_ADDDEVICEMANAGER_OFFSET UNITYSDK_OFFSET(0x16417100)
#define INCONTROL_INPUTMANAGER_ADD_ONACTIVEDEVICECHANGED_OFFSET UNITYSDK_OFFSET(0x16415860)
#define INCONTROL_INPUTMANAGER_ADD_ONCOMMITDEVICES_OFFSET UNITYSDK_OFFSET(0x16415AE0)
#define INCONTROL_INPUTMANAGER_ADD_ONDEVICEATTACHED_OFFSET UNITYSDK_OFFSET(0x164155E0)
#define INCONTROL_INPUTMANAGER_ADD_ONDEVICEDETACHED_OFFSET UNITYSDK_OFFSET(0x16415720)
#define INCONTROL_INPUTMANAGER_ADD_ONRESET_OFFSET UNITYSDK_OFFSET(0x164154A0)
#define INCONTROL_INPUTMANAGER_ADD_ONSETUP_OFFSET UNITYSDK_OFFSET(0x16415220)
#define INCONTROL_INPUTMANAGER_ADD_ONUPDATEDEVICES_OFFSET UNITYSDK_OFFSET(0x164159A0)
#define INCONTROL_INPUTMANAGER_ADD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16415360)
#define INCONTROL_INPUTMANAGER_ASSERTISSETUP_OFFSET UNITYSDK_OFFSET(0x16416320)
#define INCONTROL_INPUTMANAGER_ATTACHDEVICE_OFFSET UNITYSDK_OFFSET(0x16417410)
#define INCONTROL_INPUTMANAGER_ATTACHPLAYERACTIONSET_OFFSET UNITYSDK_OFFSET(0x16417B70)
#define INCONTROL_INPUTMANAGER_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x16416F00)
#define INCONTROL_INPUTMANAGER_COMMITDEVICES_OFFSET UNITYSDK_OFFSET(0x164166E0)
#define INCONTROL_INPUTMANAGER_DESTROYDEVICEMANAGERS_OFFSET UNITYSDK_OFFSET(0x16415F80)
#define INCONTROL_INPUTMANAGER_DESTROYDEVICES_OFFSET UNITYSDK_OFFSET(0x16416150)
#define INCONTROL_INPUTMANAGER_DETACHDEVICE_OFFSET UNITYSDK_OFFSET(0x16417780)
#define INCONTROL_INPUTMANAGER_DETACHPLAYERACTIONSET_OFFSET UNITYSDK_OFFSET(0x16417C30)
#define INCONTROL_INPUTMANAGER_GET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x164073B0)
#define INCONTROL_INPUTMANAGER_GET_ANYKEYISPRESSED_OFFSET UNITYSDK_OFFSET(0x16417C90)
#define INCONTROL_INPUTMANAGER_GET_APPLICATIONISFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x16415E50)
#define INCONTROL_INPUTMANAGER_GET_COMMANDWASPRESSED_OFFSET UNITYSDK_OFFSET(0x16415C20)
#define INCONTROL_INPUTMANAGER_GET_CURRENTTICK_OFFSET UNITYSDK_OFFSET(0x16418CD0)
#define INCONTROL_INPUTMANAGER_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x16418D10)
#define INCONTROL_INPUTMANAGER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x16418690)
#define INCONTROL_INPUTMANAGER_GET_ENABLEICADE_OFFSET UNITYSDK_OFFSET(0x16418B30)
#define INCONTROL_INPUTMANAGER_GET_ENABLENATIVEINPUT_OFFSET UNITYSDK_OFFSET(0x164187E0)
#define INCONTROL_INPUTMANAGER_GET_ENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x16418850)
#define INCONTROL_INPUTMANAGER_GET_INVERTYAXIS_OFFSET UNITYSDK_OFFSET(0x16415C90)
#define INCONTROL_INPUTMANAGER_GET_ISSETUP_OFFSET UNITYSDK_OFFSET(0x16415D00)
#define INCONTROL_INPUTMANAGER_GET_KEYBOARDPROVIDER_OFFSET UNITYSDK_OFFSET(0x16415DE0)
#define INCONTROL_INPUTMANAGER_GET_MENUWASPRESSED_OFFSET UNITYSDK_OFFSET(0x16415F30)
#define INCONTROL_INPUTMANAGER_GET_MOUSEPROVIDER_OFFSET UNITYSDK_OFFSET(0x16415D70)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTENABLEMFI_OFFSET UNITYSDK_OFFSET(0x164189F0)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x16418980)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTPREVENTSLEEP_OFFSET UNITYSDK_OFFSET(0x16418A60)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x16418AD0)
#define INCONTROL_INPUTMANAGER_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x16415EC0)
#define INCONTROL_INPUTMANAGER_GET_SUSPENDINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x16418770)
#define INCONTROL_INPUTMANAGER_GET_UNITYVERSION_OFFSET UNITYSDK_OFFSET(0x16418BA0)
#define INCONTROL_INPUTMANAGER_GET_XINPUTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x16418920)
#define INCONTROL_INPUTMANAGER_GET_XINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x164188C0)
#define INCONTROL_INPUTMANAGER_HIDEDEVICESWITHPROFILE_OFFSET UNITYSDK_OFFSET(0x16417A90)
#define INCONTROL_INPUTMANAGER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x16409410)
#define INCONTROL_INPUTMANAGER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x164094F0)
#define INCONTROL_INPUTMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x16409560)
#define INCONTROL_INPUTMANAGER_ONLEVELWASLOADED_OFFSET UNITYSDK_OFFSET(0x16409600)
#define INCONTROL_INPUTMANAGER_RELOAD_OFFSET UNITYSDK_OFFSET(0x16416C50)
#define INCONTROL_INPUTMANAGER_REMOVE_ONACTIVEDEVICECHANGED_OFFSET UNITYSDK_OFFSET(0x16415900)
#define INCONTROL_INPUTMANAGER_REMOVE_ONCOMMITDEVICES_OFFSET UNITYSDK_OFFSET(0x16415B80)
#define INCONTROL_INPUTMANAGER_REMOVE_ONDEVICEATTACHED_OFFSET UNITYSDK_OFFSET(0x16415680)
#define INCONTROL_INPUTMANAGER_REMOVE_ONDEVICEDETACHED_OFFSET UNITYSDK_OFFSET(0x164157C0)
#define INCONTROL_INPUTMANAGER_REMOVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x16415540)
#define INCONTROL_INPUTMANAGER_REMOVE_ONSETUP_OFFSET UNITYSDK_OFFSET(0x164152C0)
#define INCONTROL_INPUTMANAGER_REMOVE_ONUPDATEDEVICES_OFFSET UNITYSDK_OFFSET(0x16415A40)
#define INCONTROL_INPUTMANAGER_REMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16415400)
#define INCONTROL_INPUTMANAGER_RESETINTERNAL_OFFSET UNITYSDK_OFFSET(0x164089C0)
#define INCONTROL_INPUTMANAGER_SETUPINTERNAL_OFFSET UNITYSDK_OFFSET(0x16408050)
#define INCONTROL_INPUTMANAGER_SETZEROTICKONALLCONTROLS_OFFSET UNITYSDK_OFFSET(0x16416C90)
#define INCONTROL_INPUTMANAGER_SET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x164173B0)
#define INCONTROL_INPUTMANAGER_SET_APPLICATIONISFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x16415E90)
#define INCONTROL_INPUTMANAGER_SET_COMMANDWASPRESSED_OFFSET UNITYSDK_OFFSET(0x16415C60)
#define INCONTROL_INPUTMANAGER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x164186D0)
#define INCONTROL_INPUTMANAGER_SET_ENABLEICADE_OFFSET UNITYSDK_OFFSET(0x16418B70)
#define INCONTROL_INPUTMANAGER_SET_ENABLENATIVEINPUT_OFFSET UNITYSDK_OFFSET(0x16418820)
#define INCONTROL_INPUTMANAGER_SET_ENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x16418890)
#define INCONTROL_INPUTMANAGER_SET_INVERTYAXIS_OFFSET UNITYSDK_OFFSET(0x16415CD0)
#define INCONTROL_INPUTMANAGER_SET_ISSETUP_OFFSET UNITYSDK_OFFSET(0x16415D40)
#define INCONTROL_INPUTMANAGER_SET_KEYBOARDPROVIDER_OFFSET UNITYSDK_OFFSET(0x16415E10)
#define INCONTROL_INPUTMANAGER_SET_MOUSEPROVIDER_OFFSET UNITYSDK_OFFSET(0x16415DA0)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTENABLEMFI_OFFSET UNITYSDK_OFFSET(0x16418A30)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x164189C0)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTPREVENTSLEEP_OFFSET UNITYSDK_OFFSET(0x16418AA0)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x16418B00)
#define INCONTROL_INPUTMANAGER_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x16415EF0)
#define INCONTROL_INPUTMANAGER_SET_SUSPENDINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x164187B0)
#define INCONTROL_INPUTMANAGER_SET_XINPUTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x16418950)
#define INCONTROL_INPUTMANAGER_SET_XINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x164188F0)
#define INCONTROL_INPUTMANAGER_UPDATEACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x164168D0)
#define INCONTROL_INPUTMANAGER_UPDATECURRENTTIME_OFFSET UNITYSDK_OFFSET(0x16416390)
#define INCONTROL_INPUTMANAGER_UPDATEDEVICEMANAGERS_OFFSET UNITYSDK_OFFSET(0x16416440)
#define INCONTROL_INPUTMANAGER_UPDATEDEVICES_OFFSET UNITYSDK_OFFSET(0x16416540)
#define INCONTROL_INPUTMANAGER_UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16408D20)
#define INCONTROL_INPUTMANAGER_UPDATEPLAYERACTIONSETS_OFFSET UNITYSDK_OFFSET(0x16416B50)
#define INCONTROL_INPUTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x164162F0)
#define INCONTROL_INPUTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16418D50)

namespace InControl
{
	inline static constexpr unsigned int InputManager_TypeDefinitionIndex = 37159;

	class InputManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::InControl::PlayerActionSet*>** StaticGet_playerActionSets()
		{
			return (::System::Collections::Generic::List_1<::InControl::PlayerActionSet*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4400);
		}
		static ::InControl::InputDevice** StaticGet_activeDevice()
		{
			return (::InControl::InputDevice**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4408);
		}
		static ::System::Action_2<::System::UInt64, ::System::Single>** StaticGet_OnUpdate()
		{
			return (::System::Action_2<::System::UInt64, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4410);
		}
		static ::System::Action** StaticGet_OnSetup()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4418);
		}
		static ::System::Action_1<::InControl::InputDevice*>** StaticGet_OnActiveDeviceChanged()
		{
			return (::System::Action_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4420);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>** StaticGet_ActiveDevices()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4428);
		}
		static ::InControl::IMouseProvider** StaticGet__MouseProvider_k__BackingField()
		{
			return (::InControl::IMouseProvider**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4430);
		}
		static ::System::Action_1<::InControl::InputDevice*>** StaticGet_OnDeviceAttached()
		{
			return (::System::Action_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4438);
		}
		static ::System::Action** StaticGet_OnReset()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4440);
		}
		static ::System::Collections::Generic::List_1<::InControl::InputDevice*>** StaticGet_devices()
		{
			return (::System::Collections::Generic::List_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4448);
		}
		static ::System::Collections::Generic::List_1<::InControl::InputDevice*>** StaticGet_activeDevices()
		{
			return (::System::Collections::Generic::List_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4450);
		}
		static ::System::String** StaticGet__Platform_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4458);
		}
		static ::InControl::IKeyboardProvider** StaticGet__KeyboardProvider_k__BackingField()
		{
			return (::InControl::IKeyboardProvider**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4460);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::InControl::InputDeviceManager*>** StaticGet_deviceManagerTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::InControl::InputDeviceManager*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4468);
		}
		static ::System::Action_1<::InControl::InputDevice*>** StaticGet_OnDeviceDetached()
		{
			return (::System::Action_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4470);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>** StaticGet_Devices()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4478);
		}
		static ::System::Action_2<::System::UInt64, ::System::Single>** StaticGet_OnCommitDevices()
		{
			return (::System::Action_2<::System::UInt64, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4480);
		}
		static ::System::Collections::Generic::List_1<::InControl::InputDeviceManager*>** StaticGet_deviceManagers()
		{
			return (::System::Collections::Generic::List_1<::InControl::InputDeviceManager*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4488);
		}
		static ::System::Action_2<::System::UInt64, ::System::Single>** StaticGet_OnUpdateDevices()
		{
			return (::System::Action_2<::System::UInt64, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x4490);
		}
		static ::System::Boolean* StaticGet__EnableICade_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1420);
		}
		static ::System::Boolean* StaticGet__SuspendInBackground_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1421);
		}
		static ::System::Boolean* StaticGet__NativeInputEnableMFi_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1422);
		}
		static ::System::Boolean* StaticGet__InvertYAxis_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1423);
		}
		static ::System::Boolean* StaticGet__EnableXInput_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1424);
		}
		static ::System::Boolean* StaticGet__ApplicationisForegroundWindow_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1425);
		}
		static ::System::Boolean* StaticGet_applicationIsFocused()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1426);
		}
		static ::System::Boolean* StaticGet__NativeInputEnableXInput_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1427);
		}
		static ::System::Single* StaticGet_currentTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1428);
		}
		static ::System::UInt32* StaticGet__XInputBufferSize_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x142C);
		}
		static ::System::UInt32* StaticGet__NativeInputUpdateRate_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1430);
		}
		static ::System::Nullable_1<::InControl::VersionInfo>* StaticGet_unityVersion()
		{
			return (::System::Nullable_1<::InControl::VersionInfo>*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1434);
		}
		static ::System::UInt64* StaticGet_currentTick()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1448);
		}
		static ::System::Single* StaticGet_initialTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1450);
		}
		static ::System::Boolean* StaticGet__EnableNativeInput_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1454);
		}
		static ::System::Boolean* StaticGet__CommandWasPressed_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1455);
		}
		static ::System::Boolean* StaticGet__NativeInputPreventSleep_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1456);
		}
		static ::System::Boolean* StaticGet__IsSetup_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1457);
		}
		static ::System::Boolean* StaticGet_enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1458);
		}
		static ::InControl::VersionInfo* StaticGet_Version()
		{
			return (::InControl::VersionInfo*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x145C);
		}
		static ::System::Single* StaticGet_lastUpdateTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x146C);
		}
		static ::System::UInt32* StaticGet__XInputUpdateRate_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x1470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void add_OnSetup(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONSETUP_OFFSET))(value);
		}

		static ::System::Void remove_OnSetup(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONSETUP_OFFSET))(value);
		}

		static ::System::Void add_OnUpdate(::System::Action_2<::System::UInt64, ::System::Single>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONUPDATE_OFFSET))(value);
		}

		static ::System::Void remove_OnUpdate(::System::Action_2<::System::UInt64, ::System::Single>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONUPDATE_OFFSET))(value);
		}

		static ::System::Void add_OnReset(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONRESET_OFFSET))(value);
		}

		static ::System::Void remove_OnReset(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONRESET_OFFSET))(value);
		}

		static ::System::Void add_OnDeviceAttached(::System::Action_1<::InControl::InputDevice*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONDEVICEATTACHED_OFFSET))(value);
		}

		static ::System::Void remove_OnDeviceAttached(::System::Action_1<::InControl::InputDevice*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONDEVICEATTACHED_OFFSET))(value);
		}

		static ::System::Void add_OnDeviceDetached(::System::Action_1<::InControl::InputDevice*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONDEVICEDETACHED_OFFSET))(value);
		}

		static ::System::Void remove_OnDeviceDetached(::System::Action_1<::InControl::InputDevice*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONDEVICEDETACHED_OFFSET))(value);
		}

		static ::System::Void add_OnActiveDeviceChanged(::System::Action_1<::InControl::InputDevice*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONACTIVEDEVICECHANGED_OFFSET))(value);
		}

		static ::System::Void remove_OnActiveDeviceChanged(::System::Action_1<::InControl::InputDevice*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONACTIVEDEVICECHANGED_OFFSET))(value);
		}

		static ::System::Void add_OnUpdateDevices(::System::Action_2<::System::UInt64, ::System::Single>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONUPDATEDEVICES_OFFSET))(value);
		}

		static ::System::Void remove_OnUpdateDevices(::System::Action_2<::System::UInt64, ::System::Single>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONUPDATEDEVICES_OFFSET))(value);
		}

		static ::System::Void add_OnCommitDevices(::System::Action_2<::System::UInt64, ::System::Single>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONCOMMITDEVICES_OFFSET))(value);
		}

		static ::System::Void remove_OnCommitDevices(::System::Action_2<::System::UInt64, ::System::Single>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONCOMMITDEVICES_OFFSET))(value);
		}

		static ::System::Boolean get_CommandWasPressed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_COMMANDWASPRESSED_OFFSET))();
		}

		static ::System::Void set_CommandWasPressed(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_COMMANDWASPRESSED_OFFSET))(value);
		}

		static ::System::Boolean get_InvertYAxis()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_INVERTYAXIS_OFFSET))();
		}

		static ::System::Void set_InvertYAxis(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_INVERTYAXIS_OFFSET))(value);
		}

		static ::System::Boolean get_IsSetup()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ISSETUP_OFFSET))();
		}

		static ::System::Void set_IsSetup(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ISSETUP_OFFSET))(value);
		}

		static ::InControl::IMouseProvider* get_MouseProvider()
		{
			return ((::InControl::IMouseProvider*(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_MOUSEPROVIDER_OFFSET))();
		}

		static ::System::Void set_MouseProvider(::InControl::IMouseProvider* value)
		{
			return ((::System::Void(*)(::InControl::IMouseProvider*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_MOUSEPROVIDER_OFFSET))(value);
		}

		static ::InControl::IKeyboardProvider* get_KeyboardProvider()
		{
			return ((::InControl::IKeyboardProvider*(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_KEYBOARDPROVIDER_OFFSET))();
		}

		static ::System::Void set_KeyboardProvider(::InControl::IKeyboardProvider* value)
		{
			return ((::System::Void(*)(::InControl::IKeyboardProvider*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_KEYBOARDPROVIDER_OFFSET))(value);
		}

		static ::System::Boolean get_ApplicationisForegroundWindow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_APPLICATIONISFOREGROUNDWINDOW_OFFSET))();
		}

		static ::System::Void set_ApplicationisForegroundWindow(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_APPLICATIONISFOREGROUNDWINDOW_OFFSET))(value);
		}

		static ::System::String* get_Platform()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_PLATFORM_OFFSET))();
		}

		static ::System::Void set_Platform(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_PLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_MenuWasPressed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_MENUWASPRESSED_OFFSET))();
		}

		static ::System::Boolean SetupInternal()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SETUPINTERNAL_OFFSET))();
		}

		static ::System::Void ResetInternal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_RESETINTERNAL_OFFSET))();
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATE_OFFSET))();
		}

		static ::System::Void UpdateInternal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATEINTERNAL_OFFSET))();
		}

		static ::System::Void Reload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_RELOAD_OFFSET))();
		}

		static ::System::Void AssertIsSetup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ASSERTISSETUP_OFFSET))();
		}

		static ::System::Void SetZeroTickOnAllControls()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SETZEROTICKONALLCONTROLS_OFFSET))();
		}

		static ::System::Void ClearInputState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_CLEARINPUTSTATE_OFFSET))();
		}

		static ::System::Void OnApplicationFocus(::System::Boolean focusState)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ONAPPLICATIONFOCUS_OFFSET))(focusState);
		}

		static ::System::Void OnApplicationPause(::System::Boolean pauseState)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ONAPPLICATIONPAUSE_OFFSET))(pauseState);
		}

		static ::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ONAPPLICATIONQUIT_OFFSET))();
		}

		static ::System::Void OnLevelWasLoaded()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ONLEVELWASLOADED_OFFSET))();
		}

		static ::System::Void AddDeviceManager(::InControl::InputDeviceManager* deviceManager)
		{
			return ((::System::Void(*)(::InControl::InputDeviceManager*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADDDEVICEMANAGER_OFFSET))(deviceManager);
		}

		static ::System::Void UpdateCurrentTime()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATECURRENTTIME_OFFSET))();
		}

		static ::System::Void UpdateDeviceManagers(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATEDEVICEMANAGERS_OFFSET))(deltaTime);
		}

		static ::System::Void DestroyDeviceManagers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_DESTROYDEVICEMANAGERS_OFFSET))();
		}

		static ::System::Void DestroyDevices()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_DESTROYDEVICES_OFFSET))();
		}

		static ::System::Void UpdateDevices(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATEDEVICES_OFFSET))(deltaTime);
		}

		static ::System::Void CommitDevices(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_COMMITDEVICES_OFFSET))(deltaTime);
		}

		static ::System::Void UpdateActiveDevice()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATEACTIVEDEVICE_OFFSET))();
		}

		static ::System::Void AttachDevice(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Void(*)(::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ATTACHDEVICE_OFFSET))(inputDevice);
		}

		static ::System::Void DetachDevice(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Void(*)(::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_DETACHDEVICE_OFFSET))(inputDevice);
		}

		static ::System::Void HideDevicesWithProfile(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_HIDEDEVICESWITHPROFILE_OFFSET))(type);
		}

		static ::System::Void AttachPlayerActionSet(::InControl::PlayerActionSet* playerActionSet)
		{
			return ((::System::Void(*)(::InControl::PlayerActionSet*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ATTACHPLAYERACTIONSET_OFFSET))(playerActionSet);
		}

		static ::System::Void DetachPlayerActionSet(::InControl::PlayerActionSet* playerActionSet)
		{
			return ((::System::Void(*)(::InControl::PlayerActionSet*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_DETACHPLAYERACTIONSET_OFFSET))(playerActionSet);
		}

		static ::System::Void UpdatePlayerActionSets(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATEPLAYERACTIONSETS_OFFSET))(deltaTime);
		}

		static ::System::Boolean get_AnyKeyIsPressed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ANYKEYISPRESSED_OFFSET))();
		}

		static ::InControl::InputDevice* get_ActiveDevice()
		{
			return ((::InControl::InputDevice*(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ACTIVEDEVICE_OFFSET))();
		}

		static ::System::Void set_ActiveDevice(::InControl::InputDevice* value)
		{
			return ((::System::Void(*)(::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ACTIVEDEVICE_OFFSET))(value);
		}

		static ::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ENABLED_OFFSET))();
		}

		static ::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ENABLED_OFFSET))(value);
		}

		static ::System::Boolean get_SuspendInBackground()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_SUSPENDINBACKGROUND_OFFSET))();
		}

		static ::System::Void set_SuspendInBackground(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_SUSPENDINBACKGROUND_OFFSET))(value);
		}

		static ::System::Boolean get_EnableNativeInput()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ENABLENATIVEINPUT_OFFSET))();
		}

		static ::System::Void set_EnableNativeInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ENABLENATIVEINPUT_OFFSET))(value);
		}

		static ::System::Boolean get_EnableXInput()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ENABLEXINPUT_OFFSET))();
		}

		static ::System::Void set_EnableXInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ENABLEXINPUT_OFFSET))(value);
		}

		static ::System::UInt32 get_XInputUpdateRate()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_XINPUTUPDATERATE_OFFSET))();
		}

		static ::System::Void set_XInputUpdateRate(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_XINPUTUPDATERATE_OFFSET))(value);
		}

		static ::System::UInt32 get_XInputBufferSize()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_XINPUTBUFFERSIZE_OFFSET))();
		}

		static ::System::Void set_XInputBufferSize(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_XINPUTBUFFERSIZE_OFFSET))(value);
		}

		static ::System::Boolean get_NativeInputEnableXInput()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_NATIVEINPUTENABLEXINPUT_OFFSET))();
		}

		static ::System::Void set_NativeInputEnableXInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_NATIVEINPUTENABLEXINPUT_OFFSET))(value);
		}

		static ::System::Boolean get_NativeInputEnableMFi()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_NATIVEINPUTENABLEMFI_OFFSET))();
		}

		static ::System::Void set_NativeInputEnableMFi(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_NATIVEINPUTENABLEMFI_OFFSET))(value);
		}

		static ::System::Boolean get_NativeInputPreventSleep()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_NATIVEINPUTPREVENTSLEEP_OFFSET))();
		}

		static ::System::Void set_NativeInputPreventSleep(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_NATIVEINPUTPREVENTSLEEP_OFFSET))(value);
		}

		static ::System::UInt32 get_NativeInputUpdateRate()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_NATIVEINPUTUPDATERATE_OFFSET))();
		}

		static ::System::Void set_NativeInputUpdateRate(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_NATIVEINPUTUPDATERATE_OFFSET))(value);
		}

		static ::System::Boolean get_EnableICade()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ENABLEICADE_OFFSET))();
		}

		static ::System::Void set_EnableICade(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ENABLEICADE_OFFSET))(value);
		}

		static ::InControl::VersionInfo get_UnityVersion()
		{
			return ((::InControl::VersionInfo(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_UNITYVERSION_OFFSET))();
		}

		static ::System::UInt64 get_CurrentTick()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_CURRENTTICK_OFFSET))();
		}

		static ::System::Single get_CurrentTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_CURRENTTIME_OFFSET))();
		}
	};
}
