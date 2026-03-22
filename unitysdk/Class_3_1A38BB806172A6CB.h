#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6D4CF0193B1D034F.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_1A38BB806172A6CB_METHOD_3_99B29EBB10654E51_OFFSET UNITYSDK_OFFSET(0x104EC120)
#define CLASS_3_1A38BB806172A6CB_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x104EC0B0)
#define CLASS_3_1A38BB806172A6CB_METHOD_3_C422DE9CC617B43A_OFFSET UNITYSDK_OFFSET(0x104EB6D0)
#define CLASS_3_1A38BB806172A6CB__CTOR_OFFSET UNITYSDK_OFFSET(0x104EC100)

inline static constexpr unsigned int Class_3_1A38BB806172A6CB_TypeDefinitionIndex = 60735;

class Class_3_1A38BB806172A6CB : public ::Class_2_6D4CF0193B1D034F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A38BB806172A6CB__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_C422DE9CC617B43A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1A38BB806172A6CB_METHOD_3_C422DE9CC617B43A_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A38BB806172A6CB_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_99B29EBB10654E51(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1A38BB806172A6CB_METHOD_3_99B29EBB10654E51_OFFSET))(this, P0);
	}
};
