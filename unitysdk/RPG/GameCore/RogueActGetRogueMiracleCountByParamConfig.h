#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_METHOD_5_955D4A4E5491E7DF_OFFSET UNITYSDK_OFFSET(0x16DFDC30)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_METHOD_5_A060EC623044E303_OFFSET UNITYSDK_OFFSET(0x16DFDDF0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFDD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMiracleCountByParamConfig_TypeDefinitionIndex = 17554;

	class RogueActGetRogueMiracleCountByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_955D4A4E5491E7DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_METHOD_5_955D4A4E5491E7DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A060EC623044E303(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECOUNTBYPARAMCONFIG_METHOD_5_A060EC623044E303_OFFSET))(a1, a2);
		}
	};
}
