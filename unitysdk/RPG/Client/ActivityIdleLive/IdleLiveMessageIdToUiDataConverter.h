#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageUiData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER_PRODUCEMESSAGEUIDATA_OFFSET UNITYSDK_OFFSET(0x16C6C520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6C7C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveMessageIdToUiDataConverter_TypeDefinitionIndex = 69429;

	class IdleLiveMessageIdToUiDataConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageUiData* ProduceMessageUiData(::System::UInt32 contentId)
		{
			return ((::RPG::Client::MessageUiData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER_PRODUCEMESSAGEUIDATA_OFFSET))(this, contentId);
		}
	};
}
