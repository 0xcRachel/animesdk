#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StageType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAMAGECOUNTERSTAGESETTING_METHOD_2_B78DA0350F732144_OFFSET UNITYSDK_OFFSET(0x169E02B0)
#define RPG_GAMECORE_DAMAGECOUNTERSTAGESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x169E03C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageCounterStageSetting_TypeDefinitionIndex = 15445;

	class DamageCounterStageSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StageType StageType; // 0x10
		::System::Single OffsetY; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGECOUNTERSTAGESETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B78DA0350F732144(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageCounterStageSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageCounterStageSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGECOUNTERSTAGESETTING_METHOD_2_B78DA0350F732144_OFFSET))(a1, a2);
		}
	};
}
