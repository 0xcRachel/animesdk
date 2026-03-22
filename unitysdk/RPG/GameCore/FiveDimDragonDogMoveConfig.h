#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_A188B3DC5D2D1AF9_OFFSET UNITYSDK_OFFSET(0x16ABA860)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_AB4C02BAD9BA6684_OFFSET UNITYSDK_OFFSET(0x16ABA8B0)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABA8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDragonDogMoveConfig_TypeDefinitionIndex = 15046;

	class FiveDimDragonDogMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector2 DetectionRadius; // 0x40
		::System::Single FallGravityMultiplier; // 0x48
		::System::Single MaxFallSpeedMultiplier; // 0x4C
		::System::Single HitRecoverDuration; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A188B3DC5D2D1AF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_A188B3DC5D2D1AF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AB4C02BAD9BA6684(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_METHOD_3_AB4C02BAD9BA6684_OFFSET))(a1, a2);
		}
	};
}
