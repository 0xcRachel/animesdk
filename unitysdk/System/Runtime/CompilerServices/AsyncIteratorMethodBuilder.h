#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCITERATORMETHODBUILDER_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1FFAA20)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCITERATORMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x156B1F40)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncIteratorMethodBuilder_TypeDefinitionIndex = 8801;

	struct alignas(8) AsyncIteratorMethodBuilder
	{
		::System::Object* _id; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder _methodBuilder; // 0x18

		static ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder Create()
		{
			return ((::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCITERATORMETHODBUILDER_CREATE_OFFSET))();
		}

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCITERATORMETHODBUILDER_COMPLETE_OFFSET))(this);
		}
	};
}
