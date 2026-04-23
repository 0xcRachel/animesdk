#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_78BA1F3C6E599BF5;
namespace RPG::Client { class ChatMessageExtendData; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class ChatMessagePlanetfesExchangeData; }
namespace RPG::Client { class ContactIdentity; }
namespace RPG::Client { class MessageContentBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATMESSAGEDATA_ADDCONTENTBLOCK_OFFSET UNITYSDK_OFFSET(0x15DF0150)
#define RPG_CLIENT_CHATMESSAGEDATA_CLEARCONTENTBLOCKS_OFFSET UNITYSDK_OFFSET(0x15DF0560)
#define RPG_CLIENT_CHATMESSAGEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x15DF04B0)
#define RPG_CLIENT_CHATMESSAGEDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0x15DF0000)
#define RPG_CLIENT_CHATMESSAGEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x15DEF0B0)
#define RPG_CLIENT_CHATMESSAGEDATA_GETBLOCKBYTYPE_OFFSET UNITYSDK_OFFSET(0x15DEFE30)
#define RPG_CLIENT_CHATMESSAGEDATA_GETCHATINVITEDATA_OFFSET UNITYSDK_OFFSET(0x15DF0790)
#define RPG_CLIENT_CHATMESSAGEDATA_GETCHATMESSAGEPLANETFESEXCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x15DF0830)
#define RPG_CLIENT_CHATMESSAGEDATA_GETEMOJIID_OFFSET UNITYSDK_OFFSET(0x15DF0950)
#define RPG_CLIENT_CHATMESSAGEDATA_GETEXTENDDATA_OFFSET UNITYSDK_OFFSET(0x15DF0740)
#define RPG_CLIENT_CHATMESSAGEDATA_GET_BLOCKS_OFFSET UNITYSDK_OFFSET(0x15DF0BB0)
#define RPG_CLIENT_CHATMESSAGEDATA_GET_CONTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x15DF0460)
#define RPG_CLIENT_CHATMESSAGEDATA_GET_ISINVITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x15DF0C90)
#define RPG_CLIENT_CHATMESSAGEDATA_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x15DF0D30)
#define RPG_CLIENT_CHATMESSAGEDATA_GET_ISSENDERPLAYER_OFFSET UNITYSDK_OFFSET(0x15DF0BC0)
#define RPG_CLIENT_CHATMESSAGEDATA_GET_SENDERIDENTITY_OFFSET UNITYSDK_OFFSET(0x15DF0D10)
#define RPG_CLIENT_CHATMESSAGEDATA_GET_SENDERID_OFFSET UNITYSDK_OFFSET(0x15DF0B70)
#define RPG_CLIENT_CHATMESSAGEDATA_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x15DF0B90)
#define RPG_CLIENT_CHATMESSAGEDATA_ISEMOJI_OFFSET UNITYSDK_OFFSET(0x15DF08D0)
#define RPG_CLIENT_CHATMESSAGEDATA_ISSAME_OFFSET UNITYSDK_OFFSET(0x15DEBB10)
#define RPG_CLIENT_CHATMESSAGEDATA_ISTYPINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x15DEFF20)
#define RPG_CLIENT_CHATMESSAGEDATA_SET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x15DF0D40)
#define RPG_CLIENT_CHATMESSAGEDATA_SET_SENDERIDENTITY_OFFSET UNITYSDK_OFFSET(0x15DF0D20)
#define RPG_CLIENT_CHATMESSAGEDATA_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x15DF0BA0)
#define RPG_CLIENT_CHATMESSAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF0470)
#define RPG_CLIENT_CHATMESSAGEDATA__GETBLOCKBYTYPE_OFFSET UNITYSDK_OFFSET(0x15DF05D0)
#define RPG_CLIENT_CHATMESSAGEDATA__GETCONTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x15DF09D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessageData_TypeDefinitionIndex = 58232;

