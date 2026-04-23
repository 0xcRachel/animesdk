#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/HideFlags.h"

namespace System { class String; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture3D; }

#define CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_82F4B250EE228D87_OFFSET UNITYSDK_OFFSET(0xD4DF570)
#define CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xD4DF490)
#define CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_A3769EE9A8F58984_OFFSET UNITYSDK_OFFSET(0xD4DF750)
#define CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_CE18697B63E52504_1_OFFSET UNITYSDK_OFFSET(0xD4DF410)
#define CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0xD4DF380)

inline static constexpr unsigned int Class_1_FA4DA56C3A0BC9BB_TypeDefinitionIndex = 45619;

class Class_1_FA4DA56C3A0BC9BB : public ::System::Object
{
public:
	static ::UnityEngine::Texture3D** StaticGet_Field_1_2()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA4DA56C3A0BC9BB_TypeDefinitionIndex)->GetStaticField(0x6AEA0);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA4DA56C3A0BC9BB_TypeDefinitionIndex)->GetStaticField(0x11C40);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA4DA56C3A0BC9BB_TypeDefinitionIndex)->GetStaticField(0x11C41);
	}
	// static const ::UnityEngine::HideFlags Field_1_3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x23; // 0x0

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_CE18697B63E52504_1_OFFSET))();
	}

	static ::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_88B60F3B95FAA4F1_OFFSET))();
	}

	static ::System::Void Method_1_82F4B250EE228D87()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_82F4B250EE228D87_OFFSET))();
	}

	static ::UnityEngine::Texture3D* Method_1_A3769EE9A8F58984(::UnityEngine::TextAsset* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Texture3D*(*)(::UnityEngine::TextAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_A3769EE9A8F58984_OFFSET))(a1, a2);
	}
};
