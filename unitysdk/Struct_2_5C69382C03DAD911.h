#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_5C69382C03DAD911__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20E65E0)
#define STRUCT_2_5C69382C03DAD911__CTOR_OFFSET UNITYSDK_OFFSET(0x20E6580)

inline static constexpr unsigned int Struct_2_5C69382C03DAD911_TypeDefinitionIndex = 28667;

struct alignas(8) Struct_2_5C69382C03DAD911
{
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5C69382C03DAD911__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + STRUCT_2_5C69382C03DAD911__CTOR_1_OFFSET))(this, a1);
	}
};
