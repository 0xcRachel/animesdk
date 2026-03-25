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

#define CLASS_1_256D9F63CEA2C6FD_METHOD_1_E2C273CA106EBD0B_1_OFFSET UNITYSDK_OFFSET(0x116E2850)
#define CLASS_1_256D9F63CEA2C6FD_METHOD_1_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x116E27D0)
#define CLASS_1_256D9F63CEA2C6FD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x116E28D0)
#define CLASS_1_256D9F63CEA2C6FD__CTOR_OFFSET UNITYSDK_OFFSET(0x116E26E0)
#define CLASS_1_256D9F63CEA2C6FD___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x116E32D0)

inline static constexpr unsigned int Class_1_256D9F63CEA2C6FD_TypeDefinitionIndex = 43503;

class Class_1_256D9F63CEA2C6FD : public ::System::Object
{
public:
	::RPG::GameCore::BigFixPoint Field_1_49; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* Field_1_9; // 0x20
	::RPG::GameCore::BigFixPoint Field_1_98; // 0x28
	::System::String* Field_1_10; // 0x38
	::Class_1_BB2DEB5D4328603D* Field_1_158; // 0x40
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_1; // 0x48
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_0; // 0x50
	::Il2CppArray<::Class_1_AF8700EECA429FB6*>* Field_1_161; // 0x58
	::RPG::GameCore::BigFixPoint Field_1_48; // 0x60
	::Struct_2_3A335394524C9E44 Field_1_159; // 0x70
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_2; // 0x128
	::Il2CppArray<::Class_1_AF8700EECA429FB6*>* Field_1_160; // 0x130
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_37; // 0x138
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_3; // 0x140
	::RPG::GameCore::BigFixPoint Field_1_97; // 0x148
	::RPG::GameCore::AbilityLinearProperty Field_1_96; // 0x158
	::RPG::GameCore::FixPoint Field_1_144; // 0x1A0
	::RPG::GameCore::FixPoint Field_1_17; // 0x1A8
	::RPG::GameCore::FixPoint Field_1_109; // 0x1B0
	::RPG::GameCore::FixPoint Field_1_128; // 0x1B8
	::RPG::GameCore::FixPoint Field_1_104; // 0x1C0
	::RPG::GameCore::AttackFormulaType Field_1_7; // 0x1C8
	::RPG::GameCore::AttackDamageType Field_1_140; // 0x1CC
	::RPG::GameCore::FixPoint Field_1_16; // 0x1D0
	::RPG::GameCore::FixPoint Field_1_64; // 0x1D8
	::RPG::GameCore::FixPoint Field_1_52; // 0x1E0
	::RPG::GameCore::FixPoint Field_1_80; // 0x1E8
	::RPG::GameCore::FixPoint Field_1_50; // 0x1F0
	::RPG::GameCore::FixPoint Field_1_129; // 0x1F8
	::RPG::GameCore::FixPoint Field_1_138; // 0x200
	::RPG::GameCore::FixPoint Field_1_141; // 0x208
	::RPG::GameCore::FixPoint Field_1_20; // 0x210
	::RPG::GameCore::FixPoint Field_1_69; // 0x218
	::RPG::GameCore::FixPoint Field_1_24; // 0x220
	::RPG::GameCore::FixPoint Field_1_14; // 0x228
	::RPG::GameCore::FixPoint Field_1_150; // 0x230
	::RPG::GameCore::FixPoint Field_1_72; // 0x238
	::RPG::GameCore::FixPoint Field_1_40; // 0x240
	::RPG::GameCore::FixPoint Field_1_38; // 0x248
	::RPG::GameCore::FixPoint Field_1_25; // 0x250
	::RPG::GameCore::FixPoint Field_1_18; // 0x258
	::RPG::GameCore::AbilityLinearProperty Field_1_45; // 0x260
	::RPG::GameCore::FixPoint Field_1_105; // 0x2A8
	::RPG::GameCore::FixPoint Field_1_99; // 0x2B0
	::RPG::GameCore::AttackFormulaType Field_1_6; // 0x2B8
	::RPG::GameCore::AttackType Field_1_4; // 0x2BC
	::RPG::GameCore::FixPoint Field_1_61; // 0x2C0
	::RPG::GameCore::FixPoint Field_1_74; // 0x2C8
	::RPG::GameCore::FixPoint Field_1_86; // 0x2D0
	::RPG::GameCore::FixPoint Field_1_124; // 0x2D8
	::RPG::GameCore::FixPoint Field_1_101; // 0x2E0
	::RPG::GameCore::FixPoint Field_1_110; // 0x2E8
	::RPG::GameCore::FixPoint Field_1_151; // 0x2F0
	::RPG::GameCore::FixPoint Field_1_70; // 0x2F8
	::RPG::GameCore::FixPoint Field_1_51; // 0x300
	::RPG::GameCore::FixPoint Field_1_87; // 0x308
	::RPG::GameCore::FixPoint Field_1_115; // 0x310
	::RPG::GameCore::FixPoint Field_1_66; // 0x318
	::RPG::GameCore::FixPoint Field_1_127; // 0x320
	::RPG::GameCore::FixPoint Field_1_56; // 0x328
	::RPG::GameCore::FixPoint Field_1_63; // 0x330
	::RPG::GameCore::FixPoint Field_1_15; // 0x338
	::RPG::GameCore::FixPoint Field_1_108; // 0x340
	::RPG::GameCore::FixPoint Field_1_62; // 0x348
	::RPG::GameCore::DamageBlockType Field_1_92; // 0x350
	::System::Boolean Field_1_154; // 0x354
	::System::Boolean Field_1_142; // 0x355
	::System::Boolean Field_1_26; // 0x356
	::System::Boolean Field_1_153; // 0x357
	::RPG::GameCore::FixPoint Field_1_134; // 0x358
	::RPG::GameCore::FixPoint Field_1_82; // 0x360
	::RPG::GameCore::AbilityLinearProperty Field_1_43; // 0x368
	::RPG::GameCore::FixPoint Field_1_117; // 0x3B0
	::RPG::GameCore::FixPoint Field_1_147; // 0x3B8
	::RPG::GameCore::AttackDamageType Field_1_5; // 0x3C0
	::RPG::GameCore::FixPoint Field_1_126; // 0x3C8
	::RPG::GameCore::FixPoint Field_1_27; // 0x3D0
	::RPG::GameCore::FixPoint Field_1_148; // 0x3D8
	::RPG::GameCore::FixPoint Field_1_145; // 0x3E0
	::RPG::GameCore::FixPoint Field_1_106; // 0x3E8
	::RPG::GameCore::FixPoint Field_1_155; // 0x3F0
	::RPG::GameCore::FixPoint Field_1_23; // 0x3F8
	::Struct_2_8E956AF8632F72E8 Field_1_47; // 0x400
	::RPG::GameCore::FixPoint Field_1_41; // 0x480
	::RPG::GameCore::FixPoint Field_1_156; // 0x488
	::RPG::GameCore::FixPoint Field_1_125; // 0x490
	::RPG::GameCore::FixPoint Field_1_100; // 0x498
	::RPG::GameCore::FixPoint Field_1_157; // 0x4A0
	::RPG::GameCore::FixPoint Field_1_67; // 0x4A8
	::RPG::GameCore::FixPoint Field_1_65; // 0x4B0
	::RPG::GameCore::FixPoint Field_1_122; // 0x4B8
	::RPG::GameCore::FixPoint Field_1_76; // 0x4C0
	::RPG::GameCore::FixPoint Field_1_53; // 0x4C8
	::RPG::GameCore::FixPoint Field_1_73; // 0x4D0
	::RPG::GameCore::FixPoint Field_1_137; // 0x4D8
	::RPG::GameCore::FixPoint Field_1_19; // 0x4E0
	::RPG::GameCore::FixPoint Field_1_75; // 0x4E8
	::RPG::GameCore::FixPoint Field_1_130; // 0x4F0
	::RPG::GameCore::FixPoint Field_1_107; // 0x4F8
	::RPG::GameCore::FixPoint Field_1_149; // 0x500
	::RPG::GameCore::FixPoint Field_1_57; // 0x508
	::RPG::GameCore::FixPoint Field_1_136; // 0x510
	::RPG::GameCore::FixPoint Field_1_54; // 0x518
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_44; // 0x520
	::RPG::GameCore::FixPoint Field_1_60; // 0x570
	::RPG::GameCore::FixPoint Field_1_116; // 0x578
	::RPG::GameCore::FixPoint Field_1_102; // 0x580
	::RPG::GameCore::FixPoint Field_1_88; // 0x588
	::RPG::GameCore::FixPoint Field_1_68; // 0x590
	::RPG::GameCore::FixPoint Field_1_11; // 0x598
	::RPG::GameCore::FixPoint Field_1_78; // 0x5A0
	::RPG::GameCore::FixPoint Field_1_133; // 0x5A8
	::RPG::GameCore::FixPoint Field_1_121; // 0x5B0
	::RPG::GameCore::FixPoint Field_1_39; // 0x5B8
	::RPG::GameCore::FixPoint Field_1_118; // 0x5C0
	::System::Boolean Field_1_36; // 0x5C8
	::System::Boolean Field_1_84; // 0x5C9
	::System::Boolean Field_1_35; // 0x5CA
	::System::Boolean Field_1_143; // 0x5CB
	::System::Boolean Field_1_34; // 0x5CC
	::System::Boolean Field_1_32; // 0x5CD
	::System::Boolean Field_1_21; // 0x5CE
	::RPG::GameCore::FixPoint Field_1_81; // 0x5D0
	::RPG::GameCore::FixPoint Field_1_13; // 0x5D8
	::RPG::GameCore::FixPoint Field_1_120; // 0x5E0
	::RPG::GameCore::FixPoint Field_1_146; // 0x5E8
	::System::Boolean Field_1_31; // 0x5F0
	::System::Boolean Field_1_85; // 0x5F1
	::System::Boolean Field_1_93; // 0x5F2
	::System::Boolean Field_1_152; // 0x5F3
	::System::UInt32 Field_1_91; // 0x5F4
	::RPG::GameCore::FixPoint Field_1_12; // 0x5F8
	::RPG::GameCore::FixPoint Field_1_112; // 0x600
	::RPG::GameCore::FixPoint Field_1_59; // 0x608
	::RPG::GameCore::FixPoint Field_1_123; // 0x610
	::RPG::GameCore::FixPoint Field_1_83; // 0x618
	::RPG::GameCore::FixPoint Field_1_131; // 0x620
	::RPG::GameCore::FixPoint Field_1_89; // 0x628
	::RPG::GameCore::FixPoint Field_1_111; // 0x630
	::RPG::GameCore::FixPoint Field_1_119; // 0x638
	::RPG::GameCore::FixPoint Field_1_58; // 0x640
	::RPG::GameCore::FixPoint Field_1_114; // 0x648
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_95; // 0x650
	::RPG::GameCore::FixPoint Field_1_132; // 0x6A0
	::RPG::GameCore::FixPoint Field_1_55; // 0x6A8
	::RPG::GameCore::FixPoint Field_1_113; // 0x6B0
	::RPG::GameCore::FixPoint Field_1_139; // 0x6B8
	::RPG::GameCore::FixPoint Field_1_77; // 0x6C0
	::RPG::GameCore::FixPoint Field_1_135; // 0x6C8
	::RPG::GameCore::FixPoint Field_1_28; // 0x6D0
	::RPG::GameCore::FixPoint Field_1_22; // 0x6D8
	::System::UInt32 Field_1_42; // 0x6E0
	::RPG::GameCore::FinalDamageFormulaType Field_1_8; // 0x6E4
	::RPG::GameCore::SkillEffect Field_1_90; // 0x6E8
	::System::Boolean Field_1_30; // 0x6EC
	::System::Boolean Field_1_94; // 0x6ED
	::System::Boolean Field_1_33; // 0x6EE
	::System::Boolean Field_1_29; // 0x6EF
	::RPG::GameCore::AbilityLinearProperty Field_1_46; // 0x6F0
	::RPG::GameCore::FixPoint Field_1_103; // 0x738
	::RPG::GameCore::FixPoint Field_1_71; // 0x740
	::RPG::GameCore::FixPoint Field_1_79; // 0x748

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
