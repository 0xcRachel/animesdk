#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_GETPACKETQUEUEINFOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x836CE60)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int GetPacketQueueInfoOptions_TypeDefinitionIndex = 34955;

	class GetPacketQueueInfoOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETPACKETQUEUEINFOOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
