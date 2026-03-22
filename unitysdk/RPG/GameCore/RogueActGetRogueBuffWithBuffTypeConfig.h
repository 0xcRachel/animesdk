#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_METHOD_5_059C6720A78D559F_OFFSET UNITYSDK_OFFSET(0x16DFCF80)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_METHOD_5_9DDC4C7216818AC3_OFFSET UNITYSDK_OFFSET(0x16DFD140)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFD080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffWithBuffTypeConfig_TypeDefinitionIndex = 17618;

	class RogueActGetRogueBuffWithBuffTypeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_059C6720A78D559F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_METHOD_5_059C6720A78D559F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9DDC4C7216818AC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_METHOD_5_9DDC4C7216818AC3_OFFSET))(a1, a2);
		}
	};
}
