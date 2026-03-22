#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_ModifyOwedRollCount; }

#define CLASS_2_6899AC1730D3975D_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x15FC2030)
#define CLASS_2_6899AC1730D3975D__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC2020)

inline static constexpr unsigned int Class_2_6899AC1730D3975D_TypeDefinitionIndex = 27695;

class Class_2_6899AC1730D3975D : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount* Field_2_0; // 0x18
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_6899AC1730D3975D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6899AC1730D3975D_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
