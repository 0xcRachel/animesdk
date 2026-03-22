#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x83D1210)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int ActiveSessionGetRegisteredPlayerCountOptions_TypeDefinitionIndex = 34471;

	class ActiveSessionGetRegisteredPlayerCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
