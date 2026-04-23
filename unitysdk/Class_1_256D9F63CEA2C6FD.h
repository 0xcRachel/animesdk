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

#define CLASS_1_256D9F63CEA2C6FD_METHOD_1_E2C273CA106EBD0B_1_OFFSET UNITYSDK_OFFSET(0x1039CE10)
#define CLASS_1_256D9F63CEA2C6FD_METHOD_1_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x1039CD90)
#define CLASS_1_256D9F63CEA2C6FD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1039CE90)
#define CLASS_1_256D9F63CEA2C6FD__CTOR_OFFSET UNITYSDK_OFFSET(0x1039CCA0)
#define CLASS_1_256D9F63CEA2C6FD___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1039D890)

inline static constexpr unsigned int Class_1_256D9F63CEA2C6FD_TypeDefinitionIndex = 50200;

class Class_1_256D9F63CEA2C6FD : public ::System::Object
{
public:
	::RPG::GameCore::BigFixPoint Field_1_98; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_2; // 0x20
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_1; // 0x28
	::Struct_2_3A335394524C9E44 Field_1_160; // 0x30
	::RPG::GameCore::BigFixPoint Field_1_50; // 0xE8
	::Il2CppArray<::Class_1_AF8700EECA429FB6*>* Field_1_161; // 0xF8
	::Il2CppArray<::Class_1_AF8700EECA429FB6*>* Field_1_162; // 0x100
	::System::String* Field_1_10; // 0x108
	::RPG::GameCore::BigFixPoint Field_1_99; // 0x110
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* Field_1_9; // 0x120
	::Class_1_BB2DEB5D4328603D* Field_1_159; // 0x128
	::RPG::GameCore::BigFixPoint Field_1_49; // 0x130
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_3; // 0x140
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_0; // 0x148
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_38; // 0x150
	::RPG::GameCore::FixPoint Field_1_147; // 0x158
	::RPG::GameCore::FixPoint Field_1_12; // 0x160
	::RPG::GameCore::FixPoint Field_1_65; // 0x168
	::RPG::GameCore::FixPoint Field_1_58; // 0x170
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_96; // 0x178
	::RPG::GameCore::FixPoint Field_1_131; // 0x1C8
	::RPG::GameCore::FixPoint Field_1_104; // 0x1D0
	::RPG::GameCore::FixPoint Field_1_72; // 0x1D8
	::RPG::GameCore::FixPoint Field_1_13; // 0x1E0
	::RPG::GameCore::FixPoint Field_1_137; // 0x1E8
	::RPG::GameCore::FixPoint Field_1_69; // 0x1F0
	::RPG::GameCore::FixPoint Field_1_41; // 0x1F8
	::RPG::GameCore::FixPoint Field_1_118; // 0x200
	::RPG::GameCore::FixPoint Field_1_108; // 0x208
	::RPG::GameCore::FixPoint Field_1_15; // 0x210
	::RPG::GameCore::FixPoint Field_1_139; // 0x218
	::RPG::GameCore::FixPoint Field_1_79; // 0x220
	::RPG::GameCore::FixPoint Field_1_25; // 0x228
	::RPG::GameCore::FixPoint Field_1_83; // 0x230
	::RPG::GameCore::FixPoint Field_1_55; // 0x238
	::System::Boolean Field_1_21; // 0x240
	::System::Boolean Field_1_35; // 0x241
	::System::Boolean Field_1_34; // 0x242
	::System::Boolean Field_1_27; // 0x243
	::System::Boolean Field_1_37; // 0x244
	::System::Boolean Field_1_32; // 0x245
	::System::Boolean Field_1_36; // 0x246
	::System::Boolean Field_1_95; // 0x247
	::RPG::GameCore::FixPoint Field_1_22; // 0x248
	::RPG::GameCore::FixPoint Field_1_75; // 0x250
	::System::UInt32 Field_1_43; // 0x258
	::RPG::GameCore::DamageBlockType Field_1_93; // 0x25C
	::RPG::GameCore::FixPoint Field_1_80; // 0x260
	::RPG::GameCore::FixPoint Field_1_66; // 0x268
	::RPG::GameCore::FixPoint Field_1_158; // 0x270
	::RPG::GameCore::AttackType Field_1_4; // 0x278
	::System::Boolean Field_1_31; // 0x27C
	::System::Boolean Field_1_85; // 0x27D
	::System::Boolean Field_1_153; // 0x27E
	::System::Boolean Field_1_144; // 0x27F
	::RPG::GameCore::FixPoint Field_1_122; // 0x280
	::RPG::GameCore::FixPoint Field_1_152; // 0x288
	::RPG::GameCore::FixPoint Field_1_114; // 0x290
	::RPG::GameCore::FixPoint Field_1_102; // 0x298
	::RPG::GameCore::FixPoint Field_1_125; // 0x2A0
	::RPG::GameCore::FixPoint Field_1_109; // 0x2A8
	::RPG::GameCore::FixPoint Field_1_14; // 0x2B0
	::RPG::GameCore::FixPoint Field_1_71; // 0x2B8
	::RPG::GameCore::FinalDamageFormulaType Field_1_8; // 0x2C0
	::RPG::GameCore::AttackFormulaType Field_1_6; // 0x2C4
	::RPG::GameCore::AbilityLinearProperty Field_1_46; // 0x2C8
	::RPG::GameCore::FixPoint Field_1_90; // 0x310
	::RPG::GameCore::FixPoint Field_1_19; // 0x318
	::RPG::GameCore::FixPoint Field_1_56; // 0x320
	::RPG::GameCore::FixPoint Field_1_129; // 0x328
	::RPG::GameCore::FixPoint Field_1_57; // 0x330
	::RPG::GameCore::FixPoint Field_1_88; // 0x338
	::RPG::GameCore::FixPoint Field_1_111; // 0x340
	::RPG::GameCore::FixPoint Field_1_82; // 0x348
	::RPG::GameCore::AbilityLinearProperty Field_1_47; // 0x350
	::RPG::GameCore::AttackDamageType Field_1_5; // 0x398
	::RPG::GameCore::AttackFormulaType Field_1_7; // 0x39C
	::RPG::GameCore::FixPoint Field_1_40; // 0x3A0
	::RPG::GameCore::FixPoint Field_1_149; // 0x3A8
	::RPG::GameCore::FixPoint Field_1_145; // 0x3B0
	::RPG::GameCore::FixPoint Field_1_18; // 0x3B8
	::RPG::GameCore::FixPoint Field_1_117; // 0x3C0
	::RPG::GameCore::FixPoint Field_1_78; // 0x3C8
	::RPG::GameCore::FixPoint Field_1_140; // 0x3D0
	::RPG::GameCore::FixPoint Field_1_106; // 0x3D8
	::RPG::GameCore::FixPoint Field_1_119; // 0x3E0
	::RPG::GameCore::FixPoint Field_1_142; // 0x3E8
	::RPG::GameCore::FixPoint Field_1_70; // 0x3F0
	::RPG::GameCore::FixPoint Field_1_133; // 0x3F8
	::RPG::GameCore::FixPoint Field_1_28; // 0x400
	::RPG::GameCore::FixPoint Field_1_107; // 0x408
	::RPG::GameCore::FixPoint Field_1_17; // 0x410
	::RPG::GameCore::FixPoint Field_1_115; // 0x418
	::RPG::GameCore::FixPoint Field_1_150; // 0x420
	::RPG::GameCore::FixPoint Field_1_63; // 0x428
	::RPG::GameCore::FixPoint Field_1_89; // 0x430
	::RPG::GameCore::FixPoint Field_1_23; // 0x438
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_45; // 0x440
	::RPG::GameCore::AbilityLinearProperty Field_1_44; // 0x490
	::RPG::GameCore::FixPoint Field_1_121; // 0x4D8
	::RPG::GameCore::FixPoint Field_1_73; // 0x4E0
	::RPG::GameCore::FixPoint Field_1_135; // 0x4E8
	::RPG::GameCore::FixPoint Field_1_130; // 0x4F0
	::RPG::GameCore::FixPoint Field_1_84; // 0x4F8
	::RPG::GameCore::FixPoint Field_1_110; // 0x500
	::RPG::GameCore::FixPoint Field_1_29; // 0x508
	::RPG::GameCore::AbilityLinearProperty Field_1_97; // 0x510
	::RPG::GameCore::FixPoint Field_1_68; // 0x558
	::System::UInt32 Field_1_92; // 0x560
	::RPG::GameCore::AttackDamageType Field_1_141; // 0x564
	::RPG::GameCore::FixPoint Field_1_60; // 0x568
	::RPG::GameCore::FixPoint Field_1_64; // 0x570
	::RPG::GameCore::FixPoint Field_1_26; // 0x578
	::RPG::GameCore::FixPoint Field_1_112; // 0x580
	::RPG::GameCore::FixPoint Field_1_74; // 0x588
	::RPG::GameCore::FixPoint Field_1_39; // 0x590
	::RPG::GameCore::FixPoint Field_1_113; // 0x598
	::RPG::GameCore::FixPoint Field_1_24; // 0x5A0
	::RPG::GameCore::FixPoint Field_1_126; // 0x5A8
	::RPG::GameCore::FixPoint Field_1_62; // 0x5B0
	::RPG::GameCore::FixPoint Field_1_124; // 0x5B8
	::RPG::GameCore::FixPoint Field_1_61; // 0x5C0
	::RPG::GameCore::FixPoint Field_1_120; // 0x5C8
	::RPG::GameCore::FixPoint Field_1_67; // 0x5D0
	::RPG::GameCore::FixPoint Field_1_128; // 0x5D8
	::RPG::GameCore::FixPoint Field_1_136; // 0x5E0
	::RPG::GameCore::FixPoint Field_1_76; // 0x5E8
	::RPG::GameCore::FixPoint Field_1_148; // 0x5F0
	::RPG::GameCore::FixPoint Field_1_103; // 0x5F8
	::RPG::GameCore::FixPoint Field_1_77; // 0x600
	::RPG::GameCore::FixPoint Field_1_81; // 0x608
	::RPG::GameCore::FixPoint Field_1_51; // 0x610
	::Struct_2_8E956AF8632F72E8 Field_1_48; // 0x618
	::RPG::GameCore::FixPoint Field_1_16; // 0x698
	::RPG::GameCore::FixPoint Field_1_157; // 0x6A0
	::RPG::GameCore::FixPoint Field_1_127; // 0x6A8
	::RPG::GameCore::FixPoint Field_1_100; // 0x6B0
	::RPG::GameCore::FixPoint Field_1_146; // 0x6B8
	::RPG::GameCore::FixPoint Field_1_105; // 0x6C0
	::RPG::GameCore::FixPoint Field_1_134; // 0x6C8
	::RPG::GameCore::FixPoint Field_1_20; // 0x6D0
	::RPG::GameCore::FixPoint Field_1_59; // 0x6D8
	::RPG::GameCore::FixPoint Field_1_132; // 0x6E0
	::RPG::GameCore::FixPoint Field_1_87; // 0x6E8
	::RPG::GameCore::FixPoint Field_1_151; // 0x6F0
	::RPG::GameCore::FixPoint Field_1_138; // 0x6F8
	::RPG::GameCore::FixPoint Field_1_54; // 0x700
	::RPG::GameCore::SkillEffect Field_1_91; // 0x708
	::RPG::GameCore::FixPoint Field_1_123; // 0x710
	::RPG::GameCore::FixPoint Field_1_101; // 0x718
	::System::Boolean Field_1_33; // 0x720
	::System::Boolean Field_1_143; // 0x721
	::System::Boolean Field_1_155; // 0x722
	::System::Boolean Field_1_86; // 0x723
	::System::Boolean Field_1_154; // 0x724
	::System::Boolean Field_1_94; // 0x725
	::System::Boolean Field_1_30; // 0x726
	::RPG::GameCore::FixPoint Field_1_156; // 0x728
	::RPG::GameCore::FixPoint Field_1_11; // 0x730
	::RPG::GameCore::FixPoint Field_1_116; // 0x738
	::RPG::GameCore::FixPoint Field_1_52; // 0x740
	::RPG::GameCore::FixPoint Field_1_42; // 0x748
	::RPG::GameCore::FixPoint Field_1_53; // 0x750

	::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_256D9F63CEA2C6FD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_256D9F63CEA2C6FD_METHOD_1_E2C273CA106EBD0B_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_256D9F63CEA2C6FD_METHOD_1_E2C273CA106EBD0B_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_256D9F63CEA2C6FD_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_256D9F63CEA2C6FD___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
