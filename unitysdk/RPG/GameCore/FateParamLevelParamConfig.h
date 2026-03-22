#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG_METHOD_5_8DB9883BBF5F5116_OFFSET UNITYSDK_OFFSET(0x16A9A500)
#define RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG_METHOD_5_95592C414BB690BF_OFFSET UNITYSDK_OFFSET(0x16A9A380)
#define RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9A460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamLevelParamConfig_TypeDefinitionIndex = 14992;

	class FateParamLevelParamConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::RPG::GameCore::FateLevelParamType ParamType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_95592C414BB690BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamLevelParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamLevelParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG_METHOD_5_95592C414BB690BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_8DB9883BBF5F5116(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamLevelParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamLevelParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLEVELPARAMCONFIG_METHOD_5_8DB9883BBF5F5116_OFFSET))(a1, a2);
		}
	};
}
