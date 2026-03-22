#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
class Class_3_C270952194C1A3FA_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EE18388F80792C67_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A3BA60)
#define CLASS_2_EE18388F80792C67_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8A3C110)
#define CLASS_2_EE18388F80792C67_1_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x8A3C1B0)
#define CLASS_2_EE18388F80792C67_1_METHOD_2_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x8A3C280)
#define CLASS_2_EE18388F80792C67_1_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8A3BFB0)
#define CLASS_2_EE18388F80792C67_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A3BAF0)
#define CLASS_2_EE18388F80792C67_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8A3BD20)
#define CLASS_2_EE18388F80792C67_1_TICK_OFFSET UNITYSDK_OFFSET(0x8A3C030)
#define CLASS_2_EE18388F80792C67_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8A3B960)

inline static constexpr unsigned int Class_2_EE18388F80792C67_1_TypeDefinitionIndex = 41699;

class Class_2_EE18388F80792C67_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_C270952194C1A3FA_1* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C270952194C1A3FA_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C270952194C1A3FA_1*))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::System::Boolean Method_2_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_METHOD_2_8A76897D6A693475_OFFSET))(this);
	}
};
