#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class RequestSetServerGroupProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_D71C5C028E9C4611_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8726B60)
#define CLASS_2_D71C5C028E9C4611_METHOD_2_1B12DF9C21909797_OFFSET UNITYSDK_OFFSET(0x8726BF0)
#define CLASS_2_D71C5C028E9C4611_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8726820)
#define CLASS_2_D71C5C028E9C4611_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x87267C0)
#define CLASS_2_D71C5C028E9C4611_TICK_OFFSET UNITYSDK_OFFSET(0x8726B00)
#define CLASS_2_D71C5C028E9C4611__CTOR_OFFSET UNITYSDK_OFFSET(0x87266D0)

inline static constexpr unsigned int Class_2_D71C5C028E9C4611_TypeDefinitionIndex = 42022;

class Class_2_D71C5C028E9C4611 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RequestSetServerGroupProperty* Field_2_1; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x30
	::System::UInt32 Field_2_4; // 0x38
	::System::UInt32 Field_2_5; // 0x3C
	::System::UInt32 Field_2_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestSetServerGroupProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestSetServerGroupProperty*))((::PBYTE)hIl2Cpp + CLASS_2_D71C5C028E9C4611__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D71C5C028E9C4611_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D71C5C028E9C4611_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D71C5C028E9C4611_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D71C5C028E9C4611_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1B12DF9C21909797(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D71C5C028E9C4611_METHOD_2_1B12DF9C21909797_OFFSET))(this, a1, a2);
	}
};
