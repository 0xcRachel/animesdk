#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6D4CF0193B1D034F.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_55230CEF110DAF7B_2_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x8D13A50)
#define CLASS_3_55230CEF110DAF7B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8D13AA0)

inline static constexpr unsigned int Class_3_55230CEF110DAF7B_2_TypeDefinitionIndex = 60737;

class Class_3_55230CEF110DAF7B_2 : public ::Class_2_6D4CF0193B1D034F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55230CEF110DAF7B_2__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55230CEF110DAF7B_2_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
