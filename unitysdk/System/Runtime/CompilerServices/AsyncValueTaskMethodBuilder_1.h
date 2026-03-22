#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncValueTaskMethodBuilder_1_TypeDefinitionIndex = 8766;

	template <typename TResult>
	struct AsyncValueTaskMethodBuilder_1
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> _methodBuilder; // 0x0
		TResult _result; // 0x0
		::System::Boolean _haveResult; // 0x0
		::System::Boolean _useBuilder; // 0x0
	};
}
