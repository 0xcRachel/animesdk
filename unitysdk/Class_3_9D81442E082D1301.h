#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_TriggerEffect; }

#define CLASS_3_9D81442E082D1301_METHOD_3_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x10C58AE0)
#define CLASS_3_9D81442E082D1301_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10C59070)
#define CLASS_3_9D81442E082D1301__CTOR_OFFSET UNITYSDK_OFFSET(0x10C59050)

inline static constexpr unsigned int Class_3_9D81442E082D1301_TypeDefinitionIndex = 54536;

class Class_3_9D81442E082D1301 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_TriggerEffect*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D81442E082D1301__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D81442E082D1301_METHOD_3_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D81442E082D1301_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
