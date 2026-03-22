#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5F753285A84494D_InfoType.h"
#include "unitysdk/Class_1_D5F753285A84494D_Struct_2_06EF2954E3A67484.h"
#include "unitysdk/RPG/CustomRP/AABB.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_270;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D5F753285A84494D_METHOD_1_037A1A53574EAB40_OFFSET UNITYSDK_OFFSET(0x10E0A550)
#define CLASS_1_D5F753285A84494D_METHOD_1_049F6846C822DAB4_OFFSET UNITYSDK_OFFSET(0x10E0C300)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_1_OFFSET UNITYSDK_OFFSET(0x10E0CBE0)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_2_OFFSET UNITYSDK_OFFSET(0x10E0CC40)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_3_OFFSET UNITYSDK_OFFSET(0x10E0CCB0)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_4_OFFSET UNITYSDK_OFFSET(0x10E0CD10)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_5_OFFSET UNITYSDK_OFFSET(0x10E0CD80)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_OFFSET UNITYSDK_OFFSET(0x10E0CB70)
#define CLASS_1_D5F753285A84494D_METHOD_1_257B3309F9678ABA_OFFSET UNITYSDK_OFFSET(0x10E0B680)
#define CLASS_1_D5F753285A84494D_METHOD_1_33468D52342F8AF8_OFFSET UNITYSDK_OFFSET(0x10E0CDF0)
#define CLASS_1_D5F753285A84494D_METHOD_1_34D10BF3FF7B7E70_OFFSET UNITYSDK_OFFSET(0x10E0BEC0)
#define CLASS_1_D5F753285A84494D_METHOD_1_57E22D6A7003BF96_OFFSET UNITYSDK_OFFSET(0x10E0AE80)
#define CLASS_1_D5F753285A84494D_METHOD_1_5C2D2482327C3472_OFFSET UNITYSDK_OFFSET(0x10E0C7B0)
#define CLASS_1_D5F753285A84494D_METHOD_1_5DE9667DA47C9DE0_OFFSET UNITYSDK_OFFSET(0x10E0AEE0)
#define CLASS_1_D5F753285A84494D_METHOD_1_60EB1E863BB9FF33_OFFSET UNITYSDK_OFFSET(0x10E0C760)
#define CLASS_1_D5F753285A84494D_METHOD_1_62CB39CF94F2C0E5_OFFSET UNITYSDK_OFFSET(0x10E0CEE0)
#define CLASS_1_D5F753285A84494D_METHOD_1_68FA18482EBFD3B9_OFFSET UNITYSDK_OFFSET(0x10E0A910)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_1_OFFSET UNITYSDK_OFFSET(0x10E0CFC0)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_2_OFFSET UNITYSDK_OFFSET(0x10E0D030)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_3_OFFSET UNITYSDK_OFFSET(0x10E0D0A0)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_4_OFFSET UNITYSDK_OFFSET(0x10E0D110)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_5_OFFSET UNITYSDK_OFFSET(0x10E0D180)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_6_OFFSET UNITYSDK_OFFSET(0x10E0D1F0)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_OFFSET UNITYSDK_OFFSET(0x10E0CE70)
#define CLASS_1_D5F753285A84494D_METHOD_1_6DC710354BE30C42_OFFSET UNITYSDK_OFFSET(0x10E0A5E0)
#define CLASS_1_D5F753285A84494D_METHOD_1_72B9BA4F04CBB3F4_OFFSET UNITYSDK_OFFSET(0x10E0C470)
#define CLASS_1_D5F753285A84494D_METHOD_1_74535969734C75CB_OFFSET UNITYSDK_OFFSET(0x10E0B0F0)
#define CLASS_1_D5F753285A84494D_METHOD_1_797B0DC3D00A8877_OFFSET UNITYSDK_OFFSET(0x10DE0580)
#define CLASS_1_D5F753285A84494D_METHOD_1_7EDBC63FC2BC53F4_OFFSET UNITYSDK_OFFSET(0x10E0BDF0)
#define CLASS_1_D5F753285A84494D_METHOD_1_81D191FDC0633772_OFFSET UNITYSDK_OFFSET(0x10E0B180)
#define CLASS_1_D5F753285A84494D_METHOD_1_905CF6772C26FD13_OFFSET UNITYSDK_OFFSET(0x10E0A760)
#define CLASS_1_D5F753285A84494D_METHOD_1_97607FDD1D4C443A_OFFSET UNITYSDK_OFFSET(0x10E0A470)
#define CLASS_1_D5F753285A84494D_METHOD_1_A8ABC131D626FAA0_OFFSET UNITYSDK_OFFSET(0x10E0C890)
#define CLASS_1_D5F753285A84494D_METHOD_1_AF8572B4F92608DF_OFFSET UNITYSDK_OFFSET(0x10E0A2E0)
#define CLASS_1_D5F753285A84494D_METHOD_1_B322330E7437C52B_OFFSET UNITYSDK_OFFSET(0x10E0BC00)
#define CLASS_1_D5F753285A84494D_METHOD_1_B9CB2A09B8BFBD50_OFFSET UNITYSDK_OFFSET(0x10E0B440)
#define CLASS_1_D5F753285A84494D_METHOD_1_C3D9ED19B24574D4_OFFSET UNITYSDK_OFFSET(0x10E0BA70)
#define CLASS_1_D5F753285A84494D_METHOD_1_CA0EDDB4CB41568B_OFFSET UNITYSDK_OFFSET(0x10E0AF50)
#define CLASS_1_D5F753285A84494D_METHOD_1_CA66F06205F1BED0_1_OFFSET UNITYSDK_OFFSET(0x10E0BD40)
#define CLASS_1_D5F753285A84494D_METHOD_1_CA66F06205F1BED0_OFFSET UNITYSDK_OFFSET(0x10E0BC90)
#define CLASS_1_D5F753285A84494D_METHOD_1_DAEB8A0C99C60D85_OFFSET UNITYSDK_OFFSET(0x10DE0F40)
#define CLASS_1_D5F753285A84494D_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x10E0D260)
#define CLASS_1_D5F753285A84494D_METHOD_1_FDC7958A99D11191_OFFSET UNITYSDK_OFFSET(0x10E0AD70)
#define CLASS_1_D5F753285A84494D__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E0D2A0)

