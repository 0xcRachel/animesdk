#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_3454EB8E7104ADE9;
class Class_1_37676B2FB4322E20;
class Class_1_FD3C35FC150AF234;

#define CLASS_1_D7C7ABA05560413C_METHOD_1_CA08B60578012F72_OFFSET UNITYSDK_OFFSET(0x86B1F30)
#define CLASS_1_D7C7ABA05560413C__CTOR_OFFSET UNITYSDK_OFFSET(0x86B1EA0)

inline static constexpr unsigned int Class_1_D7C7ABA05560413C_TypeDefinitionIndex = 49767;

class Class_1_D7C7ABA05560413C : public ::System::Object
{
public:
	::Class_1_37676B2FB4322E20* Field_1_1; // 0x10
	::Class_1_FD3C35FC150AF234* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_FD3C35FC150AF234* a1, ::Class_1_37676B2FB4322E20* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD3C35FC150AF234*, ::Class_1_37676B2FB4322E20*))((::PBYTE)hIl2Cpp + CLASS_1_D7C7ABA05560413C__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_3454EB8E7104ADE9* Method_1_CA08B60578012F72(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::Class_1_3454EB8E7104ADE9*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_D7C7ABA05560413C_METHOD_1_CA08B60578012F72_OFFSET))(this, a1);
	}
};
