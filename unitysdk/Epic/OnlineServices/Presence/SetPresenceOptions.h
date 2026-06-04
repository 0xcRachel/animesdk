#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class PresenceModification; }

#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A3CE0F0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONS_GET_PRESENCEMODIFICATIONHANDLE_OFFSET UNITYSDK_OFFSET(0x1A3CE110)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A3CE100)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONS_SET_PRESENCEMODIFICATIONHANDLE_OFFSET UNITYSDK_OFFSET(0x1A3CE120)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3CE130)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int SetPresenceOptions_TypeDefinitionIndex = 42427;

	class SetPresenceOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::Presence::PresenceModification* _PresenceModificationHandle_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Presence::PresenceModification* get_PresenceModificationHandle()
		{
			return ((::Epic::OnlineServices::Presence::PresenceModification*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONS_GET_PRESENCEMODIFICATIONHANDLE_OFFSET))(this);
		}

		::System::Void set_PresenceModificationHandle(::Epic::OnlineServices::Presence::PresenceModification* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModification*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONS_SET_PRESENCEMODIFICATIONHANDLE_OFFSET))(this, a1);
		}
	};
}
