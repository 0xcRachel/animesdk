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

#define INCONTROL_INPUTMANAGER_ADDDEVICEMANAGER_OFFSET UNITYSDK_OFFSET(0x15475930)
#define INCONTROL_INPUTMANAGER_ADD_ONACTIVEDEVICECHANGED_OFFSET UNITYSDK_OFFSET(0x15474090)
#define INCONTROL_INPUTMANAGER_ADD_ONCOMMITDEVICES_OFFSET UNITYSDK_OFFSET(0x15474310)
#define INCONTROL_INPUTMANAGER_ADD_ONDEVICEATTACHED_OFFSET UNITYSDK_OFFSET(0x15473E10)
#define INCONTROL_INPUTMANAGER_ADD_ONDEVICEDETACHED_OFFSET UNITYSDK_OFFSET(0x15473F50)
#define INCONTROL_INPUTMANAGER_ADD_ONRESET_OFFSET UNITYSDK_OFFSET(0x15473CD0)
#define INCONTROL_INPUTMANAGER_ADD_ONSETUP_OFFSET UNITYSDK_OFFSET(0x15473A50)
#define INCONTROL_INPUTMANAGER_ADD_ONUPDATEDEVICES_OFFSET UNITYSDK_OFFSET(0x154741D0)
#define INCONTROL_INPUTMANAGER_ADD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15473B90)
#define INCONTROL_INPUTMANAGER_ASSERTISSETUP_OFFSET UNITYSDK_OFFSET(0x15474B50)
#define INCONTROL_INPUTMANAGER_ATTACHDEVICE_OFFSET UNITYSDK_OFFSET(0x15475C40)
#define INCONTROL_INPUTMANAGER_ATTACHPLAYERACTIONSET_OFFSET UNITYSDK_OFFSET(0x154763A0)
#define INCONTROL_INPUTMANAGER_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x15475730)
#define INCONTROL_INPUTMANAGER_COMMITDEVICES_OFFSET UNITYSDK_OFFSET(0x15474F10)
#define INCONTROL_INPUTMANAGER_DESTROYDEVICEMANAGERS_OFFSET UNITYSDK_OFFSET(0x154747B0)
#define INCONTROL_INPUTMANAGER_DESTROYDEVICES_OFFSET UNITYSDK_OFFSET(0x15474980)
#define INCONTROL_INPUTMANAGER_DETACHDEVICE_OFFSET UNITYSDK_OFFSET(0x15475FB0)
#define INCONTROL_INPUTMANAGER_DETACHPLAYERACTIONSET_OFFSET UNITYSDK_OFFSET(0x15476460)
#define INCONTROL_INPUTMANAGER_GET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x15465CC0)
#define INCONTROL_INPUTMANAGER_GET_ANYKEYISPRESSED_OFFSET UNITYSDK_OFFSET(0x154764C0)
#define INCONTROL_INPUTMANAGER_GET_APPLICATIONISFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x15474680)
#define INCONTROL_INPUTMANAGER_GET_COMMANDWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15474450)
#define INCONTROL_INPUTMANAGER_GET_CURRENTTICK_OFFSET UNITYSDK_OFFSET(0x15477500)
#define INCONTROL_INPUTMANAGER_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x15477540)
#define INCONTROL_INPUTMANAGER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x15476EC0)
#define INCONTROL_INPUTMANAGER_GET_ENABLEICADE_OFFSET UNITYSDK_OFFSET(0x15477360)
#define INCONTROL_INPUTMANAGER_GET_ENABLENATIVEINPUT_OFFSET UNITYSDK_OFFSET(0x15477010)
#define INCONTROL_INPUTMANAGER_GET_ENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x15477080)
#define INCONTROL_INPUTMANAGER_GET_INVERTYAXIS_OFFSET UNITYSDK_OFFSET(0x154744C0)
#define INCONTROL_INPUTMANAGER_GET_ISSETUP_OFFSET UNITYSDK_OFFSET(0x15474530)
#define INCONTROL_INPUTMANAGER_GET_KEYBOARDPROVIDER_OFFSET UNITYSDK_OFFSET(0x15474610)
#define INCONTROL_INPUTMANAGER_GET_MENUWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15474760)
#define INCONTROL_INPUTMANAGER_GET_MOUSEPROVIDER_OFFSET UNITYSDK_OFFSET(0x154745A0)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTENABLEMFI_OFFSET UNITYSDK_OFFSET(0x15477220)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x154771B0)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTPREVENTSLEEP_OFFSET UNITYSDK_OFFSET(0x15477290)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x15477300)
#define INCONTROL_INPUTMANAGER_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x154746F0)
#define INCONTROL_INPUTMANAGER_GET_SUSPENDINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x15476FA0)
#define INCONTROL_INPUTMANAGER_GET_UNITYVERSION_OFFSET UNITYSDK_OFFSET(0x154773D0)
#define INCONTROL_INPUTMANAGER_GET_XINPUTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x15477150)
#define INCONTROL_INPUTMANAGER_GET_XINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x154770F0)
#define INCONTROL_INPUTMANAGER_HIDEDEVICESWITHPROFILE_OFFSET UNITYSDK_OFFSET(0x154762C0)
#define INCONTROL_INPUTMANAGER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x15467C90)
#define INCONTROL_INPUTMANAGER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x15467D70)
#define INCONTROL_INPUTMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x15467DE0)
#define INCONTROL_INPUTMANAGER_ONLEVELWASLOADED_OFFSET UNITYSDK_OFFSET(0x15467E80)
#define INCONTROL_INPUTMANAGER_RELOAD_OFFSET UNITYSDK_OFFSET(0x15475480)
#define INCONTROL_INPUTMANAGER_REMOVE_ONACTIVEDEVICECHANGED_OFFSET UNITYSDK_OFFSET(0x15474130)
#define INCONTROL_INPUTMANAGER_REMOVE_ONCOMMITDEVICES_OFFSET UNITYSDK_OFFSET(0x154743B0)
#define INCONTROL_INPUTMANAGER_REMOVE_ONDEVICEATTACHED_OFFSET UNITYSDK_OFFSET(0x15473EB0)
#define INCONTROL_INPUTMANAGER_REMOVE_ONDEVICEDETACHED_OFFSET UNITYSDK_OFFSET(0x15473FF0)
#define INCONTROL_INPUTMANAGER_REMOVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x15473D70)
#define INCONTROL_INPUTMANAGER_REMOVE_ONSETUP_OFFSET UNITYSDK_OFFSET(0x15473AF0)
#define INCONTROL_INPUTMANAGER_REMOVE_ONUPDATEDEVICES_OFFSET UNITYSDK_OFFSET(0x15474270)
#define INCONTROL_INPUTMANAGER_REMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15473C30)
#define INCONTROL_INPUTMANAGER_RESETINTERNAL_OFFSET UNITYSDK_OFFSET(0x15467230)
#define INCONTROL_INPUTMANAGER_SETUPINTERNAL_OFFSET UNITYSDK_OFFSET(0x15466930)
#define INCONTROL_INPUTMANAGER_SETZEROTICKONALLCONTROLS_OFFSET UNITYSDK_OFFSET(0x154754C0)
#define INCONTROL_INPUTMANAGER_SET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x15475BE0)
#define INCONTROL_INPUTMANAGER_SET_APPLICATIONISFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x154746C0)
#define INCONTROL_INPUTMANAGER_SET_COMMANDWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15474490)
#define INCONTROL_INPUTMANAGER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x15476F00)
#define INCONTROL_INPUTMANAGER_SET_ENABLEICADE_OFFSET UNITYSDK_OFFSET(0x154773A0)
#define INCONTROL_INPUTMANAGER_SET_ENABLENATIVEINPUT_OFFSET UNITYSDK_OFFSET(0x15477050)
#define INCONTROL_INPUTMANAGER_SET_ENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x154770C0)
#define INCONTROL_INPUTMANAGER_SET_INVERTYAXIS_OFFSET UNITYSDK_OFFSET(0x15474500)
#define INCONTROL_INPUTMANAGER_SET_ISSETUP_OFFSET UNITYSDK_OFFSET(0x15474570)
#define INCONTROL_INPUTMANAGER_SET_KEYBOARDPROVIDER_OFFSET UNITYSDK_OFFSET(0x15474640)
#define INCONTROL_INPUTMANAGER_SET_MOUSEPROVIDER_OFFSET UNITYSDK_OFFSET(0x154745D0)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTENABLEMFI_OFFSET UNITYSDK_OFFSET(0x15477260)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x154771F0)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTPREVENTSLEEP_OFFSET UNITYSDK_OFFSET(0x154772D0)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x15477330)
#define INCONTROL_INPUTMANAGER_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x15474720)
#define INCONTROL_INPUTMANAGER_SET_SUSPENDINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x15476FE0)
#define INCONTROL_INPUTMANAGER_SET_XINPUTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x15477180)
#define INCONTROL_INPUTMANAGER_SET_XINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x15477120)
#define INCONTROL_INPUTMANAGER_UPDATEACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x15475100)
#define INCONTROL_INPUTMANAGER_UPDATECURRENTTIME_OFFSET UNITYSDK_OFFSET(0x15474BC0)
#define INCONTROL_INPUTMANAGER_UPDATEDEVICEMANAGERS_OFFSET UNITYSDK_OFFSET(0x15474C70)
#define INCONTROL_INPUTMANAGER_UPDATEDEVICES_OFFSET UNITYSDK_OFFSET(0x15474D70)
#define INCONTROL_INPUTMANAGER_UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x154675A0)
#define INCONTROL_INPUTMANAGER_UPDATEPLAYERACTIONSETS_OFFSET UNITYSDK_OFFSET(0x15475380)
#define INCONTROL_INPUTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15474B20)
#define INCONTROL_INPUTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15477580)

