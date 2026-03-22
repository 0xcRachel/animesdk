#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatSkillPreviewInvokeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_2_DFB79F7EE671BF59;
class Class_4_D581BED103406713;
namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }

#define CLASS_1_3D76ECEBA566AACC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1601B560)
#define CLASS_1_3D76ECEBA566AACC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15FF40B0)
#define CLASS_1_3D76ECEBA566AACC_METHOD_1_09550681A8C506F9_OFFSET UNITYSDK_OFFSET(0x1601B8C0)
#define CLASS_1_3D76ECEBA566AACC_METHOD_1_AB54AFA242EFF4C6_OFFSET UNITYSDK_OFFSET(0x1601B5A0)
#define CLASS_1_3D76ECEBA566AACC_METHOD_1_F9F8809BC56D9D74_OFFSET UNITYSDK_OFFSET(0x1601B740)
#define CLASS_1_3D76ECEBA566AACC__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF3D20)

inline static constexpr unsigned int Class_1_3D76ECEBA566AACC_TypeDefinitionIndex = 27842;

class Class_1_3D76ECEBA566AACC : public ::System::Object
{
public:
	::Class_2_DFB79F7EE671BF59* Field_1_1; // 0x10
	::Class_4_D581BED103406713* Field_1_0; // 0x18

	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_DFB79F7EE671BF59* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_DFB79F7EE671BF59*))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_EXECUTE_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatNotAvatarPreviewConfig* Method_1_AB54AFA242EFF4C6(::RPG::GameCore::DiceCombatSkillPreviewInvokeType a1)
	{
		return ((::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*(*)(::PVOID, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_METHOD_1_AB54AFA242EFF4C6_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_09550681A8C506F9()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_METHOD_1_09550681A8C506F9_OFFSET))(this);
	}

	::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* Method_1_F9F8809BC56D9D74()
	{
		return ((::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_METHOD_1_F9F8809BC56D9D74_OFFSET))(this);
	}
};
