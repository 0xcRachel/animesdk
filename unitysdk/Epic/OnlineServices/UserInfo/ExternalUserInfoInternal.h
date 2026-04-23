#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::UserInfo { class ExternalUserInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x22ED4E0)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x22ED1A0)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_GET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x608600)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x22ED300)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x22ED470)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x22ED250)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_SET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x878E70)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x22ED3B0)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x22ED460)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int ExternalUserInfoInternal_TypeDefinitionIndex = 41101;

	struct alignas(8) ExternalUserInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::ExternalAccountType m_AccountType; // 0x14
		::System::IntPtr m_AccountId; // 0x18
		::System::IntPtr m_DisplayName; // 0x20

		::Epic::OnlineServices::ExternalAccountType get_AccountType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_GET_ACCOUNTTYPE_OFFSET))(this);
		}

		::System::Void set_AccountType(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_SET_ACCOUNTTYPE_OFFSET))(this, value);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::UserInfo::ExternalUserInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
