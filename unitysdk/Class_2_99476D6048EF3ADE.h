#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/PropState.h"

namespace RPG::GameCore { class SwitchHandCatchableStateSync; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_99476D6048EF3ADE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152D40B0)
#define CLASS_2_99476D6048EF3ADE_METHOD_2_7772626927D1F999_OFFSET UNITYSDK_OFFSET(0x152D41F0)
#define CLASS_2_99476D6048EF3ADE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152D4150)
#define CLASS_2_99476D6048EF3ADE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152D41A0)
#define CLASS_2_99476D6048EF3ADE_TICK_OFFSET UNITYSDK_OFFSET(0x152D40F0)
#define CLASS_2_99476D6048EF3ADE__CTOR_OFFSET UNITYSDK_OFFSET(0x152D40A0)

inline static constexpr unsigned int Class_2_99476D6048EF3ADE_TypeDefinitionIndex = 49160;

class Class_2_99476D6048EF3ADE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SwitchHandCatchableStateSync* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCatchableStateSync* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCatchableStateSync*))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_7772626927D1F999(::RPG::GameCore::PropState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE_METHOD_2_7772626927D1F999_OFFSET))(this, a1);
	}
};
