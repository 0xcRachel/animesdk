#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/Native/OS/Win32_TOKEN_INFORMATION_CLASS.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_CLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x1587CD10)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_CONVERTSIDTOSTRINGSID_OFFSET UNITYSDK_OFFSET(0x1587CD90)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETCURRENTUSERSID_OFFSET UNITYSDK_OFFSET(0x1587D800)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETSIDFROMPROCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1587CF30)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETTOKENINFORMATION_OFFSET UNITYSDK_OFFSET(0x1587CC20)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_LOCALFREE_OFFSET UNITYSDK_OFFSET(0x1587CE60)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_OPENPROCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1587CB50)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32__CTOR_OFFSET UNITYSDK_OFFSET(0x1587DAD0)

namespace MiHoYo::SDK::PC::Native::OS
{
	inline static constexpr unsigned int Win32_TypeDefinitionIndex = 7295;

	class Win32 : public ::System::Object
	{
	public:
		// static const ::System::Int32 TOKEN_QUERY = 0x8; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32__CTOR_OFFSET))(this);
		}

		static ::System::Boolean OpenProcessToken(::System::IntPtr ProcessHandle, ::System::Int32 DesiredAccess, ::System::IntPtr& TokenHandle)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_OPENPROCESSTOKEN_OFFSET))(ProcessHandle, DesiredAccess, TokenHandle);
		}

		static ::System::Boolean GetTokenInformation(::System::IntPtr hToken, ::MiHoYo::SDK::PC::Native::OS::Win32_TOKEN_INFORMATION_CLASS tokenInfoClass, ::System::IntPtr TokenInformation, ::System::Int32 tokeInfoLength, ::System::Int32& reqLength)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::PC::Native::OS::Win32_TOKEN_INFORMATION_CLASS, ::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETTOKENINFORMATION_OFFSET))(hToken, tokenInfoClass, TokenInformation, tokeInfoLength, reqLength);
		}

		static ::System::Boolean CloseHandle(::System::IntPtr handle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_CLOSEHANDLE_OFFSET))(handle);
		}

		static ::System::Boolean ConvertSidToStringSid(::System::IntPtr pSid, ::System::IntPtr& strSid)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_CONVERTSIDTOSTRINGSID_OFFSET))(pSid, strSid);
		}

		static ::System::IntPtr LocalFree(::System::IntPtr hMem)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_LOCALFREE_OFFSET))(hMem);
		}

		static ::System::String* GetSidFromProcessToken(::System::IntPtr token)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETSIDFROMPROCESSTOKEN_OFFSET))(token);
		}

		static ::System::String* GetCurrentUserSid()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETCURRENTUSERSID_OFFSET))();
		}
	};
}
