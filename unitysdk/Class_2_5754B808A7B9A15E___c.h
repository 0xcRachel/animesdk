#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_4;
class Class_2_5754B808A7B9A15E_Class_1_98952B4A4DD0BE99;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_5754B808A7B9A15E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10079060)
#define CLASS_2_5754B808A7B9A15E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x100790A0)
#define CLASS_2_5754B808A7B9A15E___C__GENSTATISTICS_B__4_0_OFFSET UNITYSDK_OFFSET(0x100790B0)

inline static constexpr unsigned int Class_2_5754B808A7B9A15E___c_TypeDefinitionIndex = 43809;

class Class_2_5754B808A7B9A15E___c : public ::System::Object
{
public:
	static ::Class_2_5754B808A7B9A15E___c** StaticGet___9()
	{
		return (::Class_2_5754B808A7B9A15E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5754B808A7B9A15E___c_TypeDefinitionIndex)->GetStaticField(0x30E50);
	}
	static ::System::Func_2<::Class_2_5754B808A7B9A15E_Class_1_98952B4A4DD0BE99*, ::Class_1_EBB10EC01CCC4716_4*>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_2_5754B808A7B9A15E_Class_1_98952B4A4DD0BE99*, ::Class_1_EBB10EC01CCC4716_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5754B808A7B9A15E___c_TypeDefinitionIndex)->GetStaticField(0x30E58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5754B808A7B9A15E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5754B808A7B9A15E___C__CTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_4* _GenStatistics_b__4_0(::Class_2_5754B808A7B9A15E_Class_1_98952B4A4DD0BE99* x)
	{
		return ((::Class_1_EBB10EC01CCC4716_4*(*)(::PVOID, ::Class_2_5754B808A7B9A15E_Class_1_98952B4A4DD0BE99*))((::PBYTE)hIl2Cpp + CLASS_2_5754B808A7B9A15E___C__GENSTATISTICS_B__4_0_OFFSET))(this, x);
	}
};
