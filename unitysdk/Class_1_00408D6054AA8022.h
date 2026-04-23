#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_0C8FDD52CB727E99;
class Class_1_85DF9887662222C3;
class Class_1_B958907EBFDC8D4E;
class Class_1_F3391C70DC37088D;
class Class_2_6C1010345A89A766;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::Client { class PhotoGraphResultConditionPack; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class PhotoGraphFindNpc; }
namespace RPG::GameCore { class PhotoGraphModeExtraConfigSetting; }
namespace RPG::GameCore { class PhotoGraphOverrideModeConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class ShowMainPageHint; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define CLASS_1_00408D6054AA8022_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE16B1B0)
#define CLASS_1_00408D6054AA8022_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xE170400)
#define CLASS_1_00408D6054AA8022_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xE170420)
#define CLASS_1_00408D6054AA8022_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE170380)
#define CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0xE170460)
#define CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0xE170440)
#define CLASS_1_00408D6054AA8022_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xE1703C0)
#define CLASS_1_00408D6054AA8022_GET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0xE1703A0)
#define CLASS_1_00408D6054AA8022_GET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0xE1703E0)
#define CLASS_1_00408D6054AA8022_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xE16EAB0)
#define CLASS_1_00408D6054AA8022_METHOD_1_02BE02AD3B7ABEC5_OFFSET UNITYSDK_OFFSET(0xE16B980)
#define CLASS_1_00408D6054AA8022_METHOD_1_0749CA3EDD9F2FCF_OFFSET UNITYSDK_OFFSET(0xE1704A0)
#define CLASS_1_00408D6054AA8022_METHOD_1_0BADA5371EFDD926_OFFSET UNITYSDK_OFFSET(0xE16F3B0)
#define CLASS_1_00408D6054AA8022_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0xE16D5B0)
#define CLASS_1_00408D6054AA8022_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xE16D2F0)
#define CLASS_1_00408D6054AA8022_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xE16D290)
#define CLASS_1_00408D6054AA8022_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xE16EA30)
#define CLASS_1_00408D6054AA8022_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xE16E7F0)
#define CLASS_1_00408D6054AA8022_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xE16CE20)
#define CLASS_1_00408D6054AA8022_METHOD_1_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0xE16E430)
#define CLASS_1_00408D6054AA8022_METHOD_1_3BB27E09543D8ACB_OFFSET UNITYSDK_OFFSET(0xE16D920)
#define CLASS_1_00408D6054AA8022_METHOD_1_3CDB331EC7094406_OFFSET UNITYSDK_OFFSET(0xE16ED00)
#define CLASS_1_00408D6054AA8022_METHOD_1_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0xE16B5B0)
#define CLASS_1_00408D6054AA8022_METHOD_1_40104F54A27D0FFA_OFFSET UNITYSDK_OFFSET(0xE16E130)
#define CLASS_1_00408D6054AA8022_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE16CD30)
#define CLASS_1_00408D6054AA8022_METHOD_1_4406EE3EAE9FBD6F_OFFSET UNITYSDK_OFFSET(0xE16CFD0)
#define CLASS_1_00408D6054AA8022_METHOD_1_467DE64208B0A974_OFFSET UNITYSDK_OFFSET(0xE16D4C0)
#define CLASS_1_00408D6054AA8022_METHOD_1_496B9E6FB3AA58C4_OFFSET UNITYSDK_OFFSET(0xE16E630)
#define CLASS_1_00408D6054AA8022_METHOD_1_51FF09EBE6593DAC_OFFSET UNITYSDK_OFFSET(0xE16DCA0)
#define CLASS_1_00408D6054AA8022_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xE16E690)
#define CLASS_1_00408D6054AA8022_METHOD_1_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0xE16EDA0)
#define CLASS_1_00408D6054AA8022_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0xE16C630)
#define CLASS_1_00408D6054AA8022_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0xE16D510)
#define CLASS_1_00408D6054AA8022_METHOD_1_73D4532F584D7FC2_OFFSET UNITYSDK_OFFSET(0xE16E590)
#define CLASS_1_00408D6054AA8022_METHOD_1_75A528A09123ED2F_OFFSET UNITYSDK_OFFSET(0xE16CEA0)
#define CLASS_1_00408D6054AA8022_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xE16F120)
#define CLASS_1_00408D6054AA8022_METHOD_1_7FF1F5DCD746CB3B_OFFSET UNITYSDK_OFFSET(0xE16C6D0)
#define CLASS_1_00408D6054AA8022_METHOD_1_88D4939F350C4DA1_OFFSET UNITYSDK_OFFSET(0xE16F620)
#define CLASS_1_00408D6054AA8022_METHOD_1_8F2240B3DCAE3C2C_OFFSET UNITYSDK_OFFSET(0xE16CC00)
#define CLASS_1_00408D6054AA8022_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE16F330)
#define CLASS_1_00408D6054AA8022_METHOD_1_9BFE7737D26CFA72_OFFSET UNITYSDK_OFFSET(0xE16EEF0)
#define CLASS_1_00408D6054AA8022_METHOD_1_A08F498172E0B379_OFFSET UNITYSDK_OFFSET(0xE170490)
#define CLASS_1_00408D6054AA8022_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xE16FD50)
#define CLASS_1_00408D6054AA8022_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xE170330)
#define CLASS_1_00408D6054AA8022_METHOD_1_AD1EE2024E601D67_OFFSET UNITYSDK_OFFSET(0xE16FF90)
#define CLASS_1_00408D6054AA8022_METHOD_1_AF8EA4CBC3E2C963_OFFSET UNITYSDK_OFFSET(0xE16CD80)
#define CLASS_1_00408D6054AA8022_METHOD_1_B493AAE223D9B30F_OFFSET UNITYSDK_OFFSET(0xE16CCE0)
#define CLASS_1_00408D6054AA8022_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xE170480)
#define CLASS_1_00408D6054AA8022_METHOD_1_C98BEB16ED641BC0_OFFSET UNITYSDK_OFFSET(0xE16D350)
#define CLASS_1_00408D6054AA8022_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE16D3D0)
#define CLASS_1_00408D6054AA8022_METHOD_1_D442D2E24BD9AC5C_OFFSET UNITYSDK_OFFSET(0xE16D0B0)
#define CLASS_1_00408D6054AA8022_METHOD_1_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0xE16ABC0)
#define CLASS_1_00408D6054AA8022_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0xE16E8E0)
#define CLASS_1_00408D6054AA8022_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xE170250)
#define CLASS_1_00408D6054AA8022_METHOD_1_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0xE16D420)
#define CLASS_1_00408D6054AA8022_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xE16CA30)
#define CLASS_1_00408D6054AA8022_METHOD_1_FC1860485A3F1976_OFFSET UNITYSDK_OFFSET(0xE16E4F0)
#define CLASS_1_00408D6054AA8022_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xE16EC70)
#define CLASS_1_00408D6054AA8022_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xE170410)
#define CLASS_1_00408D6054AA8022_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xE170430)
#define CLASS_1_00408D6054AA8022_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE170390)
#define CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0xE170470)
#define CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0xE170450)
#define CLASS_1_00408D6054AA8022_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xE1703D0)
#define CLASS_1_00408D6054AA8022_SET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0xE1703B0)
#define CLASS_1_00408D6054AA8022_SET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0xE1703F0)
#define CLASS_1_00408D6054AA8022_TICK_OFFSET UNITYSDK_OFFSET(0xE16C4F0)
#define CLASS_1_00408D6054AA8022__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1704F0)
#define CLASS_1_00408D6054AA8022__CTOR_OFFSET UNITYSDK_OFFSET(0xE16A560)

