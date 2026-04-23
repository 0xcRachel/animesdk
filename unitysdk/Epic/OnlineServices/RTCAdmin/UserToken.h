#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAdmin/UserTokenInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_GET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x1965FA10)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1965FA30)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_SET_1_OFFSET UNITYSDK_OFFSET(0x1965FDA0)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_SET_OFFSET UNITYSDK_OFFSET(0x1965FA50)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_SET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x1965FA20)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1965FA40)
#define EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1965FEB0)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int UserToken_TypeDefinitionIndex = 41516;

	class UserToken : public ::System::Object
	{
	public:
		::System::String* _Token_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _ProductUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_GET_PRODUCTUSERID_OFFSET))(this);
		}

		::System::Void set_ProductUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_SET_PRODUCTUSERID_OFFSET))(this, value);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_SET_TOKEN_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserTokenInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserTokenInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_USERTOKEN_SET_1_OFFSET))(this, other);
		}
	};
}
