#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceManager.h"

#define INCONTROL_OUYAEVERYWHEREDEVICEMANAGER_ENABLE_OFFSET UNITYSDK_OFFSET(0x13BCD580)
#define INCONTROL_OUYAEVERYWHEREDEVICEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x13BCD250)
#define INCONTROL_OUYAEVERYWHEREDEVICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCD100)

namespace InControl
{
	inline static constexpr unsigned int OuyaEverywhereDeviceManager_TypeDefinitionIndex = 37178;

	class OuyaEverywhereDeviceManager : public ::InControl::InputDeviceManager
	{
	public:
		::Il2CppArray<::System::Boolean>* deviceConnected; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICEMANAGER_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		static ::System::Void Enable()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICEMANAGER_ENABLE_OFFSET))();
		}
	};
}
