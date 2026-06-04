#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"

class Class_1_BFA37003BB609519_Class_1_511D36723E750451;
namespace System::Collections { class Hashtable; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_BFA37003BB609519_METHOD_1_3564EA5FCF9352F0_OFFSET UNITYSDK_OFFSET(0x15D171C0)
#define CLASS_1_BFA37003BB609519_METHOD_1_C0DBF719D15AB9AA_OFFSET UNITYSDK_OFFSET(0x15D17030)
#define CLASS_1_BFA37003BB609519__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D179B0)

inline static constexpr unsigned int Class_1_BFA37003BB609519_TypeDefinitionIndex = 46193;

class Class_1_BFA37003BB609519 : public ::System::Object
{
public:
	static ::System::Collections::Hashtable** StaticGet_Field_1_0()
	{
		return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x15190);
	}
	static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_1_1()
	{
		return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x15198);
	}
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x151A0);
	}
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x151A8);
	}
	static ::Il2CppArray<::System::Boolean>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x151B0);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x7C90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFA37003BB609519__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_C0DBF719D15AB9AA(::System::Boolean a1)
	{
		return ((::UnityEngine::Material*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BFA37003BB609519_METHOD_1_C0DBF719D15AB9AA_OFFSET))(a1);
	}

	static ::UnityEngine::Material* Method_1_3564EA5FCF9352F0(::System::UInt32 a1, ::Class_1_BFA37003BB609519_Class_1_511D36723E750451* a2)
	{
		return ((::UnityEngine::Material*(*)(::System::UInt32, ::Class_1_BFA37003BB609519_Class_1_511D36723E750451*))((::PBYTE)hIl2Cpp + CLASS_1_BFA37003BB609519_METHOD_1_3564EA5FCF9352F0_OFFSET))(a1, a2);
	}
};
