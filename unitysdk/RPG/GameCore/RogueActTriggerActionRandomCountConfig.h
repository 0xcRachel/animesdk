#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG_METHOD_5_3E34FFC7DBEA4425_OFFSET UNITYSDK_OFFSET(0x16E01800)
#define RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG_METHOD_5_7C4CA35F24AD6791_OFFSET UNITYSDK_OFFSET(0x16E019C0)
#define RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E01900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerActionRandomCountConfig_TypeDefinitionIndex = 17590;

	class RogueActTriggerActionRandomCountConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_3E34FFC7DBEA4425(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerActionRandomCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerActionRandomCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG_METHOD_5_3E34FFC7DBEA4425_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7C4CA35F24AD6791(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerActionRandomCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerActionRandomCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG_METHOD_5_7C4CA35F24AD6791_OFFSET))(a1, a2);
		}
	};
}
