#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG_METHOD_2_D170350876C6F908_OFFSET UNITYSDK_OFFSET(0x16AC59C0)
#define RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC5AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMapSurfaceConfig_TypeDefinitionIndex = 16622;

	class FiveDimMapSurfaceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SurfaceID; // 0x10
		::RPG::MVector2 PositionInFace; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D170350876C6F908(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMapSurfaceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMapSurfaceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG_METHOD_2_D170350876C6F908_OFFSET))(a1, a2);
		}
	};
}
