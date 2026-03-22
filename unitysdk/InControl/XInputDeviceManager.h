#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceManager.h"
#include "unitysdk/XInputDotNetPure/GamePadState.h"

namespace InControl::Internal { template <typename T> class RingBuffer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Threading { class Thread; }

#define INCONTROL_XINPUTDEVICEMANAGER_CHECKPLATFORMSUPPORT_OFFSET UNITYSDK_OFFSET(0x156179B0)
#define INCONTROL_XINPUTDEVICEMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x15617950)
#define INCONTROL_XINPUTDEVICEMANAGER_ENABLE_OFFSET UNITYSDK_OFFSET(0x15617AD0)
#define INCONTROL_XINPUTDEVICEMANAGER_GETSTATE_OFFSET UNITYSDK_OFFSET(0x15616260)
#define INCONTROL_XINPUTDEVICEMANAGER_STARTWORKER_OFFSET UNITYSDK_OFFSET(0x156167A0)
#define INCONTROL_XINPUTDEVICEMANAGER_STOPWORKER_OFFSET UNITYSDK_OFFSET(0x15616A80)
#define INCONTROL_XINPUTDEVICEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15616850)
#define INCONTROL_XINPUTDEVICEMANAGER_WORKER_OFFSET UNITYSDK_OFFSET(0x15616AE0)
#define INCONTROL_XINPUTDEVICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15616300)

namespace InControl
{
	inline static constexpr unsigned int XInputDeviceManager_TypeDefinitionIndex = 30629;

	class XInputDeviceManager : public ::InControl::InputDeviceManager
	{
	public:
		// static const ::System::Int32 maxDevices = 0x4; // 0x0
		::Il2CppArray<::InControl::Internal::RingBuffer_1<::XInputDotNetPure::GamePadState>*>* gamePadState; // 0x18
		::Il2CppArray<::System::Boolean>* deviceConnected; // 0x20
		::System::Threading::Thread* thread; // 0x28
		::System::Int32 bufferSize; // 0x30
		::System::Int32 timeStep; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void StartWorker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_STARTWORKER_OFFSET))(this);
		}

		::System::Void StopWorker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_STOPWORKER_OFFSET))(this);
		}

		::System::Void Worker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_WORKER_OFFSET))(this);
		}

		::XInputDotNetPure::GamePadState GetState(::System::Int32 deviceIndex)
		{
			return ((::XInputDotNetPure::GamePadState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_GETSTATE_OFFSET))(this, deviceIndex);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_DESTROY_OFFSET))(this);
		}

		static ::System::Boolean CheckPlatformSupport(::System::Collections::Generic::ICollection_1<::System::String*>* errors)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::ICollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_CHECKPLATFORMSUPPORT_OFFSET))(errors);
		}

		static ::System::Void Enable()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_ENABLE_OFFSET))();
		}
	};
}
