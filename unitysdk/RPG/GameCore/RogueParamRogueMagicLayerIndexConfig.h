#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_5_4ABCC0FA688CBD02_OFFSET UNITYSDK_OFFSET(0x16EB46E0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_5_C73FF5CA3958B079_OFFSET UNITYSDK_OFFSET(0x16EB4570)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB4640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicLayerIndexConfig_TypeDefinitionIndex = 17690;

	class RogueParamRogueMagicLayerIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C73FF5CA3958B079(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_5_C73FF5CA3958B079_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4ABCC0FA688CBD02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicLayerIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICLAYERINDEXCONFIG_METHOD_5_4ABCC0FA688CBD02_OFFSET))(a1, a2);
		}
	};
}
