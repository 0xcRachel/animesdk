#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowUltraSkillAlternative; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_47DFEC9BD42C894E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDED30E0)
#define CLASS_2_47DFEC9BD42C894E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDED3120)
#define CLASS_2_47DFEC9BD42C894E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDED31A0)
#define CLASS_2_47DFEC9BD42C894E_TICK_OFFSET UNITYSDK_OFFSET(0xDED31F0)
#define CLASS_2_47DFEC9BD42C894E__CTOR_OFFSET UNITYSDK_OFFSET(0xDED30D0)

inline static constexpr unsigned int Class_2_47DFEC9BD42C894E_TypeDefinitionIndex = 44334;

class Class_2_47DFEC9BD42C894E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowUltraSkillAlternative* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowUltraSkillAlternative* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowUltraSkillAlternative*))((::PBYTE)hIl2Cpp + CLASS_2_47DFEC9BD42C894E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47DFEC9BD42C894E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47DFEC9BD42C894E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47DFEC9BD42C894E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47DFEC9BD42C894E_TICK_OFFSET))(this, a1);
	}
};
