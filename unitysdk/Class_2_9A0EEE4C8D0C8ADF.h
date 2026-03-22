#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1382163A006DA4F3.h"

class Class_1_15B3DD195FDC216E;
class Class_1_1EEB3D240DD319CB;
class Class_1_A490049D11FC7AE7;
class Class_1_D311B9D517905070;
class Class_1_E328574DD916C7C4;
namespace RPG::GameCore { class ActivityDiceCombatAIGroupRow; }
namespace RPG::GameCore { class ActivityDiceCombatAvatarRow; }
namespace RPG::GameCore { class ActivityDiceCombatDiceContentRow; }
namespace RPG::GameCore { class ActivityDiceCombatRankConfigRow; }
namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace RPG::GameCore { class ActivityDiceCombatStageRow; }
namespace RPG::GameCore { class ActivityDiceRuleGroupRow; }
namespace RPG::GameCore { class DiceCombatCampaignConfigRow; }
namespace RPG::GameCore { class DiceCombatColorfulDiceSkillConditionConfig; }
namespace RPG::GameCore { class DiceCombatColorfulDiceSkillConfig; }
namespace RPG::GameCore { class DiceCombatConstValueRow; }
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace RPG::GameCore { class DiceCombatModifierConfig; }
namespace RPG::GameCore { class DiceCombatPresetConfig; }
namespace RPG::GameCore { class DiceCombatSkillConfig; }
namespace RPG::GameCore { class DiceCombatWeatherSkillConfig; }
namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_9A0EEE4C8D0C8ADF_GET_ACTIVITYDICECOMBATAVATARCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88E00)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATAIGROUPCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88EF0)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATCOLORFULDICESKILLCONDITIONCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88F00)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATCOLORFULDICESKILLJSONCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88ED0)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATCONSTVALUECONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88DF0)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATDICECAMPAIGNCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88E70)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATDICECONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88E40)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATDICECONTENTCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88E10)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATGLOBALABILITIESCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88EC0)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATGLOBALMODIFIERSCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88EB0)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATLUCKCONTROLCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88F10)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATMODIFIERCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88E30)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATRANKTABLE_OFFSET UNITYSDK_OFFSET(0x15F88EE0)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATRULEGROUPCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88E80)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATSKILLCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88E20)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATSKILLJSONCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88E50)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATSPECIALRULECONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88E90)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATSTAGECONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88E60)
#define CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATWEATHERSKILLJSONCONFIGS_OFFSET UNITYSDK_OFFSET(0x15F88EA0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x15F85050)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_0ED3B86F091E6896_OFFSET UNITYSDK_OFFSET(0x15F88B40)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x15F88200)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_2F4AB732914A4E6A_OFFSET UNITYSDK_OFFSET(0x15F88540)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_34FAD805B2009967_OFFSET UNITYSDK_OFFSET(0x15F85FB0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_3CDBECD29020C0A4_OFFSET UNITYSDK_OFFSET(0x15F88BB0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_420F5543CED5025E_1_OFFSET UNITYSDK_OFFSET(0x15F86A90)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_420F5543CED5025E_OFFSET UNITYSDK_OFFSET(0x15F86980)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x15F848B0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_4C610D67F750ECE4_OFFSET UNITYSDK_OFFSET(0x15F889C0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_4D857397F1C96602_OFFSET UNITYSDK_OFFSET(0x15F88AD0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_4F90F278876933A1_OFFSET UNITYSDK_OFFSET(0x15F84AF0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x15F84C20)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_5F71324A3BD0695E_1_OFFSET UNITYSDK_OFFSET(0x15F85EB0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_5F71324A3BD0695E_OFFSET UNITYSDK_OFFSET(0x15F85B60)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_6898E404C00274B3_OFFSET UNITYSDK_OFFSET(0x15F88C20)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_6D1A0F05C2F91723_OFFSET UNITYSDK_OFFSET(0x15F88D80)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_770F36AB8D95DA6D_OFFSET UNITYSDK_OFFSET(0x15F555E0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_8080E22F79F246F0_OFFSET UNITYSDK_OFFSET(0x15F84BD0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_855CC70BE5C19DD0_OFFSET UNITYSDK_OFFSET(0x15F88C90)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x15F87FE0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x15F87D50)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_10_OFFSET UNITYSDK_OFFSET(0x15F87A50)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_11_OFFSET UNITYSDK_OFFSET(0x15F87BD0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_1_OFFSET UNITYSDK_OFFSET(0x15F86BA0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_2_OFFSET UNITYSDK_OFFSET(0x15F86E50)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_3_OFFSET UNITYSDK_OFFSET(0x15F86FD0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_4_OFFSET UNITYSDK_OFFSET(0x15F87150)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_5_OFFSET UNITYSDK_OFFSET(0x15F872D0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_6_OFFSET UNITYSDK_OFFSET(0x15F87450)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_7_OFFSET UNITYSDK_OFFSET(0x15F875D0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_8_OFFSET UNITYSDK_OFFSET(0x15F87750)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_9_OFFSET UNITYSDK_OFFSET(0x15F878D0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x15F850F0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_A3097DC92280D796_OFFSET UNITYSDK_OFFSET(0x15F88A60)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_A46A4418E0BA8711_OFFSET UNITYSDK_OFFSET(0x15F85AF0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_B13A2FC3021133F8_OFFSET UNITYSDK_OFFSET(0x15F84B30)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_B9F80B55BB420005_OFFSET UNITYSDK_OFFSET(0x15F553F0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_BB9B3A0509D9B709_OFFSET UNITYSDK_OFFSET(0x15F88720)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_C4F21A825380EFDA_1_OFFSET UNITYSDK_OFFSET(0x15F88800)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_C4F21A825380EFDA_2_OFFSET UNITYSDK_OFFSET(0x15F88870)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_C4F21A825380EFDA_3_OFFSET UNITYSDK_OFFSET(0x15F88950)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_C4F21A825380EFDA_OFFSET UNITYSDK_OFFSET(0x15F88790)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_1_OFFSET UNITYSDK_OFFSET(0x15F856E0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_2_OFFSET UNITYSDK_OFFSET(0x15F85820)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_3_OFFSET UNITYSDK_OFFSET(0x15F860E0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_4_OFFSET UNITYSDK_OFFSET(0x15F86480)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_5_OFFSET UNITYSDK_OFFSET(0x15F865C0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_6_OFFSET UNITYSDK_OFFSET(0x15F86700)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_7_OFFSET UNITYSDK_OFFSET(0x15F86840)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0x15F85270)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3EA5C9E7ED3E40D_1_OFFSET UNITYSDK_OFFSET(0x15F854C0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3EA5C9E7ED3E40D_2_OFFSET UNITYSDK_OFFSET(0x15F855D0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3EA5C9E7ED3E40D_3_OFFSET UNITYSDK_OFFSET(0x15F85DA0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3EA5C9E7ED3E40D_OFFSET UNITYSDK_OFFSET(0x15F853B0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D42382FD5B367B7F_OFFSET UNITYSDK_OFFSET(0x15F888E0)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_DE0C3FB81E649306_OFFSET UNITYSDK_OFFSET(0x15F55310)
#define CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_F6A201B20B7C7E1F_OFFSET UNITYSDK_OFFSET(0x15F86220)
#define CLASS_2_9A0EEE4C8D0C8ADF__CTOR_OFFSET UNITYSDK_OFFSET(0x15F84040)

