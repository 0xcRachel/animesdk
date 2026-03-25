#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_2392F323E0E8E66E_METHOD_1_0341989C46A3E14D_OFFSET UNITYSDK_OFFSET(0x1050D380)
#define CLASS_1_2392F323E0E8E66E_METHOD_1_06150765F7C4861F_OFFSET UNITYSDK_OFFSET(0x1050D1B0)
#define CLASS_1_2392F323E0E8E66E_METHOD_1_2D2DD5FB5AF9ED2C_OFFSET UNITYSDK_OFFSET(0x1050D200)
#define CLASS_1_2392F323E0E8E66E__CTOR_OFFSET UNITYSDK_OFFSET(0x1050D110)

inline static constexpr unsigned int Class_1_2392F323E0E8E66E_TypeDefinitionIndex = 58315;

class Class_1_2392F323E0E8E66E : public ::System::Object
{
public:
	::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::RPG::Client::UIPrefabLoader* Field_1_3; // 0x20
	::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* Field_1_1; // 0x28

	::System::Void _ctor(::System::String* a1, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1*))((::PBYTE)hIl2Cpp + CLASS_1_2392F323E0E8E66E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_06150765F7C4861F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2392F323E0E8E66E_METHOD_1_06150765F7C4861F_OFFSET))(this);
	}

	::System::Void Method_1_2D2DD5FB5AF9ED2C(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_2392F323E0E8E66E_METHOD_1_2D2DD5FB5AF9ED2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_0341989C46A3E14D(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2392F323E0E8E66E_METHOD_1_0341989C46A3E14D_OFFSET))(this, a1, a2);
	}
};
