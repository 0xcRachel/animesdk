#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_3_049EE63ECD138F96_OFFSET UNITYSDK_OFFSET(0x169C39E0)
#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_3_BCE353DC013E08D8_OFFSET UNITYSDK_OFFSET(0x169C3AC0)
#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x169C3A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondRandomSuccConfig_TypeDefinitionIndex = 15371;

	class CondRandomSuccConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Probability; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_049EE63ECD138F96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondRandomSuccConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondRandomSuccConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_3_049EE63ECD138F96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BCE353DC013E08D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondRandomSuccConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondRandomSuccConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_3_BCE353DC013E08D8_OFFSET))(a1, a2);
		}
	};
}
