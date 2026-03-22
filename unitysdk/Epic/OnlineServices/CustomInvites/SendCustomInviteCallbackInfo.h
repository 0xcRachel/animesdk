#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/CustomInvites/SendCustomInviteCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x82F2760)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x82F2700)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x82F2720)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x82F26E0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_GET_TARGETUSERIDS_OFFSET UNITYSDK_OFFSET(0x82F2740)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x82F2CB0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x82F2710)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x82F2730)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x82F2780)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x82F26F0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_TARGETUSERIDS_OFFSET UNITYSDK_OFFSET(0x82F2750)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x82F2DE0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int SendCustomInviteCallbackInfo_TypeDefinitionIndex = 35489;

	class SendCustomInviteCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* _TargetUserIds_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* get_TargetUserIds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_GET_TARGETUSERIDS_OFFSET))(this);
		}

		::System::Void set_TargetUserIds(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_TARGETUSERIDS_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
