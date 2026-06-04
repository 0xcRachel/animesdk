#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net { class SimpleAsyncCallback; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_SIMPLEASYNCRESULT_DOCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18941F60)
#define SYSTEM_NET_SIMPLEASYNCRESULT_DOCALLBACK_PRIVATE_OFFSET UNITYSDK_OFFSET(0x18941E30)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x18942300)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x18942120)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLYPEEK_OFFSET UNITYSDK_OFFSET(0x18942340)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x18942310)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x18942360)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_GOTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18942350)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x18942070)
#define SYSTEM_NET_SIMPLEASYNCRESULT_RESET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18941C40)
#define SYSTEM_NET_SIMPLEASYNCRESULT_RUNWITHLOCK_OFFSET UNITYSDK_OFFSET(0x18941AE0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_RUN_OFFSET UNITYSDK_OFFSET(0x189417E0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_1_OFFSET UNITYSDK_OFFSET(0x189418A0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x18941E60)
#define SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18941D40)
#define SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x189419C0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_WAITUNTILCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x18942210)
#define SYSTEM_NET_SIMPLEASYNCRESULT_WAITUNTILCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18941F90)
#define SYSTEM_NET_SIMPLEASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18941740)
#define SYSTEM_NET_SIMPLEASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x18941710)

namespace System::Net
{
	inline static constexpr unsigned int SimpleAsyncResult_TypeDefinitionIndex = 2866;

	class SimpleAsyncResult : public ::System::Object
	{
	public:
		::System::Threading::ManualResetEvent* handle; // 0x10
		::System::Exception* exc; // 0x18
		::System::Net::SimpleAsyncCallback* cb; // 0x20
		::System::Object* state; // 0x28
		::System::Object* locker; // 0x30
		::System::Nullable_1<::System::Boolean> user_read_synch; // 0x38
		::System::Boolean callbackDone; // 0x3A
		::System::Boolean isCompleted; // 0x3B
		::System::Boolean synch; // 0x3C

		::System::Void _ctor(::System::Net::SimpleAsyncCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void Run(::System::Func_2<::System::Net::SimpleAsyncResult*, ::System::Boolean>* a1, ::System::Net::SimpleAsyncCallback* a2)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Net::SimpleAsyncResult*, ::System::Boolean>*, ::System::Net::SimpleAsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_RUN_OFFSET))(a1, a2);
		}

		static ::System::Void RunWithLock(::System::Object* a1, ::System::Func_2<::System::Net::SimpleAsyncResult*, ::System::Boolean>* a2, ::System::Net::SimpleAsyncCallback* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Func_2<::System::Net::SimpleAsyncResult*, ::System::Boolean>*, ::System::Net::SimpleAsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_RUNWITHLOCK_OFFSET))(a1, a2, a3);
		}

		::System::Void Reset_internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_RESET_INTERNAL_OFFSET))(this);
		}

		::System::Void SetCompleted(::System::Boolean a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_OFFSET))(this, a1, a2);
		}

		::System::Void SetCompleted_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_1_OFFSET))(this, a1);
		}

		::System::Void SetCompleted_internal(::System::Boolean a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void SetCompleted_internal_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_INTERNAL_1_OFFSET))(this, a1);
		}

		::System::Void DoCallback_private()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_DOCALLBACK_PRIVATE_OFFSET))(this);
		}

		::System::Void DoCallback_internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_DOCALLBACK_INTERNAL_OFFSET))(this);
		}

		::System::Void WaitUntilComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_WAITUNTILCOMPLETE_OFFSET))(this);
		}

		::System::Boolean WaitUntilComplete_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_WAITUNTILCOMPLETE_1_OFFSET))(this, a1, a2);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronouslyPeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLYPEEK_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_GotException()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_GOTEXCEPTION_OFFSET))(this);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_EXCEPTION_OFFSET))(this);
		}
	};
}
