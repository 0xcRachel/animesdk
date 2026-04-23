#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CalcElevatorLoopTime; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_47AF70A4EE2AB10F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEC446D0)
#define CLASS_2_47AF70A4EE2AB10F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEC44710)
#define CLASS_2_47AF70A4EE2AB10F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEC44A00)
#define CLASS_2_47AF70A4EE2AB10F_TICK_OFFSET UNITYSDK_OFFSET(0xEC44A50)
#define CLASS_2_47AF70A4EE2AB10F__CTOR_OFFSET UNITYSDK_OFFSET(0xEC444B0)

inline static constexpr unsigned int Class_2_47AF70A4EE2AB10F_TypeDefinitionIndex = 48597;

class Class_2_47AF70A4EE2AB10F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_4; // 0x20
	::RPG::GameCore::CalcElevatorLoopTime* Field_2_0; // 0x28
	::UnityEngine::Animator* Field_2_3; // 0x30
	::System::Single Field_2_5; // 0x38
	::System::Int32 Field_2_2; // 0x3C
	::System::Int32 Field_2_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CalcElevatorLoopTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CalcElevatorLoopTime*))((::PBYTE)hIl2Cpp + CLASS_2_47AF70A4EE2AB10F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47AF70A4EE2AB10F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47AF70A4EE2AB10F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47AF70A4EE2AB10F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47AF70A4EE2AB10F_TICK_OFFSET))(this, a1);
	}
};
