#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_5_5CCEADEF45F7EAA0_OFFSET UNITYSDK_OFFSET(0x16A9B410)
#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_5_DD5317EAF60AF41B_OFFSET UNITYSDK_OFFSET(0x16A9B2A0)
#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9B370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamRoundIndexConfig_TypeDefinitionIndex = 14979;

	class FateParamRoundIndexConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DD5317EAF60AF41B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamRoundIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamRoundIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_5_DD5317EAF60AF41B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5CCEADEF45F7EAA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamRoundIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamRoundIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_5_5CCEADEF45F7EAA0_OFFSET))(a1, a2);
		}
	};
}
