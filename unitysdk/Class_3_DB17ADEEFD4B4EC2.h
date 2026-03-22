#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Flip; }

#define CLASS_3_DB17ADEEFD4B4EC2_METHOD_3_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x84423E0)
#define CLASS_3_DB17ADEEFD4B4EC2_METHOD_3_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x8442500)
#define CLASS_3_DB17ADEEFD4B4EC2_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x84426F0)
#define CLASS_3_DB17ADEEFD4B4EC2_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8442750)
#define CLASS_3_DB17ADEEFD4B4EC2__CTOR_OFFSET UNITYSDK_OFFSET(0x84426D0)

inline static constexpr unsigned int Class_3_DB17ADEEFD4B4EC2_TypeDefinitionIndex = 54534;

class Class_3_DB17ADEEFD4B4EC2 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Flip*>
{
public:
	::System::Single Field_3_1; // 0x28
	::System::Int32 Field_3_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB17ADEEFD4B4EC2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB17ADEEFD4B4EC2_METHOD_3_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_3_2898E3EC91BCF259(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DB17ADEEFD4B4EC2_METHOD_3_2898E3EC91BCF259_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB17ADEEFD4B4EC2_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DB17ADEEFD4B4EC2_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
