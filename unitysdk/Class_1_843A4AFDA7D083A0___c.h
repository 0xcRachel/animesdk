#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_109729CD11AC6CD9;
class Class_1_1F09213678A820A2;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_843A4AFDA7D083A0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x103BDFC0)
#define CLASS_1_843A4AFDA7D083A0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x103BDFF0)
#define CLASS_1_843A4AFDA7D083A0___C___TRYADDSHOWDATA_B__8_0_OFFSET UNITYSDK_OFFSET(0x103BE040)
#define CLASS_1_843A4AFDA7D083A0___C___UPDATEENTITYMODIFIERLIST_B__4_0_OFFSET UNITYSDK_OFFSET(0x103BE000)
#define CLASS_1_843A4AFDA7D083A0___C___UPDATEENTITYMODIFIERLIST_B__4_1_OFFSET UNITYSDK_OFFSET(0x103BE020)

inline static constexpr unsigned int Class_1_843A4AFDA7D083A0___c_TypeDefinitionIndex = 57426;

class Class_1_843A4AFDA7D083A0___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_1F09213678A820A2*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_1_1F09213678A820A2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_843A4AFDA7D083A0___c_TypeDefinitionIndex)->GetStaticField(0x40F70);
	}
	static ::System::Comparison_1<::Class_1_109729CD11AC6CD9*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Class_1_109729CD11AC6CD9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_843A4AFDA7D083A0___c_TypeDefinitionIndex)->GetStaticField(0x40F78);
	}
	static ::Class_1_843A4AFDA7D083A0___c** StaticGet___9()
	{
		return (::Class_1_843A4AFDA7D083A0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_843A4AFDA7D083A0___c_TypeDefinitionIndex)->GetStaticField(0x40F80);
	}
	static ::System::Comparison_1<::Class_1_1F09213678A820A2*>** StaticGet___9__4_1()
	{
		return (::System::Comparison_1<::Class_1_1F09213678A820A2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_843A4AFDA7D083A0___c_TypeDefinitionIndex)->GetStaticField(0x40F88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __UpdateEntityModifierList_b__4_0(::Class_1_1F09213678A820A2* lhs, ::Class_1_1F09213678A820A2* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_1F09213678A820A2*, ::Class_1_1F09213678A820A2*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C___UPDATEENTITYMODIFIERLIST_B__4_0_OFFSET))(this, lhs, rhs);
	}

	::System::Int32 __UpdateEntityModifierList_b__4_1(::Class_1_1F09213678A820A2* lhs, ::Class_1_1F09213678A820A2* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_1F09213678A820A2*, ::Class_1_1F09213678A820A2*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C___UPDATEENTITYMODIFIERLIST_B__4_1_OFFSET))(this, lhs, rhs);
	}

	::System::Int32 __TryAddShowData_b__8_0(::Class_1_109729CD11AC6CD9* lhs, ::Class_1_109729CD11AC6CD9* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_109729CD11AC6CD9*, ::Class_1_109729CD11AC6CD9*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C___TRYADDSHOWDATA_B__8_0_OFFSET))(this, lhs, rhs);
	}
};
