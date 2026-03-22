#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_1_0B52BF547574BA64_CLASS_1_7F572A2075EA0638_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xA1666C0)
#define CLASS_1_0B52BF547574BA64_CLASS_1_7F572A2075EA0638_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xA168FF0)
#define CLASS_1_0B52BF547574BA64_CLASS_1_7F572A2075EA0638__CTOR_OFFSET UNITYSDK_OFFSET(0xA16BB90)

inline static constexpr unsigned int Class_1_0B52BF547574BA64_Class_1_7F572A2075EA0638_TypeDefinitionIndex = 57916;

class Class_1_0B52BF547574BA64_Class_1_7F572A2075EA0638 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::UnityEngine::Mesh* Field_1_0; // 0x18
	::UnityEngine::MeshRenderer* Field_1_1; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_CLASS_1_7F572A2075EA0638__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_CLASS_1_7F572A2075EA0638_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_CLASS_1_7F572A2075EA0638_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};
