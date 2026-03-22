#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/ValueTask.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x1465FE0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A6D00)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredValueTaskAwaitable_TypeDefinitionIndex = 8767;

	struct alignas(8) ConfiguredValueTaskAwaitable
	{
		::System::Threading::Tasks::ValueTask _value; // 0x10

		::System::Void _ctor(::System::Threading::Tasks::ValueTask value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::ValueTask))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE__CTOR_OFFSET))(this, value);
		}

		/*
		::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter GetAwaiter()
		{
			return ((::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE_GETAWAITER_OFFSET))(this);
		}
		*/
	};
}
