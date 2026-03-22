#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_METHOD_5_6A9D62074388A3CE_OFFSET UNITYSDK_OFFSET(0x16A9A1A0)
#define RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_METHOD_5_7AC1AD54B60DD9D5_OFFSET UNITYSDK_OFFSET(0x16A99FC0)
#define RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9A100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamHouguCountConfig_TypeDefinitionIndex = 14993;

	class FateParamHouguCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7AC1AD54B60DD9D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamHouguCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamHouguCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_METHOD_5_7AC1AD54B60DD9D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6A9D62074388A3CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamHouguCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamHouguCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_METHOD_5_6A9D62074388A3CE_OFFSET))(a1, a2);
		}
	};
}
