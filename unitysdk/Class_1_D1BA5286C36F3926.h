#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class EnvWindReceiverBehavior; }
namespace RPG::Client { class EnvWindTriggerBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_D1BA5286C36F3926_METHOD_1_16670DB329511C8C_OFFSET UNITYSDK_OFFSET(0x86CA6B0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0x86CA3B0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_409C728D46688DDD_OFFSET UNITYSDK_OFFSET(0x86CAA40)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_44C64E801CDFD25B_OFFSET UNITYSDK_OFFSET(0x86CA8E0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x86CCAD0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_6EE03B4F9BC0C9F3_OFFSET UNITYSDK_OFFSET(0x86CB1F0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_8768DB5C5F1C9E04_OFFSET UNITYSDK_OFFSET(0x86CA9F0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_882594C8427BC253_OFFSET UNITYSDK_OFFSET(0x86CA7C0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x86CC890)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x86CCD00)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_A6F859C992EE1E16_OFFSET UNITYSDK_OFFSET(0x86CA280)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_A7D9F202A1E202D3_OFFSET UNITYSDK_OFFSET(0x86CCE10)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_C073A23C563BCC9F_OFFSET UNITYSDK_OFFSET(0x86CC930)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_CF94C38BDCE016F0_OFFSET UNITYSDK_OFFSET(0x86CA310)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x86CC7A0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x86CA0D0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x86CADC0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_FE532D41618BFAF2_OFFSET UNITYSDK_OFFSET(0x86CA800)
#define CLASS_1_D1BA5286C36F3926__CCTOR_OFFSET UNITYSDK_OFFSET(0x86CDBE0)
#define CLASS_1_D1BA5286C36F3926__CTOR_OFFSET UNITYSDK_OFFSET(0x86CA210)

inline static constexpr unsigned int Class_1_D1BA5286C36F3926_TypeDefinitionIndex = 39339;

class Class_1_D1BA5286C36F3926 : public ::System::Object
{
public:
	static ::Class_1_D1BA5286C36F3926** StaticGet_Field_1_0()
	{
		return (::Class_1_D1BA5286C36F3926**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x3E2D0);
	}
	static ::System::String** StaticGet_Field_1_19()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x3E2D8);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0xEC30);
	}
	static ::UnityEngine::Vector3Int* StaticGet_Field_1_7()
	{
		return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0xEC34);
	}
	static ::System::Int32* StaticGet_Field_1_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0xEC40);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0xEC44);
	}
	static ::System::Int32* StaticGet_Field_1_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0xEC48);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0xEC4C);
	}
	static ::System::Int32* StaticGet_Field_1_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0xEC50);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0xEC54);
	}
	static ::System::Int32* StaticGet_Field_1_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0xEC58);
	}
	static ::UnityEngine::Vector3Int* StaticGet_Field_1_6()
	{
		return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0xEC5C);
	}
	static ::System::Int32* StaticGet_Field_1_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0xEC68);
	}
	::UnityEngine::ComputeShader* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>* Field_1_1; // 0x18
	::UnityEngine::Texture3D* Field_1_14; // 0x20
	::UnityEngine::RenderTexture* Field_1_13; // 0x28
	::UnityEngine::ComputeBuffer* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>* Field_1_2; // 0x38
	::System::Int32 Field_1_18; // 0x40
	::System::Boolean Field_1_5; // 0x44
	::System::Boolean Field_1_8; // 0x45
	::UnityEngine::Vector3Int Field_1_12; // 0x48
	::UnityEngine::Vector4 Field_1_11; // 0x54
	::UnityEngine::Vector3 Field_1_10; // 0x64
	::UnityEngine::Vector3 Field_1_9; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926__CCTOR_OFFSET))();
	}

	static ::Class_1_D1BA5286C36F3926* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_D1BA5286C36F3926*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_E4886687508BA48F_OFFSET))();
	}

	::UnityEngine::ComputeShader* Method_1_A6F859C992EE1E16()
	{
		return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_A6F859C992EE1E16_OFFSET))(this);
	}

	::System::Void Method_1_CF94C38BDCE016F0(::RPG::Client::EnvWindTriggerBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindTriggerBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_CF94C38BDCE016F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_16670DB329511C8C(::RPG::Client::EnvWindTriggerBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindTriggerBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_16670DB329511C8C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>* Method_1_882594C8427BC253()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_882594C8427BC253_OFFSET))(this);
	}

	::System::Void Method_1_FE532D41618BFAF2(::RPG::Client::EnvWindReceiverBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindReceiverBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_FE532D41618BFAF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_44C64E801CDFD25B(::RPG::Client::EnvWindReceiverBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindReceiverBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_44C64E801CDFD25B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>* Method_1_8768DB5C5F1C9E04()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_8768DB5C5F1C9E04_OFFSET))(this);
	}

	::System::Void Method_1_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_226842F6044F973B_OFFSET))(this);
	}

	::System::Void Method_1_409C728D46688DDD(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_409C728D46688DDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_C073A23C563BCC9F(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_C073A23C563BCC9F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6EE03B4F9BC0C9F3(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3Int a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_6EE03B4F9BC0C9F3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_1_A7D9F202A1E202D3(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_A7D9F202A1E202D3_OFFSET))(this, a1);
	}
};
