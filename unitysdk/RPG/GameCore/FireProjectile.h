#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FIREPROJECTILE_METHOD_3_57CAAD090B19FEF9_OFFSET UNITYSDK_OFFSET(0x16AA9610)
#define RPG_GAMECORE_FIREPROJECTILE_METHOD_3_92BCDE90C0414178_OFFSET UNITYSDK_OFFSET(0x16AA9420)
#define RPG_GAMECORE_FIREPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA95D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireProjectile_TypeDefinitionIndex = 20218;

	class FireProjectile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask TargetAliveState; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::System::Int32 TargetMaxHitCount; // 0x30
		::System::Int32 MaxNumber; // 0x34
		::System::Boolean ResetAllHitCount; // 0x38
		::RPG::GameCore::TargetEvaluator* CustomAnchorTarget; // 0x40
		::RPG::GameCore::ProjectileData* Projectile; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHit; // 0x50
		::System::Boolean WaitProjectileFinish; // 0x58
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_92BCDE90C0414178(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE_METHOD_3_92BCDE90C0414178_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57CAAD090B19FEF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE_METHOD_3_57CAAD090B19FEF9_OFFSET))(a1, a2);
		}
	};
}
