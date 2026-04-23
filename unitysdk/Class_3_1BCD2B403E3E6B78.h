#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasStanceWeakPreview; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1BCD2B403E3E6B78_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF10B080)
#define CLASS_3_1BCD2B403E3E6B78_METHOD_3_8570B8EDB42BCD7E_OFFSET UNITYSDK_OFFSET(0xF10B440)
#define CLASS_3_1BCD2B403E3E6B78__CTOR_OFFSET UNITYSDK_OFFSET(0xF10B030)

inline static constexpr unsigned int Class_3_1BCD2B403E3E6B78_TypeDefinitionIndex = 50397;

class Class_3_1BCD2B403E3E6B78 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasStanceWeakPreview*>
{
public:
	::System::Int32 Field_3_1; // 0x28
	::System::Boolean Field_3_0; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasStanceWeakPreview* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasStanceWeakPreview*))((::PBYTE)hIl2Cpp + CLASS_3_1BCD2B403E3E6B78__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BCD2B403E3E6B78_EVALUATE_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType Method_3_8570B8EDB42BCD7E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1BCD2B403E3E6B78_METHOD_3_8570B8EDB42BCD7E_OFFSET))(this, a1);
	}
};
