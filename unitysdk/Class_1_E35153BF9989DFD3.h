#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_440;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E35153BF9989DFD3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AA8EE0)
#define CLASS_1_E35153BF9989DFD3_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10AA90D0)
#define CLASS_1_E35153BF9989DFD3_METHOD_1_46DB4169A68DB507_OFFSET UNITYSDK_OFFSET(0x10AA9010)
#define CLASS_1_E35153BF9989DFD3_METHOD_1_81E7A4FD20EC860C_OFFSET UNITYSDK_OFFSET(0x10AA8F30)
#define CLASS_1_E35153BF9989DFD3_METHOD_1_B75E2195E90A782E_OFFSET UNITYSDK_OFFSET(0x10AA9130)
#define CLASS_1_E35153BF9989DFD3__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA8E30)

inline static constexpr unsigned int Class_1_E35153BF9989DFD3_TypeDefinitionIndex = 46561;

class Class_1_E35153BF9989DFD3 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_440*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_81E7A4FD20EC860C(::Class_0_16E4307DCC419505_440* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_440*))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3_METHOD_1_81E7A4FD20EC860C_OFFSET))(this, a1);
	}

	::System::Void Method_1_46DB4169A68DB507(::Class_0_16E4307DCC419505_440* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_440*))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3_METHOD_1_46DB4169A68DB507_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_440*>* Method_1_B75E2195E90A782E()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_440*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3_METHOD_1_B75E2195E90A782E_OFFSET))(this);
	}
};
