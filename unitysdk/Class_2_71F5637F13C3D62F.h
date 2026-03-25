#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0A05564B7F916C1.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CRPLightQualityGroupPlugin;
class LocalAmbientVolume;
class LocalFogSphereInstance;
namespace RPG::Client { class BillboardController; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ReflectionProbe; }
namespace VLB { class VolumetricLightBeam; }

#define CLASS_2_71F5637F13C3D62F_METHOD_2_062B16C5BB0FBB45_OFFSET UNITYSDK_OFFSET(0x8784990)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x8782ED0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x8782EC0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x8785770)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_19BC92DE7F9F342F_1_OFFSET UNITYSDK_OFFSET(0x8787E60)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_19BC92DE7F9F342F_OFFSET UNITYSDK_OFFSET(0x8787DE0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_1E1E85F6ECBD80C3_OFFSET UNITYSDK_OFFSET(0x87857F0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x87846B0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8787AB0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x8787B10)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x8787B70)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x8787C40)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x8787D80)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x87879E0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_5EAB2C5E0D76A6B7_1_OFFSET UNITYSDK_OFFSET(0x8787250)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x87871D0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_6AA67718161E5322_1_OFFSET UNITYSDK_OFFSET(0x87876E0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_6AA67718161E5322_OFFSET UNITYSDK_OFFSET(0x8787460)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x8784500)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_793FFA9A76FE6840_1_OFFSET UNITYSDK_OFFSET(0x8787D10)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8787CA0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_8D85476FE777EFE9_OFFSET UNITYSDK_OFFSET(0x8782EE0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_92193DE475EFDCC9_1_OFFSET UNITYSDK_OFFSET(0x8786AB0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_92193DE475EFDCC9_OFFSET UNITYSDK_OFFSET(0x8786F30)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x8784900)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_A58F1087C784F228_1_OFFSET UNITYSDK_OFFSET(0x8787BD0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_A58F1087C784F228_OFFSET UNITYSDK_OFFSET(0x8787970)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x87847D0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x8786DB0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_B37D0BDD3F18549D_OFFSET UNITYSDK_OFFSET(0x8785610)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8787180)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x87872C0)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x8787A40)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_D632BCCC272D40EA_OFFSET UNITYSDK_OFFSET(0x8784320)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_DD3C6BAB599CEFBE_OFFSET UNITYSDK_OFFSET(0x8783A70)
#define CLASS_2_71F5637F13C3D62F_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x8784590)
#define CLASS_2_71F5637F13C3D62F__CTOR_OFFSET UNITYSDK_OFFSET(0x8787960)

inline static constexpr unsigned int Class_2_71F5637F13C3D62F_TypeDefinitionIndex = 40257;

class Class_2_71F5637F13C3D62F : public ::Class_1_E0A05564B7F916C1
{
public:
	static ::System::Boolean* StaticGet_Field_2_21()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_71F5637F13C3D62F_TypeDefinitionIndex)->GetStaticField(0x67B0);
	}
	::Il2CppArray<::RPG::CustomRP::CustomAdditionalLightData*>* Field_2_5; // 0x60
	::UnityEngine::GameObject* Field_2_0; // 0x68
	::Il2CppArray<::UnityEngine::ReflectionProbe*>* Field_2_3; // 0x70
	::Il2CppArray<::VLB::VolumetricLightBeam*>* Field_2_14; // 0x78
	::UnityEngine::GameObject* Field_2_1; // 0x80
	::Il2CppArray<::RPG::Client::BillboardController*>* Field_2_18; // 0x88
	::Il2CppArray<::CRPLightQualityGroupPlugin*>* Field_2_6; // 0x90
	::Il2CppArray<::LocalAmbientVolume*>* Field_2_17; // 0x98
	::Il2CppArray<::UnityEngine::Light*>* Field_2_10; // 0xA0
	::Il2CppArray<::LocalFogSphereInstance*>* Field_2_15; // 0xA8
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_12; // 0xB0
	::Il2CppArray<::RPG::Client::BillboardController*>* Field_2_19; // 0xB8
	::Il2CppArray<::System::Single>* Field_2_8; // 0xC0
	::Il2CppArray<::VLB::VolumetricLightBeam*>* Field_2_13; // 0xC8
	::RPG::Client::IAssetOperation* Field_2_20; // 0xD0
	::Il2CppArray<::CRPLightQualityGroupPlugin*>* Field_2_4; // 0xD8
	::Il2CppArray<::LocalFogSphereInstance*>* Field_2_16; // 0xE0
	::Il2CppArray<::UnityEngine::ReflectionProbe*>* Field_2_2; // 0xE8
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_11; // 0xF0
	::Il2CppArray<::System::Single>* Field_2_9; // 0xF8
	::Il2CppArray<::System::Boolean>* Field_2_7; // 0x100
	::System::Single Field_2_24; // 0x108
	::System::Boolean Field_2_29; // 0x10C
	::System::Single Field_2_26; // 0x110
	::System::Single Field_2_27; // 0x114
	::System::Single Field_2_28; // 0x118
	::System::Single Field_2_25; // 0x11C
	::RPG::CustomRP::CustomLightQualityFilter Field_2_22; // 0x120
	::RPG::Client::OpenWorld::StreamingLightEnum Field_2_23; // 0x124

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_2_8D85476FE777EFE9(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_8D85476FE777EFE9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_062B16C5BB0FBB45(::UnityEngine::Object* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_062B16C5BB0FBB45_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B37D0BDD3F18549D(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_B37D0BDD3F18549D_OFFSET))(this, a1);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_DD3C6BAB599CEFBE(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_DD3C6BAB599CEFBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EAB2C5E0D76A6B7_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_5EAB2C5E0D76A6B7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E1E85F6ECBD80C3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_1E1E85F6ECBD80C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_92193DE475EFDCC9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_92193DE475EFDCC9_OFFSET))(this, a1);
	}

	::System::Void Method_2_92193DE475EFDCC9_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_92193DE475EFDCC9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D632BCCC272D40EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_D632BCCC272D40EA_OFFSET))(this);
	}

	::System::Void Method_2_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_D0ACB47B641DF879_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_6AA67718161E5322(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_6AA67718161E5322_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_6AA67718161E5322_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_6AA67718161E5322_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_A58F1087C784F228(::RPG::Client::OpenWorld::StreamingLightEnum P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_A58F1087C784F228_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void Method_2_A58F1087C784F228_1(::RPG::Client::OpenWorld::StreamingLightEnum P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_A58F1087C784F228_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_4_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840_1(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_793FFA9A76FE6840_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_5790A55946AA509D_5_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_19BC92DE7F9F342F(::UnityEngine::Vector3 P0)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_19BC92DE7F9F342F_OFFSET))(this, P0);
	}

	::UnityEngine::Light* Method_2_19BC92DE7F9F342F_1(::UnityEngine::Vector3 P0)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F_METHOD_2_19BC92DE7F9F342F_1_OFFSET))(this, P0);
	}
};
