#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/CredentialsInternal.h"
#include "unitysdk/Epic/OnlineServices/Auth/LoginCredentialType.h"
#include "unitysdk/Epic/OnlineServices/ExternalCredentialType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_EXTERNALTYPE_OFFSET UNITYSDK_OFFSET(0x80441C0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_ID_OFFSET UNITYSDK_OFFSET(0x8044140)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET UNITYSDK_OFFSET(0x80441A0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x8044160)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x8044180)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_1_OFFSET UNITYSDK_OFFSET(0x80446D0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_EXTERNALTYPE_OFFSET UNITYSDK_OFFSET(0x80441D0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_ID_OFFSET UNITYSDK_OFFSET(0x8044150)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_OFFSET UNITYSDK_OFFSET(0x80441E0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET UNITYSDK_OFFSET(0x80441B0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x8044170)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x8044190)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x8044810)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int Credentials_TypeDefinitionIndex = 35603;

	class Credentials : public ::System::Object
	{
	public:
		::System::String* _Id_k__BackingField; // 0x10
		::System::String* _Token_k__BackingField; // 0x18
		::System::IntPtr _SystemAuthCredentialsOptions_k__BackingField; // 0x20
		::Epic::OnlineServices::ExternalCredentialType _ExternalType_k__BackingField; // 0x28
		::Epic::OnlineServices::Auth::LoginCredentialType _Type_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS__CTOR_OFFSET))(this);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_TOKEN_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Auth::LoginCredentialType get_Type()
		{
			return ((::Epic::OnlineServices::Auth::LoginCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Auth::LoginCredentialType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_TYPE_OFFSET))(this, value);
		}

		::System::IntPtr get_SystemAuthCredentialsOptions()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET))(this);
		}

		::System::Void set_SystemAuthCredentialsOptions(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ExternalCredentialType get_ExternalType()
		{
			return ((::Epic::OnlineServices::ExternalCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_EXTERNALTYPE_OFFSET))(this);
		}

		::System::Void set_ExternalType(::Epic::OnlineServices::ExternalCredentialType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_EXTERNALTYPE_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::CredentialsInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::CredentialsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_1_OFFSET))(this, other);
		}
	};
}
