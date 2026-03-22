#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class InitGridFightStatisticsBinding; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9AAA4013542E2717_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFF11940)
#define CLASS_3_9AAA4013542E2717__CTOR_OFFSET UNITYSDK_OFFSET(0xFF118B0)

inline static constexpr unsigned int Class_3_9AAA4013542E2717_TypeDefinitionIndex = 43068;

class Class_3_9AAA4013542E2717 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InitGridFightStatisticsBinding*>
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitGridFightStatisticsBinding* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitGridFightStatisticsBinding*))((::PBYTE)hIl2Cpp + CLASS_3_9AAA4013542E2717__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AAA4013542E2717_ONTASKBEGIN_OFFSET))(this);
	}
};
