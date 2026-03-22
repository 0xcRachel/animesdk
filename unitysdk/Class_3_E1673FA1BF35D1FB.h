#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartControlTimeRewindEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E1673FA1BF35D1FB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD8A8200)
#define CLASS_3_E1673FA1BF35D1FB__CTOR_OFFSET UNITYSDK_OFFSET(0xD8A81D0)

inline static constexpr unsigned int Class_3_E1673FA1BF35D1FB_TypeDefinitionIndex = 42182;

class Class_3_E1673FA1BF35D1FB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartControlTimeRewindEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartControlTimeRewindEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartControlTimeRewindEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E1673FA1BF35D1FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1673FA1BF35D1FB_ONTASKBEGIN_OFFSET))(this);
	}
};
