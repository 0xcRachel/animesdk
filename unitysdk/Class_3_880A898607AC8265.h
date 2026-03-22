#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C030CA5DC0A059D4.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_880A898607AC8265_METHOD_3_108241A2FA85E7E9_OFFSET UNITYSDK_OFFSET(0x10084DF0)
#define CLASS_3_880A898607AC8265_METHOD_3_1E01B0A97CB45672_OFFSET UNITYSDK_OFFSET(0x10084D80)
#define CLASS_3_880A898607AC8265_METHOD_3_314529EC8BCA8BB3_OFFSET UNITYSDK_OFFSET(0x10084000)
#define CLASS_3_880A898607AC8265_METHOD_3_366BD3C692610EBF_OFFSET UNITYSDK_OFFSET(0x100846D0)
#define CLASS_3_880A898607AC8265_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x10084E00)
#define CLASS_3_880A898607AC8265_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x10084D10)
#define CLASS_3_880A898607AC8265_METHOD_3_C007C448BB32A3C7_OFFSET UNITYSDK_OFFSET(0x10084090)
#define CLASS_3_880A898607AC8265__CTOR_OFFSET UNITYSDK_OFFSET(0x10084D60)

inline static constexpr unsigned int Class_3_880A898607AC8265_TypeDefinitionIndex = 60756;

class Class_3_880A898607AC8265 : public ::Class_2_C030CA5DC0A059D4
{
public:
	::System::Boolean Field_3_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_314529EC8BCA8BB3(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_314529EC8BCA8BB3_OFFSET))(this, a1);
	}

	::System::Void Method_3_C007C448BB32A3C7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_C007C448BB32A3C7_OFFSET))(this, a1);
	}

	::System::Void Method_3_366BD3C692610EBF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_366BD3C692610EBF_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_1E01B0A97CB45672(::RPG::Client::LittleGame::FiveDim::PropMoveState P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_1E01B0A97CB45672_OFFSET))(this, P0);
	}

	::System::Void Method_3_108241A2FA85E7E9(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_108241A2FA85E7E9_OFFSET))(this, P0);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
