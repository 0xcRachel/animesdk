#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_METHOD_3_2E2ECCFA6834D982_OFFSET UNITYSDK_OFFSET(0x16AD50A0)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_METHOD_3_F23B348873E9E3B5_OFFSET UNITYSDK_OFFSET(0x16ACFE40)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16ACFE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectilePropSpawnerParam_TypeDefinitionIndex = 16681;

	class FiveDimSimpleProjectilePropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::RPG::GameCore::FiveDimSimpleProjectileMoveType MoveType; // 0x10
		::RPG::MVector3 InitVelocityLocal; // 0x14
		::System::Single GravityAcc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E2ECCFA6834D982(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_METHOD_3_2E2ECCFA6834D982_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F23B348873E9E3B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_METHOD_3_F23B348873E9E3B5_OFFSET))(a1, a2);
		}
	};
}
