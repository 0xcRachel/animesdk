#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7A6E49020D23C900_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xA626870)
#define CLASS_1_7A6E49020D23C900__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6268C0)
#define CLASS_1_7A6E49020D23C900__CTOR_OFFSET UNITYSDK_OFFSET(0xA626860)

inline static constexpr unsigned int Class_1_7A6E49020D23C900_TypeDefinitionIndex = 68057;

class Class_1_7A6E49020D23C900 : public ::System::Object
{
public:
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_9()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x5210);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_7()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x5218);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_10()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x5220);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_6()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x5228);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_5()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x5230);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_8()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x5238);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_4()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x5240);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_3()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x5248);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x5250);
	}
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A6E49020D23C900__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A6E49020D23C900__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7A6E49020D23C900_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}
};
