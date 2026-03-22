#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_347;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class QteCatchGhostRewindListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0740205D34A76652_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D4D9A0)
#define CLASS_2_0740205D34A76652_METHOD_2_5F3AE37087DCC4E1_OFFSET UNITYSDK_OFFSET(0x8D4DB60)
#define CLASS_2_0740205D34A76652_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D4D6E0)
#define CLASS_2_0740205D34A76652_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8D4D950)
#define CLASS_2_0740205D34A76652_TICK_OFFSET UNITYSDK_OFFSET(0x8D4E0E0)
#define CLASS_2_0740205D34A76652__CTOR_OFFSET UNITYSDK_OFFSET(0x8D4D430)

inline static constexpr unsigned int Class_2_0740205D34A76652_TypeDefinitionIndex = 42011;

class Class_2_0740205D34A76652 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_5; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_6; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_2_4; // 0x38
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x40
	::Class_3_BCCE950C2E8DF1F0* Field_2_7; // 0x48
	::RPG::GameCore::QteCatchGhostRewindListener* Field_2_1; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QteCatchGhostRewindListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QteCatchGhostRewindListener*))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5F3AE37087DCC4E1(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_METHOD_2_5F3AE37087DCC4E1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0740205D34A76652_TICK_OFFSET))(this, a1);
	}
};
