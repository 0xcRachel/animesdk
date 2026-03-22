#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/ValueTask_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter_TypeDefinitionIndex = 8770;

	template <typename TResult>
	struct ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter
	{
		::System::Threading::Tasks::ValueTask_1<TResult> _value; // 0x0
	};
}
