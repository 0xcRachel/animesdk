#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdvCharacterSteerToInputDir; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C4C7F264BF75BC99_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109CD600)
#define CLASS_2_C4C7F264BF75BC99_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x109CD640)
#define CLASS_2_C4C7F264BF75BC99_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x109CDE30)
#define CLASS_2_C4C7F264BF75BC99_TICK_OFFSET UNITYSDK_OFFSET(0x109CD850)
#define CLASS_2_C4C7F264BF75BC99__CTOR_OFFSET UNITYSDK_OFFSET(0x109CD5B0)

inline static constexpr unsigned int Class_2_C4C7F264BF75BC99_TypeDefinitionIndex = 42355;

class Class_2_C4C7F264BF75BC99 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_6; // 0x18
	::RPG::GameCore::AdvCharacterSteerToInputDir* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::System::Boolean Field_2_3; // 0x30
	::UnityEngine::Vector3 Field_2_5; // 0x34
	::System::Single Field_2_4; // 0x40
	::System::Int32 Field_2_2; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCharacterSteerToInputDir* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCharacterSteerToInputDir*))((::PBYTE)hIl2Cpp + CLASS_2_C4C7F264BF75BC99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4C7F264BF75BC99_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4C7F264BF75BC99_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4C7F264BF75BC99_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C4C7F264BF75BC99_TICK_OFFSET))(this, a1);
	}
};
