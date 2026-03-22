#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CrystalState.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_2.h"
#include "unitysdk/System/ValueType.h"

class Class_2_9DD8A46984F1AFFD;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { template <typename T> class Action_1; }

#define STRUCT_2_24E93A201D51FFD4_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x2013610)
#define STRUCT_2_24E93A201D51FFD4_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x20135A0)

inline static constexpr unsigned int Struct_2_24E93A201D51FFD4_TypeDefinitionIndex = 32606;

struct alignas(8) Struct_2_24E93A201D51FFD4
{
	::System::Boolean Field_2_0; // 0x10
	::RPG::Client::LittleGame::FiveDim::CrystalState Field_2_1; // 0x14
	::RPG::PoolList_1<::System::Int32>* Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x20
	::System::Action_1<::Class_2_9DD8A46984F1AFFD*>* Field_2_4; // 0x28
	::System::Single Field_2_5; // 0x30
	::RPG::Client::LittleGame::FiveDim::CrystalState Field_2_6; // 0x34
	::RPG::GCFreeClosure::ClosureEvent_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::Client::LittleGame::FiveDim::CrystalState> Field_2_7; // 0x38

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_24E93A201D51FFD4_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_24E93A201D51FFD4_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
