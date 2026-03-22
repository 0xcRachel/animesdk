#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace CloudGame::MailBox { class Mailbox_SendCallbackHandler; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x156F25C0)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x156F2620)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x156F1E10)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156F1820)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Mailbox_SendCallbackRawHandler_TypeDefinitionIndex = 6445;

	class Mailbox_SendCallbackRawHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::CloudGame::MailBox::Mailbox_SendCallbackHandler* pContext, ::System::Int64 code)
		{
			return ((::System::Void(*)(::PVOID, ::CloudGame::MailBox::Mailbox_SendCallbackHandler*, ::System::Int64))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_INVOKE_OFFSET))(this, pContext, code);
		}

		::System::IAsyncResult* BeginInvoke(::CloudGame::MailBox::Mailbox_SendCallbackHandler* pContext, ::System::Int64 code, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CloudGame::MailBox::Mailbox_SendCallbackHandler*, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_BEGININVOKE_OFFSET))(this, pContext, code, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
