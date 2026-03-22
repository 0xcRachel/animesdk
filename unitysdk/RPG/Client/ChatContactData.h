#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ContactRole.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class ContactIdentity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATCONTACTDATA_APPENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x8EB73E0)
#define RPG_CLIENT_CHATCONTACTDATA_CLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0x8EB7340)
#define RPG_CLIENT_CHATCONTACTDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EB7290)
#define RPG_CLIENT_CHATCONTACTDATA_GETHISTORYMESSAGE_OFFSET UNITYSDK_OFFSET(0x8EB7FC0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_EARLIESTMESSAGE_OFFSET UNITYSDK_OFFSET(0x8EB80F0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_HISTORYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x8EB8280)
#define RPG_CLIENT_CHATCONTACTDATA_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x8EB81C0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISALLHISTORYINLOCAL_OFFSET UNITYSDK_OFFSET(0x8EB82A0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x8EB8220)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISPAM_OFFSET UNITYSDK_OFFSET(0x8EB81E0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x8EB8200)
#define RPG_CLIENT_CHATCONTACTDATA_GET_LATESTMESSAGE_OFFSET UNITYSDK_OFFSET(0x8EB82C0)
#define RPG_CLIENT_CHATCONTACTDATA_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8EB83A0)
#define RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_1_OFFSET UNITYSDK_OFFSET(0x8EB7F60)
#define RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_OFFSET UNITYSDK_OFFSET(0x8EB7EC0)
#define RPG_CLIENT_CHATCONTACTDATA_MARKHISTORYDIRTY_OFFSET UNITYSDK_OFFSET(0x8EB7DA0)
#define RPG_CLIENT_CHATCONTACTDATA_REMOVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x8EB7540)
#define RPG_CLIENT_CHATCONTACTDATA_SENDTEXTMESSAGE_OFFSET UNITYSDK_OFFSET(0x8EB7E40)
#define RPG_CLIENT_CHATCONTACTDATA_SET_HISTORYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x8EB8290)
#define RPG_CLIENT_CHATCONTACTDATA_SET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x8EB81D0)
#define RPG_CLIENT_CHATCONTACTDATA_SET_ISALLHISTORYINLOCAL_OFFSET UNITYSDK_OFFSET(0x8EB82B0)
#define RPG_CLIENT_CHATCONTACTDATA_SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x8EB76D0)
#define RPG_CLIENT_CHATCONTACTDATA_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x8EB7680)
#define RPG_CLIENT_CHATCONTACTDATA__CANMERGEDIRTYHISTORY_OFFSET UNITYSDK_OFFSET(0x8EB7C30)
#define RPG_CLIENT_CHATCONTACTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB8400)
#define RPG_CLIENT_CHATCONTACTDATA__MERGEMESSAGES_OFFSET UNITYSDK_OFFSET(0x8EB7900)
#define RPG_CLIENT_CHATCONTACTDATA__REFRESHLASTMESSAGESTATUS_OFFSET UNITYSDK_OFFSET(0x8EB7CF0)
#define RPG_CLIENT_CHATCONTACTDATA__UPDATELASTMESSAGESTATUS_OFFSET UNITYSDK_OFFSET(0x8EB7490)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactData_TypeDefinitionIndex = 50168;

	class ChatContactData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* _DirtyHistoryMessages; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* _HistoryMessages; // 0x18
		::RPG::Client::ContactIdentity* _Identity_k__BackingField; // 0x20
		::System::UInt32 _SyncedTimeStamp; // 0x28
		::System::Boolean _HistoryInitialized_k__BackingField; // 0x2C
		::System::Boolean _IsAllHistoryInLocal_k__BackingField; // 0x2D
		::System::UInt32 _SyncedHistoryPage; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void AppendMessage(::RPG::Client::ChatMessageData* messageData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_APPENDMESSAGE_OFFSET))(this, messageData);
		}

		::System::Void RemoveMessage(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_REMOVEMESSAGE_OFFSET))(this, index);
		}

		::System::Void ClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_CLEARMESSAGES_OFFSET))(this);
		}

		::System::Void SyncTime(::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SYNCTIME_OFFSET))(this, timeStamp);
		}

		::System::Void SyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* messages, ::System::UInt32 page)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SYNCHISTORY_OFFSET))(this, messages, page);
		}

		::System::Void MarkHistoryDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_MARKHISTORYDIRTY_OFFSET))(this);
		}

		::System::Void SendTextMessage(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SENDTEXTMESSAGE_OFFSET))(this, text);
		}

		::System::Boolean IsSameContact(::System::UInt32 id, ::RPG::Client::ContactRole role)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::ContactRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_OFFSET))(this, id, role);
		}

		::System::Boolean IsSameContact_1(::RPG::Client::ChatContactData* contactData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatContactData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_ISSAMECONTACT_1_OFFSET))(this, contactData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* GetHistoryMessage()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GETHISTORYMESSAGE_OFFSET))(this);
		}

		::System::Void _UpdateLastMessageStatus(::RPG::Client::ChatMessageData* messageData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__UPDATELASTMESSAGESTATUS_OFFSET))(this, messageData);
		}

		::System::Void _RefreshLastMessageStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__REFRESHLASTMESSAGESTATUS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* _MergeMessages(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* baseMessages, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* toAddMessages)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__MERGEMESSAGES_OFFSET))(this, baseMessages, toAddMessages);
		}

		::System::Boolean _CanMergeDirtyHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA__CANMERGEDIRTYHISTORY_OFFSET))(this);
		}

		::RPG::Client::ContactIdentity* get_Identity()
		{
			return ((::RPG::Client::ContactIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_IDENTITY_OFFSET))(this);
		}

		::System::Void set_Identity(::RPG::Client::ContactIdentity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ContactIdentity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SET_IDENTITY_OFFSET))(this, value);
		}

		::System::Boolean get_IsPam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISPAM_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_HistoryInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_HISTORYINITIALIZED_OFFSET))(this);
		}

		::System::Void set_HistoryInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SET_HISTORYINITIALIZED_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllHistoryInLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_ISALLHISTORYINLOCAL_OFFSET))(this);
		}

		::System::Void set_IsAllHistoryInLocal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_SET_ISALLHISTORYINLOCAL_OFFSET))(this, value);
		}

		::RPG::Client::ChatMessageData* get_EarliestMessage()
		{
			return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_EARLIESTMESSAGE_OFFSET))(this);
		}

		::RPG::Client::ChatMessageData* get_LatestMessage()
		{
			return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_LATESTMESSAGE_OFFSET))(this);
		}

		::System::UInt32 get_TimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTDATA_GET_TIMESTAMP_OFFSET))(this);
		}
	};
}
