#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define SYSTEM_THREADING_TASKS_SOURCES_MANUALRESETVALUETASKSOURCECORESHARED_COMPLETIONSENTINEL_OFFSET UNITYSDK_OFFSET(0x156B20D0)
#define SYSTEM_THREADING_TASKS_SOURCES_MANUALRESETVALUETASKSOURCECORESHARED__CCTOR_OFFSET UNITYSDK_OFFSET(0x156B2120)

namespace System::Threading::Tasks::Sources
{
	inline static constexpr unsigned int ManualResetValueTaskSourceCoreShared_TypeDefinitionIndex = 8806;

	class ManualResetValueTaskSourceCoreShared : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_s_sentinel()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ManualResetValueTaskSourceCoreShared_TypeDefinitionIndex)->GetStaticField(0x6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SOURCES_MANUALRESETVALUETASKSOURCECORESHARED__CCTOR_OFFSET))();
		}

		static ::System::Void CompletionSentinel(::System::Object* _)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SOURCES_MANUALRESETVALUETASKSOURCECORESHARED_COMPLETIONSENTINEL_OFFSET))(_);
		}
	};
}
