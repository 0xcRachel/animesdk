#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class SwordTrainingCheckIfGameStarted; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_03D383319883919D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2DF520)
#define CLASS_2_03D383319883919D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2DF340)
#define CLASS_2_03D383319883919D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2DF4B0)
#define CLASS_2_03D383319883919D_TICK_OFFSET UNITYSDK_OFFSET(0xC2DF590)
#define CLASS_2_03D383319883919D__CTOR_OFFSET UNITYSDK_OFFSET(0xC2DF230)

inline static constexpr unsigned int Class_2_03D383319883919D_TypeDefinitionIndex = 51352;

class Class_2_03D383319883919D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwordTrainingCheckIfGameStarted* Field_2_0; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingCheckIfGameStarted* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingCheckIfGameStarted*))((::PBYTE)hIl2Cpp + CLASS_2_03D383319883919D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03D383319883919D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03D383319883919D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03D383319883919D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03D383319883919D_TICK_OFFSET))(this, a1);
	}
};
