#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG_METHOD_5_2D8220BE3929847E_OFFSET UNITYSDK_OFFSET(0x16DF9750)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG_METHOD_5_AF8F42699122DA92_OFFSET UNITYSDK_OFFSET(0x16DF9910)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF9850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueCoinByParamConfig_TypeDefinitionIndex = 17568;

	class RogueActChangeRogueCoinByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_2D8220BE3929847E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG_METHOD_5_2D8220BE3929847E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_AF8F42699122DA92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG_METHOD_5_AF8F42699122DA92_OFFSET))(a1, a2);
		}
	};
}
