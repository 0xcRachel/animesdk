#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A40894F2FEF11FEB_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x84243C0)
#define CLASS_1_A40894F2FEF11FEB_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x8424690)
#define CLASS_1_A40894F2FEF11FEB_METHOD_1_F1E5D9D623511286_OFFSET UNITYSDK_OFFSET(0x8424420)
#define CLASS_1_A40894F2FEF11FEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x8424BF0)

inline static constexpr unsigned int Class_1_A40894F2FEF11FEB_TypeDefinitionIndex = 58192;

class Class_1_A40894F2FEF11FEB : public ::System::Object
{
public:
	static ::UnityEngine::Transform** StaticGet_Field_1_2()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x150B0);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x150B8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_1()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x150C0);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_5()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x5000);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_4()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x500C);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_6()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x5018);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40894F2FEF11FEB_TypeDefinitionIndex)->GetStaticField(0x5024);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A40894F2FEF11FEB__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A40894F2FEF11FEB_METHOD_1_10054BB010E03EDD_OFFSET))();
	}

	static ::System::Void Method_1_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A40894F2FEF11FEB_METHOD_1_1DE63FE11FA0D5B4_OFFSET))();
	}

	static ::System::Void Method_1_F1E5D9D623511286(::System::Boolean a1, ::UnityEngine::Camera* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Camera*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A40894F2FEF11FEB_METHOD_1_F1E5D9D623511286_OFFSET))(a1, a2, a3);
	}
};
