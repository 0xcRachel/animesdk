#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_69.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_21DCD4640D389503_39___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179FF630)
#define CLASS_1_21DCD4640D389503_39___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179FF660)
#define CLASS_1_21DCD4640D389503_39___C___CCTOR_B__70_0_OFFSET UNITYSDK_OFFSET(0x179FF670)
#define CLASS_1_21DCD4640D389503_39___C___CCTOR_B__70_1_OFFSET UNITYSDK_OFFSET(0x179FF680)

inline static constexpr unsigned int Class_1_21DCD4640D389503_39___c_TypeDefinitionIndex = 26308;

class Class_1_21DCD4640D389503_39___c : public ::System::Object
{
public:
	static ::Class_1_21DCD4640D389503_39___c** StaticGet___9()
	{
		return (::Class_1_21DCD4640D389503_39___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_39___c_TypeDefinitionIndex)->GetStaticField(0x384F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_39___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_39___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__70_0(::Enum_3_0A3761FE34514D6C_69 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_69))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_39___C___CCTOR_B__70_0_OFFSET))(this, x);
	}

	::Enum_3_0A3761FE34514D6C_69 __cctor_b__70_1(::System::Int32 x)
	{
		return ((::Enum_3_0A3761FE34514D6C_69(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_39___C___CCTOR_B__70_1_OFFSET))(this, x);
	}
};
