#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/LinkAccountCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class PinGrantInfo; }

#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8047390)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8047310)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8047330)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GET_PINGRANTINFO_OFFSET UNITYSDK_OFFSET(0x8047350)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x80472F0)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GET_SELECTEDACCOUNTID_OFFSET UNITYSDK_OFFSET(0x8047370)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8047A30)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8047320)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8047340)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x80473B0)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_PINGRANTINFO_OFFSET UNITYSDK_OFFSET(0x8047360)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8047300)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_SELECTEDACCOUNTID_OFFSET UNITYSDK_OFFSET(0x8047380)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8047B60)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LinkAccountCallbackInfo_TypeDefinitionIndex = 35611;

	class LinkAccountCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Auth::PinGrantInfo* _PinGrantInfo_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _SelectedAccountId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x28
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Auth::PinGrantInfo* get_PinGrantInfo()
		{
			return ((::Epic::OnlineServices::Auth::PinGrantInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GET_PINGRANTINFO_OFFSET))(this);
		}

		::System::Void set_PinGrantInfo(::Epic::OnlineServices::Auth::PinGrantInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::PinGrantInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_PINGRANTINFO_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_SelectedAccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GET_SELECTEDACCOUNTID_OFFSET))(this);
		}

		::System::Void set_SelectedAccountId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_SELECTEDACCOUNTID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
