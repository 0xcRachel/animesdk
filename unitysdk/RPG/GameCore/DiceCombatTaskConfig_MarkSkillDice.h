#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_METHOD_3_0B0024C28BCE81FD_OFFSET UNITYSDK_OFFSET(0x16A401D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_METHOD_3_D43DAA4D4047DF5E_OFFSET UNITYSDK_OFFSET(0x16A42CF0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A401B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_MarkSkillDice_TypeDefinitionIndex = 14582;

	class DiceCombatTaskConfig_MarkSkillDice : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnSuccess; // 0x18
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnFail; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D43DAA4D4047DF5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_METHOD_3_D43DAA4D4047DF5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B0024C28BCE81FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_METHOD_3_0B0024C28BCE81FD_OFFSET))(a1, a2);
		}
	};
}
