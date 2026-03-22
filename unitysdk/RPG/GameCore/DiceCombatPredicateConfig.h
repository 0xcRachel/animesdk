#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_METHOD_3_9FA1CCA2972DF100_OFFSET UNITYSDK_OFFSET(0x16A37080)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_METHOD_3_AB610EE6627DC0DB_OFFSET UNITYSDK_OFFSET(0x16A3AD50)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3AE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_TypeDefinitionIndex = 14516;

	class DiceCombatPredicateConfig : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnSuccess; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnFail; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FA1CCA2972DF100(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_METHOD_3_9FA1CCA2972DF100_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AB610EE6627DC0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_METHOD_3_AB610EE6627DC0DB_OFFSET))(a1, a2);
		}
	};
}
