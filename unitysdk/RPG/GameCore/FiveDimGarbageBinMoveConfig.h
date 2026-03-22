#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG_METHOD_3_D0BF5458EADABA7D_OFFSET UNITYSDK_OFFSET(0x16ABF620)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG_METHOD_3_E4EADD494EFB2538_OFFSET UNITYSDK_OFFSET(0x16ABF5D0)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABF610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGarbageBinMoveConfig_TypeDefinitionIndex = 15045;

	class FiveDimGarbageBinMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector3 ColliderCenter; // 0x40
		::System::Single ColliderSizeXSmall; // 0x4C
		::System::Single ColliderSizeYSmall; // 0x50
		::RPG::MVector3 ColliderCenterSmall; // 0x54
		::System::Boolean OverrideJumpParams; // 0x60
		::System::Single TrampolineJumpHeight; // 0x64
		::System::Single FallGravity; // 0x68
		::System::Single MaxFallSpeed; // 0x6C
		::System::Int32 MaxHitWallCount; // 0x70
		::System::String* FirstStepOnEvent; // 0x78
		::System::String* SecondStepOnEvent; // 0x80
		::System::String* RemovalEvent; // 0x88
		::System::String* HitPlayerEvent; // 0x90
		::System::String* StepOnEffectPath; // 0x98
		::System::String* HitPlayerEffectPath; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4EADD494EFB2538(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGarbageBinMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGarbageBinMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG_METHOD_3_E4EADD494EFB2538_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D0BF5458EADABA7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGarbageBinMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGarbageBinMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG_METHOD_3_D0BF5458EADABA7D_OFFSET))(a1, a2);
		}
	};
}
