#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_02F5E36EB5FF4E03___C__BORROW_B__4_1_OFFSET UNITYSDK_OFFSET(0x10D2D540)
#define CLASS_1_02F5E36EB5FF4E03___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D2D500)
#define CLASS_1_02F5E36EB5FF4E03___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10D2D530)
#define CLASS_1_02F5E36EB5FF4E03___C___ONPRELOADTIMELINEASSETFINISH_B__30_0_OFFSET UNITYSDK_OFFSET(0x10D2D570)

inline static constexpr unsigned int Class_1_02F5E36EB5FF4E03___c_TypeDefinitionIndex = 38304;

class Class_1_02F5E36EB5FF4E03___c : public ::System::Object
{
public:
	static ::Class_1_02F5E36EB5FF4E03___c** StaticGet___9()
	{
		return (::Class_1_02F5E36EB5FF4E03___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F5E36EB5FF4E03___c_TypeDefinitionIndex)->GetStaticField(0x18FB0);
	}
	static ::System::Predicate_1<::Class_1_36264895A759B0FF*>** StaticGet___9__30_0()
	{
		return (::System::Predicate_1<::Class_1_36264895A759B0FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F5E36EB5FF4E03___c_TypeDefinitionIndex)->GetStaticField(0x18FB8);
	}
	static ::System::Predicate_1<::Class_1_36264895A759B0FF*>** StaticGet___9__4_1()
	{
		return (::System::Predicate_1<::Class_1_36264895A759B0FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F5E36EB5FF4E03___c_TypeDefinitionIndex)->GetStaticField(0x18FC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Borrow_b__4_1(::Class_1_36264895A759B0FF* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C__BORROW_B__4_1_OFFSET))(this, x);
	}

	::System::Boolean __OnPreloadTimelineAssetFinish_b__30_0(::Class_1_36264895A759B0FF* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C___ONPRELOADTIMELINEASSETFINISH_B__30_0_OFFSET))(this, x);
	}
};
