#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MuseumCollectionItemStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumSkillData; }
namespace RPG::GameCore { class EventMuseumItemConfigRow; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class MuseumItemRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x98E31E0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x98E35E0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x98E3600)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_EVIDENCEINFOTEXTID_OFFSET UNITYSDK_OFFSET(0x98E3640)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x98E3620)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_ITEMROW_OFFSET UNITYSDK_OFFSET(0x98E34D0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x98E3490)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MISSIONSTARTSTRING_OFFSET UNITYSDK_OFFSET(0x98E34B0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MUSEUMITEMROW_OFFSET UNITYSDK_OFFSET(0x98E0380)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_SKILLS_OFFSET UNITYSDK_OFFSET(0x98E36C0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x98E36A0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_STORYDESC_OFFSET UNITYSDK_OFFSET(0x98E3670)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x98E3630)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x98E34A0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_MISSIONSTARTSTRING_OFFSET UNITYSDK_OFFSET(0x98E34C0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_SKILLS_OFFSET UNITYSDK_OFFSET(0x98E36D0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x98E36B0)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA_UPDATEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x98E3410)
#define RPG_CLIENT_MUSEUMEXHIBITITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98E31A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumExhibitItemData_TypeDefinitionIndex = 52816;

	class MuseumExhibitItemData : public ::System::Object
	{
	public:
		::System::String* _MissionStartString_k__BackingField; // 0x10
		::RPG::GameCore::MuseumItemRow* _MuseumItemRow; // 0x18
		::RPG::GameCore::ItemRow* _ItemRow; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MuseumSkillData*>* _Skills_k__BackingField; // 0x28
		::System::Boolean TakenCollectReward; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x34
		::RPG::Client::MuseumCollectionItemStatus _Status_k__BackingField; // 0x38
		::System::UInt32 _MissionID_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MuseumExhibitItemData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::MuseumExhibitItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_CREATE_OFFSET))(id);
		}

		::System::Void UpdateEventData(::RPG::GameCore::EventMuseumItemConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventMuseumItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_UPDATEEVENTDATA_OFFSET))(this, row);
		}

		::System::UInt32 get_MissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MISSIONID_OFFSET))(this);
		}

		::System::Void set_MissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_MISSIONID_OFFSET))(this, value);
		}

		::System::String* get_MissionStartString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MISSIONSTARTSTRING_OFFSET))(this);
		}

		::System::Void set_MissionStartString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_MISSIONSTARTSTRING_OFFSET))(this, value);
		}

		::RPG::GameCore::ItemRow* get_ItemRow()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_ITEMROW_OFFSET))(this);
		}

		::RPG::GameCore::MuseumItemRow* get_MuseumItemRow()
		{
			return ((::RPG::GameCore::MuseumItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_MUSEUMITEMROW_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_AREAID_OFFSET))(this);
		}

		::System::UInt32 get_DisplayOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_DISPLAYORDER_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_EvidenceInfoTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_EVIDENCEINFOTEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_STORYDESC_OFFSET))(this);
		}

		::RPG::Client::MuseumCollectionItemStatus get_Status()
		{
			return ((::RPG::Client::MuseumCollectionItemStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::MuseumCollectionItemStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumCollectionItemStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumSkillData*>* get_Skills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_GET_SKILLS_OFFSET))(this);
		}

		::System::Void set_Skills(::System::Collections::Generic::List_1<::RPG::Client::MuseumSkillData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MuseumSkillData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMEXHIBITITEMDATA_SET_SKILLS_OFFSET))(this, value);
		}
	};
}
