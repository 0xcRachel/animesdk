#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9565A521AED72D96.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_8FF250B11CA33FA4_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8660A60)
#define CLASS_3_8FF250B11CA33FA4_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x86609F0)
#define CLASS_3_8FF250B11CA33FA4_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x8660980)
#define CLASS_3_8FF250B11CA33FA4__CTOR_OFFSET UNITYSDK_OFFSET(0x8660A40)

inline static constexpr unsigned int Class_3_8FF250B11CA33FA4_TypeDefinitionIndex = 60729;

class Class_3_8FF250B11CA33FA4 : public ::Class_2_9565A521AED72D96
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
