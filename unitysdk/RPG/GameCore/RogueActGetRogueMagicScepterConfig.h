#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_METHOD_5_ADB46A4089D7B324_OFFSET UNITYSDK_OFFSET(0x16DFD4F0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_METHOD_5_F5FBC0E94C6BF3A0_OFFSET UNITYSDK_OFFSET(0x16DFD6B0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFD5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMagicScepterConfig_TypeDefinitionIndex = 17635;

	class RogueActGetRogueMagicScepterConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_ADB46A4089D7B324(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_METHOD_5_ADB46A4089D7B324_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F5FBC0E94C6BF3A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_METHOD_5_F5FBC0E94C6BF3A0_OFFSET))(a1, a2);
		}
	};
}
