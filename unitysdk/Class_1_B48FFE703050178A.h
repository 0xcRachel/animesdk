#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/RPG/GameCore/WorldType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7956089D4F15495C;
class Class_1_9432B3E32D314913;
class Class_1_A518653E32EF54D5;
class Class_1_B48FFE703050178A_Class_1_C28728B9D4EB40EC;
class Class_1_BBBB808191126E3B;
class Class_1_DAF29F92478F6143;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_ArtVariantInfo; }
namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class ConfigMunicipal; }
namespace RPG::GameCore { class ConfigMunicipalPedestrianOverride; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class TimeScaleStack; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_B48FFE703050178A_LodAssetRef_1;

#define CLASS_1_B48FFE703050178A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109DFB00)
#define CLASS_1_B48FFE703050178A_GET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x109E40A0)
#define CLASS_1_B48FFE703050178A_GET_USE_UNLOAD_MODE_OFFSET UNITYSDK_OFFSET(0x109DF3D0)
#define CLASS_1_B48FFE703050178A_METHOD_1_0728E0BA5AC4A537_OFFSET UNITYSDK_OFFSET(0x109E3880)
#define CLASS_1_B48FFE703050178A_METHOD_1_0C9ED05CEC07EE80_OFFSET UNITYSDK_OFFSET(0x109E1C30)
#define CLASS_1_B48FFE703050178A_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x109E18E0)
#define CLASS_1_B48FFE703050178A_METHOD_1_13D78D8CCC5186FB_OFFSET UNITYSDK_OFFSET(0x109E0330)
#define CLASS_1_B48FFE703050178A_METHOD_1_1709D3280A2D3A51_OFFSET UNITYSDK_OFFSET(0x109E4110)
#define CLASS_1_B48FFE703050178A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x109E4040)
#define CLASS_1_B48FFE703050178A_METHOD_1_23F3AC18A9F308A6_OFFSET UNITYSDK_OFFSET(0x109E3910)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x109E40E0)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x109E40F0)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x109E4100)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x109E40D0)
#define CLASS_1_B48FFE703050178A_METHOD_1_2482AEF5DA23F61A_OFFSET UNITYSDK_OFFSET(0x109E3600)
#define CLASS_1_B48FFE703050178A_METHOD_1_25E887788436F519_OFFSET UNITYSDK_OFFSET(0x109E3DD0)
#define CLASS_1_B48FFE703050178A_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x109E2030)
#define CLASS_1_B48FFE703050178A_METHOD_1_2DE13BE11F24F545_OFFSET UNITYSDK_OFFSET(0x109E36A0)
#define CLASS_1_B48FFE703050178A_METHOD_1_2F00B8B3178DCE85_OFFSET UNITYSDK_OFFSET(0x109E2DD0)
#define CLASS_1_B48FFE703050178A_METHOD_1_35F706941A6D1092_OFFSET UNITYSDK_OFFSET(0x109E0920)
#define CLASS_1_B48FFE703050178A_METHOD_1_411394E2349F93CE_OFFSET UNITYSDK_OFFSET(0x109E3830)
#define CLASS_1_B48FFE703050178A_METHOD_1_41B0BDA999296668_OFFSET UNITYSDK_OFFSET(0x109E0190)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x109E2A60)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x109E2C10)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x109E2D60)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x109E2920)
#define CLASS_1_B48FFE703050178A_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x109DFB60)
#define CLASS_1_B48FFE703050178A_METHOD_1_4F6CB99543AF5BF6_OFFSET UNITYSDK_OFFSET(0x109E2620)
#define CLASS_1_B48FFE703050178A_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x109DF960)
#define CLASS_1_B48FFE703050178A_METHOD_1_5372A60C2D3E0724_OFFSET UNITYSDK_OFFSET(0x109DF620)
#define CLASS_1_B48FFE703050178A_METHOD_1_5A2E153CDE946875_OFFSET UNITYSDK_OFFSET(0x109E3030)
#define CLASS_1_B48FFE703050178A_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x109E0EA0)
#define CLASS_1_B48FFE703050178A_METHOD_1_5BAC60F11A3CD798_OFFSET UNITYSDK_OFFSET(0x109E2E30)
#define CLASS_1_B48FFE703050178A_METHOD_1_5D3796EB9E57E19B_OFFSET UNITYSDK_OFFSET(0x109E1D80)
#define CLASS_1_B48FFE703050178A_METHOD_1_60BAB51FAB46DBD1_OFFSET UNITYSDK_OFFSET(0x109E32C0)
#define CLASS_1_B48FFE703050178A_METHOD_1_615959A07CDA042B_OFFSET UNITYSDK_OFFSET(0x109E19E0)
#define CLASS_1_B48FFE703050178A_METHOD_1_624AA189447107DD_OFFSET UNITYSDK_OFFSET(0x109DF410)
#define CLASS_1_B48FFE703050178A_METHOD_1_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0x109E0430)
#define CLASS_1_B48FFE703050178A_METHOD_1_6D653BFC132CD63E_OFFSET UNITYSDK_OFFSET(0x109E34F0)
#define CLASS_1_B48FFE703050178A_METHOD_1_7E83A09F3E5F1F55_OFFSET UNITYSDK_OFFSET(0x109E3CE0)
#define CLASS_1_B48FFE703050178A_METHOD_1_7F8ED38F9AEF6911_1_OFFSET UNITYSDK_OFFSET(0x109E12D0)
#define CLASS_1_B48FFE703050178A_METHOD_1_7F8ED38F9AEF6911_OFFSET UNITYSDK_OFFSET(0x109E0FA0)
#define CLASS_1_B48FFE703050178A_METHOD_1_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x109E2F40)
#define CLASS_1_B48FFE703050178A_METHOD_1_94D63CD6A22D9150_OFFSET UNITYSDK_OFFSET(0x109E0F40)
#define CLASS_1_B48FFE703050178A_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x109E2CA0)
#define CLASS_1_B48FFE703050178A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x109E2850)
#define CLASS_1_B48FFE703050178A_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x109E2AD0)
#define CLASS_1_B48FFE703050178A_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x109E2990)
#define CLASS_1_B48FFE703050178A_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x109E1FC0)
#define CLASS_1_B48FFE703050178A_METHOD_1_B4FB8F0E42A77C76_OFFSET UNITYSDK_OFFSET(0x109E02B0)
#define CLASS_1_B48FFE703050178A_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x109E3790)
#define CLASS_1_B48FFE703050178A_METHOD_1_CCFFC97FF79A551F_OFFSET UNITYSDK_OFFSET(0x109E1660)
#define CLASS_1_B48FFE703050178A_METHOD_1_CEA6D0FCAC133580_OFFSET UNITYSDK_OFFSET(0x109E1BB0)
#define CLASS_1_B48FFE703050178A_METHOD_1_D13CC732D8FAC62B_OFFSET UNITYSDK_OFFSET(0x109E1EE0)
#define CLASS_1_B48FFE703050178A_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x109E41D0)
#define CLASS_1_B48FFE703050178A_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x109E41B0)
#define CLASS_1_B48FFE703050178A_METHOD_1_D5C07CA59BC5F063_OFFSET UNITYSDK_OFFSET(0x109E31D0)
#define CLASS_1_B48FFE703050178A_METHOD_1_DC7787569730BDA2_OFFSET UNITYSDK_OFFSET(0x109E3E80)
#define CLASS_1_B48FFE703050178A_METHOD_1_E31DDEC613A33F42_OFFSET UNITYSDK_OFFSET(0x109E3B70)
#define CLASS_1_B48FFE703050178A_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x109E3740)
#define CLASS_1_B48FFE703050178A_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x109E33E0)
#define CLASS_1_B48FFE703050178A_METHOD_1_E9C3E2645E65CA21_OFFSET UNITYSDK_OFFSET(0x109E3A80)
#define CLASS_1_B48FFE703050178A_METHOD_1_EA03228A65A776C9_OFFSET UNITYSDK_OFFSET(0x109E35A0)
#define CLASS_1_B48FFE703050178A_METHOD_1_EB54B2EBBD1FC3DE_OFFSET UNITYSDK_OFFSET(0x109E0530)
#define CLASS_1_B48FFE703050178A_METHOD_1_ECAEB3C6AC0F3BCF_OFFSET UNITYSDK_OFFSET(0x109E3F40)
#define CLASS_1_B48FFE703050178A_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x109E41A0)
#define CLASS_1_B48FFE703050178A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x109E40C0)
#define CLASS_1_B48FFE703050178A_METHOD_1_FC26FA0DD9B4AAF4_OFFSET UNITYSDK_OFFSET(0x109E41F0)
#define CLASS_1_B48FFE703050178A_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x109E3FE0)
#define CLASS_1_B48FFE703050178A_SET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x109E40B0)
#define CLASS_1_B48FFE703050178A__CCTOR_OFFSET UNITYSDK_OFFSET(0x109E4270)
#define CLASS_1_B48FFE703050178A__CTOR_OFFSET UNITYSDK_OFFSET(0x109DF4B0)

inline static constexpr unsigned int Class_1_B48FFE703050178A_TypeDefinitionIndex = 54999;

class Class_1_B48FFE703050178A : public ::System::Object
{
public:
	static ::Class_1_B48FFE703050178A** StaticGet_Field_1_8()
	{
		return (::Class_1_B48FFE703050178A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x2F6E0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_46()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x2F6E8);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x2F6F0);
	}
	static ::System::Object** StaticGet_Field_1_9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x2F6F8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_47()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x2F700);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_45()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x2F708);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_44()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x2F710);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xB2E0);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xB2E4);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xB2E8);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xB2EC);
	}
	static ::System::Boolean* StaticGet__USE_UNLOAD_MODE_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xB2F0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xB2F1);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xB2F4);
	}
	// static const ::System::Boolean Field_1_17; // 0x0
	::Class_1_9432B3E32D314913* Field_1_37; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B48FFE703050178A_Class_1_C28728B9D4EB40EC*>* Field_1_18; // 0x18
	::RPG::GameCore::ConfigMunicipal* Field_1_31; // 0x20
	::RPG::GameCore::LodConfig* Field_1_32; // 0x28
	::RPG::GameCore::TimeScaleStack* _TimeScaleStack_k__BackingField; // 0x30
	::RPG::Client::MapDef* Field_1_23; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B48FFE703050178A_LodAssetRef_1<::UnityEngine::Mesh*>*>* Field_1_15; // 0x40
	::RPG::GameCore::EntityManager* Field_1_10; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B48FFE703050178A_LodAssetRef_1<::UnityEngine::Material*>*>* Field_1_16; // 0x50
	::Class_1_A518653E32EF54D5* Field_1_33; // 0x58
	::Class_1_DAF29F92478F6143* Field_1_34; // 0x60
	::RPG::Client::AdventurePhase* Field_1_21; // 0x68
	::UnityEngine::Transform* Field_1_38; // 0x70
	::Class_1_7956089D4F15495C* Field_1_35; // 0x78
	::System::String* Field_1_43; // 0x80
	::Class_1_BBBB808191126E3B* Field_1_36; // 0x88
	::RPG::Client::Stage* Field_1_22; // 0x90
	::UnityEngine::Vector3 Field_1_40; // 0x98
	::System::Boolean Field_1_28; // 0xA4
	::System::Boolean Field_1_29; // 0xA5
	::System::Boolean Field_1_11; // 0xA6
	::System::Boolean Field_1_14; // 0xA7
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_42; // 0xA8
	::System::Boolean Field_1_30; // 0xB8
	::System::Boolean Field_1_39; // 0xB9
	::System::Boolean Field_1_24; // 0xBA
	::System::Boolean Field_1_25; // 0xBB
	::System::Boolean Field_1_20; // 0xBC
	::System::Boolean Field_1_13; // 0xBD
	::UnityEngine::Vector3 Field_1_41; // 0xC0
	::System::Boolean Field_1_27; // 0xCC
	::System::Boolean Field_1_12; // 0xCD
	::System::Boolean Field_1_26; // 0xCE

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A__CCTOR_OFFSET))();
	}

	static ::System::Boolean get_USE_UNLOAD_MODE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_GET_USE_UNLOAD_MODE_OFFSET))();
	}

	static ::System::Void Method_1_624AA189447107DD(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_624AA189447107DD_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_1_B48FFE703050178A* Method_1_5372A60C2D3E0724()
	{
		return ((::Class_1_B48FFE703050178A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_5372A60C2D3E0724_OFFSET))();
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_41B0BDA999296668(::System::Nullable_1<::UnityEngine::Vector3> a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_41B0BDA999296668_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B4FB8F0E42A77C76(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_B4FB8F0E42A77C76_OFFSET))(this, a1);
	}

	::System::Void Method_1_13D78D8CCC5186FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_13D78D8CCC5186FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_35F706941A6D1092(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_35F706941A6D1092_OFFSET))(this, a1);
	}

	::RPG::GameCore::WorldType Method_1_94D63CD6A22D9150()
	{
		return ((::RPG::GameCore::WorldType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_94D63CD6A22D9150_OFFSET))(this);
	}

	::System::Int32 Method_1_7F8ED38F9AEF6911()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_7F8ED38F9AEF6911_OFFSET))(this);
	}

	::System::Int32 Method_1_7F8ED38F9AEF6911_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_7F8ED38F9AEF6911_1_OFFSET))(this);
	}

	::System::Single Method_1_CCFFC97FF79A551F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_CCFFC97FF79A551F_OFFSET))(this);
	}

	::System::Single Method_1_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_124E7DAB85EAFECD_OFFSET))(this);
	}

	::RPG::GameCore::GraphicQuality Method_1_615959A07CDA042B(::RPG::Client::EAssemblyNPC a1)
	{
		return ((::RPG::GameCore::GraphicQuality(*)(::PVOID, ::RPG::Client::EAssemblyNPC))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_615959A07CDA042B_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_CEA6D0FCAC133580(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_CEA6D0FCAC133580_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_0C9ED05CEC07EE80(::RPG::Client::AssemNPC* a1, ::RPG::GameCore::LevelNPCPossessionInfo* a2, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a3, ::System::String* a4, ::RPG::Client::EAssemblyNPC a5, ::UnityEngine::Vector3 a6, ::System::UInt32 a7, ::System::Action_1<::RPG::GameCore::GameEntity*>* a8)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::AssemNPC*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*, ::System::String*, ::RPG::Client::EAssemblyNPC, ::UnityEngine::Vector3, ::System::UInt32, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_0C9ED05CEC07EE80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_5D3796EB9E57E19B(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_5D3796EB9E57E19B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_D13CC732D8FAC62B(::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* a1, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* a2, ::UnityEngine::Vector3 a3, ::System::Action_1<::RPG::GameCore::GameEntity*>* a4)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo*, ::UnityEngine::Vector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_D13CC732D8FAC62B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_A239DF324AF4215D_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_3_OFFSET))(this);
	}

	::System::Void Method_1_2F00B8B3178DCE85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_2F00B8B3178DCE85_OFFSET))(this);
	}

	::System::Void Method_1_5BAC60F11A3CD798(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_5BAC60F11A3CD798_OFFSET))(this, a1);
	}

	::System::Void Method_1_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A2E153CDE946875(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_5A2E153CDE946875_OFFSET))(this, a1);
	}

	::System::Void Method_1_D5C07CA59BC5F063(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_D5C07CA59BC5F063_OFFSET))(this, a1);
	}

	::System::Void Method_1_60BAB51FAB46DBD1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_60BAB51FAB46DBD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_EB54B2EBBD1FC3DE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_EB54B2EBBD1FC3DE_OFFSET))(this, a1);
	}

	::RPG::GameCore::LodTemplate* Method_1_6D653BFC132CD63E(::RPG::Client::EAssemblyNPC a1)
	{
		return ((::RPG::GameCore::LodTemplate*(*)(::PVOID, ::RPG::Client::EAssemblyNPC))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_6D653BFC132CD63E_OFFSET))(this, a1);
	}

	::RPG::GameCore::ConfigMunicipalPedestrianOverride* Method_1_EA03228A65A776C9()
	{
		return ((::RPG::GameCore::ConfigMunicipalPedestrianOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_EA03228A65A776C9_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_4F6CB99543AF5BF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_4F6CB99543AF5BF6_OFFSET))(this);
	}

	::System::Void Method_1_2482AEF5DA23F61A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_2482AEF5DA23F61A_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DE13BE11F24F545(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_2DE13BE11F24F545_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_1_411394E2349F93CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_411394E2349F93CE_OFFSET))(this);
	}

	::System::Void Method_1_0728E0BA5AC4A537(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_0728E0BA5AC4A537_OFFSET))(this, a1);
	}

	::System::Void Method_1_23F3AC18A9F308A6(::System::String* a1, ::System::Action_1<::UnityEngine::Mesh*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_23F3AC18A9F308A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9C3E2645E65CA21(::System::String* a1, ::System::Action_1<::UnityEngine::Mesh*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_E9C3E2645E65CA21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E31DDEC613A33F42(::System::String* a1, ::System::Action_1<::UnityEngine::Material*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_E31DDEC613A33F42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7E83A09F3E5F1F55(::System::String* a1, ::System::Action_1<::UnityEngine::Material*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_7E83A09F3E5F1F55_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_25E887788436F519(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_25E887788436F519_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC7787569730BDA2(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_DC7787569730BDA2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ECAEB3C6AC0F3BCF(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_ECAEB3C6AC0F3BCF_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_68A2CA32DC720C44_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::TimeScaleStack* get_TimeScaleStack()
	{
		return ((::RPG::GameCore::TimeScaleStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_GET_TIMESCALESTACK_OFFSET))(this);
	}

	::System::Void set_TimeScaleStack(::RPG::GameCore::TimeScaleStack* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeScaleStack*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_SET_TIMESCALESTACK_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_DAF29F92478F6143* Method_1_24748FC20F375725()
	{
		return ((::Class_1_DAF29F92478F6143*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_7956089D4F15495C* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_7956089D4F15495C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::Class_1_BBBB808191126E3B* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_BBBB808191126E3B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::Class_1_9432B3E32D314913* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_9432B3E32D314913*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_1709D3280A2D3A51()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_1709D3280A2D3A51_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_FC26FA0DD9B4AAF4_OFFSET))(this);
	}
};
