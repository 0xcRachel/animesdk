#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_DBE826764FAA7E43;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_542BEF5BAE725811_DISPOSE_OFFSET UNITYSDK_OFFSET(0x104C7DE0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x104C82C0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x104C86A0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_1A4E0FFCF3F7E082_OFFSET UNITYSDK_OFFSET(0x104C8B40)
#define CLASS_1_542BEF5BAE725811_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x104C8E40)
#define CLASS_1_542BEF5BAE725811_METHOD_1_27A7A836B45390B2_OFFSET UNITYSDK_OFFSET(0x104C80A0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x104C80B0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_5AE7386665184975_OFFSET UNITYSDK_OFFSET(0x104C8750)
#define CLASS_1_542BEF5BAE725811_METHOD_1_7C5833C04DA1B77C_OFFSET UNITYSDK_OFFSET(0x104C8CC0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_953F7C7A7F2C728A_OFFSET UNITYSDK_OFFSET(0x104C9750)
#define CLASS_1_542BEF5BAE725811_METHOD_1_9A34582197D203A0_OFFSET UNITYSDK_OFFSET(0x104C8090)
#define CLASS_1_542BEF5BAE725811_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x104C8DE0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_FEB8BDECEB197E6A_OFFSET UNITYSDK_OFFSET(0x104C8960)
#define CLASS_1_542BEF5BAE725811__CCTOR_OFFSET UNITYSDK_OFFSET(0x104C9B60)
#define CLASS_1_542BEF5BAE725811__CTOR_OFFSET UNITYSDK_OFFSET(0x104C80C0)

inline static constexpr unsigned int Class_1_542BEF5BAE725811_TypeDefinitionIndex = 39250;

class Class_1_542BEF5BAE725811 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>** StaticGet_Field_1_14()
	{
		return (::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x438D0);
	}
	static ::Il2CppArray<::UnityEngine::Color>** StaticGet_Field_1_15()
	{
		return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x438D8);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0xFBA0);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0xFBA4);
	}
	::UnityEngine::ComputeBuffer* Field_1_11; // 0x10
	::UnityEngine::RenderTexture* Field_1_3; // 0x18
	::UnityEngine::Texture2D* Field_1_2; // 0x20
	::UnityEngine::RenderTexture* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_2_DBE826764FAA7E43*>* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>* Field_1_13; // 0x40
	::System::Int32 Field_1_10; // 0x48
	::System::Boolean Field_1_7; // 0x4C
	::System::Single Field_1_8; // 0x50
	::System::Int32 Field_1_0; // 0x54
	::System::Int32 Field_1_9; // 0x58

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Texture2D* Method_1_9A34582197D203A0()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_9A34582197D203A0_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_27A7A836B45390B2()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_27A7A836B45390B2_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_5AE7386665184975()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_5AE7386665184975_OFFSET))(this);
	}

	::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_FEB8BDECEB197E6A(::Class_2_DBE826764FAA7E43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DBE826764FAA7E43*))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_FEB8BDECEB197E6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A4E0FFCF3F7E082(::Class_2_DBE826764FAA7E43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DBE826764FAA7E43*))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_1A4E0FFCF3F7E082_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C5833C04DA1B77C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_7C5833C04DA1B77C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_1_953F7C7A7F2C728A(::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>*))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_953F7C7A7F2C728A_OFFSET))(this, a1);
	}
};
