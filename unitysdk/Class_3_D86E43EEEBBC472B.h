#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartMarblePVEChallengeMatch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D86E43EEEBBC472B_METHOD_3_AF11EB02CE78B812_OFFSET UNITYSDK_OFFSET(0x8D29150)
#define CLASS_3_D86E43EEEBBC472B_METHOD_3_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x8D28E80)
#define CLASS_3_D86E43EEEBBC472B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D28CB0)
#define CLASS_3_D86E43EEEBBC472B__CTOR_OFFSET UNITYSDK_OFFSET(0x8D28C80)

inline static constexpr unsigned int Class_3_D86E43EEEBBC472B_TypeDefinitionIndex = 42331;

class Class_3_D86E43EEEBBC472B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartMarblePVEChallengeMatch*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartMarblePVEChallengeMatch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartMarblePVEChallengeMatch*))((::PBYTE)hIl2Cpp + CLASS_3_D86E43EEEBBC472B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D86E43EEEBBC472B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D86E43EEEBBC472B_METHOD_3_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_3_AF11EB02CE78B812(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D86E43EEEBBC472B_METHOD_3_AF11EB02CE78B812_OFFSET))(this, a1);
	}
};
