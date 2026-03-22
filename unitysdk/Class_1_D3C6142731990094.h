#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF20F44E47239AF3;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D3C6142731990094_METHOD_1_473C7C3D0724BABC_OFFSET UNITYSDK_OFFSET(0x1098EFE0)
#define CLASS_1_D3C6142731990094__CCTOR_OFFSET UNITYSDK_OFFSET(0x1098F080)
#define CLASS_1_D3C6142731990094__CTOR_OFFSET UNITYSDK_OFFSET(0x1098F070)

inline static constexpr unsigned int Class_1_D3C6142731990094_TypeDefinitionIndex = 37607;

class Class_1_D3C6142731990094 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_EF20F44E47239AF3*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_EF20F44E47239AF3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3C6142731990094_TypeDefinitionIndex)->GetStaticField(0x405B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3C6142731990094__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D3C6142731990094__CCTOR_OFFSET))();
	}

	::System::Void Method_1_473C7C3D0724BABC(::Class_1_EF20F44E47239AF3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF20F44E47239AF3*))((::PBYTE)hIl2Cpp + CLASS_1_D3C6142731990094_METHOD_1_473C7C3D0724BABC_OFFSET))(this, a1);
	}
};
