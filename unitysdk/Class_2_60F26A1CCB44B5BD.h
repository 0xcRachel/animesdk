#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/GarbageBinState.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SimpleStateMachine_2.h"

class Class_1_47F523CB5C537A8A_2;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;

#define CLASS_2_60F26A1CCB44B5BD_CLEAR_OFFSET UNITYSDK_OFFSET(0xA48D310)
#define CLASS_2_60F26A1CCB44B5BD_METHOD_2_6680A386F14A64DF_OFFSET UNITYSDK_OFFSET(0xA48D120)
#define CLASS_2_60F26A1CCB44B5BD_SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0xA48D390)
#define CLASS_2_60F26A1CCB44B5BD__CTOR_OFFSET UNITYSDK_OFFSET(0xA48D4E0)
#define CLASS_2_60F26A1CCB44B5BD___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA48D500)

inline static constexpr unsigned int Class_2_60F26A1CCB44B5BD_TypeDefinitionIndex = 60787;

class Class_2_60F26A1CCB44B5BD : public ::RPG::Client::LittleGame::FiveDim::SimpleStateMachine_2<::RPG::Client::LittleGame::FiveDim::GarbageBinState, ::Class_1_47F523CB5C537A8A_2*>
{
public:
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x28
	::Class_2_9DD8A46984F1AFFD* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60F26A1CCB44B5BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6680A386F14A64DF(::Class_2_9DD8A46984F1AFFD* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_60F26A1CCB44B5BD_METHOD_2_6680A386F14A64DF_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60F26A1CCB44B5BD_CLEAR_OFFSET))(this);
	}

	::System::Boolean SwitchState(::RPG::Client::LittleGame::FiveDim::GarbageBinState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::GarbageBinState))((::PBYTE)hIl2Cpp + CLASS_2_60F26A1CCB44B5BD_SWITCHSTATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60F26A1CCB44B5BD___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
