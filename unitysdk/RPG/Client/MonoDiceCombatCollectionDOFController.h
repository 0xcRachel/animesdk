#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::CustomRP { class RPGDepthOfField; }

#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xBF47E50)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_METHOD_5_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xBF47DE0)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBF47F90)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xBF47C10)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xBF47D30)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBF48140)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDiceCombatCollectionDOFController_TypeDefinitionIndex = 58559;

	class MonoDiceCombatCollectionDOFController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single FocusDistance; // 0x18
		::System::Single FStop; // 0x1C
		::System::Single SensorWidth; // 0x20
		::System::Single Field_5_3; // 0x24
		::System::Single Field_5_4; // 0x28
		::System::Single Field_5_5; // 0x2C
		::RPG::CustomRP::RPGDepthOfField* Field_5_6; // 0x30
		::System::Boolean Field_5_7; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Boolean Method_5_4DA6D4A624E42CAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_METHOD_5_4DA6D4A624E42CAB_OFFSET))(this);
		}
	};
}