	class ChatMessageData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* _Blocks_k__BackingField; // 0x10
		::RPG::Client::ContactIdentity* _SenderIdentity_k__BackingField; // 0x18
		::System::Boolean _IsLastMessage_k__BackingField; // 0x20
		::System::UInt32 _TimeStamp_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsSame(::RPG::Client::ChatMessageData* messageData1, ::RPG::Client::ChatMessageData* messageData2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageData*, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_ISSAME_OFFSET))(messageData1, messageData2);
		}

		static ::RPG::Client::ChatMessageData* Create(::Class_1_78BA1F3C6E599BF5* chatMsg)
		{
			return ((::RPG::Client::ChatMessageData*(*)(::Class_1_78BA1F3C6E599BF5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_CREATE_OFFSET))(chatMsg);
		}

		static ::RPG::Client::ChatMessageData* Create_1(::RPG::Client::ContactIdentity* senderIdentity, ::System::UInt32 timeStamp)
		{
			return ((::RPG::Client::ChatMessageData*(*)(::RPG::Client::ContactIdentity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_CREATE_1_OFFSET))(senderIdentity, timeStamp);
		}

		static ::RPG::Client::ChatMessageData* Create_2(::RPG::Client::ContactIdentity* senderIdentity)
		{
			return ((::RPG::Client::ChatMessageData*(*)(::RPG::Client::ContactIdentity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_CREATE_2_OFFSET))(senderIdentity);
		}

		::System::Void AddContentBlock(::RPG::Client::MessageContentBlock* block)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_ADDCONTENTBLOCK_OFFSET))(this, block);
		}

		::System::Void ClearContentBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_CLEARCONTENTBLOCKS_OFFSET))(this);
		}

		::RPG::Client::MessageContentBlock* GetBlockByType(::RPG::Client::MessageContentBlock_BlockType blockType)
		{
			return ((::RPG::Client::MessageContentBlock*(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GETBLOCKBYTYPE_OFFSET))(this, blockType);
		}

		::System::Boolean IsTypingMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_ISTYPINGMESSAGE_OFFSET))(this);
		}

		::RPG::Client::ChatMessageExtendData* GetExtendData()
		{
			return ((::RPG::Client::ChatMessageExtendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GETEXTENDDATA_OFFSET))(this);
		}

		::RPG::Client::ChatMessageInviteData* GetChatInviteData()
		{
			return ((::RPG::Client::ChatMessageInviteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GETCHATINVITEDATA_OFFSET))(this);
		}

		::RPG::Client::ChatMessagePlanetfesExchangeData* GetChatMessagePlanetfesExchangeData()
		{
			return ((::RPG::Client::ChatMessagePlanetfesExchangeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GETCHATMESSAGEPLANETFESEXCHANGEDATA_OFFSET))(this);
		}

		::System::Boolean IsEmoji()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_ISEMOJI_OFFSET))(this);
		}

		::System::UInt32 GetEmojiID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GETEMOJIID_OFFSET))(this);
		}

		::RPG::Client::MessageContentBlock* _GetContextBlock()
		{
			return ((::RPG::Client::MessageContentBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA__GETCONTEXTBLOCK_OFFSET))(this);
		}

		::RPG::Client::MessageContentBlock* _GetBlockByType(::RPG::Client::MessageContentBlock_BlockType blockType)
		{
			return ((::RPG::Client::MessageContentBlock*(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA__GETBLOCKBYTYPE_OFFSET))(this, blockType);
		}

		::System::UInt32 get_SenderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GET_SENDERID_OFFSET))(this);
		}

		::System::UInt32 get_TimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Void set_TimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_SET_TIMESTAMP_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* get_Blocks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GET_BLOCKS_OFFSET))(this);
		}

		::RPG::Client::MessageContentBlock* get_ContextBlock()
		{
			return ((::RPG::Client::MessageContentBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GET_CONTEXTBLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsSenderPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GET_ISSENDERPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsInviteMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GET_ISINVITEMESSAGE_OFFSET))(this);
		}

		::RPG::Client::ContactIdentity* get_SenderIdentity()
		{
			return ((::RPG::Client::ContactIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GET_SENDERIDENTITY_OFFSET))(this);
		}

		::System::Void set_SenderIdentity(::RPG::Client::ContactIdentity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ContactIdentity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_SET_SENDERIDENTITY_OFFSET))(this, value);
		}

		::System::Boolean get_IsLastMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_GET_ISLASTMESSAGE_OFFSET))(this);
		}

		::System::Void set_IsLastMessage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEDATA_SET_ISLASTMESSAGE_OFFSET))(this, value);
		}
	};
}
