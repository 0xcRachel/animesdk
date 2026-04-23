#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CREATEINT32TASKS_OFFSET UNITYSDK_OFFSET(0x18F59520)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F59670)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncTaskCache_TypeDefinitionIndex = 1344;

	class AsyncTaskCache : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::Task_1<::System::Boolean>** StaticGet_TrueTask()
		{
			return (::System::Threading::Tasks::Task_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AsyncTaskCache_TypeDefinitionIndex)->GetStaticField(0x8420);
		}
		static ::Il2CppArray<::System::Threading::Tasks::Task_1<::System::Int32>*>** StaticGet_Int32Tasks()
		{
			return (::Il2CppArray<::System::Threading::Tasks::Task_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AsyncTaskCache_TypeDefinitionIndex)->GetStaticField(0x8428);
		}
		static ::System::Threading::Tasks::Task_1<::System::Boolean>** StaticGet_FalseTask()
		{
			return (::System::Threading::Tasks::Task_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AsyncTaskCache_TypeDefinitionIndex)->GetStaticField(0x8430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Threading::Tasks::Task_1<::System::Int32>*>* CreateInt32Tasks()
		{
			return ((::Il2CppArray<::System::Threading::Tasks::Task_1<::System::Int32>*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CREATEINT32TASKS_OFFSET))();
		}
	};
}
