#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D63DE2EC2835DB62_Class_1_B8E5DF5B61B39C64;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_1_100ED75C115B764C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFE3C220)
#define CLASS_1_100ED75C115B764C_METHOD_1_4DE1857021EDD3DF_OFFSET UNITYSDK_OFFSET(0xFE3C2A0)
#define CLASS_1_100ED75C115B764C_METHOD_1_B3725C8DD86BB06D_OFFSET UNITYSDK_OFFSET(0xFE3C360)
#define CLASS_1_100ED75C115B764C__CTOR_OFFSET UNITYSDK_OFFSET(0xFE3C180)

inline static constexpr unsigned int Class_1_100ED75C115B764C_TypeDefinitionIndex = 61861;

class Class_1_100ED75C115B764C : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	::UnityEngine::Material* Field_1_2; // 0x10
	::Class_1_D63DE2EC2835DB62_Class_1_B8E5DF5B61B39C64* Field_1_3; // 0x18
	::System::Single Field_1_1; // 0x20

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_100ED75C115B764C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_100ED75C115B764C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4DE1857021EDD3DF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_100ED75C115B764C_METHOD_1_4DE1857021EDD3DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_B3725C8DD86BB06D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_100ED75C115B764C_METHOD_1_B3725C8DD86BB06D_OFFSET))(this, a1);
	}
};
