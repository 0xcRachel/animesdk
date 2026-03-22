#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_1_2E13F8CAE96B3E1D;
class Class_1_35EF8ACF9B94E295;
class Class_1_37676B2FB4322E20;

#define CLASS_1_D7C7ABA05560413C_4_METHOD_1_198B6C32D3241E9F_OFFSET UNITYSDK_OFFSET(0xFF06800)
#define CLASS_1_D7C7ABA05560413C_4__CTOR_OFFSET UNITYSDK_OFFSET(0xFF06770)

inline static constexpr unsigned int Class_1_D7C7ABA05560413C_4_TypeDefinitionIndex = 49777;

class Class_1_D7C7ABA05560413C_4 : public ::System::Object
{
public:
	::Class_1_35EF8ACF9B94E295* Field_1_0; // 0x10
	::Class_1_37676B2FB4322E20* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_35EF8ACF9B94E295* a1, ::Class_1_37676B2FB4322E20* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35EF8ACF9B94E295*, ::Class_1_37676B2FB4322E20*))((::PBYTE)hIl2Cpp + CLASS_1_D7C7ABA05560413C_4__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_2E13F8CAE96B3E1D* Method_1_198B6C32D3241E9F(::Struct_2_BC950E36747FB4C9& a1)
	{
		return ((::Class_1_2E13F8CAE96B3E1D*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&))((::PBYTE)hIl2Cpp + CLASS_1_D7C7ABA05560413C_4_METHOD_1_198B6C32D3241E9F_OFFSET))(this, a1);
	}
};
