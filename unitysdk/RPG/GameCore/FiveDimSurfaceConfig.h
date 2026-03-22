#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_709CEECE45155459_OFFSET UNITYSDK_OFFSET(0x16AD8290)
#define RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_E2B50B6A1FE02F60_OFFSET UNITYSDK_OFFSET(0x16AD8220)
#define RPG_GAMECORE_FIVEDIMSURFACECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD8270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfaceConfig_TypeDefinitionIndex = 16634;

	class FiveDimSurfaceConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCylinderSurface; // 0x10
		::System::Boolean KeepUnloadNavConnectivity; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2B50B6A1FE02F60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_E2B50B6A1FE02F60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_709CEECE45155459(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_709CEECE45155459_OFFSET))(a1, a2);
		}
	};
}
