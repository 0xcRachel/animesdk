#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/ContactRole.h"

class Class_1_803E8F9F8C8CEA76;
namespace RPG::Client { class ChatContactData; }
namespace RPG::Client { class ChatContactPam; }
namespace RPG::Client { class ChatReportReason; }
namespace RPG::Client { class PamChatData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATMODULE_CLEARHISTORY_OFFSET UNITYSDK_OFFSET(0x8EBEFA0)
#define RPG_CLIENT_CHATMODULE_DATAPREPARED_OFFSET UNITYSDK_OFFSET(0x8EBEDE0)
#define RPG_CLIENT_CHATMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EBCE20)
#define RPG_CLIENT_CHATMODULE_GETALLCONTACTS_OFFSET UNITYSDK_OFFSET(0x8EBD0A0)
#define RPG_CLIENT_CHATMODULE_GETFRIENDREPORTREASONS_OFFSET UNITYSDK_OFFSET(0x8EBF230)
#define RPG_CLIENT_CHATMODULE_GETPAMCONTACT_OFFSET UNITYSDK_OFFSET(0x8EBD060)
#define RPG_CLIENT_CHATMODULE_GETUNREADCONTACTIDS_OFFSET UNITYSDK_OFFSET(0x8EBE8F0)
#define RPG_CLIENT_CHATMODULE_GET_EMOJIMAXMARKEDCOUNT_OFFSET UNITYSDK_OFFSET(0x8EBC290)
#define RPG_CLIENT_CHATMODULE_GET_ENABLECHAT_OFFSET UNITYSDK_OFFSET(0x8EBED40)
#define RPG_CLIENT_CHATMODULE_GET_INITHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x8EC23E0)
#define RPG_CLIENT_CHATMODULE_GET_ISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0x8EC2460)
#define RPG_CLIENT_CHATMODULE_GET_ISDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0x8EC2440)
#define RPG_CLIENT_CHATMODULE_GET_MARKEDEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x8EBC9D0)
#define RPG_CLIENT_CHATMODULE_GET_MAXHISTORYPAGENUM_OFFSET UNITYSDK_OFFSET(0x8EB78A0)
#define RPG_CLIENT_CHATMODULE_GET_PAGEHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x8EC2400)
#define RPG_CLIENT_CHATMODULE_GET_PAMCHAT_OFFSET UNITYSDK_OFFSET(0x8EC2480)
#define RPG_CLIENT_CHATMODULE_GET_TOTALHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x8EC2420)
#define RPG_CLIENT_CHATMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8EBC9F0)
#define RPG_CLIENT_CHATMODULE_ISEMOJIMARKED_OFFSET UNITYSDK_OFFSET(0x8EBC430)
#define RPG_CLIENT_CHATMODULE_MARKCONTACTREAD_OFFSET UNITYSDK_OFFSET(0x8EBE6E0)
#define RPG_CLIENT_CHATMODULE_MARKEMOJI_OFFSET UNITYSDK_OFFSET(0x8EBC150)
#define RPG_CLIENT_CHATMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8EC1E70)
#define RPG_CLIENT_CHATMODULE_PREPARECONTACTPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x8EBD380)
#define RPG_CLIENT_CHATMODULE_REFRESHEMOJIDATA_OFFSET UNITYSDK_OFFSET(0x8EBC090)
#define RPG_CLIENT_CHATMODULE_REQUESTPAMCHATINFO_OFFSET UNITYSDK_OFFSET(0x8EBF590)
#define RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_1_OFFSET UNITYSDK_OFFSET(0x8EBDB10)
#define RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0x8EBDA20)
#define RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_1_OFFSET UNITYSDK_OFFSET(0x8EBE5A0)
#define RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0x8EBE400)
#define RPG_CLIENT_CHATMODULE_SENDINVITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x8EBD890)
#define RPG_CLIENT_CHATMODULE_SENDPAMCHATFEEDBACK_OFFSET UNITYSDK_OFFSET(0x8EBF410)
#define RPG_CLIENT_CHATMODULE_SENDPLANETFESEXCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x8EBD970)
#define RPG_CLIENT_CHATMODULE_SENDUPDATEAIPAMSETTINGSCSREQ_OFFSET UNITYSDK_OFFSET(0x8EBF4B0)
#define RPG_CLIENT_CHATMODULE_SETDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0x8EBF170)
#define RPG_CLIENT_CHATMODULE_SETISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0x8EBF1C0)
#define RPG_CLIENT_CHATMODULE_SETMARKEDEMOJI_OFFSET UNITYSDK_OFFSET(0x8EBC3A0)
#define RPG_CLIENT_CHATMODULE_SET_INITHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x8EC23F0)
#define RPG_CLIENT_CHATMODULE_SET_ISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0x8EC2470)
#define RPG_CLIENT_CHATMODULE_SET_ISDISABLEACTIVITYINVITE_OFFSET UNITYSDK_OFFSET(0x8EC2450)
#define RPG_CLIENT_CHATMODULE_SET_MARKEDEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x8EBC9E0)
#define RPG_CLIENT_CHATMODULE_SET_PAGEHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x8EC2410)
#define RPG_CLIENT_CHATMODULE_SET_TOTALHISTORYMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x8EC2430)
#define RPG_CLIENT_CHATMODULE_SHOWCHATHUD_OFFSET UNITYSDK_OFFSET(0x8EBEB80)
#define RPG_CLIENT_CHATMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EC1CD0)
#define RPG_CLIENT_CHATMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EBF7F0)
#define RPG_CLIENT_CHATMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EC2490)
#define RPG_CLIENT_CHATMODULE__DATAPREPARED_B__28_0_OFFSET UNITYSDK_OFFSET(0x8EC25D0)
#define RPG_CLIENT_CHATMODULE__FETCHCHATCONTACTS_OFFSET UNITYSDK_OFFSET(0x8EBF710)
#define RPG_CLIENT_CHATMODULE__FINDCONTACT_OFFSET UNITYSDK_OFFSET(0x8EBE220)
#define RPG_CLIENT_CHATMODULE__GETCURRENTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8EBF650)
#define RPG_CLIENT_CHATMODULE__GETFRIENDCONTACT_OFFSET UNITYSDK_OFFSET(0x8EBDC70)
#define RPG_CLIENT_CHATMODULE__INITPAMCHAT_OFFSET UNITYSDK_OFFSET(0x8EBCC70)
#define RPG_CLIENT_CHATMODULE__ISFRIENDBANNED_OFFSET UNITYSDK_OFFSET(0x8EBD5E0)
#define RPG_CLIENT_CHATMODULE__ISPAMCHATENABLE_OFFSET UNITYSDK_OFFSET(0x8EBD590)
#define RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKCOMMENTSCRSP_OFFSET UNITYSDK_OFFSET(0x8EC1C50)
#define RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKSCRSP_OFFSET UNITYSDK_OFFSET(0x8EC0C40)
#define RPG_CLIENT_CHATMODULE__ONAIPAMSENDMSGSCRSP_OFFSET UNITYSDK_OFFSET(0x8EC06A0)
#define RPG_CLIENT_CHATMODULE__ONBATCHMARKCHATEMOJISCRSP_OFFSET UNITYSDK_OFFSET(0x8EBC680)
#define RPG_CLIENT_CHATMODULE__ONCHATHUDBUBBLEPANELSHOW_OFFSET UNITYSDK_OFFSET(0x8EC21E0)
#define RPG_CLIENT_CHATMODULE__ONFIRSTGETNEWAVATAR_OFFSET UNITYSDK_OFFSET(0x8EC2320)
#define RPG_CLIENT_CHATMODULE__ONFRIENDDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x8EC1FE0)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x8EC1950)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x8EC1B00)
#define RPG_CLIENT_CHATMODULE__ONGETAIPAMNEXTQUESTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x8EC0780)
#define RPG_CLIENT_CHATMODULE__ONGETCHATEMOJILISTSCRSP_OFFSET UNITYSDK_OFFSET(0x8EBC490)
#define RPG_CLIENT_CHATMODULE__ONGETCHATFRIENDHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x8EC10E0)
#define RPG_CLIENT_CHATMODULE__ONGETLOGINCHATINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x8EBFBC0)
#define RPG_CLIENT_CHATMODULE__ONGETPRIVATECHATHISTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x8EC0EE0)
#define RPG_CLIENT_CHATMODULE__ONMARKCHATEMOJISCRSP_OFFSET UNITYSDK_OFFSET(0x8EBC590)
#define RPG_CLIENT_CHATMODULE__ONRECVAIPAMCHATEVENTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EC01E0)
#define RPG_CLIENT_CHATMODULE__ONREVCMSGSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8EBFEB0)
#define RPG_CLIENT_CHATMODULE__ONSENDMSGSCRSP_OFFSET UNITYSDK_OFFSET(0x8EC0CF0)
#define RPG_CLIENT_CHATMODULE__ONTRIGGERAIPAMSPEAKSCRSP_OFFSET UNITYSDK_OFFSET(0x8EC0B70)
#define RPG_CLIENT_CHATMODULE__ONUPDATEAIPAMSETTINGSSCRSP_OFFSET UNITYSDK_OFFSET(0x8EC1B90)
#define RPG_CLIENT_CHATMODULE__RECORDCONTACT_OFFSET UNITYSDK_OFFSET(0x8EBDCD0)
#define RPG_CLIENT_CHATMODULE__TRIGGERPAMCHATHUDBUBBLE_OFFSET UNITYSDK_OFFSET(0x8EC2230)
#define RPG_CLIENT_CHATMODULE__TRYREMOVECONTACTPRIVATE_OFFSET UNITYSDK_OFFSET(0x8EBE460)
#define RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EC2680)
#define RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8EC25F0)
#define RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8EC2750)
#define RPG_CLIENT_CHATMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EC26F0)
#define RPG_CLIENT_CHATMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EC2690)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatModule_TypeDefinitionIndex = 50177;

