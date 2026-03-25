#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64_ShowMatState.h"
#include "unitysdk/System/Object.h"

class Class_1_BF5210DF5B358112_Class_1_7454F79F911CC6C3;
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EABCA0)
#define CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_METHOD_1_15A05698D5A7A20A_OFFSET UNITYSDK_OFFSET(0x8EACF30)
#define CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8EAC790)
#define CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_METHOD_1_64865938ADBCB300_OFFSET UNITYSDK_OFFSET(0x8EAC510)
#define CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_METHOD_1_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x8EAC7F0)
#define CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_METHOD_1_F3044C7F0F775E6E_OFFSET UNITYSDK_OFFSET(0x8EACA50)
#define CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64__CCTOR_OFFSET UNITYSDK_OFFSET(0x8EAD920)
#define CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8EAC9F0)
#define CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64__CTOR_OFFSET UNITYSDK_OFFSET(0x8EACEA0)

inline static constexpr unsigned int Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64_TypeDefinitionIndex = 49305;

class Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_10()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64_TypeDefinitionIndex)->GetStaticField(0x157C0);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64_TypeDefinitionIndex)->GetStaticField(0x8BD0);
	}
	// static const ::System::String* Field_1_11; // 0x0
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_0; // 0x18
	::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* Field_1_1; // 0x20
	::System::Single Field_1_8; // 0x28
	::System::Single Field_1_3; // 0x2C
	::System::Single Field_1_5; // 0x30
	::System::Single Field_1_7; // 0x34
	::System::Single Field_1_6; // 0x38
	::Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64_ShowMatState Field_1_4; // 0x3C

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Material* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::UnityEngine::Transform* a1, ::UnityEngine::Material* a2, ::Class_1_BF5210DF5B358112_Class_1_7454F79F911CC6C3* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Material*, ::Class_1_BF5210DF5B358112_Class_1_7454F79F911CC6C3*))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64__CCTOR_OFFSET))();
	}

	::System::Void Method_1_15A05698D5A7A20A(::UnityEngine::Transform* a1, ::UnityEngine::Material* a2, ::Class_1_BF5210DF5B358112_Class_1_7454F79F911CC6C3* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Material*, ::Class_1_BF5210DF5B358112_Class_1_7454F79F911CC6C3*))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_METHOD_1_15A05698D5A7A20A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_METHOD_1_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_F3044C7F0F775E6E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_METHOD_1_F3044C7F0F775E6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_64865938ADBCB300(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_CLASS_1_B8E5DF5B61B39C64_METHOD_1_64865938ADBCB300_OFFSET))(this, a1);
	}
};
