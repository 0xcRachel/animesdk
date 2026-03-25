#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerUINotify; }

#define CLASS_3_CD66D533C7982AB4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B6EC00)
#define CLASS_3_CD66D533C7982AB4__CTOR_OFFSET UNITYSDK_OFFSET(0x8B6EBD0)

inline static constexpr unsigned int Class_3_CD66D533C7982AB4_TypeDefinitionIndex = 45412;

class Class_3_CD66D533C7982AB4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerUINotify*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerUINotify* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerUINotify*))((::PBYTE)hIl2Cpp + CLASS_3_CD66D533C7982AB4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD66D533C7982AB4_ONTASKBEGIN_OFFSET))(this);
	}
};