inline static constexpr unsigned int Class_2_9A0EEE4C8D0C8ADF_TypeDefinitionIndex = 27662;

class Class_2_9A0EEE4C8D0C8ADF : public ::Class_1_1382163A006DA4F3
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::LittleGameLevelConfig* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatStageRow*>* _DiceCombatStageConfigs_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig*>* _DiceCombatColorfulDiceSkillConditionConfigs_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>* _DiceCombatSpecialRuleConfigs_k__BackingField; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E328574DD916C7C4*>* _DiceCombatModifierConfigs_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatCampaignConfigRow*>* _DiceCombatDiceCampaignConfigs_k__BackingField; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*>* _DiceCombatRankTable_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatModifierConfig*>* _DiceCombatGlobalModifiersConfigs_k__BackingField; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1EEB3D240DD319CB*>* _DiceCombatLuckControlConfigs_k__BackingField; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatWeatherSkillConfig*>* _DiceCombatWeatherSkillJsonConfigs_k__BackingField; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatInsertAbilityConfig*>* _DiceCombatGlobalAbilitiesConfigs_k__BackingField; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatSkillConfig*>* _DiceCombatSkillJsonConfigs_k__BackingField; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatColorfulDiceSkillConfig*>* _DiceCombatColorfulDiceSkillJsonConfigs_k__BackingField; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>* _DiceCombatDiceContentConfigs_k__BackingField; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceRuleGroupRow*>* _DiceCombatRuleGroupConfigs_k__BackingField; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_15B3DD195FDC216E*>* _DiceCombatSkillConfigs_k__BackingField; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatConstValueRow*>* _DiceCombatConstValueConfigs_k__BackingField; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>* _DiceCombatAIGroupConfigs_k__BackingField; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D311B9D517905070*>* _DiceCombatDiceConfigs_k__BackingField; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>* _ActivityDiceCombatAvatarConfigs_k__BackingField; // 0xB0

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameLevelConfig* Method_2_4F90F278876933A1()
	{
		return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_4F90F278876933A1_OFFSET))(this);
	}

	::Class_1_15B3DD195FDC216E* Method_2_DE0C3FB81E649306(::System::UInt32 a1)
	{
		return ((::Class_1_15B3DD195FDC216E*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_DE0C3FB81E649306_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatSkillConfig* Method_2_B9F80B55BB420005(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DiceCombatSkillConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_B9F80B55BB420005_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatSkillConfig* Method_2_B13A2FC3021133F8(::System::String* a1)
	{
		return ((::RPG::GameCore::DiceCombatSkillConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_B13A2FC3021133F8_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatWeatherSkillConfig* Method_2_770F36AB8D95DA6D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DiceCombatWeatherSkillConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_770F36AB8D95DA6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8080E22F79F246F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_8080E22F79F246F0_OFFSET))(this);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_OFFSET))(this);
	}

	::System::Single Method_2_D3CDDBF95A81E584()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_OFFSET))(this);
	}

	::System::Single Method_2_D3EA5C9E7ED3E40D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3EA5C9E7ED3E40D_OFFSET))(this);
	}

	::System::Single Method_2_D3EA5C9E7ED3E40D_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3EA5C9E7ED3E40D_1_OFFSET))(this);
	}

	::System::Single Method_2_D3EA5C9E7ED3E40D_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3EA5C9E7ED3E40D_2_OFFSET))(this);
	}

	::System::Single Method_2_D3CDDBF95A81E584_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_1_OFFSET))(this);
	}

	::System::Single Method_2_D3CDDBF95A81E584_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_2_OFFSET))(this);
	}

	::System::UInt32 Method_2_5F71324A3BD0695E()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_5F71324A3BD0695E_OFFSET))(this);
	}

	::System::Single Method_2_D3EA5C9E7ED3E40D_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3EA5C9E7ED3E40D_3_OFFSET))(this);
	}

	::System::UInt32 Method_2_5F71324A3BD0695E_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_5F71324A3BD0695E_1_OFFSET))(this);
	}

	::System::UInt32 Method_2_34FAD805B2009967()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_34FAD805B2009967_OFFSET))(this);
	}

	::System::Single Method_2_D3CDDBF95A81E584_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_3_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::DynamicValue*>* Method_2_F6A201B20B7C7E1F()
	{
		return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_F6A201B20B7C7E1F_OFFSET))(this);
	}

	::System::Single Method_2_D3CDDBF95A81E584_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_4_OFFSET))(this);
	}

	::System::Single Method_2_D3CDDBF95A81E584_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_5_OFFSET))(this);
	}

	::System::Single Method_2_D3CDDBF95A81E584_6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_6_OFFSET))(this);
	}

	::System::Single Method_2_D3CDDBF95A81E584_7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D3CDDBF95A81E584_7_OFFSET))(this);
	}

	::System::String* Method_2_420F5543CED5025E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_420F5543CED5025E_OFFSET))(this);
	}

	::System::String* Method_2_420F5543CED5025E_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_420F5543CED5025E_1_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_1_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_2_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_3_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_4_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_5_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_6_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_7_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4_8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_8_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4_9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_9_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4_10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_10_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4_11()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_98060E4D16CBDFE4_11_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatConstValueRow* Method_2_A46A4418E0BA8711(::System::String* a1)
	{
		return ((::RPG::GameCore::DiceCombatConstValueRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_A46A4418E0BA8711_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityDiceCombatAvatarRow* Method_2_2F4AB732914A4E6A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatAvatarRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_2F4AB732914A4E6A_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityDiceCombatDiceContentRow* Method_2_BB9B3A0509D9B709(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatDiceContentRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_BB9B3A0509D9B709_OFFSET))(this, a1);
	}

	::Class_1_15B3DD195FDC216E* Method_2_C4F21A825380EFDA(::System::UInt32 a1)
	{
		return ((::Class_1_15B3DD195FDC216E*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_C4F21A825380EFDA_OFFSET))(this, a1);
	}

	::Class_1_E328574DD916C7C4* Method_2_C4F21A825380EFDA_1(::System::UInt32 a1)
	{
		return ((::Class_1_E328574DD916C7C4*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_C4F21A825380EFDA_1_OFFSET))(this, a1);
	}

	::Class_1_D311B9D517905070* Method_2_C4F21A825380EFDA_2(::System::UInt32 a1)
	{
		return ((::Class_1_D311B9D517905070*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_C4F21A825380EFDA_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityDiceCombatStageRow* Method_2_D42382FD5B367B7F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatStageRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_D42382FD5B367B7F_OFFSET))(this, a1);
	}

	::Class_1_A490049D11FC7AE7* Method_2_C4F21A825380EFDA_3(::System::UInt32 a1)
	{
		return ((::Class_1_A490049D11FC7AE7*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_C4F21A825380EFDA_3_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatPresetConfig* Method_2_4C610D67F750ECE4(::System::String* a1)
	{
		return ((::RPG::GameCore::DiceCombatPresetConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_4C610D67F750ECE4_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatCampaignConfigRow* Method_2_A3097DC92280D796(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DiceCombatCampaignConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_A3097DC92280D796_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityDiceRuleGroupRow* Method_2_4D857397F1C96602(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceRuleGroupRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_4D857397F1C96602_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* Method_2_0ED3B86F091E6896(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_0ED3B86F091E6896_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityDiceCombatRankConfigRow* Method_2_3CDBECD29020C0A4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatRankConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_3CDBECD29020C0A4_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityDiceCombatAIGroupRow* Method_2_6898E404C00274B3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatAIGroupRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_6898E404C00274B3_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityDiceCombatRankConfigRow* Method_2_855CC70BE5C19DD0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatRankConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_855CC70BE5C19DD0_OFFSET))(this, a1);
	}

	::Class_1_1EEB3D240DD319CB* Method_2_6D1A0F05C2F91723(::System::UInt32 a1)
	{
		return ((::Class_1_1EEB3D240DD319CB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_METHOD_2_6D1A0F05C2F91723_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatConstValueRow*>* get_DiceCombatConstValueConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatConstValueRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATCONSTVALUECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>* get_ActivityDiceCombatAvatarConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_ACTIVITYDICECOMBATAVATARCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>* get_DiceCombatDiceContentConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATDICECONTENTCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_15B3DD195FDC216E*>* get_DiceCombatSkillConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_15B3DD195FDC216E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATSKILLCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E328574DD916C7C4*>* get_DiceCombatModifierConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E328574DD916C7C4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATMODIFIERCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D311B9D517905070*>* get_DiceCombatDiceConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D311B9D517905070*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATDICECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatSkillConfig*>* get_DiceCombatSkillJsonConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATSKILLJSONCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatStageRow*>* get_DiceCombatStageConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatStageRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATSTAGECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatCampaignConfigRow*>* get_DiceCombatDiceCampaignConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatCampaignConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATDICECAMPAIGNCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceRuleGroupRow*>* get_DiceCombatRuleGroupConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceRuleGroupRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATRULEGROUPCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>* get_DiceCombatSpecialRuleConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATSPECIALRULECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatWeatherSkillConfig*>* get_DiceCombatWeatherSkillJsonConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatWeatherSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATWEATHERSKILLJSONCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatModifierConfig*>* get_DiceCombatGlobalModifiersConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatModifierConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATGLOBALMODIFIERSCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatInsertAbilityConfig*>* get_DiceCombatGlobalAbilitiesConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatInsertAbilityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATGLOBALABILITIESCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatColorfulDiceSkillConfig*>* get_DiceCombatColorfulDiceSkillJsonConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatColorfulDiceSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATCOLORFULDICESKILLJSONCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*>* get_DiceCombatRankTable()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATRANKTABLE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>* get_DiceCombatAIGroupConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATAIGROUPCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig*>* get_DiceCombatColorfulDiceSkillConditionConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATCOLORFULDICESKILLCONDITIONCONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1EEB3D240DD319CB*>* get_DiceCombatLuckControlConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1EEB3D240DD319CB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A0EEE4C8D0C8ADF_GET_DICECOMBATLUCKCONTROLCONFIGS_OFFSET))(this);
	}
};
