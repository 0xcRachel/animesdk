#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_96C40A1EA5B0D62E_18_METHOD_2_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0xD21CF30)
#define CLASS_2_96C40A1EA5B0D62E_18_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xD21CFB0)
#define CLASS_2_96C40A1EA5B0D62E_18_TICK_OFFSET UNITYSDK_OFFSET(0xD21D020)
#define CLASS_2_96C40A1EA5B0D62E_18__CTOR_OFFSET UNITYSDK_OFFSET(0xD21CF20)

inline static constexpr unsigned int Class_2_96C40A1EA5B0D62E_18_TypeDefinitionIndex = 44051;

class Class_2_96C40A1EA5B0D62E_18 : public ::Class_1_20D3150E1235DCB5
{
public:
	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C436A2848092EB88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_18_METHOD_2_C436A2848092EB88_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_18_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_18_TICK_OFFSET))(this, a1);
	}
};
