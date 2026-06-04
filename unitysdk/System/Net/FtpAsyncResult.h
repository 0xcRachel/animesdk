#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::IO { class Stream; }
namespace System::Net { class FtpWebResponse; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_FTPASYNCRESULT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x17CD31D0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x17CD2DA0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x17CD2DB0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x17CD2EA0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x17CD2F70)
#define SYSTEM_NET_FTPASYNCRESULT_GET_GOTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17CD2F60)
#define SYSTEM_NET_FTPASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x17CD2EB0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x17CD2F80)
#define SYSTEM_NET_FTPASYNCRESULT_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x17CD2F90)
#define SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_1_OFFSET UNITYSDK_OFFSET(0x17CD3220)
#define SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_2_OFFSET UNITYSDK_OFFSET(0x17CD3230)
#define SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x17CD30A0)
#define SYSTEM_NET_FTPASYNCRESULT_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x17CD2FA0)
#define SYSTEM_NET_FTPASYNCRESULT_WAITUNTILCOMPLETE_OFFSET UNITYSDK_OFFSET(0x17CD2FB0)
#define SYSTEM_NET_FTPASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD2D70)

namespace System::Net
{
	inline static constexpr unsigned int FtpAsyncResult_TypeDefinitionIndex = 2826;

	class FtpAsyncResult : public ::System::Object
	{
	public:
		::System::Object* state; // 0x10
		::System::Net::FtpWebResponse* response; // 0x18
		::System::IO::Stream* stream; // 0x20
		::System::Threading::ManualResetEvent* waitHandle; // 0x28
		::System::Object* locker; // 0x30
		::System::AsyncCallback* callback; // 0x38
		::System::Exception* exception; // 0x40
		::System::Boolean completed; // 0x48
		::System::Boolean synch; // 0x49

		::System::Void _ctor(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_GotException()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_GOTEXCEPTION_OFFSET))(this);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_EXCEPTION_OFFSET))(this);
		}

		::System::Net::FtpWebResponse* get_Response()
		{
			return ((::System::Net::FtpWebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_RESPONSE_OFFSET))(this);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_SET_STREAM_OFFSET))(this, a1);
		}

		::System::Boolean WaitUntilComplete(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_WAITUNTILCOMPLETE_OFFSET))(this, a1, a2);
		}

		::System::Void SetCompleted(::System::Boolean a1, ::System::Exception* a2, ::System::Net::FtpWebResponse* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Exception*, ::System::Net::FtpWebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCompleted_1(::System::Boolean a1, ::System::Net::FtpWebResponse* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Net::FtpWebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetCompleted_2(::System::Boolean a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_2_OFFSET))(this, a1, a2);
		}

		::System::Void DoCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_DOCALLBACK_OFFSET))(this);
		}
	};
}
