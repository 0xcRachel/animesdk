#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableArray_1_Enumerator_TypeDefinitionIndex = 9140;

	template <typename T>
	struct ImmutableArray_1_Enumerator
	{
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _index; // 0x0
	};
}
