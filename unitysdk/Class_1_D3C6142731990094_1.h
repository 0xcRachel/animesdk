#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF20F44E47239AF3;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D3C6142731990094_1_METHOD_1_473C7C3D0724BABC_OFFSET UNITYSDK_OFFSET(0xAC999A0)
#define CLASS_1_D3C6142731990094_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC99A40)
#define CLASS_1_D3C6142731990094_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAC99A30)

inline static constexpr unsigned int Class_1_D3C6142731990094_1_TypeDefinitionIndex = 37609;

class Class_1_D3C6142731990094_1 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_EF20F44E47239AF3*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_EF20F44E47239AF3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3C6142731990094_1_TypeDefinitionIndex)->GetStaticField(0x46740);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3C6142731990094_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D3C6142731990094_1__CCTOR_OFFSET))();
	}

	::System::Void Method_1_473C7C3D0724BABC(::Class_1_EF20F44E47239AF3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF20F44E47239AF3*))((::PBYTE)hIl2Cpp + CLASS_1_D3C6142731990094_1_METHOD_1_473C7C3D0724BABC_OFFSET))(this, a1);
	}
};