	class ChatModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _UnlockID = 0xCE4; // 0x0
		::Class_1_803E8F9F8C8CEA76* _PamChatGreetingService; // 0x10
		::RPG::Client::PamChatData* _PamChat_k__BackingField; // 0x18
		::RPG::Client::ChatContactPam* _PamContact; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _UnreadContactIDs; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ChatContactData*>* _FriendContacts; // 0x30
		::RPG::Client::Promises::Promise* _DataPrepared; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _MarkedEmojiIDs_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ChatContactData*>* _ToDeleteFriendContacts; // 0x48
		::System::UInt32 _InitHistoryMessageCount_k__BackingField; // 0x50
		::System::UInt32 _EmojiMaxMarkedCount; // 0x54
		::System::UInt32 _PageHistoryMessageCount_k__BackingField; // 0x58
		::System::UInt32 _TotalHistoryMessageCount_k__BackingField; // 0x5C
		::System::Boolean _IsDisableActivityInvite_k__BackingField; // 0x60
		::System::Boolean _IsBanned; // 0x61
		::System::Boolean _IsActivityInviting_k__BackingField; // 0x62
		::System::Boolean _IsDataPrepared; // 0x63

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__CTOR_OFFSET))(this);
		}

		::System::Void RefreshEmojiData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_REFRESHEMOJIDATA_OFFSET))(this);
		}

		::System::Void MarkEmoji(::System::UInt32 emojiID, ::System::Boolean isMarked)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_MARKEMOJI_OFFSET))(this, emojiID, isMarked);
		}

		::System::Void SetMarkedEmoji(::System::Collections::Generic::List_1<::System::UInt32>* emojiIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SETMARKEDEMOJI_OFFSET))(this, emojiIDs);
		}

		::System::Boolean IsEmojiMarked(::System::UInt32 emojiID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_ISEMOJIMARKED_OFFSET))(this, emojiID);
		}

		::System::Void _OnGetChatEmojiListScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETCHATEMOJILISTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMarkChatEmojiScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONMARKCHATEMOJISCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnBatchMarkChatEmojiScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONBATCHMARKCHATEMOJISCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MarkedEmojiIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_MARKEDEMOJIIDS_OFFSET))(this);
		}

		::System::Void set_MarkedEmojiIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_MARKEDEMOJIIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_EmojiMaxMarkedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_EMOJIMAXMARKEDCOUNT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChatContactData* GetPamContact()
		{
			return ((::RPG::Client::ChatContactData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETPAMCONTACT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatContactData*>* GetAllContacts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatContactData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETALLCONTACTS_OFFSET))(this);
		}

		::System::Void PrepareContactPlayerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_PREPARECONTACTPLAYERDATA_OFFSET))(this);
		}

		::System::Void SendInviteMessage(::System::UInt32 contactID, ::Enum_3_F80BFD5B986D5503_4 mode, ::System::UInt64 lobbyID, ::System::UInt32 configID, ::System::Collections::Generic::List_1<::System::UInt32>* gameParamList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_F80BFD5B986D5503_4, ::System::UInt64, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDINVITEMESSAGE_OFFSET))(this, contactID, mode, lobbyID, configID, gameParamList);
		}

		::System::Void SendPlanetfesExchangeMessage(::System::UInt32 contactID, ::System::UInt64 itemID, ::Enum_3_0A3761FE34514D6C_1 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::Enum_3_0A3761FE34514D6C_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDPLANETFESEXCHANGEMESSAGE_OFFSET))(this, contactID, itemID, type);
		}

		::System::Boolean SafeAddContactPrivate(::System::UInt32 uid, ::System::UInt32 lastChatTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_OFFSET))(this, uid, lastChatTime);
		}

		::System::Boolean SafeAddContactPrivate_1(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEADDCONTACTPRIVATE_1_OFFSET))(this, uid);
		}

		::System::Void SafeRemoveContactPrivate(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_OFFSET))(this, uid);
		}

		::System::Void SafeRemoveContactPrivate_1(::System::Collections::Generic::List_1<::System::UInt32>* uids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SAFEREMOVECONTACTPRIVATE_1_OFFSET))(this, uids);
		}

		::System::Void MarkContactRead(::System::UInt32 contactID, ::System::Boolean hasRead)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_MARKCONTACTREAD_OFFSET))(this, contactID, hasRead);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnreadContactIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETUNREADCONTACTIDS_OFFSET))(this);
		}

		::System::Boolean ShowChatHUD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SHOWCHATHUD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DataPrepared()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_DATAPREPARED_OFFSET))(this);
		}

		::System::Void ClearHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_CLEARHISTORY_OFFSET))(this);
		}

		::System::Void SetDisableActivityInvite(::System::Boolean isDisable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SETDISABLEACTIVITYINVITE_OFFSET))(this, isDisable);
		}

		::System::Void SetIsActivityInviting(::System::Boolean isInviting)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SETISACTIVITYINVITING_OFFSET))(this, isInviting);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>* GetFriendReportReasons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GETFRIENDREPORTREASONS_OFFSET))(this);
		}

		::System::Void SendPamChatFeedback(::System::UInt32 id, ::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDPAMCHATFEEDBACK_OFFSET))(this, id, desc);
		}

		::System::Void SendUpdateAiPamSettingsCsReq(::System::Boolean isForbidDataForTraining)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SENDUPDATEAIPAMSETTINGSCSREQ_OFFSET))(this, isForbidDataForTraining);
		}

		::System::Void RequestPamChatInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_REQUESTPAMCHATINFO_OFFSET))(this);
		}

		::System::Void _InitPamChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__INITPAMCHAT_OFFSET))(this);
		}

		::System::Void _TryRemoveContactPrivate(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__TRYREMOVECONTACTPRIVATE_OFFSET))(this, uid);
		}

		::RPG::Client::ChatContactData* _GetFriendContact(::System::UInt32 contactID)
		{
			return ((::RPG::Client::ChatContactData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__GETFRIENDCONTACT_OFFSET))(this, contactID);
		}

		::RPG::Client::ChatContactData* _FindContact(::System::Collections::Generic::List_1<::RPG::Client::ChatContactData*>* contacts, ::System::UInt32 contactID, ::RPG::Client::ContactRole type)
		{
			return ((::RPG::Client::ChatContactData*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatContactData*>*, ::System::UInt32, ::RPG::Client::ContactRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__FINDCONTACT_OFFSET))(this, contacts, contactID, type);
		}

		::System::Void _RecordContact(::RPG::Client::ChatContactData* contact, ::System::Boolean recorded)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatContactData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__RECORDCONTACT_OFFSET))(this, contact, recorded);
		}

		::System::Void _FetchChatContacts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__FETCHCHATCONTACTS_OFFSET))(this);
		}

		::System::UInt32 _GetCurrentTimestamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__GETCURRENTTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean _IsFriendBanned(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ISFRIENDBANNED_OFFSET))(this, id);
		}

		::System::Boolean _IsPamChatEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ISPAMCHATENABLE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetLoginChatInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETLOGINCHATINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnRevcMsgScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONREVCMSGSCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnRecvAiPamChatEventScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONRECVAIPAMCHATEVENTSCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnAiPamSendMsgScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMSENDMSGSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetAiPamNextQuestionScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETAIPAMNEXTQUESTIONSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTriggerAiPamSpeakScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONTRIGGERAIPAMSPEAKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAiPamResponseFeedbackScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSendMsgScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONSENDMSGSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetPrivateChatHistoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETPRIVATECHATHISTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetChatFriendHistoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETCHATFRIENDHISTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetAiPamChatHistoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATHISTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetAiPamChatInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONGETAIPAMCHATINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnUpdateAiPamSettingsScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONUPDATEAIPAMSETTINGSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAiPamResponseFeedbackCommentScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONAIPAMRESPONSEFEEDBACKCOMMENTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnFriendDataUpdated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONFRIENDDATAUPDATED_OFFSET))(this, arg);
		}

		::System::Void _OnChatHudBubblePanelShow(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONCHATHUDBUBBLEPANELSHOW_OFFSET))(this, arg);
		}

		::System::Void _TriggerPamChatHudBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__TRIGGERPAMCHATHUDBUBBLE_OFFSET))(this);
		}

		::System::Void _OnFirstGetNewAvatar(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__ONFIRSTGETNEWAVATAR_OFFSET))(this, arg);
		}

		::System::Boolean get_EnableChat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_ENABLECHAT_OFFSET))(this);
		}

		::System::UInt32 get_InitHistoryMessageCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_INITHISTORYMESSAGECOUNT_OFFSET))(this);
		}

		::System::Void set_InitHistoryMessageCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_INITHISTORYMESSAGECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_PageHistoryMessageCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_PAGEHISTORYMESSAGECOUNT_OFFSET))(this);
		}

		::System::Void set_PageHistoryMessageCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_PAGEHISTORYMESSAGECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalHistoryMessageCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_TOTALHISTORYMESSAGECOUNT_OFFSET))(this);
		}

		::System::Void set_TotalHistoryMessageCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_TOTALHISTORYMESSAGECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxHistoryPageNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_MAXHISTORYPAGENUM_OFFSET))(this);
		}

		::System::Boolean get_IsDisableActivityInvite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_ISDISABLEACTIVITYINVITE_OFFSET))(this);
		}

		::System::Void set_IsDisableActivityInvite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_ISDISABLEACTIVITYINVITE_OFFSET))(this, value);
		}

		::System::Boolean get_IsActivityInviting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_ISACTIVITYINVITING_OFFSET))(this);
		}

		::System::Void set_IsActivityInviting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_SET_ISACTIVITYINVITING_OFFSET))(this, value);
		}

		::RPG::Client::PamChatData* get_PamChat()
		{
			return ((::RPG::Client::PamChatData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE_GET_PAMCHAT_OFFSET))(this);
		}

		::System::Void _DataPrepared_b__28_0(::System::Collections::Generic::List_1<::System::Boolean>* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE__DATAPREPARED_B__28_0_OFFSET))(this, _);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
