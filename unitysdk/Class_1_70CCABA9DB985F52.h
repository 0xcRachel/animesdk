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
#include "unitysdk/Struct_2_8E956AF8632F72E8.h"
#include "unitysdk/System/Object.h"

class Class_1_56A1684BE394769D;
class Class_1_AF8700EECA429FB6;
class Class_1_BB2DEB5D4328603D;
class Class_2_24193089A4D2255F;
class Class_3_024B137FE9F1BACE;
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70CCABA9DB985F52_METHOD_1_E2C273CA106EBD0B_1_OFFSET UNITYSDK_OFFSET(0xE3B99E0)
#define CLASS_1_70CCABA9DB985F52_METHOD_1_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0xE3B9960)
#define CLASS_1_70CCABA9DB985F52_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE3B9A60)
#define CLASS_1_70CCABA9DB985F52__CTOR_OFFSET UNITYSDK_OFFSET(0xE3B9840)
#define CLASS_1_70CCABA9DB985F52___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE3BA460)

inline static constexpr unsigned int Class_1_70CCABA9DB985F52_TypeDefinitionIndex = 49630;

class Class_1_70CCABA9DB985F52 : public ::System::Object
{
public:
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_33; // 0x10
	::Il2CppArray<::Class_1_AF8700EECA429FB6*>* Field_1_153; // 0x18
	::Class_1_BB2DEB5D4328603D* Field_1_150; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* Field_1_10; // 0x28
	::Il2CppArray<::Class_1_AF8700EECA429FB6*>* Field_1_152; // 0x30
	::Class_2_24193089A4D2255F* Field_1_4; // 0x38
	::Class_3_024B137FE9F1BACE* Field_1_2; // 0x40
	::System::String* Field_1_11; // 0x48
	::Class_1_56A1684BE394769D* Field_1_0; // 0x50
	::Struct_2_3A335394524C9E44 Field_1_151; // 0x58
	::Class_3_024B137FE9F1BACE* Field_1_1; // 0x110
	::Class_3_024B137FE9F1BACE* Field_1_3; // 0x118
	::RPG::GameCore::FixPoint Field_1_73; // 0x120
	::RPG::GameCore::FixPoint Field_1_34; // 0x128
	::RPG::GameCore::FixPoint Field_1_104; // 0x130
	::RPG::GameCore::FixPoint Field_1_49; // 0x138
	::RPG::GameCore::FixPoint Field_1_61; // 0x140
	::RPG::GameCore::FixPoint Field_1_17; // 0x148
	::RPG::GameCore::FixPoint Field_1_92; // 0x150
	::System::Boolean Field_1_137; // 0x158
	::System::Boolean Field_1_79; // 0x159
	::System::Boolean Field_1_30; // 0x15A
	::System::Boolean Field_1_78; // 0x15B
	::System::UInt32 Field_1_38; // 0x15C
	::RPG::GameCore::FixPoint Field_1_68; // 0x160
	::RPG::GameCore::FixPoint Field_1_59; // 0x168
	::RPG::GameCore::FixPoint Field_1_63; // 0x170
	::RPG::GameCore::FixPoint Field_1_58; // 0x178
	::RPG::GameCore::FixPoint Field_1_24; // 0x180
	::RPG::GameCore::FixPoint Field_1_84; // 0x188
	::RPG::GameCore::FixPoint Field_1_105; // 0x190
	::RPG::GameCore::FixPoint Field_1_139; // 0x198
	::RPG::GameCore::FixPoint Field_1_56; // 0x1A0
	::RPG::GameCore::FixPoint Field_1_126; // 0x1A8
	::RPG::GameCore::FixPoint Field_1_46; // 0x1B0
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_40; // 0x1B8
	::RPG::GameCore::FixPoint Field_1_127; // 0x208
	::RPG::GameCore::FixPoint Field_1_15; // 0x210
	::RPG::GameCore::FixPoint Field_1_112; // 0x218
	::RPG::GameCore::FixPoint Field_1_133; // 0x220
	::RPG::GameCore::FixPoint Field_1_114; // 0x228
	::RPG::GameCore::FixPoint Field_1_144; // 0x230
	::RPG::GameCore::FixPoint Field_1_108; // 0x238
	::RPG::GameCore::FixPoint Field_1_97; // 0x240
	::RPG::GameCore::FixPoint Field_1_128; // 0x248
	::RPG::GameCore::FixPoint Field_1_98; // 0x250
	::RPG::GameCore::FixPoint Field_1_53; // 0x258
	::RPG::GameCore::FixPoint Field_1_131; // 0x260
	::System::UInt32 Field_1_87; // 0x268
	::RPG::GameCore::FinalDamageFormulaType Field_1_9; // 0x26C
	::RPG::GameCore::FixPoint Field_1_48; // 0x270
	::RPG::GameCore::FixPoint Field_1_129; // 0x278
	::RPG::GameCore::FixPoint Field_1_80; // 0x280
	::RPG::GameCore::FixPoint Field_1_45; // 0x288
	::RPG::GameCore::FixPoint Field_1_121; // 0x290
	::RPG::GameCore::FixPoint Field_1_82; // 0x298
	::RPG::GameCore::FixPoint Field_1_100; // 0x2A0
	::RPG::GameCore::AbilityLinearProperty Field_1_39; // 0x2A8
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_89; // 0x2F0
	::RPG::GameCore::FixPoint Field_1_52; // 0x340
	::RPG::GameCore::FixPoint Field_1_44; // 0x348
	::RPG::GameCore::FixPoint Field_1_118; // 0x350
	::System::Boolean Field_1_26; // 0x358
	::System::Boolean Field_1_136; // 0x359
	::System::Boolean Field_1_32; // 0x35A
	::System::Boolean Field_1_27; // 0x35B
	::RPG::GameCore::AttackFormulaType Field_1_8; // 0x35C
	::RPG::GameCore::AttackFormulaType Field_1_7; // 0x360
	::RPG::GameCore::AttackDamageType Field_1_134; // 0x364
	::System::Boolean Field_1_25; // 0x368
	::System::Boolean Field_1_147; // 0x369
	::System::Boolean Field_1_31; // 0x36A
	::System::Boolean Field_1_146; // 0x36B
	::RPG::GameCore::AttackType Field_1_5; // 0x36C
	::RPG::GameCore::FixPoint Field_1_96; // 0x370
	::RPG::GameCore::FixPoint Field_1_18; // 0x378
	::RPG::GameCore::FixPoint Field_1_71; // 0x380
	::RPG::GameCore::FixPoint Field_1_91; // 0x388
	::Struct_2_8E956AF8632F72E8 Field_1_43; // 0x390
	::RPG::GameCore::FixPoint Field_1_132; // 0x410
	::RPG::GameCore::FixPoint Field_1_93; // 0x418
	::RPG::GameCore::FixPoint Field_1_140; // 0x420
	::RPG::GameCore::FixPoint Field_1_101; // 0x428
	::RPG::GameCore::AbilityLinearProperty Field_1_90; // 0x430
	::RPG::GameCore::FixPoint Field_1_55; // 0x478
	::RPG::GameCore::FixPoint Field_1_106; // 0x480
	::RPG::GameCore::FixPoint Field_1_149; // 0x488
	::RPG::GameCore::FixPoint Field_1_64; // 0x490
	::RPG::GameCore::FixPoint Field_1_69; // 0x498
	::RPG::GameCore::FixPoint Field_1_70; // 0x4A0
	::RPG::GameCore::FixPoint Field_1_76; // 0x4A8
	::RPG::GameCore::FixPoint Field_1_111; // 0x4B0
	::RPG::GameCore::FixPoint Field_1_135; // 0x4B8
	::RPG::GameCore::FixPoint Field_1_13; // 0x4C0
	::RPG::GameCore::FixPoint Field_1_141; // 0x4C8
	::RPG::GameCore::FixPoint Field_1_62; // 0x4D0
	::RPG::GameCore::FixPoint Field_1_19; // 0x4D8
	::RPG::GameCore::FixPoint Field_1_51; // 0x4E0
	::RPG::GameCore::FixPoint Field_1_138; // 0x4E8
	::RPG::GameCore::FixPoint Field_1_16; // 0x4F0
	::RPG::GameCore::FixPoint Field_1_102; // 0x4F8
	::RPG::GameCore::FixPoint Field_1_65; // 0x500
	::RPG::GameCore::FixPoint Field_1_122; // 0x508
	::RPG::GameCore::FixPoint Field_1_113; // 0x510
	::RPG::GameCore::FixPoint Field_1_116; // 0x518
	::RPG::GameCore::FixPoint Field_1_143; // 0x520
	::RPG::GameCore::FixPoint Field_1_119; // 0x528
	::RPG::GameCore::FixPoint Field_1_12; // 0x530
	::RPG::GameCore::FixPoint Field_1_85; // 0x538
	::RPG::GameCore::FixPoint Field_1_125; // 0x540
	::RPG::GameCore::FixPoint Field_1_117; // 0x548
	::System::Boolean Field_1_28; // 0x550
	::System::Boolean Field_1_145; // 0x551
	::System::Boolean Field_1_29; // 0x552
	::System::Boolean Field_1_21; // 0x553
	::RPG::GameCore::AttackDamageType Field_1_6; // 0x554
	::RPG::GameCore::FixPoint Field_1_142; // 0x558
	::RPG::GameCore::FixPoint Field_1_148; // 0x560
	::RPG::GameCore::FixPoint Field_1_107; // 0x568
	::RPG::GameCore::FixPoint Field_1_23; // 0x570
	::RPG::GameCore::AbilityLinearProperty Field_1_41; // 0x578
	::RPG::GameCore::FixPoint Field_1_37; // 0x5C0
	::RPG::GameCore::DamageBlockType Field_1_88; // 0x5C8
	::RPG::GameCore::SkillEffect Field_1_86; // 0x5CC
	::RPG::GameCore::AbilityLinearProperty Field_1_42; // 0x5D0
	::RPG::GameCore::FixPoint Field_1_47; // 0x618
	::RPG::GameCore::FixPoint Field_1_20; // 0x620
	::RPG::GameCore::FixPoint Field_1_120; // 0x628
	::RPG::GameCore::FixPoint Field_1_35; // 0x630
	::RPG::GameCore::FixPoint Field_1_67; // 0x638
	::RPG::GameCore::FixPoint Field_1_130; // 0x640
	::RPG::GameCore::FixPoint Field_1_36; // 0x648
	::RPG::GameCore::FixPoint Field_1_94; // 0x650
	::RPG::GameCore::FixPoint Field_1_103; // 0x658
	::RPG::GameCore::FixPoint Field_1_95; // 0x660
	::RPG::GameCore::FixPoint Field_1_75; // 0x668
	::RPG::GameCore::FixPoint Field_1_57; // 0x670
	::RPG::GameCore::FixPoint Field_1_83; // 0x678
	::RPG::GameCore::FixPoint Field_1_81; // 0x680
	::RPG::GameCore::FixPoint Field_1_14; // 0x688
	::RPG::GameCore::FixPoint Field_1_22; // 0x690
	::RPG::GameCore::FixPoint Field_1_54; // 0x698
	::RPG::GameCore::FixPoint Field_1_50; // 0x6A0
	::RPG::GameCore::FixPoint Field_1_74; // 0x6A8
	::RPG::GameCore::FixPoint Field_1_99; // 0x6B0
	::RPG::GameCore::FixPoint Field_1_110; // 0x6B8
	::RPG::GameCore::FixPoint Field_1_123; // 0x6C0
	::RPG::GameCore::FixPoint Field_1_77; // 0x6C8
	::RPG::GameCore::FixPoint Field_1_72; // 0x6D0
	::RPG::GameCore::FixPoint Field_1_109; // 0x6D8
	::RPG::GameCore::FixPoint Field_1_60; // 0x6E0
	::RPG::GameCore::FixPoint Field_1_66; // 0x6E8
	::RPG::GameCore::FixPoint Field_1_115; // 0x6F0
	::RPG::GameCore::FixPoint Field_1_124; // 0x6F8

	::System::Void _ctor(::Class_3_024B137FE9F1BACE* a1, ::Class_3_024B137FE9F1BACE* a2, ::Class_3_024B137FE9F1BACE* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_024B137FE9F1BACE*, ::Class_3_024B137FE9F1BACE*, ::Class_3_024B137FE9F1BACE*))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_METHOD_1_E2C273CA106EBD0B_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_METHOD_1_E2C273CA106EBD0B_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
