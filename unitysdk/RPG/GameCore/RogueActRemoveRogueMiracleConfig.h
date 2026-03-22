#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG_METHOD_5_6CA31F242BD64908_OFFSET UNITYSDK_OFFSET(0x16DFFE90)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG_METHOD_5_C629E85E719649EC_OFFSET UNITYSDK_OFFSET(0x16DFFCD0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFFDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueMiracleConfig_TypeDefinitionIndex = 17558;

	class RogueActRemoveRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C629E85E719649EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG_METHOD_5_C629E85E719649EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6CA31F242BD64908(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG_METHOD_5_6CA31F242BD64908_OFFSET))(a1, a2);
		}
	};
}
