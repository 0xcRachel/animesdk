#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9565A521AED72D96.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_55230CEF110DAF7B_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x91F5AF0)
#define CLASS_3_55230CEF110DAF7B__CTOR_OFFSET UNITYSDK_OFFSET(0x91F5B40)

inline static constexpr unsigned int Class_3_55230CEF110DAF7B_TypeDefinitionIndex = 60730;

class Class_3_55230CEF110DAF7B : public ::Class_2_9565A521AED72D96
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55230CEF110DAF7B__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55230CEF110DAF7B_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
