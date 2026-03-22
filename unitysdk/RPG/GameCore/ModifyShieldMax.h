#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ShieldModifyFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYSHIELDMAX_METHOD_3_C4C085B0A6CD350B_OFFSET UNITYSDK_OFFSET(0x16CC11F0)
#define RPG_GAMECORE_MODIFYSHIELDMAX_METHOD_3_DCDD70062E94E348_OFFSET UNITYSDK_OFFSET(0x16CC1160)
#define RPG_GAMECORE_MODIFYSHIELDMAX__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC11C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyShieldMax_TypeDefinitionIndex = 20791;

	class ModifyShieldMax : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* ShieldModifiers; // 0x20
		::RPG::GameCore::TargetEvaluator* SpecifiedModifierCaster; // 0x28
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x30
		::RPG::GameCore::ShieldModifyFormulaType FormulaType; // 0x34
		::RPG::GameCore::DynamicFloat* FormulaValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDMAX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCDD70062E94E348(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyShieldMax*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyShieldMax*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDMAX_METHOD_3_DCDD70062E94E348_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C4C085B0A6CD350B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyShieldMax* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyShieldMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDMAX_METHOD_3_C4C085B0A6CD350B_OFFSET))(a1, a2);
		}
	};
}
