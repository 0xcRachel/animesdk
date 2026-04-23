#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONS_GET_ATTRKEY_OFFSET UNITYSDK_OFFSET(0x19886A00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONS_SET_ATTRKEY_OFFSET UNITYSDK_OFFSET(0x19886A10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19886A20)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsCopyAttributeByKeyOptions_TypeDefinitionIndex = 41873;

	class LobbyDetailsCopyAttributeByKeyOptions : public ::System::Object
	{
	public:
		::System::String* _AttrKey_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_AttrKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONS_GET_ATTRKEY_OFFSET))(this);
		}

		::System::Void set_AttrKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYATTRIBUTEBYKEYOPTIONS_SET_ATTRKEY_OFFSET))(this, value);
		}
	};
}
