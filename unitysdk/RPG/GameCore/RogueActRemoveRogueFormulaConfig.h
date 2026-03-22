#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_METHOD_5_C2F47049AEF27FDD_OFFSET UNITYSDK_OFFSET(0x16DFF920)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_METHOD_5_EF374255D38FB749_OFFSET UNITYSDK_OFFSET(0x16DFF760)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFF860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueFormulaConfig_TypeDefinitionIndex = 17603;

	class RogueActRemoveRogueFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_EF374255D38FB749(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_METHOD_5_EF374255D38FB749_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C2F47049AEF27FDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_METHOD_5_C2F47049AEF27FDD_OFFSET))(a1, a2);
		}
	};
}