namespace InControl
{
	inline static constexpr unsigned int InputManager_TypeDefinitionIndex = 30564;

	class InputManager : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::UInt64, ::System::Single>** StaticGet_OnUpdateDevices()
		{
			return (::System::Action_2<::System::UInt64, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FDD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::InControl::InputDeviceManager*>** StaticGet_deviceManagerTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::InControl::InputDeviceManager*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FDD8);
		}
		static ::System::Action_2<::System::UInt64, ::System::Single>** StaticGet_OnCommitDevices()
		{
			return (::System::Action_2<::System::UInt64, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FDE0);
		}
		static ::System::Collections::Generic::List_1<::InControl::InputDeviceManager*>** StaticGet_deviceManagers()
		{
			return (::System::Collections::Generic::List_1<::InControl::InputDeviceManager*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FDE8);
		}
		static ::System::Action_1<::InControl::InputDevice*>** StaticGet_OnDeviceDetached()
		{
			return (::System::Action_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FDF0);
		}
		static ::System::Action** StaticGet_OnSetup()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FDF8);
		}
		static ::System::Action_1<::InControl::InputDevice*>** StaticGet_OnActiveDeviceChanged()
		{
			return (::System::Action_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE00);
		}
		static ::System::String** StaticGet__Platform_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE08);
		}
		static ::System::Collections::Generic::List_1<::InControl::InputDevice*>** StaticGet_devices()
		{
			return (::System::Collections::Generic::List_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE10);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>** StaticGet_ActiveDevices()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE18);
		}
		static ::System::Collections::Generic::List_1<::InControl::PlayerActionSet*>** StaticGet_playerActionSets()
		{
			return (::System::Collections::Generic::List_1<::InControl::PlayerActionSet*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE20);
		}
		static ::System::Action** StaticGet_OnReset()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE28);
		}
		static ::InControl::IMouseProvider** StaticGet__MouseProvider_k__BackingField()
		{
			return (::InControl::IMouseProvider**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE30);
		}
		static ::InControl::IKeyboardProvider** StaticGet__KeyboardProvider_k__BackingField()
		{
			return (::InControl::IKeyboardProvider**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE38);
		}
		static ::InControl::InputDevice** StaticGet_activeDevice()
		{
			return (::InControl::InputDevice**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE40);
		}
		static ::System::Collections::Generic::List_1<::InControl::InputDevice*>** StaticGet_activeDevices()
		{
			return (::System::Collections::Generic::List_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE48);
		}
		static ::System::Action_1<::InControl::InputDevice*>** StaticGet_OnDeviceAttached()
		{
			return (::System::Action_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE50);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>** StaticGet_Devices()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE58);
		}
		static ::System::Action_2<::System::UInt64, ::System::Single>** StaticGet_OnUpdate()
		{
			return (::System::Action_2<::System::UInt64, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x2FE60);
		}
		static ::System::Boolean* StaticGet__CommandWasPressed_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB5F0);
		}
		static ::System::Boolean* StaticGet__SuspendInBackground_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB5F1);
		}
		static ::System::Boolean* StaticGet__InvertYAxis_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB5F2);
		}
		static ::System::Boolean* StaticGet_applicationIsFocused()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB5F3);
		}
		static ::System::UInt32* StaticGet__XInputBufferSize_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB5F4);
		}
		static ::System::UInt32* StaticGet__XInputUpdateRate_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB5F8);
		}
		static ::System::UInt32* StaticGet__NativeInputUpdateRate_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB5FC);
		}
		static ::System::Boolean* StaticGet__NativeInputPreventSleep_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB600);
		}
		static ::System::Boolean* StaticGet__EnableICade_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB601);
		}
		static ::System::Boolean* StaticGet_enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB602);
		}
		static ::System::Boolean* StaticGet__NativeInputEnableMFi_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB603);
		}
		static ::System::Boolean* StaticGet__NativeInputEnableXInput_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB604);
		}
		static ::System::Boolean* StaticGet__IsSetup_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB605);
		}
		static ::System::Boolean* StaticGet__EnableNativeInput_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB606);
		}
		static ::InControl::VersionInfo* StaticGet_Version()
		{
			return (::InControl::VersionInfo*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB608);
		}
		static ::System::Single* StaticGet_currentTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB618);
		}
		static ::System::Single* StaticGet_initialTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB61C);
		}
		static ::System::Single* StaticGet_lastUpdateTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB620);
		}
		static ::System::Nullable_1<::InControl::VersionInfo>* StaticGet_unityVersion()
		{
			return (::System::Nullable_1<::InControl::VersionInfo>*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB624);
		}
		static ::System::Boolean* StaticGet__EnableXInput_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB638);
		}
		static ::System::Boolean* StaticGet__ApplicationisForegroundWindow_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB639);
		}
		static ::System::UInt64* StaticGet_currentTick()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0xB640);
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
