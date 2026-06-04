#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/Struct_2_B57FD4EDC70CAC4C.h"
#include "unitysdk/Struct_2_EF7C37AF69DC7CE6.h"
#include "unitysdk/System/Object.h"

class Class_1_09994FA7935E2E36;
class Class_1_5E9C16BFAA602EE3;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_1_OFFSET UNITYSDK_OFFSET(0x12B58D60)
#define CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_OFFSET UNITYSDK_OFFSET(0x12B58B30)
#define CLASS_1_843DD6330B22E422_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12B58F90)
#define CLASS_1_843DD6330B22E422__CTOR_OFFSET UNITYSDK_OFFSET(0x12B58A60)
#define CLASS_1_843DD6330B22E422___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12B59860)

inline static constexpr unsigned int Class_1_843DD6330B22E422_TypeDefinitionIndex = 50866;

class Class_1_843DD6330B22E422 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* Field_1_1; // 0x18
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_2; // 0x20
	::Class_1_5E9C16BFAA602EE3* Field_1_3; // 0x28
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_4; // 0x30
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_5; // 0x38
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_6; // 0x40
	::System::String* Field_1_7; // 0x48
	::Struct_2_3A335394524C9E44 Field_1_8; // 0x50
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_9; // 0x108
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_10; // 0x110
	::RPG::PoolList_1<::Struct_2_EF7C37AF69DC7CE6>* Field_1_11; // 0x118
	::RPG::GameCore::FixPoint Field_1_12; // 0x120
	::RPG::GameCore::FixPoint Field_1_13; // 0x128
	::RPG::GameCore::FixPoint Field_1_14; // 0x130
	::RPG::GameCore::FixPoint Field_1_15; // 0x138
	::RPG::GameCore::FixPoint Field_1_16; // 0x140
	::RPG::GameCore::FixPoint Field_1_17; // 0x148
	::RPG::GameCore::FixPoint Field_1_18; // 0x150
	::RPG::GameCore::FixPoint Field_1_19; // 0x158
	::RPG::GameCore::FixPoint Field_1_20; // 0x160
	::RPG::GameCore::AttackDamageType Field_1_21; // 0x168
	::System::Boolean Field_1_22; // 0x16C
	::System::Boolean Field_1_23; // 0x16D
	::System::Boolean Field_1_24; // 0x16E
	::System::Boolean Field_1_25; // 0x16F
	::RPG::GameCore::FixPoint Field_1_26; // 0x170
	::RPG::GameCore::FixPoint Field_1_27; // 0x178
	::RPG::GameCore::FixPoint Field_1_28; // 0x180
	::RPG::GameCore::FixPoint Field_1_29; // 0x188
	::RPG::GameCore::FixPoint Field_1_30; // 0x190
	::Struct_2_B57FD4EDC70CAC4C Field_1_31; // 0x198
	::RPG::GameCore::FixPoint Field_1_32; // 0x218
	::RPG::GameCore::FixPoint Field_1_33; // 0x220
	::RPG::GameCore::AbilityLinearProperty Field_1_34; // 0x228
	::RPG::GameCore::FixPoint Field_1_35; // 0x270
	::RPG::GameCore::FixPoint Field_1_36; // 0x278
	::RPG::GameCore::FixPoint Field_1_37; // 0x280
	::RPG::GameCore::FixPoint Field_1_38; // 0x288
	::RPG::GameCore::FixPoint Field_1_39; // 0x290
	::RPG::GameCore::FixPoint Field_1_40; // 0x298
	::RPG::GameCore::FixPoint Field_1_41; // 0x2A0
	::RPG::GameCore::FixPoint Field_1_42; // 0x2A8
	::RPG::GameCore::FixPoint Field_1_43; // 0x2B0
	::RPG::GameCore::FixPoint Field_1_44; // 0x2B8
	::RPG::GameCore::FixPoint Field_1_45; // 0x2C0
	::RPG::GameCore::FixPoint Field_1_46; // 0x2C8
	::RPG::GameCore::FixPoint Field_1_47; // 0x2D0
	::RPG::GameCore::FixPoint Field_1_48; // 0x2D8
	::RPG::GameCore::AttackFormulaType Field_1_49; // 0x2E0
	::RPG::GameCore::FixPoint Field_1_50; // 0x2E8
	::RPG::GameCore::FixPoint Field_1_51; // 0x2F0
	::RPG::GameCore::FixPoint Field_1_52; // 0x2F8
	::RPG::GameCore::FixPoint Field_1_53; // 0x300
	::RPG::GameCore::FixPoint Field_1_54; // 0x308
	::RPG::GameCore::FixPoint Field_1_55; // 0x310
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_56; // 0x318
	::RPG::GameCore::FixPoint Field_1_57; // 0x368
	::RPG::GameCore::FixPoint Field_1_58; // 0x370
	::RPG::GameCore::AbilityLinearProperty Field_1_59; // 0x378
	::RPG::GameCore::FixPoint Field_1_60; // 0x3C0
	::RPG::GameCore::AbilityLinearProperty Field_1_61; // 0x3C8
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_62; // 0x410
	::RPG::GameCore::FixPoint Field_1_63; // 0x460
	::RPG::GameCore::FixPoint Field_1_64; // 0x468
	::RPG::GameCore::FixPoint Field_1_65; // 0x470
	::RPG::GameCore::FixPoint Field_1_66; // 0x478
	::RPG::GameCore::FixPoint Field_1_67; // 0x480
	::RPG::GameCore::FixPoint Field_1_68; // 0x488
	::RPG::GameCore::FixPoint Field_1_69; // 0x490
	::RPG::GameCore::FixPoint Field_1_70; // 0x498
	::RPG::GameCore::FixPoint Field_1_71; // 0x4A0
	::RPG::GameCore::FixPoint Field_1_72; // 0x4A8
	::RPG::GameCore::FixPoint Field_1_73; // 0x4B0
	::RPG::GameCore::FixPoint Field_1_74; // 0x4B8
	::RPG::GameCore::FixPoint Field_1_75; // 0x4C0
	::RPG::GameCore::FinalDamageFormulaType Field_1_76; // 0x4C8
	::System::Boolean Field_1_77; // 0x4CC
	::System::Boolean Field_1_78; // 0x4CD
	::System::Boolean Field_1_79; // 0x4CE
	::System::Boolean Field_1_80; // 0x4CF
	::RPG::GameCore::FixPoint Field_1_81; // 0x4D0
	::RPG::GameCore::FixPoint Field_1_82; // 0x4D8
	::RPG::GameCore::FixPoint Field_1_83; // 0x4E0
	::RPG::GameCore::FixPoint Field_1_84; // 0x4E8
	::RPG::GameCore::FixPoint Field_1_85; // 0x4F0
	::RPG::GameCore::AbilityLinearProperty Field_1_86; // 0x4F8
	::RPG::GameCore::FixPoint Field_1_87; // 0x540
	::RPG::GameCore::FixPoint Field_1_88; // 0x548
	::RPG::GameCore::FixPoint Field_1_89; // 0x550
	::RPG::GameCore::FixPoint Field_1_90; // 0x558
	::RPG::GameCore::FixPoint Field_1_91; // 0x560
	::RPG::GameCore::AttackFormulaType Field_1_92; // 0x568
	::RPG::GameCore::DamageBlockType Field_1_93; // 0x56C
	::RPG::GameCore::FixPoint Field_1_94; // 0x570
	::RPG::GameCore::FixPoint Field_1_95; // 0x578
	::System::UInt32 Field_1_96; // 0x580
	::System::UInt32 Field_1_97; // 0x584
	::RPG::GameCore::FixPoint Field_1_98; // 0x588
	::RPG::GameCore::FixPoint Field_1_99; // 0x590
	::RPG::GameCore::FixPoint Field_1_100; // 0x598
	::RPG::GameCore::FixPoint Field_1_101; // 0x5A0
	::RPG::GameCore::FixPoint Field_1_102; // 0x5A8
	::RPG::GameCore::FixPoint Field_1_103; // 0x5B0
	::RPG::GameCore::FixPoint Field_1_104; // 0x5B8
	::RPG::GameCore::FixPoint Field_1_105; // 0x5C0
	::RPG::GameCore::FixPoint Field_1_106; // 0x5C8
	::RPG::GameCore::FixPoint Field_1_107; // 0x5D0
	::RPG::GameCore::FixPoint Field_1_108; // 0x5D8
	::RPG::GameCore::FixPoint Field_1_109; // 0x5E0
	::RPG::GameCore::FixPoint Field_1_110; // 0x5E8
	::RPG::GameCore::FixPoint Field_1_111; // 0x5F0
	::RPG::GameCore::FixPoint Field_1_112; // 0x5F8
	::RPG::GameCore::FixPoint Field_1_113; // 0x600
	::RPG::GameCore::FixPoint Field_1_114; // 0x608
	::RPG::GameCore::FixPoint Field_1_115; // 0x610
	::RPG::GameCore::FixPoint Field_1_116; // 0x618
	::RPG::GameCore::AttackDamageType Field_1_117; // 0x620
	::System::Boolean Field_1_118; // 0x624
	::System::Boolean Field_1_119; // 0x625
	::System::Boolean Field_1_120; // 0x626
	::System::Boolean Field_1_121; // 0x627
	::RPG::GameCore::FixPoint Field_1_122; // 0x628
	::RPG::GameCore::FixPoint Field_1_123; // 0x630
	::System::Boolean Field_1_124; // 0x638
	::System::Boolean Field_1_125; // 0x639
	::System::Boolean Field_1_126; // 0x63A
	::System::Boolean Field_1_127; // 0x63B
	::RPG::GameCore::SkillEffect Field_1_128; // 0x63C
	::RPG::GameCore::FixPoint Field_1_129; // 0x640
	::RPG::GameCore::FixPoint Field_1_130; // 0x648
	::RPG::GameCore::FixPoint Field_1_131; // 0x650
	::RPG::GameCore::FixPoint Field_1_132; // 0x658
	::RPG::GameCore::FixPoint Field_1_133; // 0x660
	::RPG::GameCore::FixPoint Field_1_134; // 0x668
	::RPG::GameCore::FixPoint Field_1_135; // 0x670
	::RPG::GameCore::FixPoint Field_1_136; // 0x678
	::RPG::GameCore::FixPoint Field_1_137; // 0x680
	::RPG::GameCore::FixPoint Field_1_138; // 0x688
	::RPG::GameCore::FixPoint Field_1_139; // 0x690
	::RPG::GameCore::FixPoint Field_1_140; // 0x698
	::RPG::GameCore::FixPoint Field_1_141; // 0x6A0
	::RPG::GameCore::FixPoint Field_1_142; // 0x6A8
	::RPG::GameCore::FixPoint Field_1_143; // 0x6B0
	::RPG::GameCore::FixPoint Field_1_144; // 0x6B8
	::RPG::GameCore::FixPoint Field_1_145; // 0x6C0
	::RPG::GameCore::FixPoint Field_1_146; // 0x6C8
	::RPG::GameCore::FixPoint Field_1_147; // 0x6D0
	::RPG::GameCore::FixPoint Field_1_148; // 0x6D8
	::RPG::GameCore::FixPoint Field_1_149; // 0x6E0
	::RPG::GameCore::AttackType Field_1_150; // 0x6E8
	::System::Boolean Field_1_151; // 0x6EC
	::System::Boolean Field_1_152; // 0x6ED
	::System::Boolean Field_1_153; // 0x6EE
	::System::Boolean Field_1_154; // 0x6EF
	::RPG::GameCore::FixPoint Field_1_155; // 0x6F0
	::RPG::GameCore::FixPoint Field_1_156; // 0x6F8
	::RPG::GameCore::FixPoint Field_1_157; // 0x700
	::RPG::GameCore::FixPoint Field_1_158; // 0x708
	::RPG::GameCore::FixPoint Field_1_159; // 0x710
	::RPG::GameCore::FixPoint Field_1_160; // 0x718
	::RPG::GameCore::FixPoint Field_1_161; // 0x720

	::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
