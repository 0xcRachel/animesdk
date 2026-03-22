#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/StackAdditivePropertyOp.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_METHOD_3_443F86C2ED08B5D5_OFFSET UNITYSDK_OFFSET(0x16A40580)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_METHOD_3_F0482CBE4455FA9A_OFFSET UNITYSDK_OFFSET(0x16A42E50)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A40560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ModifyOwedRollCount_TypeDefinitionIndex = 14497;

	class DiceCombatTaskConfig_ModifyOwedRollCount : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::StackAdditivePropertyOp OP; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0482CBE4455FA9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_METHOD_3_F0482CBE4455FA9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_443F86C2ED08B5D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_METHOD_3_443F86C2ED08B5D5_OFFSET))(a1, a2);
		}
	};
}
