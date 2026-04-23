#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Stack; }

#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETPROCESSID_OFFSET UNITYSDK_OFFSET(0x1831CAB0)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETTHREADID_OFFSET UNITYSDK_OFFSET(0x1831CBB0)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_CALLSTACK_OFFSET UNITYSDK_OFFSET(0x1831C880)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_DATETIME_OFFSET UNITYSDK_OFFSET(0x1831CA10)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_LOGICALOPERATIONSTACK_OFFSET UNITYSDK_OFFSET(0x1831C8D0)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x1831CA70)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_THREADID_OFFSET UNITYSDK_OFFSET(0x1831CAF0)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1831CC50)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_INITPROCESSINFO_OFFSET UNITYSDK_OFFSET(0x1831CCC0)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1831CE90)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceEventCache_TypeDefinitionIndex = 2526;

	class TraceEventCache : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_processName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TraceEventCache_TypeDefinitionIndex)->GetStaticField(0x11D90);
		}
		static ::System::Int32* StaticGet_processId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TraceEventCache_TypeDefinitionIndex)->GetStaticField(0x5830);
		}
		::System::String* stackTrace; // 0x10
		::System::Int64 timeStamp; // 0x18
		::System::DateTime dateTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE__CTOR_OFFSET))(this);
		}

		::System::String* get_Callstack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_CALLSTACK_OFFSET))(this);
		}

		::System::Collections::Stack* get_LogicalOperationStack()
		{
			return ((::System::Collections::Stack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_LOGICALOPERATIONSTACK_OFFSET))(this);
		}

		::System::DateTime get_DateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_DATETIME_OFFSET))(this);
		}

		::System::Int32 get_ProcessId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_PROCESSID_OFFSET))(this);
		}

		::System::String* get_ThreadId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_THREADID_OFFSET))(this);
		}

		::System::Int64 get_Timestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_TIMESTAMP_OFFSET))(this);
		}

		static ::System::Void InitProcessInfo()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_INITPROCESSINFO_OFFSET))();
		}

		static ::System::Int32 GetProcessId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETPROCESSID_OFFSET))();
		}

		static ::System::Int32 GetThreadId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETTHREADID_OFFSET))();
		}
	};
}
