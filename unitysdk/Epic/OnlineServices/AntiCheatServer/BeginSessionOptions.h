#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_ENABLEGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0x803E350)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x803E370)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_REGISTERTIMEOUTSECONDS_OFFSET UNITYSDK_OFFSET(0x803E310)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_SERVERNAME_OFFSET UNITYSDK_OFFSET(0x803E330)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_ENABLEGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0x803E360)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x803E380)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_REGISTERTIMEOUTSECONDS_OFFSET UNITYSDK_OFFSET(0x803E320)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_SERVERNAME_OFFSET UNITYSDK_OFFSET(0x803E340)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x803E390)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int BeginSessionOptions_TypeDefinitionIndex = 35672;

	class BeginSessionOptions : public ::System::Object
	{
	public:
		::System::String* _ServerName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::UInt32 _RegisterTimeoutSeconds_k__BackingField; // 0x20
		::System::Boolean _EnableGameplayData_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RegisterTimeoutSeconds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_REGISTERTIMEOUTSECONDS_OFFSET))(this);
		}

		::System::Void set_RegisterTimeoutSeconds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_REGISTERTIMEOUTSECONDS_OFFSET))(this, value);
		}

		::System::String* get_ServerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_SERVERNAME_OFFSET))(this);
		}

		::System::Void set_ServerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_SERVERNAME_OFFSET))(this, value);
		}

		::System::Boolean get_EnableGameplayData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_ENABLEGAMEPLAYDATA_OFFSET))(this);
		}

		::System::Void set_EnableGameplayData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_ENABLEGAMEPLAYDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_BEGINSESSIONOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
