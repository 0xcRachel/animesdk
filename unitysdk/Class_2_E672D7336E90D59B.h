#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_347;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace RPG::GameCore { class WaitTurnCount; }

#define CLASS_2_E672D7336E90D59B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x858D530)
#define CLASS_2_E672D7336E90D59B_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x858D790)
#define CLASS_2_E672D7336E90D59B_METHOD_2_8195634BB4648E50_OFFSET UNITYSDK_OFFSET(0x858DDB0)
#define CLASS_2_E672D7336E90D59B_METHOD_2_B0AB14A553A955E1_OFFSET UNITYSDK_OFFSET(0x858DB90)
#define CLASS_2_E672D7336E90D59B_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x858DAF0)
#define CLASS_2_E672D7336E90D59B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x858D650)
#define CLASS_2_E672D7336E90D59B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x858D960)
#define CLASS_2_E672D7336E90D59B_TICK_OFFSET UNITYSDK_OFFSET(0x858D9B0)
#define CLASS_2_E672D7336E90D59B__CTOR_OFFSET UNITYSDK_OFFSET(0x858D4A0)

inline static constexpr unsigned int Class_2_E672D7336E90D59B_TypeDefinitionIndex = 46523;

class Class_2_E672D7336E90D59B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_4; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::WaitTurnCount* Field_2_0; // 0x28
	::System::UInt32 Field_2_2; // 0x30
	::System::UInt32 Field_2_3; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTurnCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTurnCount*))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B0AB14A553A955E1(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_METHOD_2_B0AB14A553A955E1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::UInt32 Method_2_8195634BB4648E50(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_METHOD_2_8195634BB4648E50_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672D7336E90D59B_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}
};
