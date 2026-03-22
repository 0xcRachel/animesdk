#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B58C65FFAAC2F95C_Class_1_FA7091ADF2A6A8DC;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_B58C65FFAAC2F95C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA492690)
#define CLASS_2_B58C65FFAAC2F95C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4926C0)
#define CLASS_2_B58C65FFAAC2F95C___C__GETCONTENT_B__8_0_OFFSET UNITYSDK_OFFSET(0xA4926D0)

inline static constexpr unsigned int Class_2_B58C65FFAAC2F95C___c_TypeDefinitionIndex = 54645;

class Class_2_B58C65FFAAC2F95C___c : public ::System::Object
{
public:
	static ::Class_2_B58C65FFAAC2F95C___c** StaticGet___9()
	{
		return (::Class_2_B58C65FFAAC2F95C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B58C65FFAAC2F95C___c_TypeDefinitionIndex)->GetStaticField(0x45E10);
	}
	static ::System::Comparison_1<::Class_2_B58C65FFAAC2F95C_Class_1_FA7091ADF2A6A8DC*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Class_2_B58C65FFAAC2F95C_Class_1_FA7091ADF2A6A8DC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B58C65FFAAC2F95C___c_TypeDefinitionIndex)->GetStaticField(0x45E18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B58C65FFAAC2F95C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B58C65FFAAC2F95C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetContent_b__8_0(::Class_2_B58C65FFAAC2F95C_Class_1_FA7091ADF2A6A8DC* a, ::Class_2_B58C65FFAAC2F95C_Class_1_FA7091ADF2A6A8DC* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B58C65FFAAC2F95C_Class_1_FA7091ADF2A6A8DC*, ::Class_2_B58C65FFAAC2F95C_Class_1_FA7091ADF2A6A8DC*))((::PBYTE)hIl2Cpp + CLASS_2_B58C65FFAAC2F95C___C__GETCONTENT_B__8_0_OFFSET))(this, a, b);
	}
};