inline static constexpr unsigned int Class_1_00408D6054AA8022_TypeDefinitionIndex = 63998;

class Class_1_00408D6054AA8022 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_16()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00408D6054AA8022_TypeDefinitionIndex)->GetStaticField(0x6A830);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_00408D6054AA8022_TypeDefinitionIndex)->GetStaticField(0x11A30);
	}
	// static const ::System::Single Field_1_46; // 0x0
	// static const ::System::String* Field_1_52; // 0x0
	::Il2CppArray<::System::String*>* Field_1_30; // 0x10
	::UnityEngine::Coroutine* Field_1_40; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphFindNpc*>* Field_1_43; // 0x20
	::RPG::GameCore::PhotoGraphOverrideModeConfig* Field_1_31; // 0x28
	::RPG::GameCore::PropComponent* _OwnerProp_k__BackingField; // 0x30
	::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* _Config_k__BackingField; // 0x38
	::RPG::GameCore::ShowMainPageHint* Field_1_45; // 0x40
	::Class_1_F3391C70DC37088D* Field_1_25; // 0x48
	::System::String* Field_1_8; // 0x50
	::Class_3_E21F6DE9B7FA4D05* Field_1_26; // 0x58
	::UnityEngine::Coroutine* Field_1_49; // 0x60
	::RPG::Client::PhotoGraphResultConditionPack* Field_1_48; // 0x68
	::Il2CppArray<::Class_1_85DF9887662222C3*>* Field_1_17; // 0x70
	::Class_1_F3391C70DC37088D* Field_1_24; // 0x78
	::RPG::GameCore::PhotoGraphModeExtraConfigSetting* Field_1_39; // 0x80
	::Class_3_E21F6DE9B7FA4D05* Field_1_28; // 0x88
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x90
	::Class_1_B958907EBFDC8D4E* Field_1_29; // 0x98
	::Class_1_0C8FDD52CB727E99* Field_1_53; // 0xA0
	::RPG::GameCore::TaskContext* Field_1_20; // 0xA8
	::Class_1_F3391C70DC37088D* Field_1_23; // 0xB0
	::Class_2_6C1010345A89A766* Field_1_11; // 0xB8
	::RPG::GameCore::NotifyShowFuncBtnParam* Field_1_21; // 0xC0
	::System::Single Field_1_33; // 0xC8
	::System::Int32 Field_1_41; // 0xCC
	::RPG::Client::TextID Field_1_35; // 0xD0
	::System::Int32 _TriggerInRangeCount_k__BackingField; // 0xE0
	::RPG::GameCore::PhotoGraphFuncBtnType Field_1_18; // 0xE4
	::RPG::Client::TextID _CurrentShowTip_k__BackingField; // 0xE8
	::System::Boolean Field_1_44; // 0xF8
	::System::Boolean Field_1_12; // 0xF9
	::System::Boolean Field_1_54; // 0xFA
	::System::Boolean Field_1_38; // 0xFB
	::System::Int32 Field_1_22; // 0xFC
	::System::Single Field_1_47; // 0x100
	::System::Single Field_1_32; // 0x104
	::RPG::Client::TextID Field_1_36; // 0x108
	::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0x118
	::System::Int32 Field_1_19; // 0x11C
	::RPG::GameCore::PhotoGraphFovLevel Field_1_13; // 0x120
	::System::Single Field_1_10; // 0x124
	::System::Boolean Field_1_50; // 0x128
	::System::Boolean Field_1_42; // 0x129
	::System::Boolean Field_1_51; // 0x12A
	::System::Boolean Field_1_27; // 0x12B
	::System::Single Field_1_9; // 0x12C
	::System::Boolean Field_1_34; // 0x130
	::System::Boolean Field_1_14; // 0x131
	::System::Boolean Field_1_37; // 0x132
	::System::Boolean _Active_k__BackingField; // 0x133
	::System::Int32 _CurrentShowTipPriority_k__BackingField; // 0x134

	::System::Void _ctor(::Class_1_B958907EBFDC8D4E* a1, ::System::Int32 a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B958907EBFDC8D4E*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_02BE02AD3B7ABEC5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_02BE02AD3B7ABEC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_75A528A09123ED2F(::RPG::GameCore::StringHash a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_75A528A09123ED2F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4406EE3EAE9FBD6F(::RPG::GameCore::StringHash a1, ::UnityEngine::Transform*& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_4406EE3EAE9FBD6F_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::NotifyShowFuncBtnParam* Method_1_D442D2E24BD9AC5C()
	{
		return ((::RPG::GameCore::NotifyShowFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_D442D2E24BD9AC5C_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_C98BEB16ED641BC0(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_C98BEB16ED641BC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_E631B63295647DB5_OFFSET))(this);
	}

	::System::Boolean Method_1_467DE64208B0A974(::RPG::GameCore::NotifyShowFuncBtnParam* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NotifyShowFuncBtnParam*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_467DE64208B0A974_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_40104F54A27D0FFA()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_40104F54A27D0FFA_OFFSET))(this);
	}

	::System::Void Method_1_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::RPG::GameCore::PuzzleFunc Method_1_B493AAE223D9B30F()
	{
		return ((::RPG::GameCore::PuzzleFunc(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_B493AAE223D9B30F_OFFSET))(this);
	}

	::System::Boolean Method_1_FC1860485A3F1976(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_FC1860485A3F1976_OFFSET))(this, a1);
	}

	::System::Void Method_1_73D4532F584D7FC2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_73D4532F584D7FC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_3FAAA518D3F433CC_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_1_496B9E6FB3AA58C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_496B9E6FB3AA58C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FF1F5DCD746CB3B(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_7FF1F5DCD746CB3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_1_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F2240B3DCAE3C2C(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_8F2240B3DCAE3C2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF8EA4CBC3E2C963(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_AF8EA4CBC3E2C963_OFFSET))(this, a1);
	}

	::System::Void Method_1_51FF09EBE6593DAC(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_51FF09EBE6593DAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BB27E09543D8ACB(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_3BB27E09543D8ACB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CDB331EC7094406(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_3CDB331EC7094406_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9BFE7737D26CFA72(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_9BFE7737D26CFA72_OFFSET))(this, a1);
	}

	::System::Void Method_1_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BADA5371EFDD926(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::Class_1_85DF9887662222C3*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_85DF9887662222C3*&))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_0BADA5371EFDD926_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_88D4939F350C4DA1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_88D4939F350C4DA1_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD1EE2024E601D67(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_AD1EE2024E601D67_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* get_Config()
	{
		return ((::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_CONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::PropComponent* get_OwnerProp()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_OWNERPROP_OFFSET))(this);
	}

	::System::Void set_OwnerProp(::RPG::GameCore::PropComponent* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_OWNERPROP_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_OWNERENTITY_OFFSET))(this, value);
	}

	::System::Int32 get_TriggerInRangeCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_TRIGGERINRANGECOUNT_OFFSET))(this);
	}

	::System::Void set_TriggerInRangeCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_TRIGGERINRANGECOUNT_OFFSET))(this, value);
	}

	::System::Boolean get_Active()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_ACTIVE_OFFSET))(this);
	}

	::System::Void set_Active(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_ACTIVE_OFFSET))(this, value);
	}

	::RPG::GameCore::PhotoGraphAimIdentifyType get_AimIdentifyType()
	{
		return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_AIMIDENTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_AimIdentifyType(::RPG::GameCore::PhotoGraphAimIdentifyType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_AIMIDENTIFYTYPE_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_CurrentShowTip()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIP_OFFSET))(this);
	}

	::System::Void set_CurrentShowTip(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIP_OFFSET))(this, value);
	}

	::System::Int32 get_CurrentShowTipPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIPPRIORITY_OFFSET))(this);
	}

	::System::Void set_CurrentShowTipPriority(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIPPRIORITY_OFFSET))(this, value);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::Client::PhotoGraphResultConditionPack* Method_1_A08F498172E0B379()
	{
		return ((::RPG::Client::PhotoGraphResultConditionPack*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_A08F498172E0B379_OFFSET))(this);
	}

	::RPG::GameCore::PhotoGraphFovLevel Method_1_0749CA3EDD9F2FCF()
	{
		return ((::RPG::GameCore::PhotoGraphFovLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_0749CA3EDD9F2FCF_OFFSET))(this);
	}
};
