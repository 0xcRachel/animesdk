#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_43.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5CC0A77A3BBC2D41_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176272E0)
#define CLASS_1_5CC0A77A3BBC2D41_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17627310)
#define CLASS_1_5CC0A77A3BBC2D41_2___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x17627320)
#define CLASS_1_5CC0A77A3BBC2D41_2___C___CCTOR_B__25_1_OFFSET UNITYSDK_OFFSET(0x17627330)

inline static constexpr unsigned int Class_1_5CC0A77A3BBC2D41_2___c_TypeDefinitionIndex = 24472;

class Class_1_5CC0A77A3BBC2D41_2___c : public ::System::Object
{
public:
	static ::Class_1_5CC0A77A3BBC2D41_2___c** StaticGet___9()
	{
		return (::Class_1_5CC0A77A3BBC2D41_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC0A77A3BBC2D41_2___c_TypeDefinitionIndex)->GetStaticField(0x23490);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__25_0(::Enum_3_0A3761FE34514D6C_43 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_43))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_2___C___CCTOR_B__25_0_OFFSET))(this, x);
	}

	::Enum_3_0A3761FE34514D6C_43 __cctor_b__25_1(::System::Int32 x)
	{
		return ((::Enum_3_0A3761FE34514D6C_43(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_2___C___CCTOR_B__25_1_OFFSET))(this, x);
	}
};
