#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_METHOD_5_0D6CA458FD1BC9B8_OFFSET UNITYSDK_OFFSET(0x16EB3DE0)
#define RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_METHOD_5_1E69FA72638E6BD3_OFFSET UNITYSDK_OFFSET(0x16EB3C70)
#define RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB3D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamOwnRogueMiracleCountConfig_TypeDefinitionIndex = 17697;

	class RogueParamOwnRogueMiracleCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1E69FA72638E6BD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_METHOD_5_1E69FA72638E6BD3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0D6CA458FD1BC9B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_METHOD_5_0D6CA458FD1BC9B8_OFFSET))(a1, a2);
		}
	};
}
