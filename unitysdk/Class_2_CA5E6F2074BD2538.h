#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class PredicateToMakeFail; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CA5E6F2074BD2538_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF059490)
#define CLASS_2_CA5E6F2074BD2538_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF059520)
#define CLASS_2_CA5E6F2074BD2538_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF059840)
#define CLASS_2_CA5E6F2074BD2538_TICK_OFFSET UNITYSDK_OFFSET(0xF059A90)
#define CLASS_2_CA5E6F2074BD2538__CTOR_OFFSET UNITYSDK_OFFSET(0xF059330)

inline static constexpr unsigned int Class_2_CA5E6F2074BD2538_TypeDefinitionIndex = 50951;

class Class_2_CA5E6F2074BD2538 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PredicateToMakeFail* Field_2_2; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_3; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PredicateToMakeFail* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PredicateToMakeFail*))((::PBYTE)hIl2Cpp + CLASS_2_CA5E6F2074BD2538__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5E6F2074BD2538_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5E6F2074BD2538_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5E6F2074BD2538_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA5E6F2074BD2538_TICK_OFFSET))(this, a1);
	}
};
