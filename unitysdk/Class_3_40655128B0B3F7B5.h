#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AbortModifierPhasePerform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_40655128B0B3F7B5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9457AA0)
#define CLASS_3_40655128B0B3F7B5__CTOR_OFFSET UNITYSDK_OFFSET(0x9457A70)

inline static constexpr unsigned int Class_3_40655128B0B3F7B5_TypeDefinitionIndex = 42806;

class Class_3_40655128B0B3F7B5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AbortModifierPhasePerform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AbortModifierPhasePerform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AbortModifierPhasePerform*))((::PBYTE)hIl2Cpp + CLASS_3_40655128B0B3F7B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_40655128B0B3F7B5_ONTASKBEGIN_OFFSET))(this);
	}
};
