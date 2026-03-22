#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_347;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRelayFlameEventListener; }

#define CLASS_2_753B893C49AF40A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFD6DD00)
#define CLASS_2_753B893C49AF40A3_METHOD_2_5F3AE37087DCC4E1_OFFSET UNITYSDK_OFFSET(0xFD6E020)
#define CLASS_2_753B893C49AF40A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFD6DBC0)
#define CLASS_2_753B893C49AF40A3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFD6DCB0)
#define CLASS_2_753B893C49AF40A3_TICK_OFFSET UNITYSDK_OFFSET(0xFD6E340)
#define CLASS_2_753B893C49AF40A3__CTOR_OFFSET UNITYSDK_OFFSET(0xFD6D4B0)

inline static constexpr unsigned int Class_2_753B893C49AF40A3_TypeDefinitionIndex = 42141;

class Class_2_753B893C49AF40A3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_5; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_15; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_2_10; // 0x28
	::RPG::GameCore::TimeRelayFlameEventListener* Field_2_1; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_2_12; // 0x38
	::Class_3_BCCE950C2E8DF1F0* Field_2_14; // 0x40
	::Class_3_BCCE950C2E8DF1F0* Field_2_9; // 0x48
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x50
	::Class_3_BCCE950C2E8DF1F0* Field_2_8; // 0x58
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x60
	::RPG::GameCore::TaskContext* Field_2_0; // 0x68
	::Class_3_BCCE950C2E8DF1F0* Field_2_6; // 0x70
	::Class_3_BCCE950C2E8DF1F0* Field_2_11; // 0x78
	::Class_3_BCCE950C2E8DF1F0* Field_2_13; // 0x80
	::Class_3_BCCE950C2E8DF1F0* Field_2_4; // 0x88
	::Class_3_BCCE950C2E8DF1F0* Field_2_7; // 0x90
	::Class_3_BCCE950C2E8DF1F0* Field_2_16; // 0x98
	::Class_3_BCCE950C2E8DF1F0* Field_2_17; // 0xA0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRelayFlameEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRelayFlameEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5F3AE37087DCC4E1(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_METHOD_2_5F3AE37087DCC4E1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_TICK_OFFSET))(this, a1);
	}
};
