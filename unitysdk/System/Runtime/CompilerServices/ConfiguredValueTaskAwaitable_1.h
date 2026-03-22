#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/ValueTask_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredValueTaskAwaitable_1_TypeDefinitionIndex = 8769;

	template <typename TResult>
	struct ConfiguredValueTaskAwaitable_1
	{
		::System::Threading::Tasks::ValueTask_1<TResult> _value; // 0x0
	};
}
