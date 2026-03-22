#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class LoopTargetList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B196C3DED5B5C0DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x969A5C0)
#define CLASS_2_B196C3DED5B5C0DD_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x969A810)
#define CLASS_2_B196C3DED5B5C0DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x969A630)
#define CLASS_2_B196C3DED5B5C0DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x969A9A0)
#define CLASS_2_B196C3DED5B5C0DD_TICK_OFFSET UNITYSDK_OFFSET(0x969A9F0)
#define CLASS_2_B196C3DED5B5C0DD__CTOR_OFFSET UNITYSDK_OFFSET(0x969A540)

inline static constexpr unsigned int Class_2_B196C3DED5B5C0DD_TypeDefinitionIndex = 43098;

class Class_2_B196C3DED5B5C0DD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::LoopTargetList* Field_2_0; // 0x28
	::System::Int32 Field_2_4; // 0x30
	::System::Int32 Field_2_3; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoopTargetList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoopTargetList*))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}
};
