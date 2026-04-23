#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_313;
class Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8;
namespace UnityEngine { class Component; }

#define CLASS_1_B48EFD1473830FEF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF01870)
#define CLASS_1_B48EFD1473830FEF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFF018A0)
#define CLASS_1_B48EFD1473830FEF___C__LOADPROCESSORS_B__6_0_OFFSET UNITYSDK_OFFSET(0xFF018B0)
#define CLASS_1_B48EFD1473830FEF___C__LOADPROCESSORS_B__6_1_OFFSET UNITYSDK_OFFSET(0xFF01920)
#define CLASS_1_B48EFD1473830FEF___C__LOADPROCESSORS_B__6_2_OFFSET UNITYSDK_OFFSET(0xFF019A0)

inline static constexpr unsigned int Class_1_B48EFD1473830FEF___c_TypeDefinitionIndex = 45683;

class Class_1_B48EFD1473830FEF___c : public ::System::Object
{
public:
	static ::Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8** StaticGet___9__6_2()
	{
		return (::Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48EFD1473830FEF___c_TypeDefinitionIndex)->GetStaticField(0x6B360);
	}
	static ::Class_1_B48EFD1473830FEF___c** StaticGet___9()
	{
		return (::Class_1_B48EFD1473830FEF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48EFD1473830FEF___c_TypeDefinitionIndex)->GetStaticField(0x6B368);
	}
	static ::Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8** StaticGet___9__6_0()
	{
		return (::Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48EFD1473830FEF___c_TypeDefinitionIndex)->GetStaticField(0x6B370);
	}
	static ::Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8** StaticGet___9__6_1()
	{
		return (::Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48EFD1473830FEF___c_TypeDefinitionIndex)->GetStaticField(0x6B378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF___C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_313* _LoadProcessors_b__6_0(::UnityEngine::Component* c)
	{
		return ((::Class_0_16E4307DCC419505_313*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF___C__LOADPROCESSORS_B__6_0_OFFSET))(this, c);
	}

	::Class_0_16E4307DCC419505_313* _LoadProcessors_b__6_1(::UnityEngine::Component* c)
	{
		return ((::Class_0_16E4307DCC419505_313*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF___C__LOADPROCESSORS_B__6_1_OFFSET))(this, c);
	}

	::Class_0_16E4307DCC419505_313* _LoadProcessors_b__6_2(::UnityEngine::Component* c)
	{
		return ((::Class_0_16E4307DCC419505_313*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF___C__LOADPROCESSORS_B__6_2_OFFSET))(this, c);
	}
};
