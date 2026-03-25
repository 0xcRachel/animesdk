#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG_METHOD_3_51C91DFB8F67619D_OFFSET UNITYSDK_OFFSET(0x17643600)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG_METHOD_3_8142B5CEE9FA1ED4_OFFSET UNITYSDK_OFFSET(0x176436D0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17643680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterTitanBlessInteractConfig_TypeDefinitionIndex = 16343;

	class RogueModifierExecuteActionAfterTitanBlessInteractConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_51C91DFB8F67619D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterTitanBlessInteractConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterTitanBlessInteractConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG_METHOD_3_51C91DFB8F67619D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8142B5CEE9FA1ED4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterTitanBlessInteractConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterTitanBlessInteractConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERTITANBLESSINTERACTCONFIG_METHOD_3_8142B5CEE9FA1ED4_OFFSET))(a1, a2);
		}
	};
}
