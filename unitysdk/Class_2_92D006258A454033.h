#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/CyreneSPPointState.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_92D006258A454033_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1047E1F0)
#define CLASS_2_92D006258A454033_METHOD_2_51C3FB4A34742D14_OFFSET UNITYSDK_OFFSET(0x1047E370)
#define CLASS_2_92D006258A454033_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1047E2D0)
#define CLASS_2_92D006258A454033_METHOD_2_BC067EA5541EDEA9_OFFSET UNITYSDK_OFFSET(0x1047DFC0)
#define CLASS_2_92D006258A454033__CCTOR_OFFSET UNITYSDK_OFFSET(0x1047E480)
#define CLASS_2_92D006258A454033__CTOR_OFFSET UNITYSDK_OFFSET(0x1047E450)
#define CLASS_2_92D006258A454033__ONBIND_OFFSET UNITYSDK_OFFSET(0x1047E3F0)
#define CLASS_2_92D006258A454033___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1047E520)

inline static constexpr unsigned int Class_2_92D006258A454033_TypeDefinitionIndex = 57298;

class Class_2_92D006258A454033 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF720);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF724);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF728);
	}
	static ::System::Int32* StaticGet_Field_2_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF72C);
	}
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF730);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_92D006258A454033_TypeDefinitionIndex)->GetStaticField(0xF734);
	}
	::UnityEngine::Animator* Field_2_1; // 0x60
	::RPG::Client::CyreneSPPointState Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033__CCTOR_OFFSET))();
	}

	::System::Void Method_2_BC067EA5541EDEA9(::RPG::Client::CyreneSPPointState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CyreneSPPointState))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033_METHOD_2_BC067EA5541EDEA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_51C3FB4A34742D14(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033_METHOD_2_51C3FB4A34742D14_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92D006258A454033___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
