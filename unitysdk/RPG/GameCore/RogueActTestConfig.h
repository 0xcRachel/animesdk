#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_5_6B460C117948C419_OFFSET UNITYSDK_OFFSET(0x16E01630)
#define RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_5_7019C706BB3E90ED_OFFSET UNITYSDK_OFFSET(0x16E017F0)
#define RPG_GAMECORE_ROGUEACTTESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E01730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTestConfig_TypeDefinitionIndex = 17655;

	class RogueActTestConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6B460C117948C419(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_5_6B460C117948C419_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7019C706BB3E90ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_5_7019C706BB3E90ED_OFFSET))(a1, a2);
		}
	};
}
