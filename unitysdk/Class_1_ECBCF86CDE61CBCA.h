#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/RegionVisualStateReason.h"
#include "unitysdk/RPG/Client/RegionVisualStateRefCntReason.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionType.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_3948F09825CE1BA8;
class Class_1_56FF45D7B2C55655;
class Class_1_B8CEC01F5C43CB98;
class Class_1_DE4C6B309308A230;
class Class_1_ECBCF86CDE61CBCA_Class_5_CE608A1B1B2022FC;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelRegionInfo; }
namespace RPG::GameCore { class LevelRegionStateCondition; }
namespace RPG::GameCore { class LevelRegionStateConditionSet; }
namespace RPG::GameCore { class LevelRegionStateConfig; }
namespace RPG::GameCore { class StageRegionAffect; }
namespace RPG::GameCore { class StageRegionConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_0EDD4D9013BF6C8E_OFFSET UNITYSDK_OFFSET(0xD2B46D0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_165AE508D91EE03A_OFFSET UNITYSDK_OFFSET(0xD2B31A0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_1D54615E03D2FCC5_OFFSET UNITYSDK_OFFSET(0xD2B5CB0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_1F3ACF432CD951EF_OFFSET UNITYSDK_OFFSET(0xD2B1920)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_21A42FBD62361B88_OFFSET UNITYSDK_OFFSET(0xD2B29C0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_32C75C8D022DC9D2_OFFSET UNITYSDK_OFFSET(0xD2AF000)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_35537D55D369FC1D_OFFSET UNITYSDK_OFFSET(0xD2B0620)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_389074CCFDE1BBF2_OFFSET UNITYSDK_OFFSET(0xD2B2BB0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_38EFA07E130D4700_OFFSET UNITYSDK_OFFSET(0xD2B3F90)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_3CDB331EC7094406_OFFSET UNITYSDK_OFFSET(0xD2B33F0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_42534C094D9FC222_OFFSET UNITYSDK_OFFSET(0xD2B5080)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_43000B19EB1B43FA_OFFSET UNITYSDK_OFFSET(0xD2B4C00)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xD2B1F60)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_4991E70DB4C9BD6A_OFFSET UNITYSDK_OFFSET(0xD2B2A60)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_4993EDAE54425105_1_OFFSET UNITYSDK_OFFSET(0xD2B5070)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0xD2B4AF0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_53788AABC08BED63_OFFSET UNITYSDK_OFFSET(0xD2B27B0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0xD2B32D0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_665EB4368AD6D5C9_OFFSET UNITYSDK_OFFSET(0xD2AFB20)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xD2AF360)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_67E0E4338F40B924_OFFSET UNITYSDK_OFFSET(0xD2B21C0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_68A284F1C7B68BE7_OFFSET UNITYSDK_OFFSET(0xD2B2790)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_6ABA6A7D3FD8E04E_OFFSET UNITYSDK_OFFSET(0xD2B4BA0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_6CC0E8D2DB72D85E_OFFSET UNITYSDK_OFFSET(0xD2ADA80)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_74C5E451DB3BCE7F_OFFSET UNITYSDK_OFFSET(0xD2B4E70)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_7AAC3BA59076A5DD_OFFSET UNITYSDK_OFFSET(0xD2B36C0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_7ED19D28CA95FF53_OFFSET UNITYSDK_OFFSET(0xD2AE430)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_85420F280B5241BE_OFFSET UNITYSDK_OFFSET(0xD2B3A60)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0xD2B24F0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_8BCD979DB7F15537_OFFSET UNITYSDK_OFFSET(0xD2B2440)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_8E0B85E36A1F5190_OFFSET UNITYSDK_OFFSET(0xD2B0920)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_91217E1D36C5D86A_OFFSET UNITYSDK_OFFSET(0xD2B40C0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD2B2E70)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_992FFA008DB8D8FB_OFFSET UNITYSDK_OFFSET(0xD2B5210)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xD2B4B00)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_A5058F1AD6A80A4F_OFFSET UNITYSDK_OFFSET(0xD2B2F10)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_A67740DE0D63E2A8_OFFSET UNITYSDK_OFFSET(0xD2B0E70)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_A88757AFAAABAF15_OFFSET UNITYSDK_OFFSET(0xD2B5060)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_A8CB5027BF8B913B_OFFSET UNITYSDK_OFFSET(0xD2B37A0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xD2ACDE0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_BBAB4D72BFD3417E_OFFSET UNITYSDK_OFFSET(0xD2B4B30)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_BCC1A1E4BA3D2648_OFFSET UNITYSDK_OFFSET(0xD2B4AD0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_BDF0D5CAB721F797_OFFSET UNITYSDK_OFFSET(0xD2B1460)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_C3D9ED19B24574D4_OFFSET UNITYSDK_OFFSET(0xD2AEDA0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_C40F3C7ACFCEAE85_OFFSET UNITYSDK_OFFSET(0xD2B4350)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD2B3A20)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD2B2E00)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_CB972F32A412B945_OFFSET UNITYSDK_OFFSET(0xD2B4B20)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_CCD7CE05545A362B_OFFSET UNITYSDK_OFFSET(0xD2B4BF0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_D52BA3DAE5DF1A9E_OFFSET UNITYSDK_OFFSET(0xD2AF270)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_D8BA6DB5D7B587F3_OFFSET UNITYSDK_OFFSET(0xD2B4190)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xD2B5040)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0xD2ADCD0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_DD1CE400790DF441_OFFSET UNITYSDK_OFFSET(0xD2AFC20)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0xD2B1BF0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xD2B30E0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_E32BCC2C6A959814_OFFSET UNITYSDK_OFFSET(0xD2AFD30)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_EB82938F0E4CD783_OFFSET UNITYSDK_OFFSET(0xD2B2810)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xD2B5020)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD2B4B80)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xD2B4880)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0xD2B2FC0)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F755FAB34BE52637_OFFSET UNITYSDK_OFFSET(0xD2B4B10)
#define CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F79C8C38C2952CAE_OFFSET UNITYSDK_OFFSET(0xD2B50E0)
#define CLASS_1_ECBCF86CDE61CBCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD2ACD10)
#define CLASS_1_ECBCF86CDE61CBCA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD2B5D20)
#define CLASS_1_ECBCF86CDE61CBCA__CTOR_OFFSET UNITYSDK_OFFSET(0xD2ACE30)
#define CLASS_1_ECBCF86CDE61CBCA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD2B6050)

inline static constexpr unsigned int Class_1_ECBCF86CDE61CBCA_TypeDefinitionIndex = 57342;

class Class_1_ECBCF86CDE61CBCA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>** StaticGet_Field_1_40()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECBCF86CDE61CBCA_TypeDefinitionIndex)->GetStaticField(0x3A040);
	}
	static ::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECBCF86CDE61CBCA_TypeDefinitionIndex)->GetStaticField(0x3A048);
	}
	static ::Class_1_ECBCF86CDE61CBCA** StaticGet_Field_1_0()
	{
		return (::Class_1_ECBCF86CDE61CBCA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECBCF86CDE61CBCA_TypeDefinitionIndex)->GetStaticField(0x3A050);
	}
	// static const ::System::String* Field_1_39; // 0x0
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionVisualState>*>* Field_1_19; // 0x10
	::RPG::GameCore::LevelRegionStateConfig* Field_1_32; // 0x18
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_12; // 0x20
	::Class_1_3948F09825CE1BA8* Field_1_16; // 0x28
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_37; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_18; // 0x38
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_38; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* Field_1_3; // 0x48
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_35; // 0x50
	::RPG::GameCore::StageRegionConfig* Field_1_14; // 0x58
	::RPG::GameCore::HoyoTagContainer* Field_1_27; // 0x60
	::RPG::GameCore::HoyoTagContainer* Field_1_28; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* Field_1_2; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B8CEC01F5C43CB98*>* Field_1_30; // 0x78
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_34; // 0x80
	::UnityEngine::GameObject* Field_1_17; // 0x88
	::Class_1_ECBCF86CDE61CBCA_Class_5_CE608A1B1B2022FC* Field_1_1; // 0x90
	::Class_1_56FF45D7B2C55655* Field_1_15; // 0x98
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_26; // 0xA0
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority>*>*>* Field_1_20; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_33; // 0xB0
	::System::Action_3<::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* Field_1_13; // 0xB8
	::RPG::GameCore::LevelRegionInfo* Field_1_31; // 0xC0
	::UnityEngine::Matrix4x4 Field_1_29; // 0xC8
	::System::Boolean Field_1_9; // 0x108
	::System::Boolean Field_1_5; // 0x109
	::System::Boolean Field_1_10; // 0x10A
	::System::Boolean Field_1_4; // 0x10B
	::RPG::GameCore::StageRegionVisualState Field_1_23; // 0x10C
	::RPG::GameCore::StageRegionVisualState Field_1_22; // 0x110
	::System::Boolean Field_1_11; // 0x114
	::System::Boolean Field_1_36; // 0x115
	::RPG::GameCore::StageRegionActiveState Field_1_25; // 0x118
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Field_1_24; // 0x11C
	::System::Boolean Field_1_6; // 0x120
	::System::Boolean Field_1_21; // 0x121
	::System::Boolean Field_1_7; // 0x122
	::System::Boolean Field_1_42; // 0x123
	::System::Int32 Field_1_41; // 0x124

