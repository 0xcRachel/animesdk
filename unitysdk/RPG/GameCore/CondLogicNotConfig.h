#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_3_2575715372F65BFC_OFFSET UNITYSDK_OFFSET(0x169C3480)
#define RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_3_DA6981B0C83D4AAE_OFFSET UNITYSDK_OFFSET(0x169C3560)
#define RPG_GAMECORE_CONDLOGICNOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x169C3510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondLogicNotConfig_TypeDefinitionIndex = 15368;

	class CondLogicNotConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2575715372F65BFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicNotConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicNotConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_3_2575715372F65BFC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA6981B0C83D4AAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicNotConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicNotConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_3_DA6981B0C83D4AAE_OFFSET))(a1, a2);
		}
	};
}