inline static constexpr unsigned int Class_1_D5F753285A84494D_TypeDefinitionIndex = 38848;

class Class_1_D5F753285A84494D : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x2A3A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x2A3A8);
	}
	static ::System::UInt32* StaticGet_Field_1_4()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x94F0);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x94F4);
	}
	static ::System::UInt32* StaticGet_Field_1_3()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x94F8);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x94FC);
	}
	static ::System::UInt32* StaticGet_Field_1_10()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x9500);
	}
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x9504);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x9508);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x950C);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x9510);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x9514);
	}
	static ::System::UInt32* StaticGet_Field_1_11()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x9518);
	}
	static ::System::UInt32* StaticGet_Field_1_5()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x951C);
	}
	// static const ::System::Int32 Field_1_14 = 0xFFFFFFFF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Mesh* Method_1_AF8572B4F92608DF(::UnityEngine::Mesh* a1)
	{
		return ((::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_AF8572B4F92608DF_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_97607FDD1D4C443A(::UnityEngine::Matrix4x4 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_97607FDD1D4C443A_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_037A1A53574EAB40(::UnityEngine::Matrix4x4 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_037A1A53574EAB40_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_6DC710354BE30C42(::UnityEngine::Matrix4x4 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6DC710354BE30C42_OFFSET))(a1);
	}

	static ::UnityEngine::Matrix4x4 Method_1_905CF6772C26FD13(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_905CF6772C26FD13_OFFSET))(a1);
	}

	static ::System::Void Method_1_68FA18482EBFD3B9(::UnityEngine::Transform* a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_68FA18482EBFD3B9_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_FDC7958A99D11191(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_FDC7958A99D11191_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_57E22D6A7003BF96(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_57E22D6A7003BF96_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_5DE9667DA47C9DE0(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_5DE9667DA47C9DE0_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_CA0EDDB4CB41568B(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_CA0EDDB4CB41568B_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_74535969734C75CB(::UnityEngine::Vector3 a1)
	{
		return ((::System::UInt32(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_74535969734C75CB_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_81D191FDC0633772(::RPG::CustomRP::AABB a1)
	{
		return ((::System::UInt32(*)(::RPG::CustomRP::AABB))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_81D191FDC0633772_OFFSET))(a1);
	}

	static ::RPG::CustomRP::AABB Method_1_B9CB2A09B8BFBD50(::UnityEngine::Mesh* a1)
	{
		return ((::RPG::CustomRP::AABB(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_B9CB2A09B8BFBD50_OFFSET))(a1);
	}

	static ::RPG::CustomRP::AABB Method_1_257B3309F9678ABA(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::RPG::CustomRP::AABB(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_257B3309F9678ABA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C3D9ED19B24574D4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_C3D9ED19B24574D4_OFFSET))(a1);
	}

	static ::System::Void Method_1_B322330E7437C52B(::Class_1_D5F753285A84494D_InfoType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_D5F753285A84494D_InfoType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_B322330E7437C52B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CA66F06205F1BED0(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_CA66F06205F1BED0_OFFSET))(a1);
	}

	static ::System::Void Method_1_CA66F06205F1BED0_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_CA66F06205F1BED0_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_7EDBC63FC2BC53F4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_7EDBC63FC2BC53F4_OFFSET))(a1);
	}

	static ::RPG::CustomRP::CustomLightQualityFilter Method_1_34D10BF3FF7B7E70()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_34D10BF3FF7B7E70_OFFSET))();
	}

	static ::System::Void Method_1_049F6846C822DAB4(::System::String* a1, ::System::String*& a2, ::System::String*& a3, ::RPG::CustomRP::CustomLightQualityFilter& a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&, ::RPG::CustomRP::CustomLightQualityFilter&))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_049F6846C822DAB4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_72B9BA4F04CBB3F4(::System::String* a1, ::System::String*& a2, ::System::String*& a3, ::RPG::CustomRP::CustomLightQualityFilter& a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&, ::RPG::CustomRP::CustomLightQualityFilter&))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_72B9BA4F04CBB3F4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_60EB1E863BB9FF33(::UnityEngine::Object* a1)
	{
		return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_60EB1E863BB9FF33_OFFSET))(a1);
	}

	static ::System::Type* Method_1_5C2D2482327C3472(::System::Type* a1, ::System::Type* a2)
	{
		return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_5C2D2482327C3472_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_270* Method_1_A8ABC131D626FAA0(::UnityEngine::Component* a1)
	{
		return ((::Class_0_16E4307DCC419505_270*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_A8ABC131D626FAA0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_797B0DC3D00A8877(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_797B0DC3D00A8877_OFFSET))(a1);
	}

	static ::Class_1_D5F753285A84494D_Struct_2_06EF2954E3A67484 Method_1_DAEB8A0C99C60D85(::System::Int32 a1)
	{
		return ((::Class_1_D5F753285A84494D_Struct_2_06EF2954E3A67484(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_DAEB8A0C99C60D85_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68_2(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_2_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68_3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_3_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68_4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_4_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68_5(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_5_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_33468D52342F8AF8(::System::Int32 a1, ::System::Int32 a2, ::ScenenLightManager::LightTypeID a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_33468D52342F8AF8_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_62CB39CF94F2C0E5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::ScenenLightManager::LightTypeID a4)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_62CB39CF94F2C0E5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_2_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_3_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_4_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_5(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_5_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_6(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_6_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}
};
