#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_347;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class AvdMonitorPlayerRun; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_0466D90D45BB9334_DISPOSE_OFFSET UNITYSDK_OFFSET(0x110674D0)
#define CLASS_2_0466D90D45BB9334_METHOD_2_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x11067850)
#define CLASS_2_0466D90D45BB9334_METHOD_2_8EFA7AE8C875AA71_OFFSET UNITYSDK_OFFSET(0x11067CC0)
#define CLASS_2_0466D90D45BB9334_METHOD_2_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0x110679E0)
#define CLASS_2_0466D90D45BB9334_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x110675D0)
#define CLASS_2_0466D90D45BB9334_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11067740)
#define CLASS_2_0466D90D45BB9334_TICK_OFFSET UNITYSDK_OFFSET(0x110677D0)
#define CLASS_2_0466D90D45BB9334__CTOR_OFFSET UNITYSDK_OFFSET(0x11067440)

inline static constexpr unsigned int Class_2_0466D90D45BB9334_TypeDefinitionIndex = 41499;

class Class_2_0466D90D45BB9334 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* Field_2_3; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::RPG::GameCore::AvdMonitorPlayerRun* Field_2_1; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x30
	::System::Boolean Field_2_6; // 0x38
	::System::UInt32 Field_2_4; // 0x3C
	::System::Single Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AvdMonitorPlayerRun* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AvdMonitorPlayerRun*))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E6451DD1ECA91329(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_METHOD_2_E6451DD1ECA91329_OFFSET))(this, a1);
	}

	::System::Void Method_2_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_METHOD_2_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Void Method_2_8EFA7AE8C875AA71(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_METHOD_2_8EFA7AE8C875AA71_OFFSET))(this, a1);
	}
};
