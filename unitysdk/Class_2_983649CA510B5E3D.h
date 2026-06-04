#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PressureSwitchBaseSystem_1.h"

class Class_1_2CDF619C23140440;
class Class_2_B8E38BF47138A2E5;
class Class_3_D6E9A038FA23103A;

#define CLASS_2_983649CA510B5E3D__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x150C4800)
#define CLASS_2_983649CA510B5E3D__CTOR_OFFSET UNITYSDK_OFFSET(0x150C4520)
#define CLASS_2_983649CA510B5E3D__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x150C4A30)
#define CLASS_2_983649CA510B5E3D__ONTRIGGEROUT_OFFSET UNITYSDK_OFFSET(0x150C4B70)
#define CLASS_2_983649CA510B5E3D__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x150C4740)
#define CLASS_2_983649CA510B5E3D___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x150C4C20)

inline static constexpr unsigned int Class_2_983649CA510B5E3D_TypeDefinitionIndex = 71337;

class Class_2_983649CA510B5E3D : public ::RPG::Client::LittleGame::FiveDim::PressureSwitchBaseSystem_1<::Class_2_B8E38BF47138A2E5*>
{
public:
	::Class_1_2CDF619C23140440* Field_2_0; // 0x40
	::Class_3_D6E9A038FA23103A* Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_2_983649CA510B5E3D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_983649CA510B5E3D__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateTrigger(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_983649CA510B5E3D__CREATETRIGGER_OFFSET))(this, a1);
	}

	::Class_2_B8E38BF47138A2E5* _GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_B8E38BF47138A2E5*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_983649CA510B5E3D__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::System::Void _OnTriggerOut(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_983649CA510B5E3D__ONTRIGGEROUT_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_983649CA510B5E3D___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}
};
