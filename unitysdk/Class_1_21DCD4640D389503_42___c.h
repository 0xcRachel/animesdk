#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_73.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_42;

#define CLASS_1_21DCD4640D389503_42___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A51FF20)
#define CLASS_1_21DCD4640D389503_42___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A51FF50)
#define CLASS_1_21DCD4640D389503_42___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1A51FF60)
#define CLASS_1_21DCD4640D389503_42___C___CCTOR_B__73_1_OFFSET UNITYSDK_OFFSET(0x1A51FF90)
#define CLASS_1_21DCD4640D389503_42___C___CCTOR_B__73_2_OFFSET UNITYSDK_OFFSET(0x1A51FFA0)

inline static constexpr unsigned int Class_1_21DCD4640D389503_42___c_TypeDefinitionIndex = 32184;

class Class_1_21DCD4640D389503_42___c : public ::System::Object
{
public:
	static ::Class_1_21DCD4640D389503_42___c** StaticGet___9()
	{
		return (::Class_1_21DCD4640D389503_42___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_42___c_TypeDefinitionIndex)->GetStaticField(0x2F810);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42___C__CTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_42* __cctor_b__73_0()
	{
		return ((::Class_1_21DCD4640D389503_42*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42___C___CCTOR_B__73_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__73_1(::Enum_3_0A3761FE34514D6C_73 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_73))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42___C___CCTOR_B__73_1_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_73 __cctor_b__73_2(::System::Int32 a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_73(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42___C___CCTOR_B__73_2_OFFSET))(this, a1);
	}
};
