#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileHitActionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_4B9A4CB9CDEEB455_OFFSET UNITYSDK_OFFSET(0x16ACF060)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_67EB28E637A3D524_OFFSET UNITYSDK_OFFSET(0x16AD5060)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16ACF050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectileMoveConfig_TypeDefinitionIndex = 15050;

	class FiveDimSimpleProjectileMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::String* PresetName; // 0x40
		::RPG::GameCore::FiveDimSimpleProjectileHitActionType HitActionType; // 0x48
		::RPG::GameCore::FiveDimPropSpawnerParam* SpawnParam; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_67EB28E637A3D524(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_67EB28E637A3D524_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B9A4CB9CDEEB455(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_4B9A4CB9CDEEB455_OFFSET))(a1, a2);
		}
	};
}
