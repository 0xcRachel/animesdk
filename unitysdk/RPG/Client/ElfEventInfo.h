#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfSelectEventData; }
namespace RPG::Client { class ElfSelectEventMessageContactsData; }
namespace RPG::Client { class ElfSelectEventMessageData; }
namespace RPG::Client { class ElfSelectEventMessageSequence; }
namespace RPG::Client { class ElfSelectEventOptionEffectData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ELFEVENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95A9BE0)
#define RPG_CLIENT_ELFEVENTINFO_GETCONTACTSDATA_OFFSET UNITYSDK_OFFSET(0x95A9EA0)
#define RPG_CLIENT_ELFEVENTINFO_GETMESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x95A9DC0)
#define RPG_CLIENT_ELFEVENTINFO_GETOPTIONEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x95A9F80)
#define RPG_CLIENT_ELFEVENTINFO_GETSELECTEVENTDATA_OFFSET UNITYSDK_OFFSET(0x95AA060)
#define RPG_CLIENT_ELFEVENTINFO_GETSELECTEVENTMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x95AA140)
#define RPG_CLIENT_ELFEVENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x95A9280)
#define RPG_CLIENT_ELFEVENTINFO__ASSERTLIMITMESSAGE_OFFSET UNITYSDK_OFFSET(0x95A91A0)
#define RPG_CLIENT_ELFEVENTINFO__ASSERTSAMESPECIALCUSTOMERID_OFFSET UNITYSDK_OFFSET(0x95A90A0)
#define RPG_CLIENT_ELFEVENTINFO__BUILDSELECTEVENTMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x95AA190)
#define RPG_CLIENT_ELFEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x95AA570)
#define RPG_CLIENT_ELFEVENTINFO__INITCONTACTDATA_OFFSET UNITYSDK_OFFSET(0x95A92E0)
#define RPG_CLIENT_ELFEVENTINFO__INITEVENTDATA_OFFSET UNITYSDK_OFFSET(0x95A99D0)
#define RPG_CLIENT_ELFEVENTINFO__INITMESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x95A9780)
#define RPG_CLIENT_ELFEVENTINFO__INITOPTIONEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x95A9530)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfEventInfo_TypeDefinitionIndex = 51713;

	class ElfEventInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfSelectEventMessageContactsData*>* _ContactsDataDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfSelectEventOptionEffectData*>* _OptionEffectDataDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfSelectEventMessageData*>* _MessageDataDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfSelectEventData*>* _EventDataDict; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _AssertSameSpecialCustomerID(::System::UInt32 id1, ::System::UInt32 id2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__ASSERTSAMESPECIALCUSTOMERID_OFFSET))(this, id1, id2);
		}

		::System::Void _AssertLimitMessage(::System::Int32 cnt, ::System::UInt32 specialCustomerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__ASSERTLIMITMESSAGE_OFFSET))(this, cnt, specialCustomerID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ElfSelectEventMessageData* GetMessageData(::System::UInt32 messageID)
		{
			return ((::RPG::Client::ElfSelectEventMessageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_GETMESSAGEDATA_OFFSET))(this, messageID);
		}

		::RPG::Client::ElfSelectEventMessageContactsData* GetContactsData(::System::UInt32 contactsID)
		{
			return ((::RPG::Client::ElfSelectEventMessageContactsData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_GETCONTACTSDATA_OFFSET))(this, contactsID);
		}

		::RPG::Client::ElfSelectEventOptionEffectData* GetOptionEffectData(::System::UInt32 optionEffectID)
		{
			return ((::RPG::Client::ElfSelectEventOptionEffectData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_GETOPTIONEFFECTDATA_OFFSET))(this, optionEffectID);
		}

		::RPG::Client::ElfSelectEventData* GetSelectEventData(::System::UInt32 eventID)
		{
			return ((::RPG::Client::ElfSelectEventData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_GETSELECTEVENTDATA_OFFSET))(this, eventID);
		}

		::RPG::Client::ElfSelectEventMessageSequence* GetSelectEventMessageSequence(::System::UInt32 beginMessageID)
		{
			return ((::RPG::Client::ElfSelectEventMessageSequence*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_GETSELECTEVENTMESSAGESEQUENCE_OFFSET))(this, beginMessageID);
		}

		::RPG::Client::ElfSelectEventMessageSequence* _BuildSelectEventMessageSequence(::System::UInt32 beginMessageID, ::System::UInt32 specialCustomerID)
		{
			return ((::RPG::Client::ElfSelectEventMessageSequence*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__BUILDSELECTEVENTMESSAGESEQUENCE_OFFSET))(this, beginMessageID, specialCustomerID);
		}

		::System::Void _InitContactData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__INITCONTACTDATA_OFFSET))(this);
		}

		::System::Void _InitMessageData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__INITMESSAGEDATA_OFFSET))(this);
		}

		::System::Void _InitOptionEffectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__INITOPTIONEFFECTDATA_OFFSET))(this);
		}

		::System::Void _InitEventData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__INITEVENTDATA_OFFSET))(this);
		}
	};
}
