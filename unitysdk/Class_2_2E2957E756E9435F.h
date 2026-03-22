#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class CharacterTriggerFreeStyle; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2E2957E756E9435F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A0E150)
#define CLASS_2_2E2957E756E9435F_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x8A0E1A0)
#define CLASS_2_2E2957E756E9435F_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x8A0EAF0)
#define CLASS_2_2E2957E756E9435F_ONSKIP_OFFSET UNITYSDK_OFFSET(0x8A0EAA0)
#define CLASS_2_2E2957E756E9435F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A0E1B0)
#define CLASS_2_2E2957E756E9435F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8A0E870)
#define CLASS_2_2E2957E756E9435F_TICK_OFFSET UNITYSDK_OFFSET(0x8A0E8C0)
#define CLASS_2_2E2957E756E9435F__CTOR_OFFSET UNITYSDK_OFFSET(0x8A0E140)

inline static constexpr unsigned int Class_2_2E2957E756E9435F_TypeDefinitionIndex = 45720;

class Class_2_2E2957E756E9435F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::MockAnimator* Field_2_3; // 0x18
	::RPG::GameCore::CharacterTriggerFreeStyle* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::RPG::GameCore::FreeStyleComponent* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterTriggerFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_2_2E2957E756E9435F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E2957E756E9435F_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E2957E756E9435F_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E2957E756E9435F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E2957E756E9435F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E2957E756E9435F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E2957E756E9435F_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E2957E756E9435F_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
