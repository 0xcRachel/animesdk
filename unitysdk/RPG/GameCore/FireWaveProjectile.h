#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_3_262B4B1684E0BCF3_OFFSET UNITYSDK_OFFSET(0x16AA9A20)
#define RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_3_D605E3447DFFEF92_OFFSET UNITYSDK_OFFSET(0x16AA9BF0)
#define RPG_GAMECORE_FIREWAVEPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA9BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireWaveProjectile_TypeDefinitionIndex = 20220;

	class FireWaveProjectile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Int32 Count; // 0x28
		::System::Single Interval; // 0x2C
		::RPG::GameCore::ProjectileData* Projectile; // 0x30
		::System::Boolean WaitProjectileFinish; // 0x38
		::RPG::GameCore::DamageByAttackProperty* PerProjectileDamage; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHitClientOnly; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_262B4B1684E0BCF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireWaveProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireWaveProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_3_262B4B1684E0BCF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D605E3447DFFEF92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireWaveProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireWaveProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_3_D605E3447DFFEF92_OFFSET))(a1, a2);
		}
	};
}
