#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceAvatarTalkRow; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x8E45960)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GETOWNERHEADICON_OFFSET UNITYSDK_OFFSET(0x8E46DE0)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x8E470B0)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_MESSAGETEXT_OFFSET UNITYSDK_OFFSET(0x8E471A0)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0x8E470D0)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x8E47050)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_SET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x8E470C0)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x8E46DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHandbookMessageItem_TypeDefinitionIndex = 50029;

	class CakeRaceHandbookMessageItem : public ::System::Object
	{
	public:
		::System::UInt32 _MessageID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 messageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM__CTOR_OFFSET))(this, messageID);
		}

		static ::RPG::Client::CakeRaceHandbookMessageItem* Create(::System::UInt32 messageID)
		{
			return ((::RPG::Client::CakeRaceHandbookMessageItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_CREATE_OFFSET))(messageID);
		}

		::System::String* GetOwnerHeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GETOWNERHEADICON_OFFSET))(this);
		}

		::System::UInt32 get_MessageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_MESSAGEID_OFFSET))(this);
		}

		::System::Void set_MessageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_SET_MESSAGEID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_OwnerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_OWNERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_MessageText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_MESSAGETEXT_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceAvatarTalkRow* get__Row()
		{
			return ((::RPG::GameCore::CakeRaceAvatarTalkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET__ROW_OFFSET))(this);
		}
	};
}
