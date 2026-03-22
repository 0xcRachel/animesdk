#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF20F44E47239AF3;

#define CLASS_1_073D1E2E32FF8070___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x109B1D30)
#define CLASS_1_073D1E2E32FF8070___C__CTOR_OFFSET UNITYSDK_OFFSET(0x109B1D60)
#define CLASS_1_073D1E2E32FF8070___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x109B1D70)
#define CLASS_1_073D1E2E32FF8070___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x109B1DA0)

inline static constexpr unsigned int Class_1_073D1E2E32FF8070___c_TypeDefinitionIndex = 37606;

class Class_1_073D1E2E32FF8070___c : public ::System::Object
{
public:
	static ::Class_1_073D1E2E32FF8070___c** StaticGet___9()
	{
		return (::Class_1_073D1E2E32FF8070___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_073D1E2E32FF8070___c_TypeDefinitionIndex)->GetStaticField(0x2E030);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_073D1E2E32FF8070___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_073D1E2E32FF8070___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__2_0(::Class_1_EF20F44E47239AF3* container)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF20F44E47239AF3*))((::PBYTE)hIl2Cpp + CLASS_1_073D1E2E32FF8070___C___CCTOR_B__2_0_OFFSET))(this, container);
	}

	::System::Void __cctor_b__2_1(::Class_1_EF20F44E47239AF3* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF20F44E47239AF3*))((::PBYTE)hIl2Cpp + CLASS_1_073D1E2E32FF8070___C___CCTOR_B__2_1_OFFSET))(this, _);
	}
};
