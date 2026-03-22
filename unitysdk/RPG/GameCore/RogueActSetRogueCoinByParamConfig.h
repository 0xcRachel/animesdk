#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_5_B520FE9A370C1816_OFFSET UNITYSDK_OFFSET(0x16E01290)
#define RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_5_BD2F4319B0118F2A_OFFSET UNITYSDK_OFFSET(0x16E01450)
#define RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E01390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetRogueCoinByParamConfig_TypeDefinitionIndex = 17569;

	class RogueActSetRogueCoinByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B520FE9A370C1816(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_5_B520FE9A370C1816_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BD2F4319B0118F2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_5_BD2F4319B0118F2A_OFFSET))(a1, a2);
		}
	};
}
