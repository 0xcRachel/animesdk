#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_57F17357982CBDC4_3_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xD289F40)
#define CLASS_1_57F17357982CBDC4_3__CTOR_OFFSET UNITYSDK_OFFSET(0xD289F90)

inline static constexpr unsigned int Class_1_57F17357982CBDC4_3_TypeDefinitionIndex = 58161;

class Class_1_57F17357982CBDC4_3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57F17357982CBDC4_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57F17357982CBDC4_3_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}
};
