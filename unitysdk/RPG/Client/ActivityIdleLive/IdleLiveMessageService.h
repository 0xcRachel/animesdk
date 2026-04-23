#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE_TAKEMESSAGEREWARD_OFFSET UNITYSDK_OFFSET(0x16C6C7D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6C970)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveMessageService_TypeDefinitionIndex = 69430;

	class IdleLiveMessageService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* MessageRewardsPendingToShow; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE__CTOR_OFFSET))(this);
		}

		::System::Void TakeMessageReward(::System::Int32 messageId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE_TAKEMESSAGEREWARD_OFFSET))(this, messageId);
		}
	};
}
