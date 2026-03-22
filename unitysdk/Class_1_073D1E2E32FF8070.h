#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF20F44E47239AF3;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_073D1E2E32FF8070_METHOD_1_4FE0554BE6751A03_OFFSET UNITYSDK_OFFSET(0x109B1C00)
#define CLASS_1_073D1E2E32FF8070__CCTOR_OFFSET UNITYSDK_OFFSET(0x109B1C90)

inline static constexpr unsigned int Class_1_073D1E2E32FF8070_TypeDefinitionIndex = 37605;

class Class_1_073D1E2E32FF8070 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_EF20F44E47239AF3*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_EF20F44E47239AF3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_073D1E2E32FF8070_TypeDefinitionIndex)->GetStaticField(0x2E020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_073D1E2E32FF8070__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_4FE0554BE6751A03(::Class_1_EF20F44E47239AF3* a1)
	{
		return ((::System::Void(*)(::Class_1_EF20F44E47239AF3*))((::PBYTE)hIl2Cpp + CLASS_1_073D1E2E32FF8070_METHOD_1_4FE0554BE6751A03_OFFSET))(a1);
	}
};
