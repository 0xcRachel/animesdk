#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_5_AD4816692BB4FE9A_OFFSET UNITYSDK_OFFSET(0x16A90D00)
#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_5_E3D01E5F966EE1C8_OFFSET UNITYSDK_OFFSET(0x16A90E30)
#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A90DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddHouguConfig_TypeDefinitionIndex = 17266;

	class FateActAddHouguConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_AD4816692BB4FE9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddHouguConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddHouguConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_5_AD4816692BB4FE9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E3D01E5F966EE1C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddHouguConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddHouguConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_5_E3D01E5F966EE1C8_OFFSET))(a1, a2);
		}
	};
}
