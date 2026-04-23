#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ResetRedStance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E4D20CE6B6485AD3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C7B480)
#define CLASS_2_E4D20CE6B6485AD3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12C7B4C0)
#define CLASS_2_E4D20CE6B6485AD3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12C7B660)
#define CLASS_2_E4D20CE6B6485AD3_TICK_OFFSET UNITYSDK_OFFSET(0x12C7B6B0)
#define CLASS_2_E4D20CE6B6485AD3__CTOR_OFFSET UNITYSDK_OFFSET(0x12C7B470)

inline static constexpr unsigned int Class_2_E4D20CE6B6485AD3_TypeDefinitionIndex = 51003;

class Class_2_E4D20CE6B6485AD3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ResetRedStance* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetRedStance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetRedStance*))((::PBYTE)hIl2Cpp + CLASS_2_E4D20CE6B6485AD3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4D20CE6B6485AD3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4D20CE6B6485AD3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4D20CE6B6485AD3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4D20CE6B6485AD3_TICK_OFFSET))(this, a1);
	}
};
