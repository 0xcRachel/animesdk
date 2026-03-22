#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_5_22AC277F68AD2CEE_OFFSET UNITYSDK_OFFSET(0x16DF9CB0)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_5_C81ED67E4E9E9B62_OFFSET UNITYSDK_OFFSET(0x16DF9AF0)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF9BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueCoinConfig_TypeDefinitionIndex = 17567;

	class RogueActChangeRogueCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C81ED67E4E9E9B62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_5_C81ED67E4E9E9B62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_22AC277F68AD2CEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_5_22AC277F68AD2CEE_OFFSET))(a1, a2);
		}
	};
}
