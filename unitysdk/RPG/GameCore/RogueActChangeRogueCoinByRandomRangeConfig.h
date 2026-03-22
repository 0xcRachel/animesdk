#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_METHOD_5_08D4CC7E826F1027_OFFSET UNITYSDK_OFFSET(0x16DF9920)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_METHOD_5_5FE02DFDE813498B_OFFSET UNITYSDK_OFFSET(0x16DF9AE0)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF9A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueCoinByRandomRangeConfig_TypeDefinitionIndex = 17572;

	class RogueActChangeRogueCoinByRandomRangeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_08D4CC7E826F1027(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_METHOD_5_08D4CC7E826F1027_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5FE02DFDE813498B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_METHOD_5_5FE02DFDE813498B_OFFSET))(a1, a2);
		}
	};
}
