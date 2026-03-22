#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_5_259A1E40DCDEFD80_OFFSET UNITYSDK_OFFSET(0x16DFB440)
#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_5_9D03118D4811CD84_OFFSET UNITYSDK_OFFSET(0x16DFB280)
#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFB380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActFinishChessRogueConfig_TypeDefinitionIndex = 17585;

	class RogueActFinishChessRogueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_9D03118D4811CD84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActFinishChessRogueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActFinishChessRogueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_5_9D03118D4811CD84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_259A1E40DCDEFD80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActFinishChessRogueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActFinishChessRogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_5_259A1E40DCDEFD80_OFFSET))(a1, a2);
		}
	};
}
