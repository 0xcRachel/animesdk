#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_5_541A3ADFF21484F5_OFFSET UNITYSDK_OFFSET(0x16DFB7E0)
#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_5_7CC99CB7921E7C61_OFFSET UNITYSDK_OFFSET(0x16DFB620)
#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFB720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetAllRogueBuffInGroupConfig_TypeDefinitionIndex = 17544;

	class RogueActGetAllRogueBuffInGroupConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7CC99CB7921E7C61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_5_7CC99CB7921E7C61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_541A3ADFF21484F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_5_541A3ADFF21484F5_OFFSET))(a1, a2);
		}
	};
}
