#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_BlinkParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ChromaticAberrationParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ColorGradingParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_GaussianBlurParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_LensGlitch2Parameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_PPPatternParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_RadialBlurParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_VignetteParameter.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_Priority.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D27BF54F25500E5F;
class Class_1_E0B2943A83765539;
class Class_2_1FB66008306098B0;
class Class_2_74361E0442AB1DB0;
class Class_2_F9868A24C60208C0;
namespace RPG::CustomRP { class PPFilterStack; }
namespace RPG::CustomRP { class RPGAdditionalColorGrading; }
namespace RPG::CustomRP { class RPGBlink; }
namespace RPG::CustomRP { class RPGChromaticAberration; }
namespace RPG::CustomRP { class RPGColorGrading; }
namespace RPG::CustomRP { class RPGGaussianBlur; }
namespace RPG::CustomRP { class RPGLensGlitch2; }
namespace RPG::CustomRP { class RPGPPPattern; }
namespace RPG::CustomRP { class RPGRadialBlur; }
namespace RPG::CustomRP { class RPGVignette; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RPGColorGradingCurveEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_53BA4F2C2E556314_METHOD_1_034A921350C23C22_OFFSET UNITYSDK_OFFSET(0x10B815E0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x10B7E6A0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x10B82A20)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_1C239F41DAA7040E_OFFSET UNITYSDK_OFFSET(0x10B836D0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10B80ED0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_1F49294A70542425_OFFSET UNITYSDK_OFFSET(0x10B81D70)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_2A79DCA901AE7324_OFFSET UNITYSDK_OFFSET(0x10B84C50)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_2DE98C8482BC8A62_OFFSET UNITYSDK_OFFSET(0x10B82870)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_303D3AEC876F84B2_OFFSET UNITYSDK_OFFSET(0x10B80FB0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_345670C395EAE93C_OFFSET UNITYSDK_OFFSET(0x10B82E30)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_3DCAF09BEB5CADD1_OFFSET UNITYSDK_OFFSET(0x10B81C20)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_3FAC4139B93C7728_OFFSET UNITYSDK_OFFSET(0x10B7F300)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_4314FE42BBEBFFB4_OFFSET UNITYSDK_OFFSET(0x10B80F30)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10B82800)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_448A6577BBCE3EC9_OFFSET UNITYSDK_OFFSET(0x10B7F390)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_4619EAB8961030B2_OFFSET UNITYSDK_OFFSET(0x10B81790)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_4F3D99D0E9C81651_OFFSET UNITYSDK_OFFSET(0x10B81490)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_50B7E6E92894BE2B_OFFSET UNITYSDK_OFFSET(0x10B80950)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_52268736BC5A3176_OFFSET UNITYSDK_OFFSET(0x10B84780)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_54E443996DD1159E_OFFSET UNITYSDK_OFFSET(0x10B83F10)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_561C436E6C2F3F53_OFFSET UNITYSDK_OFFSET(0x10B86000)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x10B833E0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_6B45226A9597D8E5_OFFSET UNITYSDK_OFFSET(0x10B825E0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_71DE0907B4C7EFAA_OFFSET UNITYSDK_OFFSET(0x10B7E2C0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_7A6681358E8E3410_OFFSET UNITYSDK_OFFSET(0x10B82220)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_85B3161A8A652439_OFFSET UNITYSDK_OFFSET(0x10B810D0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x10B83530)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_93063E2928D0C402_OFFSET UNITYSDK_OFFSET(0x10B7E0E0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_96E4C6963BABD9F4_OFFSET UNITYSDK_OFFSET(0x10B82CB0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_98971ACD3C4CBD28_OFFSET UNITYSDK_OFFSET(0x10B84320)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_A367EE0F970DCB81_OFFSET UNITYSDK_OFFSET(0x10B81230)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_AC3673CC8831AFD0_OFFSET UNITYSDK_OFFSET(0x10B81020)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_AD8CAB47BD1B874C_OFFSET UNITYSDK_OFFSET(0x10B868D0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_B6EF1C6A9F8292FC_OFFSET UNITYSDK_OFFSET(0x10B812A0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_B9F9835360D1A5A3_OFFSET UNITYSDK_OFFSET(0x10B82430)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_BAE675720C1EB79C_OFFSET UNITYSDK_OFFSET(0x10B85010)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B7E520)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_CDA7CAD817F01B7B_OFFSET UNITYSDK_OFFSET(0x10B81180)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_CF424CF71154BCFE_OFFSET UNITYSDK_OFFSET(0x10B7F520)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_D5BBCBE2A7D472A8_OFFSET UNITYSDK_OFFSET(0x10B831B0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_D754D5F3490FC4F3_OFFSET UNITYSDK_OFFSET(0x10B81B70)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_D875B2D7328A410C_OFFSET UNITYSDK_OFFSET(0x10B7E5A0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x10B80180)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_E658A310A9CE19AC_OFFSET UNITYSDK_OFFSET(0x10B81EE0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_E7E4FB07C910158C_OFFSET UNITYSDK_OFFSET(0x10B82A80)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_EB4352D10DA7234E_OFFSET UNITYSDK_OFFSET(0x10B7F5E0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_ED6CC3AE285FA3D3_OFFSET UNITYSDK_OFFSET(0x10B80BB0)
#define CLASS_1_53BA4F2C2E556314_METHOD_1_F161FB9702AC3458_OFFSET UNITYSDK_OFFSET(0x10B80680)
#define CLASS_1_53BA4F2C2E556314__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B86D60)
#define CLASS_1_53BA4F2C2E556314__CTOR_OFFSET UNITYSDK_OFFSET(0x10B7E0B0)

inline static constexpr unsigned int Class_1_53BA4F2C2E556314_TypeDefinitionIndex = 55854;

class Class_1_53BA4F2C2E556314 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53BA4F2C2E556314_TypeDefinitionIndex)->GetStaticField(0x457A0);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53BA4F2C2E556314_TypeDefinitionIndex)->GetStaticField(0x457A8);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53BA4F2C2E556314_TypeDefinitionIndex)->GetStaticField(0x457B0);
	}
	::RPG::CustomRP::RPGColorGrading* Field_1_18; // 0x10
	::Class_1_D27BF54F25500E5F* Field_1_17; // 0x18
	::Class_1_D27BF54F25500E5F* Field_1_16; // 0x20
	::RPG::CustomRP::RPGGaussianBlur* Field_1_21; // 0x28
	::Class_2_1FB66008306098B0* Field_1_12; // 0x30
	::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>* Field_1_9; // 0x38
	::RPG::CustomRP::PPFilterStack* Field_1_13; // 0x40
	::RPG::CustomRP::RPGChromaticAberration* Field_1_20; // 0x48
	::Class_2_F9868A24C60208C0* Field_1_11; // 0x50
	::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>* Field_1_6; // 0x58
	::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>* Field_1_7; // 0x60
	::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>* Field_1_8; // 0x68
	::RPG::CustomRP::RPGVignette* Field_1_19; // 0x70
	::RPG::CustomRP::RPGRadialBlur* Field_1_25; // 0x78
	::RPG::CustomRP::RPGBlink* Field_1_23; // 0x80
	::RPG::CustomRP::RPGLensGlitch2* Field_1_24; // 0x88
	::RPG::CustomRP::RPGAdditionalColorGrading* Field_1_28; // 0x90
	::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>* Field_1_5; // 0x98
	::Class_2_74361E0442AB1DB0* Field_1_10; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::PPFilterStack*>* Field_1_4; // 0xA8
	::RPG::CustomRP::RPGPPPattern* Field_1_22; // 0xB0
	::System::Single Field_1_15; // 0xB8
	::System::Single Field_1_27; // 0xBC
	::UnityEngine::Rendering::VolumeProxy_Priority Field_1_3; // 0xC0
	::System::Single Field_1_14; // 0xC4
	::System::Single Field_1_32; // 0xC8
	::System::Boolean Field_1_30; // 0xCC
	::System::Boolean Field_1_31; // 0xCD
	::System::Boolean Field_1_26; // 0xCE
	::System::Single Field_1_29; // 0xD0

	::System::Void _ctor(::UnityEngine::Rendering::VolumeProxy_Priority a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_93063E2928D0C402(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_93063E2928D0C402_OFFSET))(a1);
	}

	::System::Void Method_1_71DE0907B4C7EFAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_71DE0907B4C7EFAA_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_D875B2D7328A410C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_D875B2D7328A410C_OFFSET))(this);
	}

	::System::Void Method_1_EB4352D10DA7234E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_EB4352D10DA7234E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_1_4314FE42BBEBFFB4(::Class_1_E0B2943A83765539* a1, ::Class_1_E0B2943A83765539* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_E0B2943A83765539*, ::Class_1_E0B2943A83765539*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_4314FE42BBEBFFB4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_303D3AEC876F84B2(::Class_1_E0B2943A83765539* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E0B2943A83765539*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_303D3AEC876F84B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_85B3161A8A652439(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_85B3161A8A652439_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A367EE0F970DCB81(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_A367EE0F970DCB81_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4F3D99D0E9C81651(::Class_1_E0B2943A83765539* a1, ::Class_1_E0B2943A83765539* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E0B2943A83765539*, ::Class_1_E0B2943A83765539*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_4F3D99D0E9C81651_OFFSET))(this, a1, a2);
	}

	::RPG::CustomRP::PPFilterStack* Method_1_034A921350C23C22(::System::String* a1)
	{
		return ((::RPG::CustomRP::PPFilterStack*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_034A921350C23C22_OFFSET))(this, a1);
	}

	::System::Void Method_1_4619EAB8961030B2(::Class_1_E0B2943A83765539* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0B2943A83765539*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_4619EAB8961030B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F49294A70542425(::Class_1_E0B2943A83765539* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0B2943A83765539*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_1F49294A70542425_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED6CC3AE285FA3D3(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_ED6CC3AE285FA3D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_F161FB9702AC3458(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_F161FB9702AC3458_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D754D5F3490FC4F3(::Class_1_E0B2943A83765539* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0B2943A83765539*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_D754D5F3490FC4F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A6681358E8E3410(::RPG::GameCore::PPEffectFilterPriorityGroup a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_7A6681358E8E3410_OFFSET))(this, a1);
	}

	::System::Void Method_1_E658A310A9CE19AC(::Class_1_E0B2943A83765539* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0B2943A83765539*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_E658A310A9CE19AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9F9835360D1A5A3(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_B9F9835360D1A5A3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_6B45226A9597D8E5(::RPG::GameCore::RPGColorGradingCurveEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RPGColorGradingCurveEffect*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_6B45226A9597D8E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_2DE98C8482BC8A62(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_2DE98C8482BC8A62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7E4FB07C910158C(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_E7E4FB07C910158C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_50B7E6E92894BE2B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_50B7E6E92894BE2B_OFFSET))(a1);
	}

	::System::Void Method_1_3DCAF09BEB5CADD1(::Class_1_E0B2943A83765539* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0B2943A83765539*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_3DCAF09BEB5CADD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FAC4139B93C7728(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_3FAC4139B93C7728_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AC3673CC8831AFD0(::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>* a1, ::Class_1_E0B2943A83765539* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>*, ::Class_1_E0B2943A83765539*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_AC3673CC8831AFD0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CDA7CAD817F01B7B(::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>* a1, ::RPG::GameCore::PPEffectFilterType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>*, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_CDA7CAD817F01B7B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B6EF1C6A9F8292FC(::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_B6EF1C6A9F8292FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CF424CF71154BCFE(::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E0B2943A83765539*>*&))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_CF424CF71154BCFE_OFFSET))(this, a1);
	}

	::System::Void Method_1_448A6577BBCE3EC9(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::PPFilterStack*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::PPFilterStack*>*&))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_448A6577BBCE3EC9_OFFSET))(this, a1);
	}

	::System::Void Method_1_96E4C6963BABD9F4(::Class_2_F9868A24C60208C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F9868A24C60208C0*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_96E4C6963BABD9F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_1C239F41DAA7040E(::RPG::CustomRP::PPFilterStack_ColorGradingParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_ColorGradingParameter))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_1C239F41DAA7040E_OFFSET))(this, a1);
	}

	::System::Void Method_1_52268736BC5A3176(::RPG::CustomRP::PPFilterStack_RadialBlurParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_RadialBlurParameter))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_52268736BC5A3176_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A79DCA901AE7324(::RPG::CustomRP::PPFilterStack_VignetteParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_VignetteParameter))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_2A79DCA901AE7324_OFFSET))(this, a1);
	}

	::System::Void Method_1_54E443996DD1159E(::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_54E443996DD1159E_OFFSET))(this, a1);
	}

	::System::Void Method_1_98971ACD3C4CBD28(::RPG::CustomRP::PPFilterStack_GaussianBlurParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_GaussianBlurParameter))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_98971ACD3C4CBD28_OFFSET))(this, a1);
	}

	::System::Void Method_1_BAE675720C1EB79C(::RPG::CustomRP::PPFilterStack_PPPatternParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_PPPatternParameter))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_BAE675720C1EB79C_OFFSET))(this, a1);
	}

	::System::Void Method_1_561C436E6C2F3F53(::RPG::CustomRP::PPFilterStack_BlinkParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_BlinkParameter))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_561C436E6C2F3F53_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD8CAB47BD1B874C(::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_AD8CAB47BD1B874C_OFFSET))(this, a1);
	}

	::System::Void Method_1_345670C395EAE93C(::Class_2_74361E0442AB1DB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_74361E0442AB1DB0*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_345670C395EAE93C_OFFSET))(this, a1);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_1_D5BBCBE2A7D472A8(::Class_2_1FB66008306098B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1FB66008306098B0*))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_D5BBCBE2A7D472A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BA4F2C2E556314_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}
};
