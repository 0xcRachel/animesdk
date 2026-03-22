#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/BigFixPoint.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/Struct_2_8E956AF8632F72E8.h"
#include "unitysdk/System/Object.h"

class Class_1_AF8700EECA429FB6;
class Class_1_BB2DEB5D4328603D;
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_843DD6330B22E422_METHOD_1_E2C273CA106EBD0B_1_OFFSET UNITYSDK_OFFSET(0x10CC9450)
#define CLASS_1_843DD6330B22E422_METHOD_1_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x10CC93D0)
#define CLASS_1_843DD6330B22E422_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10CC94D0)
#define CLASS_1_843DD6330B22E422__CTOR_OFFSET UNITYSDK_OFFSET(0x10CC92E0)
#define CLASS_1_843DD6330B22E422___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10CC9ED0)

inline static constexpr unsigned int Class_1_843DD6330B22E422_TypeDefinitionIndex = 42453;

class Class_1_843DD6330B22E422 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_0; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_2; // 0x18
	::Il2CppArray<::Class_1_AF8700EECA429FB6*>* Field_1_161; // 0x20
	::RPG::GameCore::BigFixPoint Field_1_98; // 0x28
	::Il2CppArray<::Class_1_AF8700EECA429FB6*>* Field_1_160; // 0x38
	::Class_1_BB2DEB5D4328603D* Field_1_158; // 0x40
	::System::String* Field_1_10; // 0x48
	::RPG::GameCore::BigFixPoint Field_1_97; // 0x50
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_37; // 0x60
	::RPG::GameCore::BigFixPoint Field_1_48; // 0x68
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_3; // 0x78
	::Struct_2_3A335394524C9E44 Field_1_159; // 0x80
	::RPG::GameCore::BigFixPoint Field_1_49; // 0x138
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_1; // 0x148
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* Field_1_9; // 0x150
	::RPG::GameCore::FixPoint Field_1_27; // 0x158
	::RPG::GameCore::FixPoint Field_1_22; // 0x160
	::System::Boolean Field_1_142; // 0x168
	::System::Boolean Field_1_33; // 0x169
	::System::Boolean Field_1_154; // 0x16A
	::System::Boolean Field_1_32; // 0x16B
	::System::Boolean Field_1_152; // 0x16C
	::System::Boolean Field_1_34; // 0x16D
	::System::Boolean Field_1_26; // 0x16E
	::RPG::GameCore::FixPoint Field_1_59; // 0x170
	::RPG::GameCore::FixPoint Field_1_51; // 0x178
	::RPG::GameCore::FixPoint Field_1_14; // 0x180
	::Struct_2_8E956AF8632F72E8 Field_1_47; // 0x188
	::RPG::GameCore::FixPoint Field_1_70; // 0x208
	::RPG::GameCore::FixPoint Field_1_150; // 0x210
	::RPG::GameCore::FixPoint Field_1_148; // 0x218
	::RPG::GameCore::FixPoint Field_1_78; // 0x220
	::RPG::GameCore::FixPoint Field_1_24; // 0x228
	::RPG::GameCore::FixPoint Field_1_18; // 0x230
	::RPG::GameCore::FixPoint Field_1_23; // 0x238
	::RPG::GameCore::SkillEffect Field_1_90; // 0x240
	::RPG::GameCore::AttackType Field_1_4; // 0x244
	::RPG::GameCore::FixPoint Field_1_124; // 0x248
	::RPG::GameCore::FixPoint Field_1_83; // 0x250
	::RPG::GameCore::FixPoint Field_1_100; // 0x258
	::RPG::GameCore::FixPoint Field_1_77; // 0x260
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_44; // 0x268
	::RPG::GameCore::FixPoint Field_1_20; // 0x2B8
	::RPG::GameCore::FixPoint Field_1_53; // 0x2C0
	::RPG::GameCore::FixPoint Field_1_64; // 0x2C8
	::RPG::GameCore::FixPoint Field_1_121; // 0x2D0
	::RPG::GameCore::AttackFormulaType Field_1_6; // 0x2D8
	::System::Boolean Field_1_153; // 0x2DC
	::System::Boolean Field_1_31; // 0x2DD
	::System::Boolean Field_1_36; // 0x2DE
	::System::Boolean Field_1_93; // 0x2DF
	::RPG::GameCore::FixPoint Field_1_139; // 0x2E0
	::RPG::GameCore::FixPoint Field_1_81; // 0x2E8
	::RPG::GameCore::FixPoint Field_1_104; // 0x2F0
	::System::Boolean Field_1_85; // 0x2F8
	::System::Boolean Field_1_30; // 0x2F9
	::System::Boolean Field_1_94; // 0x2FA
	::System::Boolean Field_1_29; // 0x2FB
	::RPG::GameCore::DamageBlockType Field_1_92; // 0x2FC
	::RPG::GameCore::FixPoint Field_1_17; // 0x300
	::RPG::GameCore::FixPoint Field_1_62; // 0x308
	::RPG::GameCore::FixPoint Field_1_38; // 0x310
	::RPG::GameCore::FixPoint Field_1_132; // 0x318
	::RPG::GameCore::FixPoint Field_1_99; // 0x320
	::RPG::GameCore::AttackDamageType Field_1_5; // 0x328
	::RPG::GameCore::AttackFormulaType Field_1_7; // 0x32C
	::RPG::GameCore::FixPoint Field_1_114; // 0x330
	::RPG::GameCore::FixPoint Field_1_109; // 0x338
	::RPG::GameCore::FixPoint Field_1_126; // 0x340
	::RPG::GameCore::FixPoint Field_1_120; // 0x348
	::RPG::GameCore::FixPoint Field_1_89; // 0x350
	::RPG::GameCore::FixPoint Field_1_87; // 0x358
	::RPG::GameCore::FixPoint Field_1_52; // 0x360
	::RPG::GameCore::FixPoint Field_1_119; // 0x368
	::RPG::GameCore::FixPoint Field_1_123; // 0x370
	::RPG::GameCore::FixPoint Field_1_63; // 0x378
	::RPG::GameCore::FixPoint Field_1_86; // 0x380
	::RPG::GameCore::FixPoint Field_1_80; // 0x388
	::RPG::GameCore::FixPoint Field_1_61; // 0x390
	::RPG::GameCore::AbilityLinearProperty Field_1_43; // 0x398
	::RPG::GameCore::FixPoint Field_1_76; // 0x3E0
	::RPG::GameCore::FixPoint Field_1_118; // 0x3E8
	::RPG::GameCore::FixPoint Field_1_122; // 0x3F0
	::RPG::GameCore::FixPoint Field_1_39; // 0x3F8
	::RPG::GameCore::FixPoint Field_1_131; // 0x400
	::RPG::GameCore::FixPoint Field_1_11; // 0x408
	::RPG::GameCore::FixPoint Field_1_144; // 0x410
	::RPG::GameCore::FixPoint Field_1_74; // 0x418
	::RPG::GameCore::FixPoint Field_1_149; // 0x420
	::RPG::GameCore::FixPoint Field_1_130; // 0x428
	::RPG::GameCore::FixPoint Field_1_57; // 0x430
	::RPG::GameCore::FixPoint Field_1_125; // 0x438
	::RPG::GameCore::FixPoint Field_1_25; // 0x440
	::RPG::GameCore::FixPoint Field_1_50; // 0x448
	::RPG::GameCore::FixPoint Field_1_28; // 0x450
	::RPG::GameCore::AttackDamageType Field_1_140; // 0x458
	::System::UInt32 Field_1_91; // 0x45C
	::RPG::GameCore::FixPoint Field_1_19; // 0x460
	::RPG::GameCore::FixPoint Field_1_110; // 0x468
	::RPG::GameCore::FixPoint Field_1_58; // 0x470
	::RPG::GameCore::FixPoint Field_1_69; // 0x478
	::RPG::GameCore::FixPoint Field_1_79; // 0x480
	::RPG::GameCore::FixPoint Field_1_141; // 0x488
	::RPG::GameCore::FixPoint Field_1_156; // 0x490
	::RPG::GameCore::FixPoint Field_1_145; // 0x498
	::RPG::GameCore::FixPoint Field_1_40; // 0x4A0
	::RPG::GameCore::FixPoint Field_1_151; // 0x4A8
	::System::Boolean Field_1_84; // 0x4B0
	::System::Boolean Field_1_35; // 0x4B1
	::System::Boolean Field_1_21; // 0x4B2
	::System::Boolean Field_1_143; // 0x4B3
	::System::UInt32 Field_1_42; // 0x4B4
	::RPG::GameCore::AbilityLinearProperty Field_1_96; // 0x4B8
	::RPG::GameCore::FixPoint Field_1_116; // 0x500
	::RPG::GameCore::FixPoint Field_1_103; // 0x508
	::RPG::GameCore::FixPoint Field_1_138; // 0x510
	::RPG::GameCore::FixPoint Field_1_137; // 0x518
	::RPG::GameCore::FixPoint Field_1_147; // 0x520
	::RPG::GameCore::FixPoint Field_1_75; // 0x528
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_95; // 0x530
	::RPG::GameCore::FixPoint Field_1_13; // 0x580
	::RPG::GameCore::FixPoint Field_1_66; // 0x588
	::RPG::GameCore::FinalDamageFormulaType Field_1_8; // 0x590
	::RPG::GameCore::FixPoint Field_1_88; // 0x598
	::RPG::GameCore::FixPoint Field_1_71; // 0x5A0
	::RPG::GameCore::FixPoint Field_1_55; // 0x5A8
	::RPG::GameCore::FixPoint Field_1_65; // 0x5B0
	::RPG::GameCore::FixPoint Field_1_15; // 0x5B8
	::RPG::GameCore::FixPoint Field_1_117; // 0x5C0
	::RPG::GameCore::FixPoint Field_1_67; // 0x5C8
	::RPG::GameCore::FixPoint Field_1_68; // 0x5D0
	::RPG::GameCore::FixPoint Field_1_134; // 0x5D8
	::RPG::GameCore::FixPoint Field_1_136; // 0x5E0
	::RPG::GameCore::FixPoint Field_1_129; // 0x5E8
	::RPG::GameCore::FixPoint Field_1_133; // 0x5F0
	::RPG::GameCore::FixPoint Field_1_107; // 0x5F8
	::RPG::GameCore::FixPoint Field_1_16; // 0x600
	::RPG::GameCore::FixPoint Field_1_106; // 0x608
	::RPG::GameCore::FixPoint Field_1_112; // 0x610
	::RPG::GameCore::FixPoint Field_1_54; // 0x618
	::RPG::GameCore::FixPoint Field_1_41; // 0x620
	::RPG::GameCore::FixPoint Field_1_128; // 0x628
	::RPG::GameCore::FixPoint Field_1_102; // 0x630
	::RPG::GameCore::AbilityLinearProperty Field_1_45; // 0x638
	::RPG::GameCore::FixPoint Field_1_72; // 0x680
	::RPG::GameCore::FixPoint Field_1_60; // 0x688
	::RPG::GameCore::AbilityLinearProperty Field_1_46; // 0x690
	::RPG::GameCore::FixPoint Field_1_155; // 0x6D8
	::RPG::GameCore::FixPoint Field_1_157; // 0x6E0
	::RPG::GameCore::FixPoint Field_1_82; // 0x6E8
	::RPG::GameCore::FixPoint Field_1_12; // 0x6F0
	::RPG::GameCore::FixPoint Field_1_111; // 0x6F8
	::RPG::GameCore::FixPoint Field_1_101; // 0x700
	::RPG::GameCore::FixPoint Field_1_105; // 0x708
	::RPG::GameCore::FixPoint Field_1_127; // 0x710
	::RPG::GameCore::FixPoint Field_1_115; // 0x718
	::RPG::GameCore::FixPoint Field_1_56; // 0x720
	::RPG::GameCore::FixPoint Field_1_108; // 0x728
	::RPG::GameCore::FixPoint Field_1_146; // 0x730
	::RPG::GameCore::FixPoint Field_1_73; // 0x738
	::RPG::GameCore::FixPoint Field_1_135; // 0x740
	::RPG::GameCore::FixPoint Field_1_113; // 0x748

	::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_METHOD_1_E2C273CA106EBD0B_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_METHOD_1_E2C273CA106EBD0B_1_OFFSET))(this);
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
