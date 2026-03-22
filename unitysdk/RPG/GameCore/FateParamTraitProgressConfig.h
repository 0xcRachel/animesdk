#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_5_03DFBF0D8F5F5ABE_OFFSET UNITYSDK_OFFSET(0x16A9B5A0)
#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_5_3A016BA1F231F6DD_OFFSET UNITYSDK_OFFSET(0x16A9B710)
#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9B670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamTraitProgressConfig_TypeDefinitionIndex = 14989;

	class FateParamTraitProgressConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_03DFBF0D8F5F5ABE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamTraitProgressConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamTraitProgressConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_5_03DFBF0D8F5F5ABE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3A016BA1F231F6DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamTraitProgressConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamTraitProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_5_3A016BA1F231F6DD_OFFSET))(a1, a2);
		}
	};
}
