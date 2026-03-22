#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TalkHistoryType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TALKHISTORYDATA_CREATEASIDE_OFFSET UNITYSDK_OFFSET(0xA025880)
#define RPG_CLIENT_TALKHISTORYDATA_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xA0259E0)
#define RPG_CLIENT_TALKHISTORYDATA_CREATEOPTION_OFFSET UNITYSDK_OFFSET(0xA025790)
#define RPG_CLIENT_TALKHISTORYDATA_CREATEREAD_OFFSET UNITYSDK_OFFSET(0xA025BC0)
#define RPG_CLIENT_TALKHISTORYDATA_CREATESIMPLE_1_OFFSET UNITYSDK_OFFSET(0xA025710)
#define RPG_CLIENT_TALKHISTORYDATA_CREATESIMPLE_OFFSET UNITYSDK_OFFSET(0xA025510)
#define RPG_CLIENT_TALKHISTORYDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xA025DB0)
#define RPG_CLIENT_TALKHISTORYDATA_GET_EXTRAID_OFFSET UNITYSDK_OFFSET(0xA025DD0)
#define RPG_CLIENT_TALKHISTORYDATA_GET_HASEXTRA_OFFSET UNITYSDK_OFFSET(0xA025E90)
#define RPG_CLIENT_TALKHISTORYDATA_GET_HASVOICE_OFFSET UNITYSDK_OFFSET(0xA025E80)
#define RPG_CLIENT_TALKHISTORYDATA_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0xA025E10)
#define RPG_CLIENT_TALKHISTORYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA025D90)
#define RPG_CLIENT_TALKHISTORYDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA025D70)
#define RPG_CLIENT_TALKHISTORYDATA_GET_VOICEID_OFFSET UNITYSDK_OFFSET(0xA025DF0)
#define RPG_CLIENT_TALKHISTORYDATA_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xA025DC0)
#define RPG_CLIENT_TALKHISTORYDATA_SET_EXTRAID_OFFSET UNITYSDK_OFFSET(0xA025DE0)
#define RPG_CLIENT_TALKHISTORYDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA025DA0)
#define RPG_CLIENT_TALKHISTORYDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA025D80)
#define RPG_CLIENT_TALKHISTORYDATA_SET_VOICEID_OFFSET UNITYSDK_OFFSET(0xA025E00)
#define RPG_CLIENT_TALKHISTORYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA025EA0)
#define RPG_CLIENT_TALKHISTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA0256D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkHistoryData_TypeDefinitionIndex = 53972;

	class TalkHistoryData : public ::System::Object
	{
	public:
		static ::RPG::Client::TalkHistoryData** StaticGet_Empty()
		{
			return (::RPG::Client::TalkHistoryData**)Il2CppClass::FromTypeDefinitionIndex(TalkHistoryData_TypeDefinitionIndex)->GetStaticField(0x235C0);
		}
		static ::RPG::Client::TextID* StaticGet__PlayerName()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(TalkHistoryData_TypeDefinitionIndex)->GetStaticField(0x72D0);
		}
		::System::UInt32 _ExtraID_k__BackingField; // 0x10
		::RPG::Client::TalkHistoryType _Type_k__BackingField; // 0x14
		::System::UInt32 _VoiceID_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::RPG::Client::TextID _Content_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::TalkHistoryData* CreateSimple(::System::UInt32 talkSentenceID)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATESIMPLE_OFFSET))(talkSentenceID);
		}

		static ::RPG::Client::TalkHistoryData* CreateSimple_1(::System::UInt32 talkSentenceID, ::System::UInt32 voiceID)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATESIMPLE_1_OFFSET))(talkSentenceID, voiceID);
		}

		static ::RPG::Client::TalkHistoryData* CreateOption(::RPG::Client::TextID content)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATEOPTION_OFFSET))(content);
		}

		static ::RPG::Client::TalkHistoryData* CreateAside(::System::UInt32 talkSentenceID)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATEASIDE_OFFSET))(talkSentenceID);
		}

		static ::RPG::Client::TalkHistoryData* CreateItem(::System::UInt32 itemID)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATEITEM_OFFSET))(itemID);
		}

		static ::RPG::Client::TalkHistoryData* CreateRead(::System::UInt32 bookID)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATEREAD_OFFSET))(bookID);
		}

		::RPG::Client::TalkHistoryType get_Type()
		{
			return ((::RPG::Client::TalkHistoryType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::TalkHistoryType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkHistoryType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_SET_TYPE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_SET_CONTENT_OFFSET))(this, value);
		}

		::System::UInt32 get_ExtraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_EXTRAID_OFFSET))(this);
		}

		::System::Void set_ExtraID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_SET_EXTRAID_OFFSET))(this, value);
		}

		::System::UInt32 get_VoiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_VOICEID_OFFSET))(this);
		}

		::System::Void set_VoiceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_SET_VOICEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Boolean get_HasVoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_HASVOICE_OFFSET))(this);
		}

		::System::Boolean get_HasExtra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_HASEXTRA_OFFSET))(this);
		}
	};
}
