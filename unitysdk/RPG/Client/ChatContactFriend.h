#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChatContactData.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace System { class Object; }

#define RPG_CLIENT_CHATCONTACTFRIEND_CREATE_OFFSET UNITYSDK_OFFSET(0x8EB84F0)
#define RPG_CLIENT_CHATCONTACTFRIEND_REQUESTHISTORY_OFFSET UNITYSDK_OFFSET(0x8EB8740)
#define RPG_CLIENT_CHATCONTACTFRIEND_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x8EB85D0)
#define RPG_CLIENT_CHATCONTACTFRIEND__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB8440)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactFriend_TypeDefinitionIndex = 50169;

	class ChatContactFriend : public ::RPG::Client::ChatContactData
	{
	public:
		::System::Void _ctor(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND__CTOR_OFFSET))(this, uid);
		}

		static ::RPG::Client::ChatContactFriend* Create(::System::UInt32 uid)
		{
			return ((::RPG::Client::ChatContactFriend*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND_CREATE_OFFSET))(uid);
		}

		::System::Void SendMessage_(::RPG::Client::MessageContentBlock_BlockType blockType, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND_SENDMESSAGE__OFFSET))(this, blockType, data);
		}

		::System::Void RequestHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTFRIEND_REQUESTHISTORY_OFFSET))(this);
		}
	};
}
