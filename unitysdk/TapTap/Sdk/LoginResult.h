#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace TapTap::Sdk { class AccessToken; }

#define TAPTAP_SDK_LOGINRESULT_GET_ISCANCELED_OFFSET UNITYSDK_OFFSET(0x17F6A900)
#define TAPTAP_SDK_LOGINRESULT_GET_ISFAULTED_OFFSET UNITYSDK_OFFSET(0x17F6A920)
#define TAPTAP_SDK_LOGINRESULT_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x17F6A950)
#define TAPTAP_SDK_LOGINRESULT_SET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x17F6A940)
#define TAPTAP_SDK_LOGINRESULT_SET_ISCANCELED_OFFSET UNITYSDK_OFFSET(0x17F6A910)
#define TAPTAP_SDK_LOGINRESULT_SET_ISFAULTED_OFFSET UNITYSDK_OFFSET(0x17F6A930)
#define TAPTAP_SDK_LOGINRESULT_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x17F6A960)
#define TAPTAP_SDK_LOGINRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F6A150)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int LoginResult_TypeDefinitionIndex = 6326;

	class LoginResult : public ::System::Object
	{
	public:
		::TapTap::Sdk::AccessToken* _Token_k__BackingField; // 0x10
		::System::Exception* _Exception_k__BackingField; // 0x18
		::System::Boolean _IsFaulted_k__BackingField; // 0x20
		::System::Boolean _IsCanceled_k__BackingField; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINRESULT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsCanceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINRESULT_GET_ISCANCELED_OFFSET))(this);
		}

		::System::Void set_IsCanceled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINRESULT_SET_ISCANCELED_OFFSET))(this, value);
		}

		::System::Boolean get_IsFaulted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINRESULT_GET_ISFAULTED_OFFSET))(this);
		}

		::System::Void set_IsFaulted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINRESULT_SET_ISFAULTED_OFFSET))(this, value);
		}

		::System::Void set_Exception(::System::Exception* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINRESULT_SET_EXCEPTION_OFFSET))(this, value);
		}

		::TapTap::Sdk::AccessToken* get_Token()
		{
			return ((::TapTap::Sdk::AccessToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINRESULT_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::TapTap::Sdk::AccessToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::AccessToken*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINRESULT_SET_TOKEN_OFFSET))(this, value);
		}
	};
}
