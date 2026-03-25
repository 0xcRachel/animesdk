#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceInfo.h"
#include "unitysdk/InControl/InputDeviceManager.h"

namespace InControl { class InputDeviceProfile; }
namespace InControl { class NativeInputDevice; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define INCONTROL_NATIVEINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILES_OFFSET UNITYSDK_OFFSET(0x15C10C50)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILE_OFFSET UNITYSDK_OFFSET(0x15C11EB0)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_ATTACHDEVICE_OFFSET UNITYSDK_OFFSET(0x15C11BE0)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_CHECKPLATFORMSUPPORT_OFFSET UNITYSDK_OFFSET(0x15C11F00)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x15C10D90)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_DETACHDEVICE_OFFSET UNITYSDK_OFFSET(0x15C11A60)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_DETECTDEVICE_OFFSET UNITYSDK_OFFSET(0x15C115A0)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_ENABLE_OFFSET UNITYSDK_OFFSET(0x15C12310)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_FINDATTACHEDDEVICE_OFFSET UNITYSDK_OFFSET(0x15C119D0)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_FINDDETACHEDDEVICE_OFFSET UNITYSDK_OFFSET(0x15C11B00)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_SYSTEMFINDDETACHEDDEVICE_OFFSET UNITYSDK_OFFSET(0x15C11C70)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15C10E10)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C10970)

namespace InControl
{
	inline static constexpr unsigned int NativeInputDeviceManager_TypeDefinitionIndex = 31451;

	class NativeInputDeviceManager : public ::InControl::InputDeviceManager
	{
	public:
		static ::System::Func_3<::InControl::InputDeviceInfo, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::NativeInputDevice*>*, ::InControl::NativeInputDevice*>** StaticGet_CustomFindDetachedDevice()
		{
			return (::System::Func_3<::InControl::InputDeviceInfo, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::NativeInputDevice*>*, ::InControl::NativeInputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputDeviceManager_TypeDefinitionIndex)->GetStaticField(0x3E730);
		}
		::System::Collections::Generic::List_1<::InControl::InputDeviceProfile*>* customDeviceProfiles; // 0x18
		::System::Collections::Generic::List_1<::InControl::NativeInputDevice*>* detachedDevices; // 0x20
		::System::Collections::Generic::List_1<::InControl::NativeInputDevice*>* attachedDevices; // 0x28
		::Il2CppArray<::System::UInt32>* deviceEvents; // 0x30
		::System::Collections::Generic::List_1<::InControl::InputDeviceProfile*>* systemDeviceProfiles; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_DESTROY_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void DetectDevice(::System::UInt32 deviceHandle, ::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_DETECTDEVICE_OFFSET))(this, deviceHandle, deviceInfo);
		}

		::System::Void AttachDevice(::InControl::NativeInputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::NativeInputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_ATTACHDEVICE_OFFSET))(this, device);
		}

		::System::Void DetachDevice(::InControl::NativeInputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::NativeInputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_DETACHDEVICE_OFFSET))(this, device);
		}

		::InControl::NativeInputDevice* FindAttachedDevice(::System::UInt32 deviceHandle)
		{
			return ((::InControl::NativeInputDevice*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_FINDATTACHEDDEVICE_OFFSET))(this, deviceHandle);
		}

		::InControl::NativeInputDevice* FindDetachedDevice(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::InControl::NativeInputDevice*(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_FINDDETACHEDDEVICE_OFFSET))(this, deviceInfo);
		}

		static ::InControl::NativeInputDevice* SystemFindDetachedDevice(::InControl::InputDeviceInfo deviceInfo, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::NativeInputDevice*>* detachedDevices)
		{
			return ((::InControl::NativeInputDevice*(*)(::InControl::InputDeviceInfo, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::NativeInputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_SYSTEMFINDDETACHEDDEVICE_OFFSET))(deviceInfo, detachedDevices);
		}

		::System::Void AddSystemDeviceProfile(::InControl::InputDeviceProfile* deviceProfile)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILE_OFFSET))(this, deviceProfile);
		}

		::System::Void AddSystemDeviceProfiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILES_OFFSET))(this);
		}

		static ::System::Boolean CheckPlatformSupport(::System::Collections::Generic::ICollection_1<::System::String*>* errors)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::ICollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_CHECKPLATFORMSUPPORT_OFFSET))(errors);
		}

		static ::System::Boolean Enable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_ENABLE_OFFSET))();
		}
	};
}
