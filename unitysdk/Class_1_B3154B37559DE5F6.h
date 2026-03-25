#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_908;
class Class_1_F19AB08624168191;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B3154B37559DE5F6_METHOD_1_252CDD73045AC6BB_OFFSET UNITYSDK_OFFSET(0xD177D50)
#define CLASS_1_B3154B37559DE5F6_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xD177E00)
#define CLASS_1_B3154B37559DE5F6_METHOD_1_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0xD178100)
#define CLASS_1_B3154B37559DE5F6_ONNEW_OFFSET UNITYSDK_OFFSET(0xD177E50)
#define CLASS_1_B3154B37559DE5F6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xD177EC0)
#define CLASS_1_B3154B37559DE5F6__CTOR_OFFSET UNITYSDK_OFFSET(0xD178160)

inline static constexpr unsigned int Class_1_B3154B37559DE5F6_TypeDefinitionIndex = 60192;

class Class_1_B3154B37559DE5F6 : public ::System::Object
{
public:
	::Class_1_F19AB08624168191* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_0_16E4307DCC419505_908*, ::System::Int32>>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3154B37559DE5F6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_252CDD73045AC6BB(::Class_0_16E4307DCC419505_908* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_908*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B3154B37559DE5F6_METHOD_1_252CDD73045AC6BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_F19AB08624168191* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F19AB08624168191*))((::PBYTE)hIl2Cpp + CLASS_1_B3154B37559DE5F6_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void OnNew()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3154B37559DE5F6_ONNEW_OFFSET))(this);
	}

	::System::Boolean OnRecycle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3154B37559DE5F6_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3154B37559DE5F6_METHOD_1_ED65AE7582736594_OFFSET))(this);
	}
};
