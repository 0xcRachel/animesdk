#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYONPRESENCECHANGEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8395A00)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int AddNotifyOnPresenceChangedOptions_TypeDefinitionIndex = 34818;

	class AddNotifyOnPresenceChangedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYONPRESENCECHANGEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
