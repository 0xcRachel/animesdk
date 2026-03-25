#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x867D080)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x867D0A0)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x867D090)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x867D0B0)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x867D0C0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int CopyLobbyDetailsHandleOptions_TypeDefinitionIndex = 36009;

	class CopyLobbyDetailsHandleOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _LobbyId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_SET_LOBBYID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
