#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_METHOD_5_31B77F452ABDEF2E_OFFSET UNITYSDK_OFFSET(0x16DFDFD0)
#define RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_METHOD_5_40BB45E4B3FABF42_OFFSET UNITYSDK_OFFSET(0x16DFE190)
#define RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFE0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetScoinByChessMainStoryConfig_TypeDefinitionIndex = 17598;

	class RogueActGetScoinByChessMainStoryConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_31B77F452ABDEF2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_METHOD_5_31B77F452ABDEF2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_40BB45E4B3FABF42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_METHOD_5_40BB45E4B3FABF42_OFFSET))(a1, a2);
		}
	};
}
