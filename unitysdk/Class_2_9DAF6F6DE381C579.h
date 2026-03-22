#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitOwedRollCount; }

#define CLASS_2_9DAF6F6DE381C579_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1606ED50)
#define CLASS_2_9DAF6F6DE381C579__CTOR_OFFSET UNITYSDK_OFFSET(0x1606ED40)

inline static constexpr unsigned int Class_2_9DAF6F6DE381C579_TypeDefinitionIndex = 27694;

class Class_2_9DAF6F6DE381C579 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_9DAF6F6DE381C579__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DAF6F6DE381C579_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
