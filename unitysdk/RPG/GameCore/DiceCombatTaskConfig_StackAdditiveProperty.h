#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAdditivePropertyType.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/StackAdditivePropertyOp.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_METHOD_3_086578E66131CB8A_OFFSET UNITYSDK_OFFSET(0x16A43000)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_METHOD_3_0AFB227CC190697C_OFFSET UNITYSDK_OFFSET(0x16A40B20)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x16A40B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_StackAdditiveProperty_TypeDefinitionIndex = 14521;

	class DiceCombatTaskConfig_StackAdditiveProperty : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatAdditivePropertyType AdditiveProperty; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::RPG::GameCore::StackAdditivePropertyOp OP; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_086578E66131CB8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_METHOD_3_086578E66131CB8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0AFB227CC190697C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_METHOD_3_0AFB227CC190697C_OFFSET))(a1, a2);
		}
	};
}
