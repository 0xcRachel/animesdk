#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveGiftEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class GiftSenderUiData; }
namespace RPG::GameCore { class IdleLiveGiftRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x16C66DC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C67520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITGIFTCONTENT_OFFSET UNITYSDK_OFFSET(0x16C67530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITSENDERICON_OFFSET UNITYSDK_OFFSET(0x16C67690)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGiftUiData_TypeDefinitionIndex = 69485;

	class IdleLiveGiftUiData : public ::System::Object
	{
	public:
		::System::String* SenderIcon; // 0x10
		::System::String* AbilityName; // 0x18
		::RPG::Client::ActivityIdleLive::GiftSenderUiData* SenderUiData; // 0x20
		::System::String* Icon; // 0x28
		::RPG::Client::TextID Content; // 0x30
		::System::UInt32 ItemId; // 0x40
		::System::UInt32 GiftId; // 0x44
		::RPG::GameCore::IdleLiveGiftEffectType EffectType; // 0x48
		::System::UInt32 Count; // 0x4C
		::System::Single ProtectTime; // 0x50
		::System::UInt32 Rarity; // 0x54
		::System::Single FlySpeed; // 0x58
		::System::Boolean HasAbility; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGiftUiData* Create(::System::UInt32 giftId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGiftUiData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA_CREATE_OFFSET))(giftId);
		}

		::System::Void _InitGiftContent(::RPG::GameCore::IdleLiveGiftRow* giftRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveGiftRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITGIFTCONTENT_OFFSET))(this, giftRow);
		}

		::System::Void _InitSenderIcon(::System::UInt32 senderId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITSENDERICON_OFFSET))(this, senderId);
		}
	};
}
