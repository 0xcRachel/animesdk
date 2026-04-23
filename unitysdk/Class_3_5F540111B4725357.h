#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FormationMoveSetStreamSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5F540111B4725357_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1245A920)
#define CLASS_3_5F540111B4725357__CTOR_OFFSET UNITYSDK_OFFSET(0x1245A8F0)

inline static constexpr unsigned int Class_3_5F540111B4725357_TypeDefinitionIndex = 53619;

class Class_3_5F540111B4725357 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FormationMoveSetStreamSpeed*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveSetStreamSpeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveSetStreamSpeed*))((::PBYTE)hIl2Cpp + CLASS_3_5F540111B4725357__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F540111B4725357_ONTASKBEGIN_OFFSET))(this);
	}
};
