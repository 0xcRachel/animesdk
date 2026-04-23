#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_73.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_40;

#define CLASS_1_21DCD4640D389503_40___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A30F560)
#define CLASS_1_21DCD4640D389503_40___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30F590)
#define CLASS_1_21DCD4640D389503_40___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1A30F5A0)
#define CLASS_1_21DCD4640D389503_40___C___CCTOR_B__73_1_OFFSET UNITYSDK_OFFSET(0x1A30F5D0)
#define CLASS_1_21DCD4640D389503_40___C___CCTOR_B__73_2_OFFSET UNITYSDK_OFFSET(0x1A30F5E0)

inline static constexpr unsigned int Class_1_21DCD4640D389503_40___c_TypeDefinitionIndex = 32075;

class Class_1_21DCD4640D389503_40___c : public ::System::Object
{
public:
	static ::Class_1_21DCD4640D389503_40___c** StaticGet___9()
	{
		return (::Class_1_21DCD4640D389503_40___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_40___c_TypeDefinitionIndex)->GetStaticField(0x4A840);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40___C__CTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_40* __cctor_b__73_0()
	{
		return ((::Class_1_21DCD4640D389503_40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40___C___CCTOR_B__73_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__73_1(::Enum_3_0A3761FE34514D6C_73 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_73))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40___C___CCTOR_B__73_1_OFFSET))(this, x);
	}

	::Enum_3_0A3761FE34514D6C_73 __cctor_b__73_2(::System::Int32 x)
	{
		return ((::Enum_3_0A3761FE34514D6C_73(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_40___C___CCTOR_B__73_2_OFFSET))(this, x);
	}
};
