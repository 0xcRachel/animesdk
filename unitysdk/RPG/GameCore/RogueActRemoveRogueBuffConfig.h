#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_5_891A756F64E6CD76_OFFSET UNITYSDK_OFFSET(0x16DFF590)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_5_DC8C07B20885250A_OFFSET UNITYSDK_OFFSET(0x16DFF750)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFF690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueBuffConfig_TypeDefinitionIndex = 17543;

	class RogueActRemoveRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_891A756F64E6CD76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_5_891A756F64E6CD76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DC8C07B20885250A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_5_DC8C07B20885250A_OFFSET))(a1, a2);
		}
	};
}
