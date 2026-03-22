#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_69FF5DE516C87A66;
namespace RPG::GameCore { class PropStateExecute; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_11D99A05D0F22E1B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B31F40)
#define CLASS_2_11D99A05D0F22E1B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B31FE0)
#define CLASS_2_11D99A05D0F22E1B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B32170)
#define CLASS_2_11D99A05D0F22E1B_TICK_OFFSET UNITYSDK_OFFSET(0x10B321D0)
#define CLASS_2_11D99A05D0F22E1B__CTOR_OFFSET UNITYSDK_OFFSET(0x10B31F30)

inline static constexpr unsigned int Class_2_11D99A05D0F22E1B_TypeDefinitionIndex = 42004;

class Class_2_11D99A05D0F22E1B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_1_69FF5DE516C87A66* Field_2_2; // 0x20
	::RPG::GameCore::PropStateExecute* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropStateExecute* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropStateExecute*))((::PBYTE)hIl2Cpp + CLASS_2_11D99A05D0F22E1B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11D99A05D0F22E1B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11D99A05D0F22E1B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11D99A05D0F22E1B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11D99A05D0F22E1B_TICK_OFFSET))(this, a1);
	}
};