	::System::Void _ctor(::Class_1_3948F09825CE1BA8* a1, ::RPG::GameCore::StageRegionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3948F09825CE1BA8*, ::RPG::GameCore::StageRegionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_6CC0E8D2DB72D85E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_6CC0E8D2DB72D85E_OFFSET))(this);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_1_7ED19D28CA95FF53(::RPG::GameCore::LevelRegionInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionInfo*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_7ED19D28CA95FF53_OFFSET))(this, a1);
	}

	::System::Void Method_1_D52BA3DAE5DF1A9E(::Class_1_56FF45D7B2C55655* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_D52BA3DAE5DF1A9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E32BCC2C6A959814()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_E32BCC2C6A959814_OFFSET))(this);
	}

	::System::Void Method_1_1F3ACF432CD951EF(::Class_1_ECBCF86CDE61CBCA* a1, ::RPG::GameCore::StageRegionVisualState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_1F3ACF432CD951EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DEA6ACF0B96986BD(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_DEA6ACF0B96986BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_1_35537D55D369FC1D(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_35537D55D369FC1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_8BC85DADEC2C3862_OFFSET))(this);
	}

	::System::Void Method_1_67E0E4338F40B924(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_67E0E4338F40B924_OFFSET))(this, a1);
	}

	::System::Void Method_1_53788AABC08BED63(::RPG::GameCore::LevelRegionStateConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionStateConfig*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_53788AABC08BED63_OFFSET))(this, a1);
	}

	::System::Void Method_1_665EB4368AD6D5C9(::Class_1_ECBCF86CDE61CBCA* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_665EB4368AD6D5C9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_EB82938F0E4CD783(::Class_1_ECBCF86CDE61CBCA* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_EB82938F0E4CD783_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DD1CE400790DF441(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_DD1CE400790DF441_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_389074CCFDE1BBF2(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_389074CCFDE1BBF2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4991E70DB4C9BD6A(::RPG::GameCore::StageRegionVisualState a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::GameCore::StageRegionActiveState a3, ::RPG::GameCore::StageRegionActiveState a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_4991E70DB4C9BD6A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_A5058F1AD6A80A4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_A5058F1AD6A80A4F_OFFSET))(this);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_1_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_BDF0D5CAB721F797(::RPG::GameCore::StageRegionVisualState a1, ::System::Boolean a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_BDF0D5CAB721F797_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8BCD979DB7F15537(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_8BCD979DB7F15537_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CDB331EC7094406(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_3CDB331EC7094406_OFFSET))(this, a1);
	}

	::System::Void Method_1_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_609FA3D38FA252B6_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AAC3BA59076A5DD(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_7AAC3BA59076A5DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_165AE508D91EE03A(::RPG::GameCore::StageRegionVisualState a1, ::System::Boolean a2, ::Class_1_303D5A33D1401D59* a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::System::Boolean, ::Class_1_303D5A33D1401D59*, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_165AE508D91EE03A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_85420F280B5241BE(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_85420F280B5241BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_38EFA07E130D4700(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_38EFA07E130D4700_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_91217E1D36C5D86A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_91217E1D36C5D86A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8BA6DB5D7B587F3(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*&))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_D8BA6DB5D7B587F3_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_C40F3C7ACFCEAE85(::RPG::GameCore::LevelRegionStateCondition* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateCondition*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_C40F3C7ACFCEAE85_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0EDD4D9013BF6C8E(::RPG::GameCore::LevelRegionStateConditionSet* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateConditionSet*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_0EDD4D9013BF6C8E_OFFSET))(a1);
	}

	::System::Void Method_1_C3D9ED19B24574D4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_C3D9ED19B24574D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_32C75C8D022DC9D2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_32C75C8D022DC9D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageRegionType Method_1_BCC1A1E4BA3D2648()
	{
		return ((::RPG::GameCore::StageRegionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_BCC1A1E4BA3D2648_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::StageRegionAffect*>* Method_1_68A284F1C7B68BE7()
	{
		return ((::Il2CppArray<::RPG::GameCore::StageRegionAffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_68A284F1C7B68BE7_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionConfig* Method_1_F755FAB34BE52637()
	{
		return ((::RPG::GameCore::StageRegionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F755FAB34BE52637_OFFSET))(this);
	}

	::RPG::GameCore::LevelRegionInfo* Method_1_CB972F32A412B945()
	{
		return ((::RPG::GameCore::LevelRegionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_CB972F32A412B945_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_8E0B85E36A1F5190()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_8E0B85E36A1F5190_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_A67740DE0D63E2A8()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_A67740DE0D63E2A8_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionActiveState Method_1_21A42FBD62361B88()
	{
		return ((::RPG::GameCore::StageRegionActiveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_21A42FBD62361B88_OFFSET))(this);
	}

	static ::RPG::GameCore::StageRegionActiveState Method_1_BBAB4D72BFD3417E(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::RPG::GameCore::StageRegionActiveState(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_BBAB4D72BFD3417E_OFFSET))(a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_6ABA6A7D3FD8E04E()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_6ABA6A7D3FD8E04E_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_CCD7CE05545A362B()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_CCD7CE05545A362B_OFFSET))(this);
	}

	::System::Boolean Method_1_43000B19EB1B43FA(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_43000B19EB1B43FA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_74C5E451DB3BCE7F(::Class_1_303D5A33D1401D59* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::Class_1_303D5A33D1401D59*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_74C5E451DB3BCE7F_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Boolean Method_1_A8CB5027BF8B913B(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_A8CB5027BF8B913B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Method_1_A88757AFAAABAF15()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_A88757AFAAABAF15_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Method_1_4993EDAE54425105_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_4993EDAE54425105_1_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_42534C094D9FC222()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_42534C094D9FC222_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_F79C8C38C2952CAE()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_F79C8C38C2952CAE_OFFSET))(this);
	}

	::System::Void Method_1_992FFA008DB8D8FB(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_992FFA008DB8D8FB_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_1D54615E03D2FCC5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_METHOD_1_1D54615E03D2FCC5_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
