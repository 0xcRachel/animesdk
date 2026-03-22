#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_5_01ED68B6A208E5A1_OFFSET UNITYSDK_OFFSET(0x16DFA960)
#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_5_F8C8EB57E2BD9F35_OFFSET UNITYSDK_OFFSET(0x16DFA7A0)
#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFA8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyMiracleAndAddCoinConfig_TypeDefinitionIndex = 17649;

	class RogueActDestroyMiracleAndAddCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F8C8EB57E2BD9F35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_5_F8C8EB57E2BD9F35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_01ED68B6A208E5A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_5_01ED68B6A208E5A1_OFFSET))(a1, a2);
		}
	};
}
