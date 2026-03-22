#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_METHOD_5_1091877155AFC763_OFFSET UNITYSDK_OFFSET(0x16A9B0C0)
#define RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_METHOD_5_DD62E98B6AF90FCC_OFFSET UNITYSDK_OFFSET(0x16A9AEE0)
#define RPG_GAMECORE_FATEPARAMPHASEIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9B020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamPhaseIDConfig_TypeDefinitionIndex = 14997;

	class FateParamPhaseIDConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMPHASEIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DD62E98B6AF90FCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamPhaseIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamPhaseIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_METHOD_5_DD62E98B6AF90FCC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1091877155AFC763(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamPhaseIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamPhaseIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_METHOD_5_1091877155AFC763_OFFSET))(a1, a2);
		}
	};
}
