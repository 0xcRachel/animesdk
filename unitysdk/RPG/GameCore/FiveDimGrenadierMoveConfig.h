#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierAttackType.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_94A3B3370C6703EF_OFFSET UNITYSDK_OFFSET(0x16AC1790)
#define RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_E125FA8DF60A6BA1_OFFSET UNITYSDK_OFFSET(0x16AC17F0)
#define RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC17D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierMoveConfig_TypeDefinitionIndex = 15048;

	class FiveDimGrenadierMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::Single BeatBackDistance; // 0x40
		::System::Single AttackDistance; // 0x44
		::System::Single AttackDistancePerpendicular; // 0x48
		::System::Single AttackInterval; // 0x4C
		::RPG::MVector3 CreationOffset; // 0x50
		::RPG::GameCore::FiveDimGrenadierAttackType AttackType; // 0x5C
		::RPG::GameCore::FiveDimSimpleProjectileMoveType ProjectileMoveType; // 0x60
		::System::Single ParabolaHeightOffset; // 0x64
		::System::Single LaunchSpeed; // 0x68
		::Il2CppArray<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>* ProjectileConfigList; // 0x70
		::System::String* LineTraceEffectPath; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94A3B3370C6703EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_94A3B3370C6703EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E125FA8DF60A6BA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERMOVECONFIG_METHOD_3_E125FA8DF60A6BA1_OFFSET))(a1, a2);
		}
	};
}
